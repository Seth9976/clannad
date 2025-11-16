// 函数: sub_498872
// 地址: 0x498872
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_1 = *(arg1 + 0x74)
int32_t esi = *(arg1 + 0x64)
char* var_10 = *(arg1 + 0x88)
int32_t eax_2 = *(arg1 + 0x24)
char* edx_1 = *(arg1 + 0x30) + esi
int32_t edi
int32_t var_28 = edi
char* edi_1 = *(arg1 + 0x70)
int32_t var_14

if (esi u<= eax_2 - 0x106)
    var_14 = 0
else
    var_14 = esi - eax_2 + 0x106

void* var_18 = &edx_1[0x102]
void* eax_3
eax_3.b = *(edi_1 + edx_1 - 1)
char var_5 = eax_3.b
eax_3.b = *(edi_1 + edx_1)
char var_6 = eax_3.b

if (edi_1 u>= *(arg1 + 0x84))
    i_1 u>>= 2

char* eax_4 = *(arg1 + 0x6c)

if (var_10 u> eax_4)
    var_10 = eax_4

uint32_t eax_5 = arg2
uint32_t i

do
    char* esi_4 = *(arg1 + 0x30) + eax_5
    eax_5.b = var_6
    
    if (*(esi_4 + edi_1) == eax_5.b)
        eax_5.b = var_5
        
        if (*(esi_4 + edi_1 - 1) == eax_5.b)
            eax_5.b = *esi_4
            
            if (eax_5.b == *edx_1)
                eax_5.b = esi_4[1]
                
                if (eax_5.b == edx_1[1])
                    void* edx_3 = &edx_1[2]
                    void* esi_6 = &esi_4[2]
                    
                    do
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 1))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 2))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 3))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 4))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 5))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 6))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        
                        if (eax_5.b != *(esi_6 + 7))
                            break
                        
                        edx_3 += 1
                        eax_5.b = *edx_3
                        esi_6 += 8
                        
                        if (eax_5.b != *esi_6)
                            break
                    while (edx_3 u< var_18)
                    
                    edx_1 = var_18 - 0x102
                    
                    if (edx_3 - var_18 + 0x102 s> edi_1)
                        *(arg1 + 0x68) = arg2
                        edi_1 = edx_3 - var_18 + 0x102
                        
                        if (edx_3 - var_18 + 0x102 s>= var_10)
                            break
                        
                        void* esi_15 = edx_3 - var_18 + 0x102 + edx_1
                        void* eax_8
                        eax_8.b = *(esi_15 - 1)
                        var_5 = eax_8.b
                        eax_8.b = *esi_15
                        var_6 = eax_8.b
    
    eax_5 = zx.d(*(*(arg1 + 0x38) + ((*(arg1 + 0x2c) & arg2) << 1)))
    arg2 = eax_5
    
    if (eax_5 u<= var_14)
        break
    
    i = i_1
    i_1 -= 1
while (i != 1)

if (edi_1 u> eax_4)
    return eax_4

return edi_1
