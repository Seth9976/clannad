// 函数: sub_606a00
// 地址: 0x606a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &boost::exception_detail::error_info_injector<class boost::bad_function_call>::`vftable'{for `boost::bad_function_call'}
arg1[3] = &boost::exception_detail::error_info_injector<class boost::bad_function_call>::`vftable'{for `boost::exception'}
arg1[3] = &boost::exception::`vftable'
int32_t* ecx = arg1[4]

if (ecx != 0 && (*(*ecx + 0x10))() != 0)
    arg1[4] = 0

sub_746d06(arg1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
