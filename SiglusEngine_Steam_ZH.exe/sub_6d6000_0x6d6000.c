// 函数: sub_6d6000
// 地址: 0x6d6000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg3
char* edx

if (arg6 == 3)
    if (arg5 s> 0)
        uint32_t eax_3 = zx.d(*(esi + 0x140))
        
        if (arg5 s<= eax_3)
            int32_t eax_4 = sub_6d4c10(eax_3, 0x74524e53, esi, arg2, arg5)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_4
    
    edx = "Invalid number of transparent colors specified"
    arg3 = esi
    goto label_6d6192

uint8_t var_10

if (arg6 == 0)
    arg3.b = *(esi + 0x150)
    uint32_t edx_1 = zx.d(*(arg4 + 8))
    int32_t eax_6 = 1 << arg3.b
    arg3 = esi
    
    if (edx_1 s>= eax_6)
        edx = "Ignoring attempt to write tRNS chunk out-of-range for bit_depth"
        goto label_6d6192
    
    char var_f_1 = edx_1.b
    uint32_t eax_8 = edx_1 u>> 8
    var_10 = eax_8.b
    sub_6d4aa0(eax_8, 0x74524e53, arg3, 2)
    int32_t eax_9 = *(esi + 0x58)
    
    if (eax_9 != 0)
        sub_6caa70(eax_9(esi, &var_10, 2), &var_10, esi, 2)
        int32_t eax_11 = sub_6d4bb0(esi)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_11
    
    edx = "Call to NULL write function"
    arg3 = esi
else if (arg6 != 2)
    edx = "Can't write tRNS with an alpha channel"
label_6d6192:
    
    if ((*(esi + 0x78) & 0x200000) != 0)
        int32_t* eax_19 = sub_6d4470(arg3, edx)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_19
else
    uint32_t eax_12 = zx.d(*(arg4 + 2))
    char var_f_2 = eax_12.b
    uint32_t eax_13 = zx.d(*(arg4 + 4))
    char var_d_1 = eax_13.b
    uint32_t eax_14 = zx.d(*(arg4 + 6))
    uint8_t edx_4 = (eax_12 u>> 8).b
    uint8_t ebx_2 = (eax_13 u>> 8).b
    uint8_t ecx_10 = (eax_14 u>> 8).b
    bool cond:0_1 = *(esi + 0x150) != 8
    var_10 = edx_4
    uint8_t var_e_1 = ebx_2
    uint8_t var_c_1 = ecx_10
    char var_b_1 = eax_14.b
    
    if (cond:0_1 || (ecx_10 | ebx_2 | edx_4) == 0)
        sub_6d4aa0(eax_14, 0x74524e53, esi, 6)
        int32_t eax_16 = *(esi + 0x58)
        
        if (eax_16 != 0)
            sub_6caa70(eax_16(esi, &var_10, 6), &var_10, esi, 6)
            int32_t eax_18 = sub_6d4bb0(esi)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_18
        
        edx = "Call to NULL write function"
        arg3 = esi
    else
        edx = "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8"
        arg3 = esi
        
        if ((*(esi + 0x78) & 0x200000) != 0)
            int32_t* eax_15 =
                sub_6d4470(arg3, "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8")
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_15
sub_6d42e0(arg3, edx)
noreturn
