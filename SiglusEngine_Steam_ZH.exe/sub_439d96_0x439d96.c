// 函数: sub_439d96
// 地址: 0x439d96
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* esi = arg1
int32_t edi
int32_t var_18 = edi
int32_t var_c_1 = ecx

while (*(esi + 4) != 3)
    esi = *(esi + 8)

void*** eax = sub_42cfa1(0x50)
void*** result_1
void*** result

if (eax == 0)
    result_1 = nullptr
    result = nullptr
else
    result = sub_46bee5(eax, 0, 0, 0, 0, 1, esi + 0x10)
    result_1 = result

if (result != 0)
    if (arg2 == 0)
    label_439dfa:
        void* eax_5 = result[8]
        void* esi_2 = &result[4]
        arg1 = eax_5
        
        if (eax_5 != 0)
            while (true)
                void* ebx = *(eax_5 + 8)
                
                if (ebx != 0 && *(ebx + 4) == 0xd && *(ebx + 0x10) != 0)
                    void*** eax_6 = sub_42cfa1(0x14)
                    void*** eax_7
                    
                    if (eax_6 == 0)
                        eax_7 = nullptr
                    else
                        eax_7 = sub_46b602(eax_6, 0, 0, "Types")
                    
                    *esi_2 = eax_7
                    
                    if (eax_7 == 0)
                        return nullptr
                    
                    *(*esi_2 + 8) = sub_46b5aa(*(ebx + 0x10))
                    void* esi_3 = *esi_2
                    
                    if (*(esi_3 + 8) == 0)
                        return nullptr
                    
                    eax_5 = arg1
                    esi_2 = esi_3 + 0xc
                
                void* eax_9 = *(eax_5 + 0xc)
                arg1 = eax_9
                
                if (eax_9 == 0)
                    break
                
                eax_5 = arg1
            
            result = result_1
        
        sub_4381dc(result)
        return result
    
    int32_t eax_3 = (*(*arg2 + 4))()
    result[8] = eax_3
    
    if (eax_3 != 0)
        goto label_439dfa

return nullptr
