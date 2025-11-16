// 函数: sub_4dcd10
// 地址: 0x4dcd10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = *(arg1 + 0x1ac)
int32_t ebx = *(arg1 + 0x140)
void* result_2 = *(arg1 + 0x24)
int32_t var_1c = ebx

if (result_2 s> 0)
    int32_t* ecx = *(result + 0x3c)
    void* var_10_1 = result + 8
    int32_t* edx_1 = *(arg1 + 0xdc) + 0xc
    int32_t* esi_3 = *(result + 0x38) - ecx
    int32_t edi
    int32_t var_34_1 = edi
    int32_t* var_14_1 = edx_1
    int32_t* var_c_1 = ecx
    int32_t* var_24_1 = esi_3
    void* result_1 = result_2
    
    while (true)
        int32_t i_1 = divs.dp.d(sx.q(edx_1[6] * *edx_1), ebx)
        int32_t* edx_3 = *(esi_3 + ecx)
        int32_t edi_1 = *var_10_1
        int32_t* ecx_1 = *ecx
        int32_t* var_8_1 = edx_3
        int32_t esi_6 = (ebx + 2) * i_1
        
        if (esi_6 s> 0)
            int32_t* edx_4 = ecx_1
            int32_t var_18_1 = esi_6
            bool cond:1_1
            
            do
                int32_t esi_8 = *(edi_1 - ecx_1 + edx_4)
                *edx_4 = esi_8
                *(var_8_1 - ecx_1 + edx_4) = esi_8
                edx_4 = &edx_4[1]
                cond:1_1 = var_18_1 != 1
                var_18_1 -= 1
            while (cond:1_1)
            edx_3 = var_8_1
            ebx = var_1c
        
        if (i_1 * 2 s> 0)
            int32_t* esi_12 = &ecx_1[i_1 * ebx]
            int32_t* edx_7 = edi_1 + (((ebx - 2) * i_1) << 2)
            int32_t var_18_2 = i_1 * 2
            bool cond:3_1
            
            do
                *(ecx_1 - edi_1 + edx_7) = *(esi_12 + edi_1 - ecx_1)
                *esi_12 = *edx_7
                edx_7 = &edx_7[1]
                esi_12 = &esi_12[1]
                cond:3_1 = var_18_2 != 1
                var_18_2 -= 1
            while (cond:3_1)
            edx_3 = var_8_1
            ebx = var_1c
        
        if (i_1 s> 0)
            int32_t* ecx_5 = edx_3 - (i_1 << 2)
            int32_t i
            
            do
                *ecx_5 = *edx_3
                ecx_5 = &ecx_5[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result = result_1 - 1
        bool cond:2_1 = result_1 != 1
        var_c_1 = &var_c_1[1]
        var_10_1 += 4
        var_14_1 = &var_14_1[0x15]
        result_1 = result
        
        if (not(cond:2_1))
            break
        
        esi_3 = var_24_1
        ecx = var_c_1
        edx_1 = var_14_1

return result
