// 函数: sub_5cbef0
// 地址: 0x5cbef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbbc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ATL::CAxUIWindow::ATL::CComObject<class ATL::CAxUIWindow>::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct ATL::CAxUIWindow::ATL::CComObject<class ATL::CAxUIWindow>::VTable** var_14_1 = arg1
*arg1 = &ATL::CComObject<class ATL::CAxUIWindow>::`vftable'{for `ATL::CAxUIWindow'}
arg1[9] = &ATL::CComObject<class ATL::CAxUIWindow>::`vftable'{for `IOleInPlaceUIWindow'}
int32_t var_8_1 = 0
arg1[0xa] = 0xc0000001
int32_t* ecx = arg1[0xb]

if (ecx != 0)
    arg1[0xb] = 0
    (*(*ecx + 8))(ecx)

HWND hWnd = arg1[1]

if (hWnd != 0)
    DestroyWindow(hWnd)

(*(*data_bac3f8 + 8))(eax_2)
int32_t var_8_2 = 1
int32_t* ecx_2 = arg1[0xb]

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)

int32_t var_8_3 = 0xffffffff
BOOL result = arg1[5]

if (result != 0)
    result = sub_760d57(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
