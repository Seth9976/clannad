// 函数: sub_734710
// 地址: 0x734710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *(arg1 + 0x1c0)
int32_t edx = *(arg1 + 0x12c)
void* var_74 = ebx
int32_t ecx = *(ebx + 0x18)
int32_t edx_1 = *(ebx + 0x28)
int32_t j_3 = *(arg1 + 0x5c)
int32_t* eax_1 = *(arg1 + 0x74)
int32_t j_2 = j_3
int32_t edx_2 = *eax_1
int32_t edx_3 = eax_1[1]
int32_t* result = eax_1[2]
int32_t* result_1 = result

if (arg4 s> 0)
    result = arg3
    int32_t* edx_5 = arg2 - result
    arg2 = edx_5
    int32_t i
    
    do
        char* edx_6 = *(edx_5 + result)
        char* esi_1 = *result
        char* var_c_1 = edx_6
        char* var_10_1 = esi_1
        int32_t var_40_1
        void* var_1c_1
        int16_t* esi_4
        
        if (*(ebx + 0x24) == 0)
            esi_4 = *(ebx + 0x20)
            var_40_1 = 1
            var_1c_1 = 3
            *(ebx + 0x24) = 1
        else
            int32_t eax_2 = *(ebx + 0x20)
            var_40_1 = 0xffffffff
            var_1c_1 = 0xfffffffd
            *(ebx + 0x24) = 0
            var_10_1 = esi_1 - 1 + j_3
            var_c_1 = &edx_6[0xfffffffd + j_3 * 3]
            esi_4 = eax_2 + ((j_3 * 3 + 3) << 1)
        
        uint32_t edi_1 = 0
        int16_t var_3c_1 = 0
        uint32_t ebx_1 = 0
        int16_t var_38_1 = 0
        int16_t var_34_1 = 0
        int16_t var_28_1 = 0
        int16_t var_24_1 = 0
        int16_t var_20_1 = 0
        int32_t j_1 = j_2
        
        if (j_2 != 0)
            char* edx_12 = var_c_1
            uint32_t ecx_3 = 0
            int32_t j
            
            do
                int16_t* eax_7 = var_1c_1 * 2 + esi_4
                uint32_t edx_14 = zx.d(
                    *(*(edx_1 + ((ecx_3 + sx.d(*eax_7) + 8) s>> 4 << 2)) + zx.d(*edx_12) + edx))
                uint32_t ebx_3 = zx.d(*(
                    *(edx_1 + ((ebx_1 + 8 + sx.d(*((var_1c_1 << 1) + 2 + esi_4))) s>> 4 << 2))
                    + zx.d(var_c_1[1]) + edx))
                uint32_t edi_3 = zx.d(*(
                    *(edx_1 + ((edi_1 + 8 + sx.d(*((var_1c_1 << 1) + 4 + esi_4))) s>> 4 << 2))
                    + zx.d(var_c_1[2]) + edx))
                int32_t eax_23 = ebx_3 s>> 2
                int32_t ecx_19 = edi_3 s>> 3
                int32_t ecx_21 = edx_14 s>> 3
                int32_t ecx_24 = (eax_23 << 5) + ecx_19
                int32_t eax_25 = *(ecx + (ecx_21 << 2))
                int16_t* eax_26 = eax_25 + (ecx_24 << 1)
                
                if (*(eax_25 + (ecx_24 << 1)) == 0)
                    sub_7343c0(eax_26, ecx_21, arg1, eax_23, ecx_19)
                
                void* ecx_29 = zx.d(*eax_26) - 1
                *var_10_1 = ecx_29.b
                uint32_t edx_16 = edx_14 - zx.d(*(ecx_29 + edx_2))
                uint32_t edx_17 = edx_16 * 2
                uint32_t ebx_4 = ebx_3 - zx.d(*(ecx_29 + edx_3))
                uint32_t edi_4 = edi_3 - zx.d(*(ecx_29 + result_1))
                uint32_t eax_35 = edx_16 + edx_17
                *esi_4 = eax_35.w + var_20_1
                uint32_t eax_38 = eax_35 + edx_17
                var_20_1 = var_34_1 + eax_38.w
                var_34_1 = edx_16.w
                uint32_t ebx_5 = ebx_4 * 3
                uint32_t edx_18 = ebx_5 * 2
                esi_4[1] = var_24_1 + ebx_5.w
                uint32_t ebx_6 = ebx_5 + edx_18
                int16_t eax_43 = var_38_1 + ebx_6.w
                var_38_1 = ebx_4.w
                var_24_1 = eax_43
                uint32_t edi_5 = edi_4 * 3
                ebx_1 = ebx_6 + edx_18
                uint32_t edx_19 = edi_5 * 2
                esi_4[2] = var_28_1 + edi_5.w
                uint32_t edi_6 = edi_5 + edx_19
                esi_4 = eax_7
                edi_1 = edi_6 + edx_19
                var_28_1 = var_3c_1 + edi_6.w
                edx_12 = var_c_1 + var_1c_1
                var_10_1 = &var_10_1[var_40_1]
                j = j_1
                j_1 -= 1
                var_3c_1 = edi_4.w
                ecx_3 = eax_38 + edx_17
                var_c_1 = edx_12
            while (j != 1)
        
        ebx = var_74
        j_3 = j_2
        edx_5 = arg2
        *esi_4 = var_20_1
        esi_4[1] = var_24_1
        esi_4[2] = var_28_1
        result = &arg3[1]
        i = arg4
        arg4 -= 1
        arg3 = result
    while (i != 1)

return result
