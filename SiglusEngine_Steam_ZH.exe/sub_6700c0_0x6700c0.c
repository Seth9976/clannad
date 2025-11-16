// 函数: sub_6700c0
// 地址: 0x6700c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** result = *arg1
void** result_1 = result
void** result_2 = result[1]

if (*(result_2 + 0xd) == 0)
    int32_t* edx_1 = arg2
    int32_t ecx = edx_1[4]
    int32_t var_8_1 = ecx
    
    do
        void* eax_1 = &result_2[4]
        int32_t* esi_1
        
        if (edx_1[5] u< 0x10)
            esi_1 = edx_1
        else
            esi_1 = *edx_1
        
        int32_t ebx = *(eax_1 + 0x10)
        
        if (*(eax_1 + 0x14) u>= 0x10)
            eax_1 = *eax_1
        
        int32_t edx_2 = ecx
        
        if (ebx u< ecx)
            edx_2 = ebx
        
        bool cond:4_1
        
        if (edx_2 != 0)
            int32_t i_1 = edx_2 - 4
            
            if (edx_2 u>= 4)
                int32_t i
                
                do
                    if (*eax_1 != *esi_1)
                        goto label_670126
                    
                    eax_1 += 4
                    esi_1 = &esi_1[1]
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            int32_t eax_3
            
            if (i_1 == 0xfffffffc)
                eax_3 = 0
            else
            label_670126:
                ecx.b = *eax_1
                char temp2_1 = *esi_1
                
                if (ecx.b != temp2_1)
                    eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_3 = 0
                else
                    ecx.b = *(eax_1 + 1)
                    char temp5_1 = *(esi_1 + 1)
                    
                    if (ecx.b != temp5_1)
                        eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp5_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_3 = 0
                    else
                        ecx.b = *(eax_1 + 2)
                        char temp6_1 = *(esi_1 + 2)
                        
                        if (ecx.b != temp6_1)
                            eax_3 = sbb.d(eax_1, eax_1, ecx.b u< temp6_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_3 = 0
                        else
                            eax_1.b = *(eax_1 + 3)
                            char temp7_1 = *(esi_1 + 3)
                            
                            if (eax_1.b == temp7_1)
                                eax_3 = 0
                            else
                                eax_3 = sbb.d(eax_1, eax_1, eax_1.b u< temp7_1) | 1
            
            ecx = var_8_1
            cond:4_1 = eax_3 s< 0
            
            if (eax_3 != 0)
                goto label_670170
            
            goto label_670163
        
    label_670163:
        
        if (ebx u< ecx)
            result_2 = result_2[2]
            result = result_1
        else
            int32_t eax_4
            eax_4.b = ebx != ecx
            cond:4_1 = eax_4 s< 0
        label_670170:
            
            if (cond:4_1)
                result_2 = result_2[2]
                result = result_1
            else
                result = result_2
                result_2 = *result_2
                result_1 = result
        
        edx_1 = arg2
    while (*(result_2 + 0xd) == 0)

return result
