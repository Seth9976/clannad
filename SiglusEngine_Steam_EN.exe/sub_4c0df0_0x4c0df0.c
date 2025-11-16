// 函数: sub_4c0df0
// 地址: 0x4c0df0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect_2
GetWindowRect(arg3, &rect_2)
RECT rect
GetClientRect(arg3, &rect)
RECT rect_1
GetWindowRect(GetDlgItem(arg3, arg2), &rect_1)
enum SYSTEM_METRICS_INDEX nIndex = SM_CYCAPTION

if ((GetWindowLongA(arg3, 0xffffffec) & 0x80) != 0)
    nIndex = SM_CYSMCAPTION

int32_t edi_1

if (arg5 == 1)
    edi_1 = GetSystemMetrics(nIndex)
else if (arg5 == 2)
    edi_1 = GetSystemMetrics(nIndex) + GetSystemMetrics(SM_CYMENU)
else
    edi_1 = 0

int32_t eax_15
int32_t edx
edx:eax_15 = sx.q(rect.left - rect.right - rect_2.left + rect_2.right)
int32_t right = rect_1.right
int32_t ebx_2 = (eax_15 - edx) s>> 1
int32_t eax_22
int32_t edx_1
edx_1:eax_22 = sx.q(rect.top - rect.bottom - rect_2.top - edi_1 + rect_2.bottom)
int32_t left = rect_1.left
int32_t eax_24 = (eax_22 - edx_1) s>> 1
int32_t edi_3 = edi_1 + eax_24
*arg4 = right - left
int32_t top = rect_1.top
arg4[1] = rect_1.bottom - top
arg4[2] = left - rect_2.left - ebx_2
arg4[3] = rect_2.right - left - ebx_2
arg4[4] = right - rect_2.left - ebx_2
arg4[5] = rect_2.right - right - ebx_2
arg4[6] = top - rect_2.top - edi_3
int32_t bottom = rect_2.bottom
int32_t ebx_5 = bottom - rect_1.bottom - eax_24
arg4[7] = bottom - top - eax_24
arg4[8] = rect_1.bottom - rect_2.top - edi_3
arg4[0xa] = arg3
arg4[0xb] = arg2
arg4[0xc] = arg5
arg4[9] = ebx_5
arg4[0xd] = arg6
sub_5f02dd(eax_1 ^ &__saved_ebp)
return arg6
