// 函数: sub_4e2f19
// 地址: 0x4e2f19
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[1]
int32_t i_1 = 0
int32_t ebx = *arg1
int32_t* eax = arg1[2]
int32_t ecx_1 = *eax
int32_t ecx_2 = eax[1]
int32_t ecx_3 = eax[2]
int32_t i_4 = eax[4]
int32_t edi
int32_t var_34 = edi
__builtin_memset(arg2 + 0xb34, 0, 0x20)
*(ebx + (*(arg2 + (*(arg2 + 0x144c) << 2) + 0xb54) << 2) + 2) = 0
int32_t result = *(arg2 + 0x144c) + 1

if (result s< 0x23d)
    void* var_18_1 = arg2 + (result << 2) + 0xb54
    int32_t i_3 = 0x23d - result
    result = 0x23d + 0
    int32_t i
    
    do
        int32_t esi_2 = *var_18_1
        int32_t ecx_9 = esi_2 << 2
        int32_t i_5 = zx.d(*(ebx + (zx.d(*(ecx_9 + ebx + 2)) << 2) + 2)) + 1
        
        if (i_5 s> i_4)
            i_5 = i_4
            i_1 += 1
        
        *(ecx_9 + ebx + 2) = i_5.w
        
        if (esi_2 s<= ecx)
            *(arg2 + (i_5 << 1) + 0xb34) += 1
            int32_t var_14_1 = 0
            
            if (esi_2 s>= ecx_3)
                var_14_1 = *(ecx_2 + ((esi_2 - ecx_3) << 2))
            
            uint32_t edi_4 = zx.d(*(ecx_9 + ebx))
            *(arg2 + 0x16a0) += (var_14_1 + i_5) * edi_4
            
            if (ecx_1 != 0)
                *(arg2 + 0x16a4) += (zx.d(*(ecx_9 + ecx_1 + 2)) + var_14_1) * edi_4
        
        var_18_1 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (i_1 != 0)
        do
            int32_t ecx_18 = i_4 - 1
            void* edi_5 = arg2 + (ecx_18 << 1) + 0xb34
            
            while (*edi_5 == 0)
                ecx_18 -= 1
                edi_5 -= 2
            
            *(arg2 + (ecx_18 << 1) + 0xb34) -= 1
            i_1 -= 2
            *(arg2 + (ecx_18 << 1) + 0xb36) += 2
            *(arg2 + (i_4 << 1) + 0xb34) -= 1
        while (i_1 s> 0)
        
        int32_t i_2 = i_4
        
        if (i_4 != 0)
            void* var_14_2 = arg2 + (i_4 << 1) + 0xb34
            
            do
                uint32_t j_1 = zx.d(*var_14_2)
                uint32_t j = j_1
                
                if (j_1 != 0)
                    void* esi_11 = arg2 + (result << 2) + 0xb54
                    
                    do
                        esi_11 -= 4
                        int32_t ecx_22 = *esi_11
                        result -= 1
                        
                        if (ecx_22 s<= ecx)
                            int16_t* ecx_23 = ebx + (ecx_22 << 2)
                            uint32_t esi_12 = zx.d(ecx_23[1])
                            
                            if (esi_12 != i_2)
                                uint32_t esi_13
                                esi_13.w = i_2.w
                                *(arg2 + 0x16a0) += (i_2 - esi_12) * zx.d(*ecx_23)
                                ecx_23[1] = esi_13.w
                            
                            j -= 1
                    while (j != 0)
                
                i_2 -= 1
                var_14_2 -= 2
            while (i_2 != 0)

return result
