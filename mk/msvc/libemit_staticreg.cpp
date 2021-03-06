// This file is automatically generated.
#include "cssysdef.h"
#include "csutil/scf.h"

// Put static linking stuff into own section.
// The idea is that this allows the section to be swapped out but not
// swapped in again b/c something else in it was needed.
#if !defined(CS_DEBUG) && defined(CS_COMPILER_MSVC)
#pragma const_seg(".CSmetai")
#pragma comment(linker, "/section:.CSmetai,r")
#pragma code_seg(".CSmeta")
#pragma comment(linker, "/section:.CSmeta,er")
#pragma comment(linker, "/merge:.CSmetai=.CSmeta")
#endif

namespace csStaticPluginInit
{
static char const metainfo_emit[] =
"<?xml version=\"1.0\"?>"
"<!-- emit.csplugin -->"
"<plugin>"
"  <scf>"
"    <classes>"
"      <class>"
"        <name>crystalspace.mesh.object.emit</name>"
"        <implementation>csEmitMeshObjectType</implementation>"
"        <description>Crystal Space Emit Mesh Type</description>"
"      </class>"
"    </classes>"
"  </scf>"
"</plugin>"
;
  #ifndef csEmitMeshObjectType_FACTORY_REGISTER_DEFINED 
  #define csEmitMeshObjectType_FACTORY_REGISTER_DEFINED 
    SCF_DEFINE_FACTORY_FUNC_REGISTRATION(csEmitMeshObjectType) 
  #endif

class emit
{
SCF_REGISTER_STATIC_LIBRARY(emit,metainfo_emit)
  #ifndef csEmitMeshObjectType_FACTORY_REGISTERED 
  #define csEmitMeshObjectType_FACTORY_REGISTERED 
    csEmitMeshObjectType_StaticInit csEmitMeshObjectType_static_init__; 
  #endif
public:
 emit();
};
emit::emit() {}

}
