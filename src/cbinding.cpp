/*
 * Automatically generated, do not edit this file directly
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#include "cbinding.h"

#if SL_2_0
/**
 * Application
 **/
Application *
application_new (void)
{
	return new Application ();
}
#endif


/**
 * ArcSegment
 **/
ArcSegment *
arc_segment_new (void)
{
	return new ArcSegment ();
}


#if SL_2_0
/**
 * AssemblyPart
 **/
AssemblyPart *
assembly_part_new (void)
{
	return new AssemblyPart ();
}
#endif


#if SL_2_0
/**
 * AssemblyPartCollection
 **/
AssemblyPartCollection *
assembly_part_collection_new (void)
{
	return new AssemblyPartCollection ();
}
#endif


/**
 * BeginStoryboard
 **/
BeginStoryboard *
begin_storyboard_new (void)
{
	return new BeginStoryboard ();
}


/**
 * BezierSegment
 **/
BezierSegment *
bezier_segment_new (void)
{
	return new BezierSegment ();
}


/**
 * Brush
 **/
Brush *
brush_new (void)
{
	return new Brush ();
}


/**
 * Canvas
 **/
Canvas *
canvas_new (void)
{
	return new Canvas ();
}


/**
 * Collection
 **/
int
collection_add (Collection *instance, Value *value)
{
	if (instance == NULL)
		// Need to find a property way to get the default value for the specified type and return that if instance is NULL.
		return (int) 0;
	
	return instance->Add (value);
}


void
collection_clear (Collection *instance)
{
	if (instance == NULL)
		return;
	
	instance->Clear ();
}


bool
collection_contains (Collection *instance, Value *value)
{
	if (instance == NULL)
		return false;;
	
	return instance->Contains (value);
}


int
collection_get_count (Collection *instance)
{
	if (instance == NULL)
		// Need to find a property way to get the default value for the specified type and return that if instance is NULL.
		return (int) 0;
	
	return instance->GetCount ();
}


Type::Kind
collection_get_element_type (Collection *instance)
{
	if (instance == NULL)
		return Type::INVALID;
	
	return instance->GetElementType ();
}


#if SL_2_0
Value *
collection_get_value_at_with_error (Collection *instance, int index, MoonError *error)
{
	if (instance == NULL)
		return NULL;
	
	if (error == NULL)
		g_warning ("Moonlight: Called collection_get_value_at_with_error () with error == NULL.");
	return instance->GetValueAtWithError (index, error);
}
#endif


int
collection_index_of (Collection *instance, Value *value)
{
	if (instance == NULL)
		// Need to find a property way to get the default value for the specified type and return that if instance is NULL.
		return (int) 0;
	
	return instance->IndexOf (value);
}


bool
collection_insert (Collection *instance, int index, Value *value)
{
	if (instance == NULL)
		return false;;
	
	return instance->Insert (index, value);
}


bool
collection_remove (Collection *instance, Value *value)
{
	if (instance == NULL)
		return false;;
	
	return instance->Remove (value);
}


#if SL_2_0
bool
collection_remove_at_with_error (Collection *instance, int index, MoonError *error)
{
	if (instance == NULL)
		return false;;
	
	if (error == NULL)
		g_warning ("Moonlight: Called collection_remove_at_with_error () with error == NULL.");
	return instance->RemoveAtWithError (index, error);
}
#endif


#if SL_2_0
bool
collection_set_value_at_with_error (Collection *instance, int index, Value *value, MoonError *error)
{
	if (instance == NULL)
		return false;;
	
	if (error == NULL)
		g_warning ("Moonlight: Called collection_set_value_at_with_error () with error == NULL.");
	return instance->SetValueAtWithError (index, value, error);
}
#endif


/**
 * ColorAnimation
 **/
ColorAnimation *
color_animation_new (void)
{
	return new ColorAnimation ();
}


/**
 * ColorAnimationUsingKeyFrames
 **/
ColorAnimationUsingKeyFrames *
color_animation_using_key_frames_new (void)
{
	return new ColorAnimationUsingKeyFrames ();
}


/**
 * ColorKeyFrame
 **/
ColorKeyFrame *
color_key_frame_new (void)
{
	return new ColorKeyFrame ();
}


/**
 * ColorKeyFrameCollection
 **/
ColorKeyFrameCollection *
color_key_frame_collection_new (void)
{
	return new ColorKeyFrameCollection ();
}


#if SL_2_0
/**
 * ColumnDefinition
 **/
ColumnDefinition *
column_definition_new (void)
{
	return new ColumnDefinition ();
}
#endif


#if SL_2_0
double
column_definition_get_actual_width (ColumnDefinition *instance)
{
	if (instance == NULL)
		// Need to find a property way to get the default value for the specified type and return that if instance is NULL.
		return (double) 0;
	
	return instance->GetActualWidth ();
}
#endif


#if SL_2_0
/**
 * ColumnDefinitionCollection
 **/
ColumnDefinitionCollection *
column_definition_collection_new (void)
{
	return new ColumnDefinitionCollection ();
}
#endif


#if SL_2_0
/**
 * ContentControl
 **/
ContentControl *
content_control_new (void)
{
	return new ContentControl ();
}
#endif


#if SL_2_0
/**
 * Control
 **/
Control *
control_new (void)
{
	return new Control ();
}
#endif


#if SL_2_0
/**
 * ControlTemplate
 **/
ControlTemplate *
control_template_new (void)
{
	return new ControlTemplate ();
}
#endif


#if SL_2_0
/**
 * DeepZoomImageTileSource
 **/
DeepZoomImageTileSource *
deep_zoom_image_tile_source_new (void)
{
	return new DeepZoomImageTileSource ();
}
#endif


/**
 * DependencyObject
 **/
DependencyObject *
dependency_object_find_name (DependencyObject *instance, const char *name, Type::Kind *element_kind)
{
	if (instance == NULL)
		return NULL;
	
	return instance->FindName (name, element_kind);
}


#if SL_2_0
Value *
dependency_object_get_default_value_with_error (DependencyObject *instance, Types *additional_types, DependencyProperty *property, MoonError *error)
{
	if (instance == NULL)
		return NULL;
	
	if (error == NULL)
		g_warning ("Moonlight: Called dependency_object_get_default_value_with_error () with error == NULL.");
	return instance->GetDefaultValueWithError (additional_types, property, error);
}
#endif


const char *
dependency_object_get_name (DependencyObject *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetName ();
}


Type::Kind
dependency_object_get_object_type (DependencyObject *instance)
{
	if (instance == NULL)
		return Type::INVALID;
	
	return instance->GetObjectType ();
}


#if SL_2_0
Value *
dependency_object_get_value_no_default_with_error (DependencyObject *instance, Types *additional_types, DependencyProperty *property, MoonError *error)
{
	if (instance == NULL)
		return NULL;
	
	if (error == NULL)
		g_warning ("Moonlight: Called dependency_object_get_value_no_default_with_error () with error == NULL.");
	return instance->GetValueNoDefaultWithError (additional_types, property, error);
}
#endif


#if SL_2_0
Value *
dependency_object_get_value_with_error (DependencyObject *instance, Types *additional_types, Type::Kind whatami, DependencyProperty *property, MoonError *error)
{
	if (instance == NULL)
		return NULL;
	
	if (error == NULL)
		g_warning ("Moonlight: Called dependency_object_get_value_with_error () with error == NULL.");
	return instance->GetValueWithError (additional_types, whatami, property, error);
}
#endif


void
dependency_object_set_name (DependencyObject *instance, const char *name)
{
	if (instance == NULL)
		return;
	
	instance->SetName (name);
}


void
dependency_object_set_value (DependencyObject *instance, DependencyProperty *property, Value *value)
{
	if (instance == NULL)
		return;
	
	instance->SetValue (property, value);
}


/**
 * DependencyObjectCollection
 **/
DependencyObjectCollection *
dependency_object_collection_new (void)
{
	return new DependencyObjectCollection ();
}


/**
 * DependencyProperty
 **/
DependencyProperty *
dependency_property_get_dependency_property (Type::Kind type, const char *name)
{
	return DependencyProperty::GetDependencyProperty (type, name);
}


const char *
dependency_property_get_name (DependencyProperty *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetName ();
}


Type::Kind
dependency_property_get_property_type (DependencyProperty *instance)
{
	if (instance == NULL)
		return Type::INVALID;
	
	return instance->GetPropertyType ();
}


bool
dependency_property_is_attached (DependencyProperty *instance)
{
	if (instance == NULL)
		return false;;
	
	return instance->IsAttached ();
}


bool
dependency_property_is_nullable (DependencyProperty *instance)
{
	if (instance == NULL)
		return false;;
	
	return instance->IsNullable ();
}


DependencyProperty *
dependency_property_register (Type::Kind type, const char *name, Value *default_value)
{
	return DependencyProperty::Register (type, name, default_value);
}


#if SL_2_0
DependencyProperty *
dependency_property_register_full (Types *additional_types, Type::Kind type, const char *name, Value *default_value, Type::Kind vtype, bool attached, bool read_only, bool always_change, NativePropertyChangedHandler *changed_callback)
{
	return DependencyProperty::RegisterFull (additional_types, type, name, default_value, vtype, attached, read_only, always_change, changed_callback);
}
#endif


#if SL_2_0
DependencyProperty *
dependency_property_register_managed_property (Types *additional_types, const char *name, Type::Kind property_type, Type::Kind owner_type, bool attached, NativePropertyChangedHandler *callback)
{
	return DependencyProperty::RegisterManagedProperty (additional_types, name, property_type, owner_type, attached, callback);
}
#endif


#if SL_2_0
/**
 * Deployment
 **/
Deployment *
deployment_new (void)
{
	return new Deployment ();
}
#endif


/**
 * DiscreteColorKeyFrame
 **/
DiscreteColorKeyFrame *
discrete_color_key_frame_new (void)
{
	return new DiscreteColorKeyFrame ();
}


/**
 * DiscreteDoubleKeyFrame
 **/
DiscreteDoubleKeyFrame *
discrete_double_key_frame_new (void)
{
	return new DiscreteDoubleKeyFrame ();
}


#if SL_2_0
/**
 * DiscreteObjectKeyFrame
 **/
DiscreteObjectKeyFrame *
discrete_object_key_frame_new (void)
{
	return new DiscreteObjectKeyFrame ();
}
#endif


/**
 * DiscretePointKeyFrame
 **/
DiscretePointKeyFrame *
discrete_point_key_frame_new (void)
{
	return new DiscretePointKeyFrame ();
}


/**
 * DoubleAnimation
 **/
DoubleAnimation *
double_animation_new (void)
{
	return new DoubleAnimation ();
}


/**
 * DoubleAnimationUsingKeyFrames
 **/
DoubleAnimationUsingKeyFrames *
double_animation_using_key_frames_new (void)
{
	return new DoubleAnimationUsingKeyFrames ();
}


/**
 * DoubleCollection
 **/
DoubleCollection *
double_collection_new (void)
{
	return new DoubleCollection ();
}


/**
 * DoubleKeyFrame
 **/
DoubleKeyFrame *
double_key_frame_new (void)
{
	return new DoubleKeyFrame ();
}


/**
 * DoubleKeyFrameCollection
 **/
DoubleKeyFrameCollection *
double_key_frame_collection_new (void)
{
	return new DoubleKeyFrameCollection ();
}


/**
 * Downloader
 **/
Downloader *
downloader_new (void)
{
	return new Downloader ();
}


/**
 * DrawingAttributes
 **/
DrawingAttributes *
drawing_attributes_new (void)
{
	return new DrawingAttributes ();
}


/**
 * Ellipse
 **/
Ellipse *
ellipse_new (void)
{
	return new Ellipse ();
}


/**
 * EllipseGeometry
 **/
EllipseGeometry *
ellipse_geometry_new (void)
{
	return new EllipseGeometry ();
}


/**
 * EventObject
 **/
int
event_object_add_handler (EventObject *instance, const char *event_name, EventHandler handler, gpointer data)
{
	if (instance == NULL)
		// Need to find a property way to get the default value for the specified type and return that if instance is NULL.
		return (int) 0;
	
	return instance->AddHandler (event_name, handler, data);
}


void
event_object_drain_unrefs (void)
{
	EventObject::DrainUnrefs ();
}


Surface *
event_object_get_surface (EventObject *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetSurface ();
}


const char *
event_object_get_type_name (EventObject *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetTypeName ();
}


void
event_object_ref (EventObject *instance)
{
	if (instance == NULL)
		return;
	
	instance->ref ();
}


void
event_object_remove_handler (EventObject *instance, const char *event_name, EventHandler handler, gpointer data)
{
	if (instance == NULL)
		return;
	
	instance->RemoveHandler (event_name, handler, data);
}


void
event_object_unref (EventObject *instance)
{
	if (instance == NULL)
		return;
	
	instance->unref ();
}


/**
 * EventTrigger
 **/
EventTrigger *
event_trigger_new (void)
{
	return new EventTrigger ();
}


/**
 * FrameworkElement
 **/
FrameworkElement *
framework_element_new (void)
{
	return new FrameworkElement ();
}


#if SL_2_0
/**
 * FrameworkTemplate
 **/
FrameworkTemplate *
framework_template_new (void)
{
	return new FrameworkTemplate ();
}
#endif


/**
 * GeneralTransform
 **/
GeneralTransform *
general_transform_new (void)
{
	return new GeneralTransform ();
}


/**
 * Geometry
 **/
Geometry *
geometry_new (void)
{
	return new Geometry ();
}


/**
 * GeometryCollection
 **/
GeometryCollection *
geometry_collection_new (void)
{
	return new GeometryCollection ();
}


/**
 * GeometryGroup
 **/
GeometryGroup *
geometry_group_new (void)
{
	return new GeometryGroup ();
}


/**
 * Glyphs
 **/
Glyphs *
glyphs_new (void)
{
	return new Glyphs ();
}


/**
 * GradientBrush
 **/
GradientBrush *
gradient_brush_new (void)
{
	return new GradientBrush ();
}


/**
 * GradientStop
 **/
GradientStop *
gradient_stop_new (void)
{
	return new GradientStop ();
}


/**
 * GradientStopCollection
 **/
GradientStopCollection *
gradient_stop_collection_new (void)
{
	return new GradientStopCollection ();
}


#if SL_2_0
/**
 * Grid
 **/
Grid *
grid_new (void)
{
	return new Grid ();
}
#endif


/**
 * Image
 **/
Image *
image_new (void)
{
	return new Image ();
}


#if SL_2_0
void
image_set_stream_source (Image *instance, ManagedStreamCallbacks *stream)
{
	if (instance == NULL)
		return;
	
	instance->SetStreamSource (stream);
}
#endif


/**
 * ImageBrush
 **/
ImageBrush *
image_brush_new (void)
{
	return new ImageBrush ();
}


/**
 * InkPresenter
 **/
InkPresenter *
ink_presenter_new (void)
{
	return new InkPresenter ();
}


/**
 * Inline
 **/
Inline *
inline_new (void)
{
	return new Inline ();
}


/**
 * InlineCollection
 **/
InlineCollection *
inline_collection_new (void)
{
	return new InlineCollection ();
}


/**
 * KeyboardEventArgs
 **/
bool
keyboard_event_args_get_handled (KeyboardEventArgs *instance)
{
	if (instance == NULL)
		return false;;
	
	return instance->GetHandled ();
}


void
keyboard_event_args_set_handled (KeyboardEventArgs *instance, bool handled)
{
	if (instance == NULL)
		return;
	
	instance->SetHandled (handled);
}


/**
 * KeyFrameCollection
 **/
KeyFrameCollection *
key_frame_collection_new (void)
{
	return new KeyFrameCollection ();
}


/**
 * KeySpline
 **/
KeySpline *
key_spline_new (void)
{
	return new KeySpline ();
}


/**
 * Line
 **/
Line *
line_new (void)
{
	return new Line ();
}


/**
 * LinearColorKeyFrame
 **/
LinearColorKeyFrame *
linear_color_key_frame_new (void)
{
	return new LinearColorKeyFrame ();
}


/**
 * LinearDoubleKeyFrame
 **/
LinearDoubleKeyFrame *
linear_double_key_frame_new (void)
{
	return new LinearDoubleKeyFrame ();
}


/**
 * LinearGradientBrush
 **/
LinearGradientBrush *
linear_gradient_brush_new (void)
{
	return new LinearGradientBrush ();
}


/**
 * LinearPointKeyFrame
 **/
LinearPointKeyFrame *
linear_point_key_frame_new (void)
{
	return new LinearPointKeyFrame ();
}


/**
 * LineBreak
 **/
LineBreak *
line_break_new (void)
{
	return new LineBreak ();
}


/**
 * LineGeometry
 **/
LineGeometry *
line_geometry_new (void)
{
	return new LineGeometry ();
}


/**
 * LineSegment
 **/
LineSegment *
line_segment_new (void)
{
	return new LineSegment ();
}


/**
 * Matrix
 **/
Matrix *
matrix_new (void)
{
	return new Matrix ();
}


/**
 * MatrixTransform
 **/
MatrixTransform *
matrix_transform_new (void)
{
	return new MatrixTransform ();
}


/**
 * MediaAttribute
 **/
MediaAttribute *
media_attribute_new (void)
{
	return new MediaAttribute ();
}


/**
 * MediaAttributeCollection
 **/
MediaAttribute *
media_attribute_collection_get_item_by_name (MediaAttributeCollection *instance, const char *name)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetItemByName (name);
}


MediaAttributeCollection *
media_attribute_collection_new (void)
{
	return new MediaAttributeCollection ();
}


/**
 * MediaBase
 **/
MediaBase *
media_base_new (void)
{
	return new MediaBase ();
}


/**
 * MediaElement
 **/
MediaElement *
media_element_new (void)
{
	return new MediaElement ();
}


void
media_element_pause (MediaElement *instance)
{
	if (instance == NULL)
		return;
	
	instance->Pause ();
}


void
media_element_play (MediaElement *instance)
{
	if (instance == NULL)
		return;
	
	instance->Play ();
}


#if SL_2_0
void
media_element_set_stream_source (MediaElement *instance, ManagedStreamCallbacks *stream)
{
	if (instance == NULL)
		return;
	
	instance->SetStreamSource (stream);
}
#endif


void
media_element_stop (MediaElement *instance)
{
	if (instance == NULL)
		return;
	
	instance->Stop ();
}


/**
 * MouseEventArgs
 **/
bool
mouse_event_args_get_handled (MouseEventArgs *instance)
{
	if (instance == NULL)
		return false;;
	
	return instance->GetHandled ();
}


void
mouse_event_args_get_position (MouseEventArgs *instance, UIElement *relative_to, double *x, double *y)
{
	if (instance == NULL)
		return;
	
	instance->GetPosition (relative_to, x, y);
}


StylusPointCollection *
mouse_event_args_get_stylus_points (MouseEventArgs *instance, UIElement *ink_presenter)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetStylusPoints (ink_presenter);
}


MouseEventArgs *
mouse_event_args_new (void)
{
	return new MouseEventArgs ();
}


void
mouse_event_args_set_handled (MouseEventArgs *instance, bool handled)
{
	if (instance == NULL)
		return;
	
	instance->SetHandled (handled);
}


#if SL_2_0
/**
 * MultiScaleTileSource
 **/
MultiScaleTileSource *
multi_scale_tile_source_new (void)
{
	return new MultiScaleTileSource ();
}
#endif


#if SL_2_0
/**
 * ObjectAnimationUsingKeyFrames
 **/
ObjectAnimationUsingKeyFrames *
object_animation_using_key_frames_new (void)
{
	return new ObjectAnimationUsingKeyFrames ();
}
#endif


#if SL_2_0
/**
 * ObjectKeyFrame
 **/
ObjectKeyFrame *
object_key_frame_new (void)
{
	return new ObjectKeyFrame ();
}
#endif


#if SL_2_0
/**
 * ObjectKeyFrameCollection
 **/
ObjectKeyFrameCollection *
object_key_frame_collection_new (void)
{
	return new ObjectKeyFrameCollection ();
}
#endif


/**
 * Panel
 **/
Panel *
panel_new (void)
{
	return new Panel ();
}


/**
 * ParallelTimeline
 **/
ParallelTimeline *
parallel_timeline_new (void)
{
	return new ParallelTimeline ();
}


/**
 * Path
 **/
Path *
path_new (void)
{
	return new Path ();
}


/**
 * PathFigure
 **/
PathFigure *
path_figure_new (void)
{
	return new PathFigure ();
}


/**
 * PathFigureCollection
 **/
PathFigureCollection *
path_figure_collection_new (void)
{
	return new PathFigureCollection ();
}


/**
 * PathGeometry
 **/
PathGeometry *
path_geometry_new (void)
{
	return new PathGeometry ();
}


/**
 * PathSegment
 **/
PathSegment *
path_segment_new (void)
{
	return new PathSegment ();
}


/**
 * PathSegmentCollection
 **/
PathSegmentCollection *
path_segment_collection_new (void)
{
	return new PathSegmentCollection ();
}


/**
 * PointAnimation
 **/
PointAnimation *
point_animation_new (void)
{
	return new PointAnimation ();
}


/**
 * PointAnimationUsingKeyFrames
 **/
PointAnimationUsingKeyFrames *
point_animation_using_key_frames_new (void)
{
	return new PointAnimationUsingKeyFrames ();
}


/**
 * PointCollection
 **/
PointCollection *
point_collection_new (void)
{
	return new PointCollection ();
}


/**
 * PointKeyFrame
 **/
PointKeyFrame *
point_key_frame_new (void)
{
	return new PointKeyFrame ();
}


/**
 * PointKeyFrameCollection
 **/
PointKeyFrameCollection *
point_key_frame_collection_new (void)
{
	return new PointKeyFrameCollection ();
}


/**
 * PolyBezierSegment
 **/
PolyBezierSegment *
poly_bezier_segment_new (void)
{
	return new PolyBezierSegment ();
}


/**
 * Polygon
 **/
Polygon *
polygon_new (void)
{
	return new Polygon ();
}


/**
 * Polyline
 **/
Polyline *
polyline_new (void)
{
	return new Polyline ();
}


/**
 * PolyLineSegment
 **/
PolyLineSegment *
poly_line_segment_new (void)
{
	return new PolyLineSegment ();
}


/**
 * PolyQuadraticBezierSegment
 **/
PolyQuadraticBezierSegment *
poly_quadratic_bezier_segment_new (void)
{
	return new PolyQuadraticBezierSegment ();
}


/**
 * QuadraticBezierSegment
 **/
QuadraticBezierSegment *
quadratic_bezier_segment_new (void)
{
	return new QuadraticBezierSegment ();
}


/**
 * RadialGradientBrush
 **/
RadialGradientBrush *
radial_gradient_brush_new (void)
{
	return new RadialGradientBrush ();
}


/**
 * Rectangle
 **/
Rectangle *
rectangle_new (void)
{
	return new Rectangle ();
}


/**
 * RectangleGeometry
 **/
RectangleGeometry *
rectangle_geometry_new (void)
{
	return new RectangleGeometry ();
}


/**
 * ResourceDictionary
 **/
ResourceDictionary *
resource_dictionary_new (void)
{
	return new ResourceDictionary ();
}


/**
 * RotateTransform
 **/
RotateTransform *
rotate_transform_new (void)
{
	return new RotateTransform ();
}


/**
 * RoutedEventArgs
 **/
DependencyObject *
routed_event_args_get_source (RoutedEventArgs *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetSource ();
}


RoutedEventArgs *
routed_event_args_new (void)
{
	return new RoutedEventArgs ();
}


void
routed_event_args_set_source (RoutedEventArgs *instance, DependencyObject *el)
{
	if (instance == NULL)
		return;
	
	instance->SetSource (el);
}


#if SL_2_0
/**
 * RowDefinition
 **/
double
row_definition_get_actual_height (RowDefinition *instance)
{
	if (instance == NULL)
		// Need to find a property way to get the default value for the specified type and return that if instance is NULL.
		return (double) 0;
	
	return instance->GetActualHeight ();
}
#endif


#if SL_2_0
RowDefinition *
row_definition_new (void)
{
	return new RowDefinition ();
}
#endif


#if SL_2_0
/**
 * RowDefinitionCollection
 **/
RowDefinitionCollection *
row_definition_collection_new (void)
{
	return new RowDefinitionCollection ();
}
#endif


/**
 * Run
 **/
Run *
run_new (void)
{
	return new Run ();
}


/**
 * ScaleTransform
 **/
ScaleTransform *
scale_transform_new (void)
{
	return new ScaleTransform ();
}


#if SL_2_0
/**
 * Setter
 **/
Setter *
setter_new (void)
{
	return new Setter ();
}
#endif


#if SL_2_0
/**
 * SetterBase
 **/
SetterBase *
setter_base_new (void)
{
	return new SetterBase ();
}
#endif


#if SL_2_0
/**
 * SetterBaseCollection
 **/
SetterBaseCollection *
setter_base_collection_new (void)
{
	return new SetterBaseCollection ();
}
#endif


/**
 * Shape
 **/
Shape *
shape_new (void)
{
	return new Shape ();
}


#if SL_2_0
/**
 * SizeChangedEventArgs
 **/
SizeChangedEventArgs *
size_changed_event_args_new (void)
{
	return new SizeChangedEventArgs ();
}
#endif


/**
 * SkewTransform
 **/
SkewTransform *
skew_transform_new (void)
{
	return new SkewTransform ();
}


/**
 * SolidColorBrush
 **/
SolidColorBrush *
solid_color_brush_new (void)
{
	return new SolidColorBrush ();
}


/**
 * SplineColorKeyFrame
 **/
SplineColorKeyFrame *
spline_color_key_frame_new (void)
{
	return new SplineColorKeyFrame ();
}


/**
 * SplineDoubleKeyFrame
 **/
SplineDoubleKeyFrame *
spline_double_key_frame_new (void)
{
	return new SplineDoubleKeyFrame ();
}


/**
 * SplinePointKeyFrame
 **/
SplinePointKeyFrame *
spline_point_key_frame_new (void)
{
	return new SplinePointKeyFrame ();
}


#if SL_2_0
/**
 * StackPanel
 **/
StackPanel *
stack_panel_new (void)
{
	return new StackPanel ();
}
#endif


/**
 * Storyboard
 **/
bool
storyboard_begin (Storyboard *instance)
{
	if (instance == NULL)
		return false;;
	
	return instance->Begin ();
}


void
storyboard_pause (Storyboard *instance)
{
	if (instance == NULL)
		return;
	
	instance->Pause ();
}


void
storyboard_resume (Storyboard *instance)
{
	if (instance == NULL)
		return;
	
	instance->Resume ();
}


void
storyboard_seek (Storyboard *instance, TimeSpan timespan)
{
	if (instance == NULL)
		return;
	
	instance->Seek (timespan);
}


void
storyboard_stop (Storyboard *instance)
{
	if (instance == NULL)
		return;
	
	instance->Stop ();
}


Storyboard *
storyboard_new (void)
{
	return new Storyboard ();
}


/**
 * Stroke
 **/
bool
stroke_hit_test (Stroke *instance, StylusPointCollection *stylusPoints)
{
	if (instance == NULL)
		return false;;
	
	return instance->HitTest (stylusPoints);
}


Stroke *
stroke_new (void)
{
	return new Stroke ();
}


/**
 * StrokeCollection
 **/
StrokeCollection *
stroke_collection_hit_test (StrokeCollection *instance, StylusPointCollection *stylusPoints)
{
	if (instance == NULL)
		return NULL;
	
	return instance->HitTest (stylusPoints);
}


StrokeCollection *
stroke_collection_new (void)
{
	return new StrokeCollection ();
}


#if SL_2_0
/**
 * Style
 **/
Style *
style_new (void)
{
	return new Style ();
}
#endif


/**
 * StylusInfo
 **/
StylusInfo *
stylus_info_new (void)
{
	return new StylusInfo ();
}


/**
 * StylusPoint
 **/
StylusPoint *
stylus_point_new (void)
{
	return new StylusPoint ();
}


/**
 * StylusPointCollection
 **/
StylusPointCollection *
stylus_point_collection_new (void)
{
	return new StylusPointCollection ();
}


/**
 * Surface
 **/
void
surface_attach (Surface *instance, UIElement *toplevel)
{
	if (instance == NULL)
		return;
	
	instance->Attach (toplevel);
}


Downloader *
surface_create_downloader (Surface *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->CreateDownloader ();
}


TimeManager *
surface_get_time_manager (Surface *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetTimeManager ();
}


bool
surface_get_transparent (Surface *instance)
{
	if (instance == NULL)
		return false;;
	
	return instance->GetTransparent ();
}


MoonWindow *
surface_get_window (Surface *instance)
{
	if (instance == NULL)
		return NULL;
	
	return instance->GetWindow ();
}


void
surface_paint (Surface *instance, cairo_t *ctx, int x, int y, int width, int height)
{
	if (instance == NULL)
		return;
	
	instance->Paint (ctx, x, y, width, height);
}


void
surface_resize (Surface *instance, int width, int height)
{
	if (instance == NULL)
		return;
	
	instance->Resize (width, height);
}


void
surface_set_transparent (Surface *instance, bool transparent)
{
	if (instance == NULL)
		return;
	
	instance->SetTransparent (transparent);
}


Surface *
surface_new (MoonWindow *window, bool silverlight2)
{
	return new Surface (window, silverlight2);
}


/**
 * TextBlock
 **/
TextBlock *
text_block_new (void)
{
	return new TextBlock ();
}


/**
 * TileBrush
 **/
TileBrush *
tile_brush_new (void)
{
	return new TileBrush ();
}


/**
 * Timeline
 **/
void
timeline_set_manual_target (Timeline *instance, DependencyObject *o)
{
	if (instance == NULL)
		return;
	
	instance->SetManualTarget (o);
}


Timeline *
timeline_new (void)
{
	return new Timeline ();
}


/**
 * TimelineCollection
 **/
TimelineCollection *
timeline_collection_new (void)
{
	return new TimelineCollection ();
}


/**
 * TimelineGroup
 **/
TimelineGroup *
timeline_group_new (void)
{
	return new TimelineGroup ();
}


/**
 * TimelineMarker
 **/
TimelineMarker *
timeline_marker_new (void)
{
	return new TimelineMarker ();
}


/**
 * TimelineMarkerCollection
 **/
TimelineMarkerCollection *
timeline_marker_collection_new (void)
{
	return new TimelineMarkerCollection ();
}


/**
 * Transform
 **/
Transform *
transform_new (void)
{
	return new Transform ();
}


/**
 * TransformCollection
 **/
TransformCollection *
transform_collection_new (void)
{
	return new TransformCollection ();
}


/**
 * TransformGroup
 **/
TransformGroup *
transform_group_new (void)
{
	return new TransformGroup ();
}


/**
 * TranslateTransform
 **/
TranslateTransform *
translate_transform_new (void)
{
	return new TranslateTransform ();
}


/**
 * TriggerAction
 **/
void
trigger_action_fire (TriggerAction *instance)
{
	if (instance == NULL)
		return;
	
	instance->Fire ();
}


TriggerAction *
trigger_action_new (void)
{
	return new TriggerAction ();
}


/**
 * TriggerActionCollection
 **/
TriggerActionCollection *
trigger_action_collection_new (void)
{
	return new TriggerActionCollection ();
}


/**
 * TriggerCollection
 **/
TriggerCollection *
trigger_collection_new (void)
{
	return new TriggerCollection ();
}


#if SL_2_0
/**
 * Types
 **/
void
types_free (Types *instance)
{
	delete instance;
}
#endif


#if SL_2_0
Type *
types_find (Types *instance, Type::Kind type)
{
	if (instance == NULL)
		return NULL;
	
	return instance->Find (type);
}
#endif


#if SL_2_0
Type::Kind
types_register_type (Types *instance, const char *name, void *gc_handle, Type::Kind parent)
{
	if (instance == NULL)
		return Type::INVALID;
	
	return instance->RegisterType (name, gc_handle, parent);
}
#endif


#if SL_2_0
Types *
types_new (void)
{
	return new Types ();
}
#endif


/**
 * UIElement
 **/
void
uielement_measure (UIElement *instance, Size availableSize)
{
	if (instance == NULL)
		return;
	
	instance->Measure (availableSize);
}


UIElement *
uielement_new (void)
{
	return new UIElement ();
}


/**
 * UIElementCollection
 **/
UIElementCollection *
uielement_collection_new (void)
{
	return new UIElementCollection ();
}


#if SL_2_0
/**
 * UserControl
 **/
UserControl *
user_control_new (void)
{
	return new UserControl ();
}
#endif


/**
 * VideoBrush
 **/
VideoBrush *
video_brush_new (void)
{
	return new VideoBrush ();
}


/**
 * VisualBrush
 **/
VisualBrush *
visual_brush_new (void)
{
	return new VisualBrush ();
}


