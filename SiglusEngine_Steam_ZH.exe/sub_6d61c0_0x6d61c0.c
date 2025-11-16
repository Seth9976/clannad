// 函数: sub_6d61c0
// 地址: 0x6d61c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg3
uint8_t var_10

if (arg4 == 3)
    int16_t ecx = *(esi + 0x140)
    
    if ((ecx != 0 || (*(esi + 0x248) & 1) == 0) && zx.w(*arg2) u>= ecx)
        int32_t* eax_3 = sub_6d4470(esi, "Invalid background palette index")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    uint32_t eax_2
    eax_2.b = *arg2
    var_10 = eax_2.b
    sub_6d4aa0(eax_2, 0x624b4744, esi, 1)
    int32_t eax_4 = *(esi + 0x58)
    
    if (eax_4 != 0)
        sub_6caa70(eax_4(esi, &var_10, 1), &var_10, esi, 1)
        int32_t eax_6 = sub_6d4bb0(esi)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_6
else if ((arg4.b & 2) == 0)
    arg3.b = *(esi + 0x150)
    uint32_t edx_2 = zx.d(*(arg2 + 8))
    
    if (edx_2 s>= 1 << arg3.b)
        int32_t* eax_15 =
            sub_6d4470(esi, "Ignoring attempt to write bKGD chunk out-of-range for bit_depth")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_15
    
    char var_f_2 = edx_2.b
    uint32_t eax_17 = edx_2 u>> 8
    var_10 = eax_17.b
    sub_6d4aa0(eax_17, 0x624b4744, esi, 2)
    int32_t eax_18 = *(esi + 0x58)
    
    if (eax_18 != 0)
        sub_6caa70(eax_18(esi, &var_10, 2), &var_10, esi, 2)
        int32_t eax_20 = sub_6d4bb0(esi)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_20
else
    uint32_t eax_7 = zx.d(*(arg2 + 2))
    char var_f_1 = eax_7.b
    uint32_t eax_8 = zx.d(*(arg2 + 4))
    char var_d_1 = eax_8.b
    uint32_t eax_9 = zx.d(*(arg2 + 6))
    uint8_t ecx_10 = (eax_8 u>> 8).b
    uint8_t var_e_1 = ecx_10
    uint8_t ebx_2 = (eax_7 u>> 8).b
    uint8_t ecx_12 = (eax_9 u>> 8).b
    bool cond:0_1 = *(esi + 0x150) != 8
    var_10 = ebx_2
    uint8_t var_c_1 = ecx_12
    char var_b_1 = eax_9.b
    
    if (not(cond:0_1) && (ecx_12 | ecx_10 | ebx_2) != 0)
        int32_t* eax_10 =
            sub_6d4470(esi, "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_10
    
    sub_6d4aa0(eax_9, 0x624b4744, esi, 6)
    int32_t eax_11 = *(esi + 0x58)
    
    if (eax_11 != 0)
        sub_6caa70(eax_11(esi, &var_10, 6), &var_10, esi, 6)
        int32_t eax_13 = sub_6d4bb0(esi)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_13
sub_6d42e0(esi, "Call to NULL write function")
noreturn
