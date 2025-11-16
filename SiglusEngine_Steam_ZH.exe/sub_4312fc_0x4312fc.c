// 函数: sub_4312fc
// 地址: 0x4312fc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg2 & 0x7fffffff) != arg2)
    int32_t edx_1 = not.d(arg2)
    
    if (*edx_1 == 3 && *(edx_1 + 0x18) == 0 && *(edx_1 + 0x10) == 0xffffffff)
        int32_t eax_3 = *(*(edx_1 + 4) + 0x44)
        int32_t eax_4 = neg.d(eax_3)
        return sbb.d(eax_4, eax_4, eax_3 != 0) & edx_1
    
    return 0

int32_t ebx
int32_t var_8_1 = ebx
int32_t edi
int32_t var_10_1 = edi
int32_t result_1 = *(arg1 + 0x34c)
int32_t result

while (true)
    if (result_1 == 0)
        result = 0
        break
    
    bool cond:0_1
    
    if (arg2 != 0)
        char* esi_1 = *(result_1 + 0x20)
        
        if (esi_1 != 0)
            char* ecx_1 = arg2
            int32_t ecx_4
            
            while (true)
                ebx.b = *ecx_1
                void* eax_1
                eax_1.b = ebx.b
                char temp2_1 = *esi_1
                bool c_2 = ebx.b u< temp2_1
                
                if (ebx.b == temp2_1)
                    if (eax_1.b == 0)
                        ecx_4 = 0
                        break
                    
                    ebx.b = ecx_1[1]
                    eax_1.b = ebx.b
                    char temp5_1 = esi_1[1]
                    c_2 = ebx.b u< temp5_1
                    
                    if (ebx.b == temp5_1)
                        ecx_1 = &ecx_1[2]
                        esi_1 = &esi_1[2]
                        
                        if (eax_1.b != 0)
                            continue
                        
                        ecx_4 = 0
                        break
                
                bool c_3 = unimplemented  {sbb ecx, ecx}
                ecx_4 = sbb.d(sbb.d(ecx_1, ecx_1, c_2), 0xffffffff, c_3)
                break
            
            cond:0_1 = ecx_4 == 0
            goto label_43137c
    else
        cond:0_1 = *(result_1 + 0x20) == arg2
    label_43137c:
        
        if (cond:0_1)
            result = result_1
            break
    result_1 = *(result_1 + 0x34)

return result
