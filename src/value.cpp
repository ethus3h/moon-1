/*
 * Automatically generated from value.cpp.in, do not edit this file directly
 * To regenerate execute typegen.sh
*/

/*
 * value.cpp: Generated code for Value.
 *
 * Author:
 *   Rolf Bjarne Kvinge (RKvinge@novell.com)
 *
 * Copyright 2007 Novell, Inc. (http://www.novell.com)
 *
 * See the LICENSE file included with the distribution for details.
 * 
 */

#include <config.h>
#include <string.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include <malloc.h>
#include <stdlib.h>
#include "value.h"
#include "runtime.h"



DependencyObject*
Value::AsDependencyObject ()
{
	checked_get_subclass (DEPENDENCY_OBJECT, DependencyObject);
}

Animation*
Value::AsAnimation ()
{
	checked_get_subclass (ANIMATION, Animation);
}

AnimationClock*
Value::AsAnimationClock ()
{
	checked_get_subclass (ANIMATIONCLOCK, AnimationClock);
}

ArcSegment*
Value::AsArcSegment ()
{
	checked_get_subclass (ARCSEGMENT, ArcSegment);
}

BeginStoryboard*
Value::AsBeginStoryboard ()
{
	checked_get_subclass (BEGINSTORYBOARD, BeginStoryboard);
}

BezierSegment*
Value::AsBezierSegment ()
{
	checked_get_subclass (BEZIERSEGMENT, BezierSegment);
}

Brush*
Value::AsBrush ()
{
	checked_get_subclass (BRUSH, Brush);
}

Canvas*
Value::AsCanvas ()
{
	checked_get_subclass (CANVAS, Canvas);
}

Clock*
Value::AsClock ()
{
	checked_get_subclass (CLOCK, Clock);
}

ClockGroup*
Value::AsClockGroup ()
{
	checked_get_subclass (CLOCKGROUP, ClockGroup);
}

Collection*
Value::AsCollection ()
{
	checked_get_subclass (COLLECTION, Collection);
}

ColorAnimation*
Value::AsColorAnimation ()
{
	checked_get_subclass (COLORANIMATION, ColorAnimation);
}

ColorAnimationUsingKeyFrames*
Value::AsColorAnimationUsingKeyFrames ()
{
	checked_get_subclass (COLORANIMATIONUSINGKEYFRAMES, ColorAnimationUsingKeyFrames);
}

ColorKeyFrame*
Value::AsColorKeyFrame ()
{
	checked_get_subclass (COLORKEYFRAME, ColorKeyFrame);
}

Control*
Value::AsControl ()
{
	checked_get_subclass (CONTROL, Control);
}

DiscreteColorKeyFrame*
Value::AsDiscreteColorKeyFrame ()
{
	checked_get_subclass (DISCRETECOLORKEYFRAME, DiscreteColorKeyFrame);
}

DiscreteDoubleKeyFrame*
Value::AsDiscreteDoubleKeyFrame ()
{
	checked_get_subclass (DISCRETEDOUBLEKEYFRAME, DiscreteDoubleKeyFrame);
}

DiscretePointKeyFrame*
Value::AsDiscretePointKeyFrame ()
{
	checked_get_subclass (DISCRETEPOINTKEYFRAME, DiscretePointKeyFrame);
}

DoubleAnimation*
Value::AsDoubleAnimation ()
{
	checked_get_subclass (DOUBLEANIMATION, DoubleAnimation);
}

DoubleAnimationUsingKeyFrames*
Value::AsDoubleAnimationUsingKeyFrames ()
{
	checked_get_subclass (DOUBLEANIMATIONUSINGKEYFRAMES, DoubleAnimationUsingKeyFrames);
}

DoubleKeyFrame*
Value::AsDoubleKeyFrame ()
{
	checked_get_subclass (DOUBLEKEYFRAME, DoubleKeyFrame);
}

Downloader*
Value::AsDownloader ()
{
	checked_get_subclass (DOWNLOADER, Downloader);
}

Ellipse*
Value::AsEllipse ()
{
	checked_get_subclass (ELLIPSE, Ellipse);
}

EllipseGeometry*
Value::AsEllipseGeometry ()
{
	checked_get_subclass (ELLIPSEGEOMETRY, EllipseGeometry);
}

EventTrigger*
Value::AsEventTrigger ()
{
	checked_get_subclass (EVENTTRIGGER, EventTrigger);
}

FrameworkElement*
Value::AsFrameworkElement ()
{
	checked_get_subclass (FRAMEWORKELEMENT, FrameworkElement);
}

Geometry*
Value::AsGeometry ()
{
	checked_get_subclass (GEOMETRY, Geometry);
}

GeometryCollection*
Value::AsGeometryCollection ()
{
	checked_get_subclass (GEOMETRY_COLLECTION, GeometryCollection);
}

GeometryGroup*
Value::AsGeometryGroup ()
{
	checked_get_subclass (GEOMETRYGROUP, GeometryGroup);
}

Glyphs*
Value::AsGlyphs ()
{
	checked_get_subclass (GLYPHS, Glyphs);
}

GradientBrush*
Value::AsGradientBrush ()
{
	checked_get_subclass (GRADIENTBRUSH, GradientBrush);
}

GradientStop*
Value::AsGradientStop ()
{
	checked_get_subclass (GRADIENTSTOP, GradientStop);
}

GradientStopCollection*
Value::AsGradientStopCollection ()
{
	checked_get_subclass (GRADIENTSTOP_COLLECTION, GradientStopCollection);
}

Image*
Value::AsImage ()
{
	checked_get_subclass (IMAGE, Image);
}

ImageBrush*
Value::AsImageBrush ()
{
	checked_get_subclass (IMAGEBRUSH, ImageBrush);
}

Inline*
Value::AsInline ()
{
	checked_get_subclass (INLINE, Inline);
}

Inlines*
Value::AsInlines ()
{
	checked_get_subclass (INLINES, Inlines);
}

KeyFrame*
Value::AsKeyFrame ()
{
	checked_get_subclass (KEYFRAME, KeyFrame);
}

KeyFrameCollection*
Value::AsKeyFrameCollection ()
{
	checked_get_subclass (KEYFRAME_COLLECTION, KeyFrameCollection);
}

KeySpline*
Value::AsKeySpline ()
{
	checked_get_subclass (KEYSPLINE, KeySpline);
}

Line*
Value::AsLine ()
{
	checked_get_subclass (LINE, Line);
}

LinearColorKeyFrame*
Value::AsLinearColorKeyFrame ()
{
	checked_get_subclass (LINEARCOLORKEYFRAME, LinearColorKeyFrame);
}

LinearDoubleKeyFrame*
Value::AsLinearDoubleKeyFrame ()
{
	checked_get_subclass (LINEARDOUBLEKEYFRAME, LinearDoubleKeyFrame);
}

LinearGradientBrush*
Value::AsLinearGradientBrush ()
{
	checked_get_subclass (LINEARGRADIENTBRUSH, LinearGradientBrush);
}

LinearPointKeyFrame*
Value::AsLinearPointKeyFrame ()
{
	checked_get_subclass (LINEARPOINTKEYFRAME, LinearPointKeyFrame);
}

LineBreak*
Value::AsLineBreak ()
{
	checked_get_subclass (LINEBREAK, LineBreak);
}

LineGeometry*
Value::AsLineGeometry ()
{
	checked_get_subclass (LINEGEOMETRY, LineGeometry);
}

LineSegment*
Value::AsLineSegment ()
{
	checked_get_subclass (LINESEGMENT, LineSegment);
}

MatrixTransform*
Value::AsMatrixTransform ()
{
	checked_get_subclass (MATRIXTRANSFORM, MatrixTransform);
}

MediaAttribute*
Value::AsMediaAttribute ()
{
	checked_get_subclass (MEDIAATTRIBUTE, MediaAttribute);
}

MediaAttributeCollection*
Value::AsMediaAttributeCollection ()
{
	checked_get_subclass (MEDIAATTRIBUTE_COLLECTION, MediaAttributeCollection);
}

MediaBase*
Value::AsMediaBase ()
{
	checked_get_subclass (MEDIABASE, MediaBase);
}

MediaElement*
Value::AsMediaElement ()
{
	checked_get_subclass (MEDIAELEMENT, MediaElement);
}

NameScope*
Value::AsNameScope ()
{
	checked_get_subclass (NAMESCOPE, NameScope);
}

Panel*
Value::AsPanel ()
{
	checked_get_subclass (PANEL, Panel);
}

ParallelTimeline*
Value::AsParallelTimeline ()
{
	checked_get_subclass (PARALLELTIMELINE, ParallelTimeline);
}

Path*
Value::AsPath ()
{
	checked_get_subclass (PATH, Path);
}

PathFigure*
Value::AsPathFigure ()
{
	checked_get_subclass (PATHFIGURE, PathFigure);
}

PathFigureCollection*
Value::AsPathFigureCollection ()
{
	checked_get_subclass (PATHFIGURE_COLLECTION, PathFigureCollection);
}

PathGeometry*
Value::AsPathGeometry ()
{
	checked_get_subclass (PATHGEOMETRY, PathGeometry);
}

PathSegment*
Value::AsPathSegment ()
{
	checked_get_subclass (PATHSEGMENT, PathSegment);
}

PathSegmentCollection*
Value::AsPathSegmentCollection ()
{
	checked_get_subclass (PATHSEGMENT_COLLECTION, PathSegmentCollection);
}

PointAnimation*
Value::AsPointAnimation ()
{
	checked_get_subclass (POINTANIMATION, PointAnimation);
}

PointAnimationUsingKeyFrames*
Value::AsPointAnimationUsingKeyFrames ()
{
	checked_get_subclass (POINTANIMATIONUSINGKEYFRAMES, PointAnimationUsingKeyFrames);
}

PointKeyFrame*
Value::AsPointKeyFrame ()
{
	checked_get_subclass (POINTKEYFRAME, PointKeyFrame);
}

PolyBezierSegment*
Value::AsPolyBezierSegment ()
{
	checked_get_subclass (POLYBEZIERSEGMENT, PolyBezierSegment);
}

Polygon*
Value::AsPolygon ()
{
	checked_get_subclass (POLYGON, Polygon);
}

Polyline*
Value::AsPolyline ()
{
	checked_get_subclass (POLYLINE, Polyline);
}

PolyLineSegment*
Value::AsPolyLineSegment ()
{
	checked_get_subclass (POLYLINESEGMENT, PolyLineSegment);
}

PolyQuadraticBezierSegment*
Value::AsPolyQuadraticBezierSegment ()
{
	checked_get_subclass (POLYQUADRATICBEZIERSEGMENT, PolyQuadraticBezierSegment);
}

QuadraticBezierSegment*
Value::AsQuadraticBezierSegment ()
{
	checked_get_subclass (QUADRATICBEZIERSEGMENT, QuadraticBezierSegment);
}

RadialGradientBrush*
Value::AsRadialGradientBrush ()
{
	checked_get_subclass (RADIALGRADIENTBRUSH, RadialGradientBrush);
}

Rectangle*
Value::AsRectangle ()
{
	checked_get_subclass (RECTANGLE, Rectangle);
}

RectangleGeometry*
Value::AsRectangleGeometry ()
{
	checked_get_subclass (RECTANGLEGEOMETRY, RectangleGeometry);
}

ResourceCollection*
Value::AsResourceCollection ()
{
	checked_get_subclass (RESOURCE_COLLECTION, ResourceCollection);
}

RotateTransform*
Value::AsRotateTransform ()
{
	checked_get_subclass (ROTATETRANSFORM, RotateTransform);
}

Run*
Value::AsRun ()
{
	checked_get_subclass (RUN, Run);
}

ScaleTransform*
Value::AsScaleTransform ()
{
	checked_get_subclass (SCALETRANSFORM, ScaleTransform);
}

Shape*
Value::AsShape ()
{
	checked_get_subclass (SHAPE, Shape);
}

SkewTransform*
Value::AsSkewTransform ()
{
	checked_get_subclass (SKEWTRANSFORM, SkewTransform);
}

SolidColorBrush*
Value::AsSolidColorBrush ()
{
	checked_get_subclass (SOLIDCOLORBRUSH, SolidColorBrush);
}

SplineDoubleKeyFrame*
Value::AsSplineDoubleKeyFrame ()
{
	checked_get_subclass (SPLINEDOUBLEKEYFRAME, SplineDoubleKeyFrame);
}

Storyboard*
Value::AsStoryboard ()
{
	checked_get_subclass (STORYBOARD, Storyboard);
}

StrokeCollection*
Value::AsStrokeCollection ()
{
	checked_get_subclass (STROKE_COLLECTION, StrokeCollection);
}

StylusPointCollection*
Value::AsStylusPointCollection ()
{
	checked_get_subclass (STYLUSPOINT_COLLECTION, StylusPointCollection);
}

TextBlock*
Value::AsTextBlock ()
{
	checked_get_subclass (TEXTBLOCK, TextBlock);
}

TileBrush*
Value::AsTileBrush ()
{
	checked_get_subclass (TILEBRUSH, TileBrush);
}

Timeline*
Value::AsTimeline ()
{
	checked_get_subclass (TIMELINE, Timeline);
}

TimelineCollection*
Value::AsTimelineCollection ()
{
	checked_get_subclass (TIMELINE_COLLECTION, TimelineCollection);
}

TimelineGroup*
Value::AsTimelineGroup ()
{
	checked_get_subclass (TIMELINEGROUP, TimelineGroup);
}

TimelineMarkerCollection*
Value::AsTimelineMarkerCollection ()
{
	checked_get_subclass (TIMELINEMARKER_COLLECTION, TimelineMarkerCollection);
}

Transform*
Value::AsTransform ()
{
	checked_get_subclass (TRANSFORM, Transform);
}

TransformCollection*
Value::AsTransformCollection ()
{
	checked_get_subclass (TRANSFORM_COLLECTION, TransformCollection);
}

TransformGroup*
Value::AsTransformGroup ()
{
	checked_get_subclass (TRANSFORMGROUP, TransformGroup);
}

TranslateTransform*
Value::AsTranslateTransform ()
{
	checked_get_subclass (TRANSLATETRANSFORM, TranslateTransform);
}

TriggerAction*
Value::AsTriggerAction ()
{
	checked_get_subclass (TRIGGERACTION, TriggerAction);
}

TriggerActionCollection*
Value::AsTriggerActionCollection ()
{
	checked_get_subclass (TRIGGERACTION_COLLECTION, TriggerActionCollection);
}

TriggerCollection*
Value::AsTriggerCollection ()
{
	checked_get_subclass (TRIGGER_COLLECTION, TriggerCollection);
}

UIElement*
Value::AsUIElement ()
{
	checked_get_subclass (UIELEMENT, UIElement);
}

VideoBrush*
Value::AsVideoBrush ()
{
	checked_get_subclass (VIDEOBRUSH, VideoBrush);
}

Visual*
Value::AsVisual ()
{
	checked_get_subclass (VISUAL, Visual);
}

VisualCollection*
Value::AsVisualCollection ()
{
	checked_get_subclass (VISUAL_COLLECTION, VisualCollection);
}

