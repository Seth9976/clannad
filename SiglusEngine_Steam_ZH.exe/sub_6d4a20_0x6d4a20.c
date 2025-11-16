// 函数: sub_6d4a20
// 地址: 0x6d4a20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_10 = 0x474e5089
int32_t var_c = 0xa1a0a0d
int32_t edx = *(arg1 + 0x58)
*(arg1 + 0x2a4) = 0x12

if (edx == 0)
    sub_6d42e0(arg1, "Call to NULL write function")
    noreturn

uint32_t ecx = zx.d(*(arg1 + 0x155))
int32_t result = edx(arg1, &var_10 + ecx, 8 - ecx)

if (*(arg1 + 0x155) u< 3)
    *(arg1 + 0x74) |= 0x1000

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
