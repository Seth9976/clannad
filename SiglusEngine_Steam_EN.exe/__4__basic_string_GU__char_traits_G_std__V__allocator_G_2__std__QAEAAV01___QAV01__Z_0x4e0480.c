// 函数: ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV01@$$QAV01@@Z
// 地址: 0x4e0480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ATL::CAxUIWindow::ATL::CComObject<class ATL::CAxUIWindow>::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct ATL::CAxUIWindow::ATL::CComObject<class ATL::CAxUIWindow>::VTable** var_14_1 = arg1
arg1[0xa] = 0
arg1[1] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0
arg1[8] = DefWindowProcA
arg1[0xb] = 0
int32_t var_8_1 = 0
int32_t* ecx = data_20f33f8
*arg1 = &ATL::CComObject<class ATL::CAxUIWindow>::`vftable'{for `ATL::CAxUIWindow'}
arg1[9] = &ATL::CComObject<class ATL::CAxUIWindow>::`vftable'{for `IOleInPlaceUIWindow'}
(*(*ecx + 4))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
