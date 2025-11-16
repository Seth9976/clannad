// 函数: __fputwc_nolock
// 地址: 0x75c061
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* result
int32_t* ecx
int32_t edx

if ((arg2[3].b & 0x40) != 0)
label_75c1b7:
    int32_t temp0_1 = arg2[1]
    arg2[1] -= 2
    result = arg1
    
    if (temp0_1 - 2 s< 0)
        uint32_t eax_22 = zx.d(result.w)
        result = sub_75f00a(eax_22, edx, ecx, eax_22.w, arg2)
    else
        **arg2 = result.w
        *arg2 += 2
else
    int32_t eax_2
    eax_2, edx = __fileno(arg2)
    void* ebx_1 = &data_b4ce70
    ecx = arg2
    int32_t eax_3
    
    if (eax_2 != 0xffffffff)
        eax_3, edx = __fileno(arg2)
        ecx = arg2
    
    void* eax_8
    
    if (eax_2 == 0xffffffff || eax_3 == 0xfffffffe)
        eax_8 = &data_b4ce70
    else
        int32_t esi_2 = __fileno(arg2) s>> 5
        int32_t eax_5
        eax_5, edx = __fileno(arg2)
        eax_8 = ((eax_5 & 0x1f) << 6) + (&data_b95720)[esi_2]
        ecx = arg2
    
    eax_8.b = *(eax_8 + 0x24)
    eax_8.b &= 0x7f
    
    if (eax_8.b == 2)
        goto label_75c1b7
    
    int32_t eax_9
    eax_9, edx = __fileno(arg2)
    ecx = arg2
    int32_t eax_10
    
    if (eax_9 != 0xffffffff)
        eax_10, edx = __fileno(arg2)
        ecx = arg2
    
    void* eax_15
    
    if (eax_9 == 0xffffffff || eax_10 == 0xfffffffe)
        eax_15 = &data_b4ce70
    else
        int32_t esi_4 = __fileno(arg2) s>> 5
        int32_t eax_12
        eax_12, edx = __fileno(arg2)
        eax_15 = ((eax_12 & 0x1f) << 6) + (&data_b95720)[esi_4]
        ecx = arg2
    
    eax_15.b = *(eax_15 + 0x24)
    eax_15.b &= 0x7f
    
    if (eax_15.b == 1)
        goto label_75c1b7
    
    int32_t eax_16
    eax_16, edx = __fileno(arg2)
    ecx = arg2
    
    if (eax_16 != 0xffffffff)
        int32_t eax_17
        eax_17, edx = __fileno(arg2)
        ecx = arg2
        
        if (eax_17 != 0xfffffffe)
            int32_t esi_6 = __fileno(arg2) s>> 5
            int32_t eax_19
            eax_19, edx = __fileno(arg2)
            ebx_1 = ((eax_19 & 0x1f) << 6) + (&data_b95720)[esi_6]
            ecx = arg2
    
    if ((*(ebx_1 + 4) & 0x80) == 0)
        goto label_75c1b7
    
    int32_t var_14
    char var_10[0x8]
    
    if (_wctomb_s(&var_14, &var_10, 5, arg1) == 0)
        int32_t esi_7 = 0
        
        if (var_14 s> 0)
            do
                int32_t temp1_1 = arg2[1]
                arg2[1] -= 1
                int32_t* ecx_2
                
                if (temp1_1 - 1 s< 0)
                    int32_t* var_24_11 = arg2
                    ecx_2 = sub_74ddff(sx.d(var_10[esi_7]))
                else
                    result.b = var_10[esi_7]
                    **arg2 = result.b
                    char* eax_20 = *arg2
                    ecx_2 = zx.d(*eax_20)
                    *arg2 = &eax_20[1]
                
                if (ecx_2 == 0xffffffff)
                    goto label_75c171
                
                esi_7 += 1
            while (esi_7 s< var_14)
        
        result.w = arg1.w
    else
    label_75c171:
        result = 0xffff
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
