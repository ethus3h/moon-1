//
// System.Net.Browser.NotFoundWebResponse
//
// Authors:
//	Moonlight List (moonlight-list@lists.ximian.com)
//
// Copyright (C) 2010 Novell, Inc (http://www.novell.com)
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#if NET_2_1

using System.IO;

namespace System.Net.Browser {

	// helper class when a WebResponse is needed (for compatibility purpose) but we cannot supply our own

	class NotFoundWebResponse : HttpWebResponseCore {

		private WebHeaderCollection headers;

		public NotFoundWebResponse ()
		{
			SetStatus (HttpStatusCode.NotFound, "NotFound");
		}

		public override long ContentLength {
			get { return -1; }
		}

		public override string ContentType {
			get { return null; }
		}

		public override WebHeaderCollection Headers {
			get {
				if (headers == null)
					headers = new WebHeaderCollection ();
				return headers;
			}
		}

		public override Uri ResponseUri {
			get { return null; }
		}


		public override void Close ()
		{
		}

		public override Stream GetResponseStream ()
		{
			return Stream.Null;
		}
	}
}

#endif

