// 函数: sub_6c15e0
// 地址: 0x6c15e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(arg1 + 4), &rect)
uint128_t xmm0 = *(arg1 + 0x48)
int32_t eax_3 = rect.right - rect.left
int32_t ecx = xmm0
int32_t xmm0_1 = _mm_bsrli_si128(xmm0, 4)
int32_t var_20 = eax_3 + ecx
int32_t result = rect.bottom - rect.top + xmm0_1
int32_t var_24 = xmm0_1
int32_t result_1 = result
*(arg1 + 0x48) = ecx.o
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
