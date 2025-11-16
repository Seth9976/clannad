// 函数: sub_5afb10
// 地址: 0x5afb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_3 = edx_2 s>> 8
int32_t i_4 = (edx_3 u>> 0x1f) + edx_3
int32_t eax_1
int32_t edx_4
edx_4:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t i_3 = i_4
int32_t edx_5 = edx_4 s>> 8
uint32_t eax_3 = edx_5 u>> 0x1f
int32_t result = eax_3 + edx_5

if (eax_3 != neg.d(edx_5))
    int32_t ecx_2 = 0
    int32_t esi_1 = 0
    int32_t var_8_1 = 0
    int32_t var_c_1 = 0
    int32_t var_14_1 = 0
    
    if (i_4 s> 0)
        int32_t edx_6 = 0
        int32_t i_2 = i_4
        int32_t ebx_2 = 0
        int32_t i
        
        do
            int32_t eax_4 = *(arg1 + 0xa4)
            
            if (*(edx_6 + eax_4 + 0x2a8) != 0)
                *(edx_6 + eax_4 + 0x2b0) = ecx_2
                *(edx_6 + eax_4 + 0x2b4) = ebx_2
                ecx_2 += *(arg1 + 0x134)
                ebx_2 += *(arg1 + 0x138)
                int32_t eax_5 = var_8_1
                
                if (ecx_2 s> eax_5)
                    eax_5 = ecx_2
                
                var_8_1 = eax_5
                int32_t eax_6 = var_c_1
                
                if (ebx_2 s> eax_6)
                    eax_6 = ebx_2
                
                esi_1 += 1
                var_c_1 = eax_6
                int32_t eax_7 = *(arg1 + 0x144)
                
                if (eax_7 s> 0 && esi_1 s>= eax_7)
                    ebx_2 = 0
                    ecx_2 = *(arg1 + 0x148) + var_14_1
                    esi_1 = 0
                    var_14_1 = ecx_2
            
            edx_6 += 0x580
            i = i_2
            i_2 -= 1
        while (i != 1)
        i_4 = i_3
    
    void* eax_8 = *(arg1 + 0xa4)
    int32_t edx_9 = *(eax_8 + 0x2b8) - *(arg1 + 0x134) + var_8_1
    result = *(eax_8 + 0x2bc) - *(arg1 + 0x138) + var_c_1
    int32_t var_8_2 = edx_9
    int32_t result_1 = result
    
    if (i_4 s> 0)
        int32_t ecx_4 = 0
        int32_t var_14_2 = 0
        int32_t i_1
        
        do
            void* ebx_4 = *(arg1 + 0xa4) + ecx_4
            
            if (*(ebx_4 + 0x2a8) != 0)
                int32_t eax_11 = *(arg1 + 0x13c)
                int32_t esi_2 = 0
                int32_t ecx_5 = 0
                
                if (eax_11 == 1)
                    int32_t eax_13
                    int32_t edx_10
                    edx_10:eax_13 = sx.q(edx_9)
                    esi_2 = neg.d((eax_13 - edx_10) s>> 1)
                else if (eax_11 == 2)
                    esi_2 = neg.d(edx_9)
                
                int32_t eax_16 = *(arg1 + 0x140)
                
                if (eax_16 == 1)
                    int32_t eax_18
                    int32_t edx_11
                    edx_11:eax_18 = sx.q(result_1)
                    ecx_5 = neg.d((eax_18 - edx_11) s>> 1)
                else if (eax_16 == 2)
                    ecx_5 = neg.d(result_1)
                
                edx_9 = var_8_2
                result = *(ebx_4 + 0x2b0) + esi_2
                *(ebx_4 + 0x2b4) += ecx_5
                ecx_4 = var_14_2
                *(ebx_4 + 0x2b0) = result
            
            ecx_4 += 0x580
            i_1 = i_3
            i_3 -= 1
            var_14_2 = ecx_4
        while (i_1 != 1)

return result
