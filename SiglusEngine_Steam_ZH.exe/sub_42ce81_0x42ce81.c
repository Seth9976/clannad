// 函数: sub_42ce81
// 地址: 0x42ce81
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t* esi = *(arg1 + (sub_42cbde(arg2) << 2) + 0x6c)

while (true)
    if (esi != 0)
        char* eax_1 = *esi
        char* edi_1 = arg2
        int32_t eax_4
        
        while (true)
            char edx_1 = *edi_1
            char temp1_1 = *eax_1
            bool c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                if (edx_1 == 0)
                    eax_4 = 0
                    break
                
                edx_1 = edi_1[1]
                char temp5_1 = eax_1[1]
                c_1 = edx_1 u< temp5_1
                
                if (edx_1 == temp5_1)
                    edi_1 = &edi_1[2]
                    eax_1 = &eax_1[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    eax_4 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_4 = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
            break
        
        if (eax_4 s>= 0)
            if (eax_4 == 0)
                break
            
            esi = esi[3]
            continue
    
    return 0

if (esi[4] != 0)
    return 1

void* i = esi[2]
esi[4] = 1

for (; i != 0; i = *(i + 0xc))
    if (*(i + 0x10) == 9 && sub_42ce81(*(i + 0x18)) != 0)
        break

esi[4] = 0
int32_t result
result.b = i != 0
return result
