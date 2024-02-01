// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_hx_concurrent_collection_Collection
#include <hx/concurrent/collection/Collection.h>
#endif
#ifndef INCLUDED_hx_concurrent_internal__Either3__Either3
#include <hx/concurrent/internal/_Either3/_Either3.h>
#endif

namespace hx{
namespace concurrent{
namespace collection{


static ::String Collection_obj_sMemberFields[] = {
	HX_("get_length",af,04,8f,8f),
	HX_("add",21,f2,49,00),
	HX_("addIfAbsent",b7,31,62,ef),
	HX_("addAll",80,09,fb,9e),
	HX_("clear",8d,71,5b,48),
	HX_("remove",44,9c,88,04),
	HX_("contains",1f,5a,7b,2c),
	HX_("isEmpty",43,de,5f,0c),
	HX_("iterator",ee,49,9a,93),
	HX_("filter",b8,1f,35,85),
	HX_("map",9c,0a,53,00),
	HX_("copy",b5,bb,c4,41),
	HX_("toArray",1e,ba,13,f2),
	HX_("toString",ac,d0,6e,38),
	HX_("join",ea,33,65,46),
	::String(null()) };

::hx::Class Collection_obj::__mClass;

void Collection_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.concurrent.collection.Collection",35,dc,6b,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Collection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x40bf1663 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace concurrent
} // end namespace collection
