// 函数: sub_5a7b40
// 地址: 0x5a7b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* var_c = esi
int32_t result = *(esi + 0x2c)

if (result != *(esi + 0x30))
    int32_t edx_3
    edx_3:result = muls.dp.d(0x38e38e39, *(esi + 0x30) - result)
    int32_t edx_4 = edx_3 s>> 4
    int32_t ebx_3 = (edx_4 u>> 0x1f) + edx_4
    
    if (ebx_3 s>= 2)
        int32_t i = ebx_3 - 1
        
        if (i s> 0)
            int32_t ecx_1 = i * 0x48
            int32_t var_8_1 = ecx_1
            
            do
                int32_t* edi_2 = *(esi + 0x2c) + ecx_1
                sub_58a8a0(edi_2, &edi_2[-0x12])
                sub_56b4c0(&edi_2[3], &edi_2[-0xf])
                sub_56b4c0(&edi_2[6], &edi_2[-0xc])
                result = edi_2[-9]
                i -= 1
                edi_2[9] = result
                ecx_1 = var_8_1 - 0x48
                var_8_1 = ecx_1
                *(edi_2 + 0x28) = *(edi_2 - 0x20)
                esi = var_c
                *(edi_2 + 0x38) = *(edi_2 - 0x10)
            while (i s> 0)

return result
