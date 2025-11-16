// 函数: sub_4be1f2
// 地址: 0x4be1f2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 1

int32_t eax = *arg2

if ((eax & 0xfff00000) == 0)
    return 0

int32_t edi
int32_t var_d8_1 = edi
int32_t eax_1 = eax & 0xfffff
uint32_t temp0_1 = divu.dp.d(0:(arg2[1]), eax_1)
int32_t var_8_1 = 0
int32_t var_c_1 = 0
int32_t var_1c_1 = 0
int32_t esi_2 = *arg3 & 0xfffff
uint32_t temp0_2 = divu.dp.d(0:(arg3[1]), esi_2)
int32_t edi_1 = *(arg1 + 0x88)
*(arg1 + 0x80)
int32_t var_84[0x12]
var_84[*(arg1 + 0x80)] = 0
var_84[edi_1] = 0
*(arg1 + 0x7c)
var_84[*(arg1 + 0x7c)] = 0
int32_t var_cc[0x12]
var_cc[*(arg1 + 0x80)] = 2
var_cc[edi_1] = 5
var_cc[*(arg1 + 0x7c)] = 3
int32_t result

if (temp0_2 == neg.d(temp0_1))
label_4be410:
    result = 0
else
    int32_t* var_18_1 = nullptr
    int32_t eax_11 = esi_2 << 2
    int32_t eax_12 = neg.d(esi_2 * temp0_1) << 2
    int32_t var_3c_1 = eax_12
    int32_t var_2c_1 = eax_12
    
    while (true)
        int32_t edi_3 = *(arg1 + 0x14)
        int32_t eax_15
        
        if (var_8_1 u>= temp0_1)
            eax_15 = *(eax_12 + arg3[2])
        else
            eax_15 = *(var_18_1 + arg2[2])
        
        void* ebx_3 = *(edi_3 + (eax_15 << 2))
        int32_t eax_16 = *(ebx_3 + 4)
        int32_t edx_12 = 0
        int32_t var_14_1 = 0
        
        if (var_8_1 u> 0)
            int32_t var_10_2 = 0
            int32_t var_24_1 = var_3c_1
            
            do
                int32_t* edx_13
                int32_t esi_7
                
                if (edx_12 u>= temp0_1)
                    edx_13 = arg3
                    esi_7 = var_24_1
                else
                    edx_13 = arg2
                    esi_7 = var_10_2
                
                void* esi_8 = *(edi_3 + (*(esi_7 + edx_13[2]) << 2))
                
                if (eax_16 == *(esi_8 + 4) && *(ebx_3 + 8) == *(esi_8 + 8)
                        && *(ebx_3 + 0xc) == *(esi_8 + 0xc))
                    break
                
                var_24_1 += eax_11
                var_14_1 += 1
                var_10_2 += eax_1 << 2
                edx_12 = var_14_1
            while (edx_12 u< var_8_1)
        
        if (var_14_1 == var_8_1)
            int32_t esi_9 = *(arg1 + 0x88)
            
            if (eax_16 == esi_9 && *(ebx_3 + 0xc) u> 1)
                var_c_1 += 1
            
            if (eax_16 == esi_9 && *(ebx_3 + 0xc) u> 1 && var_c_1 u> 3)
                result = 1
                break
            
            int32_t edx_21 = *(arg1 + 0x80)
            bool cond:4_1
            int32_t __saved_ebp
            
            if (eax_16 != edx_21)
                int16_t eax_21 = (*(*(*(arg1 + 0x10) + (eax_16 << 2)) + 4)).w
                
                if (eax_21.b s< 0)
                    goto label_4be410
                
                if ((eax_21:1.b & 2) == 0)
                    *(ebx_3 + 4)
                    (&__saved_ebp)[*(ebx_3 + 4) - 0x20] += 1
                    cond:4_1 = (&__saved_ebp)[*(ebx_3 + 4) - 0x20] u> var_cc[*(ebx_3 + 4)]
                else
                    var_1c_1 += 1
                    cond:4_1 = var_1c_1 u> 3
            else
                int32_t eax_19
                
                if (*(ebx_3 + 0x6c) != 3)
                    eax_19 = edx_21
                else
                    if (zx.d((*(arg1 + 0xc8)).w) == 0x101)
                        var_c_1 += 1
                    
                    if (zx.d((*(arg1 + 0xc8)).w) == 0x101 && var_c_1 u> 3)
                        result = 1
                        break
                        break
                    
                    eax_19 = esi_9
                
                (&__saved_ebp)[eax_19 - 0x20] += 1
                cond:4_1 = (&__saved_ebp)[eax_19 - 0x20] u> var_cc[eax_19]
            
            if (cond:4_1)
                result = 1
                break
        
        var_8_1 += 1
        var_18_1 = &var_18_1[eax_1]
        eax_12 = var_2c_1 + eax_11
        var_2c_1 = eax_12
        
        if (var_8_1 u>= temp0_2 + temp0_1)
            goto label_4be410

return result
