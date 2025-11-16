// 函数: sub_6b2f40
// 地址: 0x6b2f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
bool p = unimplemented  {xor eax, ebp}
bool a = undefined
int32_t var_80c = 0
int32_t __saved_ebp
bool d
int32_t var_820 = (d ? 1 : 0) << 0xa | ((__security_cookie_1 ^ &__saved_ebp) s< 0 ? 1 : 0) << 7
    | (__security_cookie_1 == &__saved_ebp ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
int32_t eax_2 = var_820 ^ 0x200000
int32_t var_820_2 = (test_bit(eax_2, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_2, 0xa) ? 1 : 0) << 0xa
    | (test_bit(eax_2, 7) ? 1 : 0) << 7 | (test_bit(eax_2, 6) ? 1 : 0) << 6
    | (test_bit(eax_2, 4) ? 1 : 0) << 4 | (test_bit(eax_2, 2) ? 1 : 0) << 2
    | (test_bit(eax_2, 0) ? 1 : 0)

if (var_820 != var_820_2)
    int32_t eax_5
    int32_t ecx
    int32_t edx_1
    int32_t ebx_1
    eax_5, ebx_1, ecx, edx_1 = __cpuid(1, arg1)
    var_80c = eax_5

uint32_t pcbBuffer = 0x800
uint8_t buffer[0x800]
GetUserNameA(&buffer, &pcbBuffer)
sub_745f2b(__security_cookie_1 ^ &__saved_ebp ^ &__saved_ebp)
return var_80c ^ 0x5101355d
