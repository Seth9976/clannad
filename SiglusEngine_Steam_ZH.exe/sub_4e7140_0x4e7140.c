// 函数: sub_4e7140
// 地址: 0x4e7140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_2 = *(arg1 + 0x148) + 0x80
int32_t i = 8
void var_74
void* ebx = &var_74
int16_t* esi_1 = arg3 + 0x60
int32_t edi
int32_t var_a0 = edi
int32_t i_2 = 8
void* var_14 = &var_74
int16_t* edx_2 = *(arg2 + 0x50) + 0x60

do
    if (i != 4)
        int32_t eax_5
        
        if (esi_1[-0x28] != 0 || esi_1[-0x20] != 0 || esi_1[-0x18] != 0 || esi_1[-8] != 0
                || *esi_1 != 0 || esi_1[8] != 0)
            int32_t eax_8 = (sx.d(edx_2[-0x30]) * sx.d(esi_1[-0x30])) << 0xe
            int32_t ecx_4 = sx.d(edx_2[-0x20]) * sx.d(esi_1[-0x20]) * 0x3b21
                - sx.d(*esi_1) * sx.d(*edx_2) * 0x187e
            int32_t edi_6 = ecx_4 + eax_8
            int32_t eax_9 = eax_8 - ecx_4
            void* eax_11 = sx.d(edx_2[8]) * sx.d(esi_1[8])
            void* ecx_7 = sx.d(edx_2[-8]) * sx.d(esi_1[-8])
            void* eax_14 = sx.d(edx_2[-0x18]) * sx.d(esi_1[-0x18])
            int32_t eax_16 = sx.d(edx_2[-0x28]) * sx.d(esi_1[-0x28])
            int32_t ecx_11 = ecx_7 * 0x2e75 - eax_14 * 0x4587 + eax_16 * 0x21f9 - eax_11 * 0x6c2
            void* eax_20 = eax_16 * 0x5203 + eax_14 * 0x1ccd - ecx_7 * 0x133e - eax_11 * 0x1050
            ebx = var_14
            *(ebx - 0x20) = (edi_6 + eax_20 + 0x800) s>> 0xc
            *(ebx + 0x40) = (edi_6 - eax_20 + 0x800) s>> 0xc
            i = i_2
            *ebx = (eax_9 + ecx_11 + 0x800) s>> 0xc
            eax_5 = (eax_9 - ecx_11 + 0x800) s>> 0xc
        else
            eax_5 = (sx.d(edx_2[-0x30]) * sx.d(esi_1[-0x30])) << 2
            *(ebx - 0x20) = eax_5
            *ebx = eax_5
            *(ebx + 0x40) = eax_5
        
        *(ebx + 0x20) = eax_5
    
    ebx += 4
    esi_1 = &esi_1[1]
    edx_2 = &edx_2[1]
    i -= 1
    var_14 = ebx
    i_2 = i
while (i s> 0)

int32_t i_1 = 0
void var_94
void* ecx_12 = &var_94
int32_t i_3 = 0
char* result

do
    int32_t edx_4 = *(ecx_12 + 4)
    result = *(arg4 + (i_1 << 2)) + arg5
    
    if (edx_4 != 0 || *(ecx_12 + 8) != 0 || *(ecx_12 + 0xc) != 0 || *(ecx_12 + 0x14) != 0
            || *(ecx_12 + 0x18) != 0 || *(ecx_12 + 0x1c) != 0)
        void* ebx_17 = *(ecx_12 + 0xc)
        int32_t eax_29 = *(ecx_12 + 8) * 0x3b21 - *(ecx_12 + 0x18) * 0x187e
        int32_t edi_19 = *ecx_12 << 0xe
        int32_t esi_4 = eax_29 + edi_19
        int32_t edi_20 = edi_19 - eax_29
        void* eax_30 = *(ecx_12 + 0x1c)
        void* eax_31 = *(ecx_12 + 0x14)
        int32_t eax_35 = eax_31 * 0x2e75 - ebx_17 * 0x4587 + edx_4 * 0x21f9 - eax_30 * 0x6c2
        void* edx_12 = edx_4 * 0x5203 + ebx_17 * 0x1ccd - eax_31 * 0x133e - eax_30 * 0x1050
        char* ebx_29
        ebx_29.b = *(((esi_4 + edx_12 + 0x40000) s>> 0x13 & 0x3ff) + eax_2)
        char* result_1 = result
        *result_1 = ebx_29.b
        char* ebx_30
        ebx_30.b = *(((esi_4 - edx_12 + 0x40000) s>> 0x13 & 0x3ff) + eax_2)
        result_1[3] = ebx_30.b
        char* ebx_31
        ebx_31.b = *(((edi_20 + eax_35 + 0x40000) s>> 0x13 & 0x3ff) + eax_2)
        i_1 = i_3
        result.b = *(((edi_20 - eax_35 + 0x40000) s>> 0x13 & 0x3ff) + eax_2)
        result_1[1] = ebx_31.b
        result_1[2] = result.b
    else
        char* edx_8
        edx_8.b = *(((*ecx_12 + 0x10) s>> 5 & 0x3ff) + eax_2)
        *result = edx_8.b
        result[1] = edx_8.b
        result[2] = edx_8.b
        result[3] = edx_8.b
    
    ecx_12 += 0x20
    i_1 += 1
    i_3 = i_1
while (i_1 s< 4)

return result
