// 函数: sub_4a2b12
// 地址: 0x4a2b12
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
void* var_10 = arg1
int32_t var_8 = 0
int32_t eax = 0

while (arg3[eax] != 0xffffffff)
    var_8 += 1
    eax += 1
    
    if (eax u>= 4)
        break

if (var_8 == 0)
    return 0

int32_t* ebx_1 = arg4
int32_t edi
int32_t var_38_1 = edi

if (((*(arg1 + 0x6c)).b & 6) == 0)
    if (var_8 u> 0)
        __builtin_memset(ebx_1, 0, var_8 << 2)
    
    goto label_4a2b60

int32_t edi_8 = 1

if (var_8 u> 1)
    int32_t ecx_1 = *(arg1 + 0x14)
    
    do
        long double x87_r7_1 = fconvert.t(*(*(ecx_1 + (arg3[edi_8] << 2)) + 0x20))
        long double x87_r6_1 = fconvert.t(*(*(ecx_1 + (*arg3 << 2)) + 0x20))
        x87_r6_1 - x87_r7_1
        void* eax_8
        eax_8.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            break
        
        edi_8 += 1
    while (edi_8 u< var_8)
    
    arg1 = var_10

if (edi_8 == var_8)
    *ebx_1 = 0
    var_8 = 1

int32_t eax_9 = 0

if (var_8 u> 0)
    do
        int32_t ecx_2
        ecx_2.b = ebx_1[eax_9] == 0
        edx += ecx_2
        eax_9 += 1
    while (eax_9 u< var_8)
    
    arg1 = var_10

int32_t result

if ((*(arg1 + 0x6c) & 4) == 0 || edx == 0)
label_4a2c3c:
    int32_t eax_11 = 0
    int32_t esi_9 = 0
    
    if (var_8 u<= 0)
    label_4a2c54:
        int32_t eax_12 = 0
        
        for (int32_t i = 0; i u< 4; i += 1)
            if ((esi_9 & 1 << i.b) != 0)
                eax_12 += 1
        
        if (eax_12 + edx u<= 4)
        label_4a2b60:
            int32_t var_1c_1 = 0
            int32_t* var_14_1 = arg2
            int32_t var_2c
            
            while (true)
                int32_t var_c_1 = 0
                var_2c = *var_14_1
                void var_28
                void* edi_2 = &var_28
                void* esi_3 = &var_14_1[1]
                *edi_2 = *esi_3
                void* edi_3 = edi_2 + 4
                void* esi_4 = esi_3 + 4
                *edi_3 = *esi_4
                *(edi_3 + 4) = *(esi_4 + 4)
                
                if (var_8 u<= 0)
                label_4a2ccb:
                    int32_t eax_19 = 0
                    int32_t var_18_1 = 0
                    
                    if (var_8 u<= 0)
                        break
                    
                    int32_t* edx_5 = arg3
                    void* var_c_3 = ebx_1 - edx_5
                    
                    do
                        int32_t i_1 = 0
                        
                        if (*(var_c_3 + edx_5) == 0)
                            do
                                int32_t ecx_6 = (&var_2c)[i_1]
                                
                                if (ecx_6 != 0xffffffff)
                                    int32_t eax_21 = *(var_10 + 0x14)
                                    long double x87_r7_3 =
                                        fconvert.t(*(*(eax_21 + (arg3[eax_19] << 2)) + 0x20))
                                    ebx_1 = arg4
                                    long double x87_r6_3 =
                                        fconvert.t(*(*(eax_21 + (ecx_6 << 2)) + 0x20))
                                    x87_r6_3 - x87_r7_3
                                    void* eax_22
                                    eax_22.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                                    bool p_3 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_3))
                                        break
                                
                                i_1 += 1
                            while (i_1 u< 4)
                            
                            if (i_1 u>= 4)
                                int32_t i_2
                                
                                for (i_2 = 0; i_2 u< 4; i_2 += 1)
                                    if ((&var_2c)[i_2] == 0xffffffff)
                                        (&var_2c)[i_2] = *edx_5
                                        break
                                
                                if (i_2 == 4)
                                    break
                        
                        eax_19 = var_18_1 + 1
                        edx_5 = &edx_5[1]
                        var_18_1 = eax_19
                    while (eax_19 u< var_8)
                    
                    if (var_18_1 u>= var_8)
                        break
                else
                    do
                        int32_t i_3 = 0
                        int32_t esi_7 = ebx_1[var_c_1]
                        
                        do
                            if ((esi_7 & 1 << i_3.b) != 0)
                                int32_t __saved_ebp
                                int32_t edx_1 = (&__saved_ebp)[i_3 - 0xa]
                                
                                if (edx_1 != 0xffffffff)
                                    int32_t eax_15 = *(var_10 + 0x14)
                                    long double x87_r7_2 =
                                        fconvert.t(*(*(eax_15 + (arg3[var_c_1] << 2)) + 0x20))
                                    ebx_1 = arg4
                                    long double x87_r6_2 =
                                        fconvert.t(*(*(eax_15 + (edx_1 << 2)) + 0x20))
                                    x87_r6_2 - x87_r7_2
                                    void* eax_16
                                    eax_16.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2)
                                        break
                                else
                                    (&__saved_ebp)[i_3 - 0xa] = arg3[var_c_1]
                            
                            i_3 += 1
                        while (i_3 u< 4)
                        
                        if (i_3 u< 4)
                            break
                        
                        var_c_1 += 1
                    while (var_c_1 u< var_8)
                    
                    if (var_c_1 u>= var_8)
                        goto label_4a2ccb
                
                var_1c_1 += 1
                var_14_1 = &var_14_1[4]
            
            for (int32_t i_4 = 0; i_4 u< 4; )
                int32_t esi_11 = i_4 << 2
                int32_t eax_27 = (&var_2c)[i_4]
                
                if (eax_27 != *(&var_2c + &(var_14_1 - &var_2c)[i_4]))
                    eax_27 = sub_4a29bf(var_10, arg2, var_1c_1, i_4, eax_27)
                
                i_4 += 1
                *(&var_2c + esi_11 + arg3 - &var_2c) = eax_27
            
            result = 0
        else
        label_4a2c73:
            result = 0x80004005
    else
        while (true)
            int32_t ecx_4 = ebx_1[eax_11]
            
            if ((esi_9 & ecx_4) != 0)
                break
            
            esi_9 |= ecx_4
            eax_11 += 1
            
            if (eax_11 u>= var_8)
                goto label_4a2c54
        
    label_4a2c73_1:
        result = 0x80004005
else
    if (edx u<= 1)
        int32_t ecx_3 = 0
        
        if (var_8 u> 0)
            do
                int32_t eax_10 = ebx_1[ecx_3]
                
                if ((8 & eax_10.b) != 0)
                    goto label_4a2c73_2
                
                if (eax_10 == 0)
                    ebx_1[ecx_3] = 8
                
                ecx_3 += 1
            while (ecx_3 u< var_8)
        
        edx = 0
        goto label_4a2c3c
    
label_4a2c73_2:
    result = 0x80004005

return result
