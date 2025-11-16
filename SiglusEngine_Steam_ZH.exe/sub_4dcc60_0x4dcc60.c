// 函数: sub_4dcc60
// 地址: 0x4dcc60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *(arg1 + 0x1ac)
int32_t edi
int32_t var_1c = edi
int32_t edi_1 = *(arg1 + 0x140)
int32_t eax_1 = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 3)
int32_t ecx_2 = *(arg1 + 0x24)
*(ebx + 0x38) = eax_1
void* result = *(arg1 + 0xdc)
*(ebx + 0x3c) = eax_1 + (ecx_2 << 2)
int32_t ebx_1 = 0

if (ecx_2 s> 0)
    int32_t* ecx_3 = result + 0xc
    int32_t* var_8_1 = ecx_3
    
    while (true)
        int32_t temp0_1 = divs.dp.d(sx.q(ecx_3[6] * *ecx_3), *(arg1 + 0x140))
        *(arg1 + 0x140)
        int32_t edi_4 = (edi_1 + 4) * temp0_1
        int32_t eax_8 = (**(arg1 + 4))(arg1, 1, edi_4 << 3) + (temp0_1 << 2)
        int32_t ecx_6 = *(ebx + 0x3c)
        *(*(ebx + 0x38) + (ebx_1 << 2)) = eax_8
        *(ecx_6 + (ebx_1 << 2)) = eax_8 + (edi_4 << 2)
        result = *(arg1 + 0x24)
        ebx_1 += 1
        var_8_1 = &var_8_1[0x15]
        
        if (ebx_1 s>= result)
            break
        
        ecx_3 = var_8_1

return result
