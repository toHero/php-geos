/* commonly used ones */

ZEND_BEGIN_ARG_INFO_EX(arginfo_void, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_geom, 0, 0, 1)
    ZEND_ARG_INFO(0, geom)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_num, 0, 0, 1)
    ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

/* function arginfo */

#define arginfo_GEOSVersion              arginfo_void

#define arginfo_GEOSPolygonize           arginfo_geom
#define arginfo_GEOSLineMerge            arginfo_geom

#ifdef HAVE_GEOS_SHARED_PATHS
ZEND_BEGIN_ARG_INFO_EX(arginfo_GEOSSharedPaths, 0, 0, 2)
    ZEND_ARG_INFO(0, geom1)
    ZEND_ARG_INFO(0, geom2)
ZEND_END_ARG_INFO()
#endif

#ifdef HAVE_GEOS_RELATE_PATTERN_MATCH
ZEND_BEGIN_ARG_INFO_EX(arginfo_GEOSRelateMatch, 0, 0, 2)
    ZEND_ARG_INFO(0, maxtric)
    ZEND_ARG_INFO(0, pattern)
ZEND_END_ARG_INFO()
#endif

/* GEOSGeometry methods arginfo */

#define arginfo_Geometry_construct       arginfo_void

#define arginfo_Geometry_toString        arginfo_void

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_project, 0, 0, 1)
    ZEND_ARG_INFO(0, geom)
    ZEND_ARG_INFO(0, normalized)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_interpolate, 0, 0, 1)
    ZEND_ARG_INFO(0, dist)
    ZEND_ARG_INFO(0, normalized)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_buffer, 0, 0, 1)
    ZEND_ARG_INFO(0, dist)
    ZEND_ARG_INFO(0, style)
ZEND_END_ARG_INFO()

#ifdef HAVE_GEOS_OFFSET_CURVE
#define arginfo_Geometry_offsetCurve     arginfo_Geometry_buffer
#endif

#define arginfo_Geometry_envelope        arginfo_void

#define arginfo_Geometry_intersection    arginfo_geom

#define arginfo_Geometry_convexHull      arginfo_void

#define arginfo_Geometry_difference      arginfo_geom

#define arginfo_Geometry_symDifference   arginfo_geom

#define arginfo_Geometry_boundary        arginfo_void

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_union, 0, 0, 0)
    ZEND_ARG_INFO(0, geom)
ZEND_END_ARG_INFO()

#define arginfo_Geometry_pointOnSurface  arginfo_void

#define arginfo_Geometry_centroid        arginfo_void

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_relate, 0, 0, 1)
    ZEND_ARG_INFO(0, geom)
    ZEND_ARG_INFO(0, pattern)
ZEND_END_ARG_INFO()

#ifdef HAVE_GEOS_RELATE_BOUNDARY_NODE_RULE
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_relateBoundaryNodeRule, 0, 0, 2)
    ZEND_ARG_INFO(0, geom)
    ZEND_ARG_INFO(0, rule)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_simplify, 0, 0, 1)
    ZEND_ARG_INFO(0, tolerance)
    ZEND_ARG_INFO(0, preserveTopology)
ZEND_END_ARG_INFO()

#define arginfo_Geometry_normalize       arginfo_void

#ifdef HAVE_GEOS_GEOM_SET_PRECISION
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_setPrecision, 0, 0, 1)
    ZEND_ARG_INFO(0, gridsize)
    ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()
#endif

#ifdef HAVE_GEOS_GEOM_GET_PRECISION
#define arginfo_Geometry_getPrecision    arginfo_void
#endif

#ifdef HAVE_GEOS_GEOM_EXTRACT_UNIQUE_POINTS
#define arginfo_Geometry_extractUniquePoints arginfo_void
#endif

#define arginfo_Geometry_disjoint        arginfo_geom

#define arginfo_Geometry_touches         arginfo_geom

#define arginfo_Geometry_intersects      arginfo_geom

#define arginfo_Geometry_crosses         arginfo_geom

#define arginfo_Geometry_within          arginfo_geom

#define arginfo_Geometry_contains        arginfo_geom

#define arginfo_Geometry_overlaps        arginfo_geom

#ifdef HAVE_GEOS_COVERS
#define arginfo_Geometry_covers          arginfo_geom
#endif

#ifdef HAVE_GEOS_COVERED_BY
#define arginfo_Geometry_coveredBy       arginfo_geom
#endif

#define arginfo_Geometry_equals          arginfo_geom

#define arginfo_Geometry_equalsExact     arginfo_geom

#define arginfo_Geometry_isEmpty         arginfo_void

#ifdef HAVE_GEOS_IS_VALID_DETAIL
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_checkValidity, 0, 0, 0)
    ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()
#endif

#define arginfo_Geometry_isSimple        arginfo_void

#define arginfo_Geometry_isRing          arginfo_void

#define arginfo_Geometry_hasZ            arginfo_void


#ifdef HAVE_GEOS_IS_CLOSED
#define arginfo_Geometry_isClosed        arginfo_void
#endif

#define arginfo_Geometry_typeName        arginfo_void

#define arginfo_Geometry_typeId          arginfo_void

#define arginfo_Geometry_getSRID         arginfo_void

ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_setSRID, 0, 0, 0)
    ZEND_ARG_INFO(0, srid)
ZEND_END_ARG_INFO()

#define arginfo_Geometry_numGeometries   arginfo_void

#define arginfo_Geometry_geometryN       arginfo_num

#define arginfo_Geometry_numInteriorRings arginfo_void

#ifdef HAVE_GEOS_GEOM_GET_NUM_POINTS
#define arginfo_Geometry_numPoints       arginfo_void
#endif

#ifdef HAVE_GEOS_GEOM_GET_X
#define arginfo_Geometry_getX            arginfo_void
#endif

#ifdef HAVE_GEOS_GEOM_GET_Y
#define arginfo_Geometry_getY            arginfo_void
#endif

#define arginfo_Geometry_interiorRingN   arginfo_num

#define arginfo_Geometry_exteriorRing    arginfo_void

#define arginfo_Geometry_numCoordinates  arginfo_void

#define arginfo_Geometry_dimension       arginfo_void

#ifdef HAVE_GEOS_GEOM_GET_COORDINATE_DIMENSION
#define arginfo_Geometry_coordinateDimension arginfo_void
#endif

#ifdef HAVE_GEOS_GEOM_GET_POINT_N
#define arginfo_Geometry_pointN          arginfo_num
#endif

#ifdef HAVE_GEOS_GEOM_GET_START_POINT
#define arginfo_Geometry_startPoint      arginfo_void
#endif

#ifdef HAVE_GEOS_GEOM_GET_END_POINT
#define arginfo_Geometry_endPoint        arginfo_void
#endif

#define arginfo_Geometry_area            arginfo_void

#define arginfo_Geometry_length          arginfo_void

#define arginfo_Geometry_distance        arginfo_geom

#define arginfo_Geometry_hausdorffDistance arginfo_geom

#ifdef HAVE_GEOS_SNAP
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_snapTo, 0, 0, 2)
    ZEND_ARG_INFO(0, geom)
    ZEND_ARG_INFO(0, tolerance)
ZEND_END_ARG_INFO()
#endif

#ifdef HAVE_GEOS_NODE
#define arginfo_Geometry_node            arginfo_void
#endif

#ifdef HAVE_GEOS_DELAUNAY_TRIANGULATION
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_delaunayTriangulation, 0, 0, 0)
    ZEND_ARG_INFO(0, tolerance)
    ZEND_ARG_INFO(0, edgeonly)
ZEND_END_ARG_INFO()
#endif

#ifdef HAVE_GEOS_VORONOI_DIAGRAM
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_voronoiDiagram, 0, 0, 0)
    ZEND_ARG_INFO(0, tolerance)
    ZEND_ARG_INFO(0, edgeonly)
    ZEND_ARG_INFO(0, extent)
ZEND_END_ARG_INFO()
#endif

#ifdef HAVE_GEOS_CLIP_BY_RECT
ZEND_BEGIN_ARG_INFO_EX(arginfo_Geometry_clipByRect, 0, 0, 4)
    ZEND_ARG_INFO(0, xmin)
    ZEND_ARG_INFO(0, ymin)
    ZEND_ARG_INFO(0, xmax)
    ZEND_ARG_INFO(0, ymax)
ZEND_END_ARG_INFO()
#endif

/* GEOSWKBReader methods arginfo */

#define arginfo_WKBReader_construct      arginfo_void

ZEND_BEGIN_ARG_INFO_EX(arginfo_WKBReader_read, 0, 0, 1)
    ZEND_ARG_INFO(0, wkb)
ZEND_END_ARG_INFO()

#define arginfo_WKBReader_readHEX        arginfo_WKBReader_read

/* GEOSWKTReader methods arginfo */

#define arginfo_WKTReader_construct      arginfo_void

ZEND_BEGIN_ARG_INFO_EX(arginfo_WKTReader_read, 0, 0, 1)
    ZEND_ARG_INFO(0, wkt)
ZEND_END_ARG_INFO()

/* GEOSWKTWriter methods arginfo */

#define arginfo_WKTWriter_construct      arginfo_void

#define arginfo_WKTWriter_write          arginfo_geom

#ifdef HAVE_GEOS_WKT_WRITER_SET_TRIM
#define arginfo_WKTWriter_setTrim        arginfo_num
#endif

#ifdef HAVE_GEOS_WKT_WRITER_SET_ROUNDING_PRECISION
#define arginfo_WKTWriter_setRoundingPrecision arginfo_num
#endif

#ifdef HAVE_GEOS_WKT_WRITER_SET_OUTPUT_DIMENSION
#define arginfo_WKTWriter_setOutputDimension   arginfo_num
#endif

#ifdef HAVE_GEOS_WKT_WRITER_GET_OUTPUT_DIMENSION
#define arginfo_WKTWriter_getOutputDimension arginfo_void
#endif

#ifdef HAVE_GEOS_WKT_WRITER_SET_OLD_3D
ZEND_BEGIN_ARG_INFO_EX(arginfo_WKTWriter_setOld3D, 0, 0, 1)
    ZEND_ARG_INFO(0, bval)
ZEND_END_ARG_INFO()
#endif

/* GEOSWKTWriter methods arginfo */

#define arginfo_WKBWriter_construct          arginfo_void

#define arginfo_WKBWriter_getOutputDimension arginfo_void

#define arginfo_WKBWriter_setOutputDimension arginfo_num

#define arginfo_WKBWriter_getByteOrder       arginfo_void

#define arginfo_WKBWriter_setByteOrder       arginfo_num

#define arginfo_WKBWriter_setIncludeSRID     arginfo_num

#define arginfo_WKBWriter_getIncludeSRID     arginfo_void

#define arginfo_WKBWriter_write              arginfo_geom

#define arginfo_WKBWriter_writeHEX           arginfo_geom

