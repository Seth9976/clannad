// 函数: sub_58c9c0
// 地址: 0x58c9c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[8]
*arg1 = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'{for `boost::exception_detail::error_info_injector<class boost::bad_any_cast>'}
arg1[3] = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'{for `boost::exception'}
*(*(eax + 4) + arg1 + 0x20) = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'
int32_t ecx = arg1[8]->__offset(0x4).d
*(ecx + arg1 + 0x1c) = ecx - 8
*arg1 = &boost::exception_detail::error_info_injector<class boost::bad_any_cast>::`vftable'{for `boost::bad_any_cast'}
arg1[3] = &boost::exception_detail::error_info_injector<class boost::bad_any_cast>::`vftable'{for `boost::exception'}
arg1[3] = &boost::exception::`vftable'
int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0 && (*(*ecx_1 + 0x10))() != 0)
    arg1[4] = 0

return sub_746d06(arg1) __tailcall
