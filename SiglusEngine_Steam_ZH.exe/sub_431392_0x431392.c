// 函数: sub_431392
// 地址: 0x431392
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg2 & 0x7fffffff) != arg2)
    int32_t edx_1 = not.d(arg2)
    
    if (*edx_1 == 2)
        return *(edx_1 + 4)
    
    return nullptr

int32_t ebx
int32_t var_8_1 = ebx
int32_t edi
int32_t var_10_1 = edi
void* result_1 = *(arg1 + 0x350)
void* result

while (true)
    if (result_1 == 0)
        result = nullptr
        break
    
    bool cond:0_1
    
    if (arg2 != 0)
        char* esi_1 = *(result_1 + 0x20)
        
        if (esi_1 != 0)
            char* ecx = arg2
            void* eax_1
            
            while (true)
                ebx.b = *ecx
                eax_1.b = ebx.b
                char temp1_1 = *esi_1
                bool c_1 = ebx.b u< temp1_1
                
                if (ebx.b == temp1_1)
                    if (eax_1.b == 0)
                        eax_1 = nullptr
                        break
                    
                    ebx.b = ecx[1]
                    eax_1.b = ebx.b
                    char temp4_1 = esi_1[1]
                    c_1 = ebx.b u< temp4_1
                    
                    if (ebx.b == temp4_1)
                        ecx = &ecx[2]
                        esi_1 = &esi_1[2]
                        
                        if (eax_1.b != 0)
                            continue
                        
                        eax_1 = nullptr
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_1 = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
                break
            
            cond:0_1 = eax_1 == 0
            goto label_4313fd
    else
        cond:0_1 = *(result_1 + 0x20) == arg2
    label_4313fd:
        
        if (cond:0_1)
            result = result_1
            break
    result_1 = *(result_1 + 0x28)

return result
