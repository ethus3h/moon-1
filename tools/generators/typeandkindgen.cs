/*
 * typeandkind.cs: Code generator for type <-> kind relations
 *
 * Contact:
 *   Moonlight List (moonlight-list@lists.ximian.com)
 *
 * Copyright 2008 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 * 
 */
using System;
using System.IO;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using Generation;
using Generation.C;

class Generator
{
	public void Generate ()
	{
		string base_dir = Environment.CurrentDirectory;
		string class_dir = Path.Combine (base_dir, "class");
		string sys_win_dir = Path.Combine (class_dir, "System.Windows");
		string moon_moonlight_dir = Path.Combine (class_dir, "Mono.Moonlight");
		
		string magic = "return Kind.";
		StringBuilder text = new StringBuilder ();
		
		text.AppendLine ("/* \n\tthis file was autogenerated. do not edit this file \n */\n");
		text.AppendLine ("using Mono;");
		text.AppendLine ("using System;");
		text.AppendLine ("using System.Reflection;");
		text.AppendLine ("using System.Collections.Generic;");
		text.AppendLine ("");
		text.AppendLine ("namespace Mono {");
		text.AppendLine ("\tpartial class Surface {");
		text.AppendLine ("\t\tprivate static void CreateNativeTypes ()");
		text.AppendLine ("\t\t{");
		text.AppendLine ("\t\t\tAssembly agclr = Helper.GetAgclr ();");
		text.AppendLine ("\t\t\tType t;");
		text.AppendLine ("\t\t\ttry {");
				
		foreach (string dir in Directory.GetDirectories (sys_win_dir)) {
			Log.WriteLine ("Checking: {0}", dir);
			string ns = Path.GetFileName (dir);
			foreach (string file in Directory.GetFiles (dir, "*.cs")) {
				string contents = File.ReadAllText (file);
				string type;
				string kind;
				int get_kind_pos = contents.IndexOf (magic);
				int end_kind_pos;
				
				if (get_kind_pos < 0)
					continue;
				
			 	end_kind_pos = contents.IndexOf (";", get_kind_pos + magic.Length);
				
				if (end_kind_pos < 0)
					throw new Exception (string.Format ("Found 'return Kind.' in {0} at pos {1}, but not any ';' after that", file, get_kind_pos));
				
				kind = contents.Substring (get_kind_pos + magic.Length, end_kind_pos - (get_kind_pos + magic.Length));
				type = Path.GetFileNameWithoutExtension (file);
				
				if (type == "PresentationFrameworkCollection")
					type = "PresentationFrameworkCollection`1";
				
				Log.WriteLine ("Found Kind.{0} in {1} which result in type: {2}.{3}", kind, file, ns, type);
				
				text.Append ("\t\t\t\tt = agclr.GetType (\"");
				text.Append (ns);
				text.Append (".");
				text.Append (type);
				text.AppendLine ("\", true); ");
				
				
				text.Append ("\t\t\t\ttypes.Add (t, new ManagedType (t, Kind.");
				text.Append (kind);
				text.AppendLine ("));");
			}
		}
		
		text.AppendLine ("\t\t\t} catch (Exception ex) {");
		text.AppendLine ("\t\t\t\tConsole.WriteLine (\"There was an error while loading native types: \" + ex.Message);");
		text.AppendLine ("\t\t\t}");
		text.AppendLine ("\t\t}");
		text.AppendLine ("\t}");
		text.AppendLine ("}");
		
	 	Log.WriteLine ("typeandkidngen done");
		
		Generation.Helper.WriteAllText (Path.Combine (Path.Combine (moon_moonlight_dir, "Mono"), "Surface.g.cs"), text.ToString ());
	}
}