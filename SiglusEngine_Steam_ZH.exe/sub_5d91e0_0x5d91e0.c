// 函数: sub_5d91e0
// 地址: 0x5d91e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg1 + 0x134)
int32_t esi_1

if (eax_2 == 0)
    esi_1 = *(arg1 + 0x144)
label_5d9259:
    *(arg1 + 0x13c)
    int32_t eax_11 = *(arg1 + 0x138)
    int32_t var_18 = eax_11
    int32_t eax_12 = eax_11 + *(arg1 + 0x140)
    char eax_14 = sub_5e3a60(arg1 + 0x234, &var_18)
    
    if (eax_14 == 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_14
    
    int32_t ecx_6 = eax_12 - var_18
    *(arg1 + 0x144) = esi_1
    *(arg1 + 0x140) = ecx_6
else if (eax_2 == 1)
    void* ecx = *(arg1 + 0x228)
    int32_t var_c_1 = *(ecx + 0x130)
    *(arg1 + 0x140) = *(arg1 + 0x158) + *(arg1 + 0x150) + *(ecx + 0x12c)
    int32_t var_10_1 = *(ecx + 0x12c)
    int32_t eax_10 = *(arg1 + 0x15c) + *(arg1 + 0x154) + *(ecx + 0x130)
    *(arg1 + 0x144) = eax_10
    esi_1 = eax_10
    goto label_5d9259
eax_2.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
