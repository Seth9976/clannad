// 函数: sub_4bdcfe
// 地址: 0x4bdcfe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 1

int32_t eax = *arg2
int32_t esi_2 = eax & 0xfff00000

if (esi_2 == 0 || esi_2 == 0x20700000)
    return 0

int32_t eax_1 = eax & 0xfffff
uint32_t temp0_1 = divu.dp.d(0:(arg2[1]), eax_1)
int32_t edi
int32_t var_bc_1 = edi
int32_t var_b0[0x12]
int32_t var_10_1
int32_t var_8_1
int32_t ebx_1

if (temp0_1 u> 1)
    int32_t edx_3 = *(arg1 + 0x88)
    int32_t esi_3 = *(arg1 + 0x7c)
    int32_t edi_1 = *(arg1 + 0x94)
    var_8_1 = 0
    *(arg1 + 0x80)
    int32_t var_68[0x12]
    var_68[*(arg1 + 0x80)] = 0
    var_68[edx_3] = 0
    var_68[esi_3] = 0
    var_68[edi_1] = 0
    var_b0[*(arg1 + 0x80)] = 2
    var_b0[edx_3] = 3
    var_b0[esi_3] = 2
    ebx_1 = 0
    var_b0[edi_1] = 1
    var_10_1 = 0

int32_t result

if (temp0_1 u<= 1 || temp0_1 u<= 0)
label_4bdf47:
    result = 0
else
    int32_t* eax_7 = arg2[2]
    int32_t* var_20_1 = eax_7
    int32_t* var_14_1 = eax_7
    
    while (true)
        void* edx_8 = *(*(arg1 + 0x14) + (*eax_7 << 2))
        arg2 = nullptr
        int32_t edi_3 = *(edx_8 + 4)
        
        if (ebx_1 u> 0)
            int32_t* eax_9 = var_20_1
            int32_t* var_c_2 = eax_9
            
            do
                void* eax_11 = *(*(arg1 + 0x14) + (*eax_9 << 2))
                
                if (edi_3 == *(eax_11 + 4) && *(edx_8 + 8) == *(eax_11 + 8)
                        && *(edx_8 + 0xc) == *(eax_11 + 0xc))
                    int32_t esi_8 = *(arg1 + 0x10)
                    
                    if ((*(*(esi_8 + (edi_3 << 2)) + 5) & 1) == 0)
                        break
                    
                    if ((*(*(esi_8 + (*(eax_11 + 4) << 2)) + 5) & 1) == 0)
                        break
                    
                    long double x87_r7_1 = fconvert.t(*(eax_11 + 0x20))
                    long double x87_r6_1 = fconvert.t(*(edx_8 + 0x20))
                    x87_r6_1 - x87_r7_1
                    eax_11.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_1))
                        break
                
                arg2 += 1
                eax_9 = &var_c_2[eax_1]
                var_c_2 = eax_9
            while (arg2 u< var_10_1)
        
        if (arg2 == var_10_1)
            int32_t eax_13 = *(arg1 + 0x80)
            
            if (edi_3 != eax_13)
                int16_t eax_17 = (*(*(*(arg1 + 0x10) + (edi_3 << 2)) + 4)).w
                
                if ((eax_17:1.b & 2) == 0)
                    if (eax_17.b s>= 0)
                        eax_13 = edi_3
                    else
                        eax_13 = *(arg1 + 0x94)
                else if (eax_17.b s< 0)
                    eax_13 = *(arg1 + 0x94)
                else
                    eax_13 = *(arg1 + 0x7c)
            else if (*(edx_8 + 0x6c) == 3)
                if (zx.d((*(arg1 + 0xc8)).w) == 0x101)
                    var_8_1 += 1
                
                if (zx.d((*(arg1 + 0xc8)).w) == 0x101 && var_8_1 u> 2 && arg3 == 0)
                    result = 1
                    break
                    break
                
                eax_13 = *(arg1 + 0x88)
            
            int32_t edx_9 = *(edx_8 + 0x48)
            
            if (edx_9 != 0xffffffff)
                int32_t esi_12 = *(arg1 + 0x88)
                
                if (edi_3 == esi_12 && zx.d((*(arg1 + 0xc8)).w) == 0x101)
                    int32_t* eax_19 = *(*(arg1 + 0x18) + (edx_9 << 2))
                    
                    if (eax_19 != 0)
                        int32_t eax_21 = *eax_19 & 0xfff00000
                        
                        if (eax_21 == 0x60f00000 || eax_21 == 0x60500000 || eax_21 == 0x60a00000
                                || eax_21 == 0x60000000)
                            var_8_1 += 1
                            
                            if (var_8_1 u> 2 && arg3 == 0)
                                result = 1
                                break
                                break
                    
                    eax_13 = esi_12
            
            if (eax_13 u< 0x12)
                int32_t __saved_ebp
                (&__saved_ebp)[eax_13 - 0x19] += 1
                
                if ((&__saved_ebp)[eax_13 - 0x19] u> var_b0[eax_13])
                    if (arg3 != 0)
                        *arg3 = var_10_1
                    
                    result = 1
                    break
        
        eax_7 = &var_14_1[eax_1]
        ebx_1 = var_10_1 + 1
        var_10_1 = ebx_1
        var_14_1 = eax_7
        
        if (ebx_1 u>= temp0_1)
            goto label_4bdf47

return result
