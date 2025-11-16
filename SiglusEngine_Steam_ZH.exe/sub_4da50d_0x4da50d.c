// 函数: sub_4da50d
// 地址: 0x4da50d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t edx = *(arg1 + 0x44)
char* ecx_1 = zx.d(edx) + *(arg1 + 0x1c)
int32_t ebx = arg2
int32_t edi
int32_t var_20 = edi
char* result = *(arg1 + 0x40)
void* var_14 = &ecx_1[0x102]
void* eax_1
eax_1.b = *(result + ecx_1 - 1)
char var_5 = eax_1.b
eax_1.b = *(result + ecx_1)
int32_t var_c = 0x1000
char var_6 = eax_1.b
int16_t var_10

if (edx u<= 0x7efa)
    var_10 = 0
else
    var_10 = edx - 0x7efa

if (result s>= 0x102)
    var_c = 0x400

do
    uint32_t edx_2 = zx.d(ebx.w)
    char* edx_3 = edx_2 + *(arg1 + 0x1c)
    int32_t eax_2
    eax_2.b = var_6
    
    if (*(edx_3 + result) == eax_2.b)
        eax_2.b = var_5
        
        if (*(edx_3 + result - 1) == eax_2.b)
            eax_2.b = *edx_3
            
            if (eax_2.b == *ecx_1)
                eax_2.b = edx_3[1]
                
                if (eax_2.b == ecx_1[1])
                    void* edx_5 = &edx_3[2]
                    ebx.b = *edx_5
                    
                    if (ebx.b == ecx_1[2])
                        char* ecx_2 = &ecx_1[2]
                        
                        do
                            ecx_2 = &ecx_2[1]
                            void* eax_3
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 1))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 2))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 3))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 4))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 5))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 6))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            
                            if (eax_3.b != *(edx_5 + 7))
                                break
                            
                            ecx_2 = &ecx_2[1]
                            eax_3.b = *ecx_2
                            edx_5 += 8
                            
                            if (eax_3.b != *edx_5)
                                break
                        while (ecx_2 u< var_14)
                        
                        ecx_1 = var_14 - 0x102
                        
                        if (ecx_2 - var_14 + 0x102 s> result)
                            result.w = arg2.w
                            *(arg1 + 0x46) = result.w
                            result = ecx_2 - var_14 + 0x102
                            
                            if (ecx_2 - var_14 + 0x102 s>= 0x102)
                                break
                            
                            void* eax_4 = ecx_2 - var_14 + 0x102 + ecx_1
                            char* edx_13
                            edx_13.b = *(eax_4 - 1)
                            eax_4.b = *eax_4
                            var_5 = edx_13.b
                            var_6 = eax_4.b
    
    ebx.w = *(*(arg1 + 0x24) + ((edx_2 & 0x7fff) << 1))
    arg2 = ebx
    
    if (ebx.w u<= var_10)
        break
    
    var_c += 0xffff
while (var_c.w != 0)

return result
