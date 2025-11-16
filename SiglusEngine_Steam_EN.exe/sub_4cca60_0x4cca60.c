// 函数: sub_4cca60
// 地址: 0x4cca60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
HANDLE result = __security_cookie ^ &__saved_ebp
HANDLE result_4 = result
int32_t ebx = arg4
HANDLE result_3 = arg2

if (*(arg3 + 0x2e) == 0x10)
    ebx s>>= 1

int32_t var_ca4 = ebx

if (*(arg3 + 4) == 0 && *(arg3 + 0x24) == 0xffffffff)
    void* var_cc0_1 = arg3
    result = sub_4c4d70(*(arg3 + 0x20))
    *(arg3 + 0x24) = result

while (true)
    HANDLE result_5 = *(arg3 + 0x388)
    
    if (*(arg3 + 0x3a4) s>= result_5)
        int32_t ecx_3
        
        do
            int32_t edx = *(arg3 + 0x3a0)
            
            if (edx != 0xffffffff && edx s<= 0)
                result = result_5
                *(arg3 + 0x3a4) = result
                goto label_4ccdf0
            
            ecx_3 = *(arg3 + 0x384) - result_5 + *(arg3 + 0x3a4)
            *(arg3 + 0x3a4) = ecx_3
            
            if (edx s> 0)
                result = edx - 1
                *(arg3 + 0x3a0) = result
        while (ecx_3 s>= result_5)
    
    if (ebx == 0)
        break
    
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(arg3 + 0x3a4))
    int32_t var_c98
    
    if (*(arg3 + 4) != 0)
        int32_t ecx_9 = *(arg3 + 0x4c)
        int32_t temp0_2 = divs.dp.d(edx_1:eax_2, ecx_9)
        result = *(arg3 + 0x3c)
        
        if (temp0_2 s< result)
            int32_t edx_12
            
            if (temp0_2 != result - 1)
                edx_12 = ecx_9
            else
                edx_12 = *(arg3 + 0x50)
            
            void* edi_3 = result_5 - *(arg3 + 0x3a4)
            result = *(arg3 + 0x5c) + (temp0_2 << 2)
            int32_t ecx_11 = *(arg3 + 0x10)
            
            if (edi_3 s> ebx)
                edi_3 = ebx
            
            int32_t ecx_13
            
            if (ecx_11 == neg.d(*result))
                ecx_13 = 0
                var_c98 = 0
            else
                uint32_t eax_28 = zx.d(*(arg3 + 0x2c))
                result = sub_4bbec0(eax_28, edx_12, ecx_11 + *result, eax_28.w, *(arg3 + 0x2e), 
                    *(arg3 + 0x34), *(arg3 + 0x38), mods.dp.d(edx_1:eax_2, ecx_9), edi_3, result_3, 
                    &var_c98)
                ecx_13 = var_c98
            
            ebx -= ecx_13
            var_ca4 = ebx
            
            if (*(arg3 + 0x2e) != 0x10)
                result_3 += ecx_13
                *(arg3 + 0x3a4) += ecx_13
                continue
            else
                *(arg3 + 0x3a4) += ecx_13
                result = result_3 + (ecx_13 << 1)
                result_3 = result
                continue
    else
        int32_t temp1_1 = mods.dp.d(edx_1:eax_2, *(arg3 + 0x4c))
        int32_t edi_1 = divs.dp.d(edx_1:eax_2, *(arg3 + 0x4c))
        result = *(arg3 + 0x5c) + (edi_1 << 2)
        HANDLE result_2 = result
        
        if (edi_1 s< *(arg3 + 0x3c))
            int32_t var_ca0 = 1
            uint32_t var_c94_1 = 0
            void var_c84
            int32_t* edx_3 = &var_c84
            int32_t i_2 = 0
            result = *(arg3 + 0x3c) - 1
            int16_t* var_c90 = ebx
            int32_t ebx_1 = var_ca0
            int32_t i_1 = 0
            HANDLE result_1 = result
            
            while (true)
                int32_t eax_6
                
                if (edi_1 != result)
                    int32_t* ecx_5 = *(arg3 + 0x5c) + (edi_1 << 2)
                    i_2 = i_1
                    edx_3[-1] = ecx_5[1] - *ecx_5
                    eax_6 = *(arg3 + 0x4c)
                else
                    edx_3[-1] = *(arg3 + 0x54)
                    eax_6 = *(arg3 + 0x50)
                
                edx_3[1] = eax_6
                
                if (ebx_1 != 1)
                    *edx_3 = 0
                else
                    ebx_1 = 0
                    *edx_3 = temp1_1
                
                i_2 += 1
                var_c90 += *edx_3 - edx_3[1]
                uint32_t eax_14 = var_c94_1 + edx_3[-1]
                edx_3[2] = edi_1
                edx_3 = &edx_3[4]
                var_c94_1 = eax_14
                result = result_1
                i_1 = i_2
                
                if (edi_1 == result)
                    break
                
                if (var_c90 s<= 0)
                    break
                
                if (i_2 == 0xc8)
                    break
                
                edi_1 += 1
            
            HANDLE ecx_6 = *(arg3 + 0x24)
            ebx = var_ca4
            var_c90 = nullptr
            var_ca0 = 0
            
            if (ecx_6 != 0xffffffff)
                result = sub_4c4c20(&var_c90, &var_ca0, ecx_6, &var_c90, "NWAEXPANDTMP", 
                    *(arg3 + 0x28) + *result_2, var_c94_1)
                int16_t* ecx_7 = var_c90
                int16_t* var_c94_2 = ecx_7
                
                if (ecx_7 != 0)
                    if (i_1 s> 0)
                        void var_c80
                        void* edi_2 = &var_c80
                        int32_t i
                        
                        do
                            int32_t eax_20 = *(arg3 + 0x388) - *(arg3 + 0x3a4)
                            
                            if (eax_20 s> ebx)
                                eax_20 = ebx
                            
                            int32_t eax_23
                            
                            if (ecx_7 == 0)
                                eax_23 = 0
                                var_c98 = 0
                            else
                                uint32_t eax_22 = zx.d(*(arg3 + 0x2c))
                                sub_4bbec0(eax_22, *edi_2, ecx_7, eax_22.w, *(arg3 + 0x2e), 
                                    *(arg3 + 0x34), *(arg3 + 0x38), *(edi_2 - 4), eax_20, result_3, 
                                    &var_c98)
                                eax_23 = var_c98
                                ecx_7 = var_c94_2
                            
                            ecx_7 += *(edi_2 - 8)
                            ebx -= eax_23
                            var_c94_2 = ecx_7
                            
                            if (*(arg3 + 0x2e) != 0x10)
                                result_3 += eax_23
                            else
                                result_3 += eax_23 << 1
                            
                            *(arg3 + 0x3a4) += eax_23
                            edi_2 += 0x10
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        var_ca4 = ebx
                    
                    result = sub_4d6c40(&var_ca0, &var_c90)
                    continue
label_4ccdf0:
    
    if (ebx s<= 0)
        break
    
    if (*(arg3 + 0x2e) != 0x10)
        if (ebx s> 0)
            result = nullptr
            __builtin_memset(__builtin_memset(result_3, 0, ebx u>> 2 << 2), 0, ebx & 3)
    else if (ebx s> 0)
        int32_t ecx_16
        int32_t edi_5
        edi_5, ecx_16 = __builtin_memset(result_3, 0, ebx u>> 1 << 2)
        __builtin_memset(edi_5, 0, adc.d(ecx_16, ecx_16, (ebx & 1) != 0) << 1)
        sub_5f02dd(result_4 ^ &__saved_ebp)
        return 0
    
    break

sub_5f02dd(result_4 ^ &__saved_ebp)
return result
