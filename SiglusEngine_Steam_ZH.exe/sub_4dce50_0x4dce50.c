// 函数: sub_4dce50
// 地址: 0x4dce50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x140)
void* edx = *(arg1 + 0x1ac)
int32_t result = *(arg1 + 0x24)
int32_t var_20 = ecx

if (result s> 0)
    int32_t edi
    int32_t var_2c_1 = edi
    int32_t* edi_1 = *(edx + 0x3c)
    int32_t* ebx_1 = *(arg1 + 0xdc) + 0xc
    int32_t* esi_2 = *(edx + 0x38) - edi_1
    int32_t* var_10_1 = ebx_1
    int32_t* var_c_1 = edi_1
    int32_t* var_18_1 = esi_2
    int32_t result_1 = result
    
    while (true)
        int32_t temp0_1 = divs.dp.d(sx.q(ebx_1[6] * *ebx_1), ecx)
        int32_t* esi_3 = *edi_1
        
        if (temp0_1 s> 0)
            int32_t* edx_8 = esi_3 - (temp0_1 << 2)
            int32_t* edi_3 = &esi_3[(ecx + 1) * temp0_1]
            int32_t var_8_2 = temp0_1
            int32_t* eax_4 = &esi_3[(ecx + 2) * temp0_1]
            int32_t* ecx_4 = *(esi_2 + edi_1) - esi_3
            bool cond:2_1
            
            do
                *(ecx_4 + edx_8) = *(ecx_4 + edi_3)
                *edx_8 = *edi_3
                *(ecx_4 + eax_4) = *(ecx_4 + esi_3)
                *eax_4 = *esi_3
                edi_3 = &edi_3[1]
                edx_8 = &edx_8[1]
                esi_3 = &esi_3[1]
                eax_4 = &eax_4[1]
                cond:2_1 = var_8_2 != 1
                var_8_2 -= 1
            while (cond:2_1)
            ecx = var_20
            ebx_1 = var_10_1
            edi_1 = var_c_1
        
        edi_1 = &edi_1[1]
        ebx_1 = &ebx_1[0x15]
        result = result_1 - 1
        bool cond:1_1 = result_1 != 1
        var_c_1 = edi_1
        var_10_1 = ebx_1
        result_1 = result
        
        if (not(cond:1_1))
            break
        
        esi_2 = var_18_1

return result
