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

#include <osg/Billboard>
#include <osg/BoundingBox>
#include <osg/Camera>
#include <osg/ClearNode>
#include <osg/ClipNode>
#include <osg/Drawable>
#include <osg/Geode>
#include <osg/Group>
#include <osg/LOD>
#include <osg/LightSource>
#include <osg/Matrix>
#include <osg/Matrixd>
#include <osg/Matrixf>
#include <osg/Node>
#include <osg/OccluderNode>
#include <osg/Polytope>
#include <osg/Projection>
#include <osg/RenderInfo>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/StateSet>
#include <osg/Switch>
#include <osg/TexGenNode>
#include <osg/Transform>
#include <osg/Vec3>
#include <osgUtil/CullVisitor>
#include <osgUtil/RenderBin>
#include <osgUtil/RenderStage>
#include <osgUtil/StateGraph>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(osg::Matrix::value_type, osgUtil::CullVisitor::value_type)

BEGIN_OBJECT_REFLECTOR(osgUtil::CullVisitor)
	I_DeclaringFile("osgUtil/CullVisitor");
	I_BaseType(osg::NodeVisitor);
	I_BaseType(osg::CullStack);
	I_Constructor0(____CullVisitor,
	               "",
	               "");
	I_Constructor1(IN, const osgUtil::CullVisitor &, x,
	               Properties::NON_EXPLICIT,
	               ____CullVisitor__C5_CullVisitor_R1,
	               "Copy constructor that does a shallow copy. ",
	               "");
	I_Method0(osgUtil::CullVisitor *, clone,
	          Properties::VIRTUAL,
	          __CullVisitor_P1__clone,
	          "Create a shallow copy on the CullVisitor. ",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(osg::Vec3, getEyePoint,
	          Properties::VIRTUAL,
	          __osg_Vec3__getEyePoint,
	          "Get the eye point in local coordinates. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. ");
	I_Method0(osg::Vec3, getViewPoint,
	          Properties::VIRTUAL,
	          __osg_Vec3__getViewPoint,
	          "Get the view point in local coordinates. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. ");
	I_Method2(float, getDistanceToEyePoint, IN, const osg::Vec3 &, pos, IN, bool, withLODScale,
	          Properties::VIRTUAL,
	          __float__getDistanceToEyePoint__C5_osg_Vec3_R1__bool,
	          "Get the distance from a point to the eye point, distance value in local coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceFromEyePoint(pos) is not implemented then a default value of 0.0 is returned. ");
	I_Method2(float, getDistanceFromEyePoint, IN, const osg::Vec3 &, pos, IN, bool, withLODScale,
	          Properties::VIRTUAL,
	          __float__getDistanceFromEyePoint__C5_osg_Vec3_R1__bool,
	          "Get the distance of a point from the eye point, distance value in the eye coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceFromEyePoint(pos) is not implemented than a default value of 0.0 is returned. ");
	I_Method2(float, getDistanceToViewPoint, IN, const osg::Vec3 &, pos, IN, bool, withLODScale,
	          Properties::VIRTUAL,
	          __float__getDistanceToViewPoint__C5_osg_Vec3_R1__bool,
	          "Get the distance from a point to the view point, distance value in local coordinate system. ",
	          "Note, not all NodeVisitor implement this method, it is mainly cull visitors which will implement. If the getDistanceToViewPoint(pos) is not implemented then a default value of 0.0 is returned. ");
	I_Method1(void, apply, IN, osg::Node &, x,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LightSource &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_LightSource_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ClipNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_ClipNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::TexGenNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_TexGenNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Group &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Group_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Projection &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Projection_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Switch &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Switch_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LOD &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_LOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::ClearNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_ClearNode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Camera &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Camera_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::OccluderNode &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_OccluderNode_R1,
	          "",
	          "");
	I_Method1(void, setClearNode, IN, const osg::ClearNode *, earthSky,
	          Properties::NON_VIRTUAL,
	          __void__setClearNode__C5_osg_ClearNode_P1,
	          "",
	          "");
	I_Method0(const osg::ClearNode *, getClearNode,
	          Properties::NON_VIRTUAL,
	          __C5_osg_ClearNode_P1__getClearNode,
	          "",
	          "");
	I_Method1(void, pushStateSet, IN, const osg::StateSet *, ss,
	          Properties::NON_VIRTUAL,
	          __void__pushStateSet__C5_osg_StateSet_P1,
	          "Push state set on the current state group. ",
	          "If the state exists in a child state group of the current state group then move the current state group to that child. Otherwise, create a new state group for the state set, add it to the current state group then move the current state group pointer to the new state group.");
	I_Method0(void, popStateSet,
	          Properties::NON_VIRTUAL,
	          __void__popStateSet,
	          "Pop the top state set and hence associated state group. ",
	          "Move the current state group to the parent of the popped state group.");
	I_Method1(void, setStateGraph, IN, osgUtil::StateGraph *, rg,
	          Properties::NON_VIRTUAL,
	          __void__setStateGraph__StateGraph_P1,
	          "",
	          "");
	I_Method0(osgUtil::StateGraph *, getRootStateGraph,
	          Properties::NON_VIRTUAL,
	          __StateGraph_P1__getRootStateGraph,
	          "",
	          "");
	I_Method0(osgUtil::StateGraph *, getCurrentStateGraph,
	          Properties::NON_VIRTUAL,
	          __StateGraph_P1__getCurrentStateGraph,
	          "",
	          "");
	I_Method1(void, setRenderStage, IN, osgUtil::RenderStage *, rg,
	          Properties::NON_VIRTUAL,
	          __void__setRenderStage__RenderStage_P1,
	          "",
	          "");
	I_Method0(osgUtil::RenderStage *, getRenderStage,
	          Properties::NON_VIRTUAL,
	          __RenderStage_P1__getRenderStage,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin *, getCurrentRenderBin,
	          Properties::NON_VIRTUAL,
	          __RenderBin_P1__getCurrentRenderBin,
	          "",
	          "");
	I_Method1(void, setCurrentRenderBin, IN, osgUtil::RenderBin *, rb,
	          Properties::NON_VIRTUAL,
	          __void__setCurrentRenderBin__RenderBin_P1,
	          "",
	          "");
	I_Method0(osgUtil::CullVisitor::value_type, getCalculatedNearPlane,
	          Properties::NON_VIRTUAL,
	          __value_type__getCalculatedNearPlane,
	          "",
	          "");
	I_Method0(osgUtil::CullVisitor::value_type, getCalculatedFarPlane,
	          Properties::NON_VIRTUAL,
	          __value_type__getCalculatedFarPlane,
	          "",
	          "");
	I_Method3(osgUtil::CullVisitor::value_type, computeNearestPointInFrustum, IN, const osg::Matrix &, matrix, IN, const osg::Polytope::PlaneList &, planes, IN, const osg::Drawable &, drawable,
	          Properties::NON_VIRTUAL,
	          __value_type__computeNearestPointInFrustum__C5_osg_Matrix_R1__C5_osg_Polytope_PlaneList_R1__C5_osg_Drawable_R1,
	          "",
	          "");
	I_Method2(bool, updateCalculatedNearFar, IN, const osg::Matrix &, matrix, IN, const osg::BoundingBox &, bb,
	          Properties::NON_VIRTUAL,
	          __bool__updateCalculatedNearFar__C5_osg_Matrix_R1__C5_osg_BoundingBox_R1,
	          "",
	          "");
	I_MethodWithDefaults3(bool, updateCalculatedNearFar, IN, const osg::Matrix &, matrix, , IN, const osg::Drawable &, drawable, , IN, bool, isBillboard, false,
	                      Properties::NON_VIRTUAL,
	                      __bool__updateCalculatedNearFar__C5_osg_Matrix_R1__C5_osg_Drawable_R1__bool,
	                      "",
	                      "");
	I_Method1(void, updateCalculatedNearFar, IN, const osg::Vec3 &, pos,
	          Properties::NON_VIRTUAL,
	          __void__updateCalculatedNearFar__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method2(void, addDrawable, IN, osg::Drawable *, drawable, IN, osg::RefMatrix *, matrix,
	          Properties::NON_VIRTUAL,
	          __void__addDrawable__osg_Drawable_P1__osg_RefMatrix_P1,
	          "Add a drawable to current render graph. ",
	          "");
	I_Method3(void, addDrawableAndDepth, IN, osg::Drawable *, drawable, IN, osg::RefMatrix *, matrix, IN, float, depth,
	          Properties::NON_VIRTUAL,
	          __void__addDrawableAndDepth__osg_Drawable_P1__osg_RefMatrix_P1__float,
	          "Add a drawable and depth to current render graph. ",
	          "");
	I_Method2(void, addPositionedAttribute, IN, osg::RefMatrix *, matrix, IN, const osg::StateAttribute *, attr,
	          Properties::NON_VIRTUAL,
	          __void__addPositionedAttribute__osg_RefMatrix_P1__C5_osg_StateAttribute_P1,
	          "Add an attribute which is positioned relative to the modelview matrix. ",
	          "");
	I_Method3(void, addPositionedTextureAttribute, IN, unsigned int, textureUnit, IN, osg::RefMatrix *, matrix, IN, const osg::StateAttribute *, attr,
	          Properties::NON_VIRTUAL,
	          __void__addPositionedTextureAttribute__unsigned_int__osg_RefMatrix_P1__C5_osg_StateAttribute_P1,
	          "Add an attribute which is positioned relative to the modelview matrix. ",
	          "");
	I_Method0(void, computeNearPlane,
	          Properties::NON_VIRTUAL,
	          __void__computeNearPlane,
	          "compute near plane based on the polgon intersection of primtives in near plane candidate list of drawables. ",
	          "Note, you have to set ComputeNearFarMode to COMPUTE_NEAR_FAR_USING_PRIMITIVES to be able to near plane candidate drawables to be recorded by the cull traversal. ");
	I_Method0(void, popProjectionMatrix,
	          Properties::VIRTUAL,
	          __void__popProjectionMatrix,
	          "Re-implement CullStack's popProjectionMatrix() adding clamping of the projection matrix to the computed near and far. ",
	          "");
	I_Method3(bool, clampProjectionMatrixImplementation, IN, osg::Matrixf &, projection, IN, double &, znear, IN, double &, zfar,
	          Properties::VIRTUAL,
	          __bool__clampProjectionMatrixImplementation__osg_Matrixf_R1__double_R1__double_R1,
	          "CullVisitor's default clamping of the projection float matrix to computed near and far values. ",
	          "Note, do not call this method directly, use clampProjectionMatrix(..) instead, unless you want to bypass the callback. ");
	I_Method3(bool, clampProjectionMatrixImplementation, IN, osg::Matrixd &, projection, IN, double &, znear, IN, double &, zfar,
	          Properties::VIRTUAL,
	          __bool__clampProjectionMatrixImplementation__osg_Matrixd_R1__double_R1__double_R1,
	          "CullVisitor's default clamping of the projection double matrix to computed near and far values. ",
	          "Note, do not call this method directly, use clampProjectionMatrix(..) instead, unless you want to bypass the callback. ");
	I_Method3(bool, clampProjectionMatrix, IN, osg::Matrixf &, projection, IN, osgUtil::CullVisitor::value_type &, znear, IN, osgUtil::CullVisitor::value_type &, zfar,
	          Properties::NON_VIRTUAL,
	          __bool__clampProjectionMatrix__osg_Matrixf_R1__value_type_R1__value_type_R1,
	          "Clamp the projection float matrix to computed near and far values, use callback if it exists, otherwise use default CullVisitor implementation. ",
	          "");
	I_Method3(bool, clampProjectionMatrix, IN, osg::Matrixd &, projection, IN, osgUtil::CullVisitor::value_type &, znear, IN, osgUtil::CullVisitor::value_type &, zfar,
	          Properties::NON_VIRTUAL,
	          __bool__clampProjectionMatrix__osg_Matrixd_R1__value_type_R1__value_type_R1,
	          "Clamp the projection double matrix to computed near and far values, use callback if it exists, otherwise use default CullVisitor implementation. ",
	          "");
	I_Method1(void, setState, IN, osg::State *, state,
	          Properties::NON_VIRTUAL,
	          __void__setState__osg_State_P1,
	          "",
	          "");
	I_Method0(osg::State *, getState,
	          Properties::NON_VIRTUAL,
	          __osg_State_P1__getState,
	          "",
	          "");
	I_Method0(const osg::State *, getState,
	          Properties::NON_VIRTUAL,
	          __C5_osg_State_P1__getState,
	          "",
	          "");
	I_Method1(void, setRenderInfo, IN, osg::RenderInfo &, renderInfo,
	          Properties::NON_VIRTUAL,
	          __void__setRenderInfo__osg_RenderInfo_R1,
	          "",
	          "");
	I_Method0(osg::RenderInfo &, getRenderInfo,
	          Properties::NON_VIRTUAL,
	          __osg_RenderInfo_R1__getRenderInfo,
	          "",
	          "");
	I_Method0(const osg::RenderInfo &, getRenderInfo,
	          Properties::NON_VIRTUAL,
	          __C5_osg_RenderInfo_R1__getRenderInfo,
	          "",
	          "");
	I_StaticMethod0(osg::ref_ptr< osgUtil::CullVisitor > &, prototype,
	                __osg_ref_ptrT1_CullVisitor__R1__prototype_S,
	                "get the prototype singleton used by CullVisitor::create(). ",
	                "");
	I_StaticMethod0(osgUtil::CullVisitor *, create,
	                __CullVisitor_P1__create_S,
	                "create a CullVisitor by cloning CullVisitor::prototype(). ",
	                "");
	I_ProtectedMethod1(void, handle_cull_callbacks_and_traverse, IN, osg::Node &, node,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_cull_callbacks_and_traverse__osg_Node_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, handle_cull_callbacks_and_accept, IN, osg::Node &, node, IN, osg::Node *, acceptNode,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handle_cull_callbacks_and_accept__osg_Node_R1__osg_Node_P1,
	                   "",
	                   "");
	I_ProtectedMethodWithDefaults4(osgUtil::RenderLeaf *, createOrReuseRenderLeaf, IN, osg::Drawable *, drawable, , IN, osg::RefMatrix *, projection, , IN, osg::RefMatrix *, matrix, , IN, float, depth, 0.0f,
	                               Properties::NON_VIRTUAL,
	                               Properties::NON_CONST,
	                               __RenderLeaf_P1__createOrReuseRenderLeaf__osg_Drawable_P1__osg_RefMatrix_P1__osg_RefMatrix_P1__float,
	                               "",
	                               "");
	I_SimpleProperty(osgUtil::CullVisitor::value_type, CalculatedFarPlane, 
	                 __value_type__getCalculatedFarPlane, 
	                 0);
	I_SimpleProperty(osgUtil::CullVisitor::value_type, CalculatedNearPlane, 
	                 __value_type__getCalculatedNearPlane, 
	                 0);
	I_SimpleProperty(const osg::ClearNode *, ClearNode, 
	                 __C5_osg_ClearNode_P1__getClearNode, 
	                 __void__setClearNode__C5_osg_ClearNode_P1);
	I_SimpleProperty(osgUtil::RenderBin *, CurrentRenderBin, 
	                 __RenderBin_P1__getCurrentRenderBin, 
	                 __void__setCurrentRenderBin__RenderBin_P1);
	I_SimpleProperty(osgUtil::StateGraph *, CurrentStateGraph, 
	                 __StateGraph_P1__getCurrentStateGraph, 
	                 0);
	I_SimpleProperty(osg::Vec3, EyePoint, 
	                 __osg_Vec3__getEyePoint, 
	                 0);
	I_SimpleProperty(osg::RenderInfo &, RenderInfo, 
	                 __osg_RenderInfo_R1__getRenderInfo, 
	                 __void__setRenderInfo__osg_RenderInfo_R1);
	I_SimpleProperty(osgUtil::RenderStage *, RenderStage, 
	                 __RenderStage_P1__getRenderStage, 
	                 __void__setRenderStage__RenderStage_P1);
	I_SimpleProperty(osgUtil::StateGraph *, RootStateGraph, 
	                 __StateGraph_P1__getRootStateGraph, 
	                 0);
	I_SimpleProperty(osg::State *, State, 
	                 __osg_State_P1__getState, 
	                 __void__setState__osg_State_P1);
	I_SimpleProperty(osgUtil::StateGraph *, StateGraph, 
	                 0, 
	                 __void__setStateGraph__StateGraph_P1);
	I_SimpleProperty(osg::Vec3, ViewPoint, 
	                 __osg_Vec3__getViewPoint, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::CullVisitor >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::CullVisitor *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::CullVisitor > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::CullVisitor *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::CullVisitor *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::CullVisitor > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::CullVisitor *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

