// 函数: sub_4c0d20
// 地址: 0x4c0d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect_2
GetWindowRect(arg3, &rect_2)
RECT rect_1
GetClientRect(arg3, &rect_1)
RECT rect
GetWindowRect(GetDlgItem(arg3, 0x4f34), &rect)
enum SYSTEM_METRICS_INDEX nIndex = SM_CYCAPTION

if ((GetWindowLongA(arg3, 0xffffffec) & 0x80) != 0)
    nIndex = SM_CYSMCAPTION

int32_t eax_4 = GetSystemMetrics(nIndex)
int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(rect_1.left - rect_1.right - rect_2.left + rect_2.right)
int32_t edx_3 = rect.left - ((eax_9 - edx) s>> 1) - rect_2.left
int32_t eax_13 = rect.right - 1
*arg4 = edx_3
arg4[2] = eax_13 + edx_3 - rect.left
int32_t eax_20
int32_t edx_5
edx_5:eax_20 = sx.q(rect_1.top - rect_1.bottom - rect_2.top - eax_4 + rect_2.bottom)
int32_t eax_24 = rect.bottom - 1
int32_t edx_9 = rect.top - ((eax_20 - edx_5) s>> 1) - rect_2.top - eax_4
arg4[1] = edx_9
int32_t result = eax_24 + edx_9 - rect.top
arg4[3] = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
