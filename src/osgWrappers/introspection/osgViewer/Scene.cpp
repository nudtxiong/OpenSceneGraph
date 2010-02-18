// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Node>
#include <osg/NodeVisitor>
#include <osgDB/DatabasePager>
#include <osgDB/ImagePager>
#include <osgViewer/Scene>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgViewer::Scene)
	I_DeclaringFile("osgViewer/Scene");
	I_BaseType(osg::Referenced);
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method1(void, setSceneData, IN, osg::Node *, node,
	          Properties::NON_VIRTUAL,
	          __void__setSceneData__osg_Node_P1,
	          "",
	          "");
	I_Method0(osg::Node *, getSceneData,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getSceneData,
	          "",
	          "");
	I_Method0(const osg::Node *, getSceneData,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getSceneData,
	          "",
	          "");
	I_Method1(void, setDatabasePager, IN, osgDB::DatabasePager *, dp,
	          Properties::NON_VIRTUAL,
	          __void__setDatabasePager__osgDB_DatabasePager_P1,
	          "",
	          "");
	I_Method0(osgDB::DatabasePager *, getDatabasePager,
	          Properties::NON_VIRTUAL,
	          __osgDB_DatabasePager_P1__getDatabasePager,
	          "",
	          "");
	I_Method0(const osgDB::DatabasePager *, getDatabasePager,
	          Properties::NON_VIRTUAL,
	          __C5_osgDB_DatabasePager_P1__getDatabasePager,
	          "",
	          "");
	I_Method1(void, setImagePager, IN, osgDB::ImagePager *, ip,
	          Properties::NON_VIRTUAL,
	          __void__setImagePager__osgDB_ImagePager_P1,
	          "",
	          "");
	I_Method0(osgDB::ImagePager *, getImagePager,
	          Properties::NON_VIRTUAL,
	          __osgDB_ImagePager_P1__getImagePager,
	          "",
	          "");
	I_Method0(const osgDB::ImagePager *, getImagePager,
	          Properties::NON_VIRTUAL,
	          __C5_osgDB_ImagePager_P1__getImagePager,
	          "",
	          "");
	I_Method1(void, updateSceneGraph, IN, osg::NodeVisitor &, updateVisitor,
	          Properties::NON_VIRTUAL,
	          __void__updateSceneGraph__osg_NodeVisitor_R1,
	          "",
	          "");
	I_StaticMethod1(osgViewer::Scene *, getScene, IN, osg::Node *, node,
	                __Scene_P1__getScene__osg_Node_P1_S,
	                "Get the Scene object that has the specified node assigned to it. ",
	                "return 0 if no Scene has yet been assigned the specified node. ");
	I_ProtectedConstructor0(____Scene,
	                        "",
	                        "");
	I_SimpleProperty(osgDB::DatabasePager *, DatabasePager, 
	                 __osgDB_DatabasePager_P1__getDatabasePager, 
	                 __void__setDatabasePager__osgDB_DatabasePager_P1);
	I_SimpleProperty(osgDB::ImagePager *, ImagePager, 
	                 __osgDB_ImagePager_P1__getImagePager, 
	                 __void__setImagePager__osgDB_ImagePager_P1);
	I_SimpleProperty(osg::Node *, SceneData, 
	                 __osg_Node_P1__getSceneData, 
	                 __void__setSceneData__osg_Node_P1);
END_REFLECTOR

