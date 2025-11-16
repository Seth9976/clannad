// 函数: sub_5f09a0
// 地址: 0x5f09a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg2 u<= 7)
    int32_t var_10_1 = 7
    int16_t var_24 = 0
    int32_t var_14_1 = 0
    void* esi_2 = arg2 * 0x18 + 0xda4 + arg1
    sub_52e3c0(&var_24, esi_2, 0, 0xffffffff)
    bool cond:0_1 = *(esi_2 + 0x14) u< 8
    *(esi_2 + 0x10) = 0
    
    if (not(cond:0_1))
        esi_2 = *esi_2
    
    result = 0
    *esi_2 = 0
    *(arg1 + (arg2 << 2) + 0x274) = 0
    
    if (var_10_1 u>= 8)
        result = j__free(var_24.d)

sub_745f2b(result_1 ^ &__saved_ebp)
return result
