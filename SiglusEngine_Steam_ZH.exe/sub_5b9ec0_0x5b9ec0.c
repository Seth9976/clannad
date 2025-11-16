// 函数: sub_5b9ec0
// 地址: 0x5b9ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_9 = data_bac46c
HWND result
int32_t edx
edx:result = muls.dp.d(0x30c30c31, *(eax_9 + 0xa8) - *(eax_9 + 0xa4))
int32_t edx_1 = edx s>> 6
uint32_t edi_1 = edx_1 u>> 0x1f
int32_t edi_2 = edi_1 + edx_1

if (edi_1 != neg.d(edx_1))
    result = GetFocus()
    HWND i = result
    
    if (i != 0)
        int32_t esi_1 = 0
        
        if (edi_2 s> 0)
            int32_t ebx_1 = *(data_bac46c + 0xa4)
            result = ebx_1 + 0xc0
            
            while (result->unused != i)
                esi_1 += 1
                result = &result[0x54]
                
                if (esi_1 s>= edi_2)
                    return result
            
            if (esi_1 != 0xffffffff)
                int32_t eax_2
                int32_t edx_2
                edx_2:eax_2 = sx.q(edi_2 - 1 + esi_1)
                result = divs.dp.d(edx_2:eax_2, edi_2)
                int32_t edx_3 = mods.dp.d(edx_2:eax_2, edi_2)
                
                if (edx_3 != esi_1)
                    int32_t eax_6
                    int32_t edx_4
                    
                    do
                        if (*(edx_3 * 0x150 + ebx_1 + 0xa0) != 0)
                            return SetFocus(*(edx_3 * 0x150 + ebx_1 + 0xc0))
                        
                        edx_4:eax_6 = sx.q(edi_2 - 1 + edx_3)
                        edx_3 = mods.dp.d(edx_4:eax_6, edi_2)
                    while (edx_3 != esi_1)
                    
                    return divs.dp.d(edx_4:eax_6, edi_2)

return result
