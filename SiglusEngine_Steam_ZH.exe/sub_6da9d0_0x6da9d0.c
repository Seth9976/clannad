// 函数: sub_6da9d0
// 地址: 0x6da9d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

char var_e0[0xd8]

if ((eax_2.b & 4) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    sub_6d4690(eax_3, &var_e0, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_e0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

if (arg2 != 0 && (*(arg2 + 8) & 0x400) != 0)
    sub_6d8610(arg3, arg4)
    int32_t* eax_5 = sub_6d4840(arg3, "duplicate")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_5

int32_t eax_6 = sub_6d87a0(eax_2, arg4 + 1, arg3, 2)
char* ebx = eax_6

if (ebx != 0)
    sub_6d85d0(eax_6, ebx, arg3, arg4)
    int32_t eax_8 = sub_6d8610(arg3, 0)
    
    if (eax_8 != 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_8
    
    void* eax_9 = arg4 + ebx
    char* ecx_12 = ebx
    *eax_9 = 0
    
    if (*ebx != 0)
        do
            ecx_12 = &ecx_12[1]
        while (*ecx_12 != 0)
    
    if (eax_9 - ecx_12 s<= 0xc)
        int32_t* eax_11 = sub_6d4840(arg3, "invalid")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_11
    
    int32_t eax_10
    eax_10.b = ecx_12[1]
    uint32_t ebx_2 = zx.d(eax_10.b) << 8
    uint32_t eax_12 = zx.d(ecx_12[2])
    int32_t ebx_11
    
    if (eax_10.b s>= 0)
        ebx_11 = ((((ebx_2 + eax_12) << 8) + zx.d(ecx_12[3])) << 8) + zx.d(ecx_12[4])
    else
        ebx_11 = neg.d((not.d(((((ebx_2 + eax_12) << 8) + zx.d(ecx_12[3])) << 8) + zx.d(ecx_12[4]))
            + 1) & 0x7fffffff)
    
    uint32_t eax_14
    eax_14.b = ecx_12[5]
    uint32_t edx_8 = zx.d(eax_14.b) << 8
    uint32_t eax_16 = zx.d(ecx_12[6])
    int32_t edx_17
    
    if (eax_14.b s>= 0)
        edx_17 = ((((edx_8 + eax_16) << 8) + zx.d(ecx_12[7])) << 8) + zx.d(ecx_12[8])
    else
        edx_17 = neg.d((not.d(((((edx_8 + eax_16) << 8) + zx.d(ecx_12[7])) << 8) + zx.d(ecx_12[8]))
            + 1) & 0x7fffffff)
    
    uint32_t eax_18
    eax_18.b = ecx_12[0xa]
    int32_t var_ec_1 = edx_17
    edx_17.b = ecx_12[9]
    int32_t* ecx_16 = &ecx_12[0xb]
    int32_t* var_f0_1 = ecx_16
    
    if (edx_17.b != 0)
        if (edx_17.b != 1)
            if (edx_17.b != 2)
                if (edx_17.b != 3)
                    if (edx_17.b u>= 4)
                        sub_6d4840(arg3, "unrecognized equation type")
                        eax_18.b = eax_18.b
                        ecx_16 = var_f0_1
                else if (eax_18.b != 4)
                    goto label_6dabeb
            else if (eax_18.b != 3)
                goto label_6dabeb
        else if (eax_18.b != 3)
            goto label_6dabeb
    else if (eax_18.b != 2)
    label_6dabeb:
        int32_t* eax_20 = sub_6d4840(arg3, "invalid parameter count")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_20
    
    int32_t* esi_1 = ecx_16
    
    if (*ecx_16 != 0)
        do
            esi_1 += 1
        while (*esi_1 != 0)
    
    uint32_t eax_21 = zx.d(eax_18.b)
    int32_t eax_22 = sub_6d8360(arg3, eax_21 << 2)
    
    if (eax_22 != 0)
        uint32_t eax_23 = eax_21
        int32_t ecx_22 = 0
        
        if (eax_23 s> 0)
            do
                esi_1 += 1
                *(eax_22 + (ecx_22 << 2)) = esi_1
                
                if (esi_1 u> eax_9)
                label_6dac7a:
                    int32_t eax_25 = *(arg3 + 0x258)
                    int32_t eax_26
                    
                    if (eax_25 == 0)
                        eax_26 = _free(eax_22)
                    else
                        eax_26 = eax_25(arg3, eax_22)
                    
                    if ((*(arg3 + 0x78) & 0x100000) == 0)
                        sub_6d47a0(arg3, "invalid data")
                        noreturn
                    
                    sub_6d4690(eax_26, &var_e0, arg3, "invalid data")
                    int32_t* eax_30 = sub_6d4470(arg3, &var_e0)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_30
                
                while (*esi_1 != 0)
                    esi_1 += 1
                    
                    if (esi_1 u> eax_9)
                        goto label_6dac7a
                
                ecx_22 += 1
            while (ecx_22 s< eax_21)
            
            eax_23 = eax_21
        
        int32_t* eax_27 = zx.d(edx_17.b)
        sub_6ce1f0(eax_27, arg2, arg3, ebx, ebx_11, var_ec_1, eax_27, eax_23, var_f0_1, eax_22)
        int32_t eax_28 = *(arg3 + 0x258)
        
        if (eax_28 != 0)
            int32_t eax_29 = eax_28(arg3, eax_22)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_29
        
        eax_8 = _free(eax_22)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_8
else
    sub_6d8610(arg3, arg4)

int32_t* eax_7 = sub_6d4840(arg3, "out of memory")
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_7
