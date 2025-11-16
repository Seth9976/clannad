// 函数: sub_7235f0
// 地址: 0x7235f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ebx = arg2
int32_t ecx = *(arg1 + 0x38)
int32_t edx = *(arg1 + 0x2c)
char* edi = *(arg1 + 0x78)
uint32_t i_1 = *(arg1 + 0x7c)
char* eax_2 = *(arg1 + 0x6c) + ecx
int32_t var_18

if (*(arg1 + 0x6c) u<= edx - 0x106)
    var_18 = 0
else
    var_18 = *(arg1 + 0x6c) - edx + 0x106

int32_t ecx_6 = *(arg1 + 0x40)
void* esi_1 = &eax_2[0x102]
int32_t var_20 = *(arg1 + 0x34)
int32_t ecx_7
ecx_7.b = *(edi + eax_2 - 1)
char var_5 = ecx_7.b
ecx_7.b = *(edi + eax_2)
char var_6 = ecx_7.b

if (edi u>= *(arg1 + 0x8c))
    i_1 = *(arg1 + 0x7c) u>> 2

char* ecx_9 = *(arg1 + 0x74)
char* edx_3 = *(arg1 + 0x90)
char* var_28 = ecx_9

if (edx_3 u> ecx_9)
    edx_3 = ecx_9

uint32_t i

do
    ecx_9.b = var_6
    char* edx_5 = ecx + ebx
    
    if (*(edx_5 + edi) == ecx_9.b)
        ecx_9.b = var_5
        
        if (*(edx_5 + edi - 1) == ecx_9.b)
            ecx_9.b = *edx_5
            
            if (ecx_9.b == *eax_2)
                ecx_9.b = edx_5[1]
                
                if (ecx_9.b == eax_2[1])
                    void* eax_3 = &eax_2[2]
                    void* edx_6 = &edx_5[2]
                    
                    do
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 1))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 2))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 3))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 4))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 5))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 6))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        
                        if (ecx_9.b != *(edx_6 + 7))
                            break
                        
                        ecx_9.b = *(eax_3 + 1)
                        eax_3 += 1
                        edx_6 += 8
                        
                        if (ecx_9.b != *edx_6)
                            break
                    while (eax_3 u< esi_1)
                    
                    eax_2 = esi_1 - 0x102
                    
                    if (eax_3 - esi_1 + 0x102 s> edi)
                        edi = eax_3 - esi_1 + 0x102
                        *(arg1 + 0x70) = ebx
                        
                        if (eax_3 - esi_1 + 0x102 s>= edx_3)
                            break
                        
                        void* edx_7
                        edx_7.b = *(eax_3 - esi_1 + 0x102 + eax_2 - 1)
                        char* ecx_10
                        ecx_10.b = *(eax_3 - esi_1 + 0x102 + eax_2)
                        var_5 = edx_7.b
                        var_6 = ecx_10.b
    
    ebx = zx.d(*(ecx_6 + ((var_20 & ebx) << 1)))
    
    if (ebx u<= var_18)
        break
    
    i = i_1
    i_1 -= 1
while (i != 1)

if (edi u<= var_28)
    return edi

return var_28
