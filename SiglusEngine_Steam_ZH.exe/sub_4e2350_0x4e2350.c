// 函数: sub_4e2350
// 地址: 0x4e2350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg2 + 0x1c8)
int32_t edi
int32_t var_3c = edi
int32_t edi_1 = *(ecx + 0x10)
int32_t edi_2 = *(ecx + 0x14)
int32_t edi_3 = *(ecx + 0x18)
int32_t ecx_1 = *(ecx + 0x1c)
int32_t result = *(arg2 + 0x148)
int32_t edx = *(arg2 + 0x70)
int32_t* ecx_3 = *arg1 + (arg3 << 3)
void* var_10 = ecx_3[1]
void* var_c = *ecx_3
char* edi_5 = *(arg1[1] + (arg3 << 2))
char* ebx_1 = *(arg1[2] + (arg3 << 2))
char* ecx_7 = *arg4
char* esi_2 = arg4[1]
uint32_t edx_1 = edx u>> 1

if (edx_1 u> 0)
    uint32_t var_14_1 = edx_1
    bool cond:0_1
    
    do
        uint32_t edx_2 = zx.d(*edi_5)
        uint32_t edx_3 = zx.d(*ebx_1)
        int32_t* edi_8 = *(edi_1 + (edx_3 << 2))
        int32_t edx_5 = *(edi_2 + (edx_2 << 2))
        char* ebx_6 = var_c
        uint32_t edx_6 = zx.d(*ebx_6)
        int32_t edi_12 = (*(ecx_1 + (edx_2 << 2)) + *(edi_3 + (edx_3 << 2))) s>> 0x10
        void* ebx_9
        ebx_9.b = *(edi_8 + edx_6 + result)
        *ecx_7 = ebx_9.b
        int32_t ebx_10
        ebx_10.b = *(edx_6 + edi_12 + result)
        ecx_7[1] = ebx_10.b
        char* edx_7
        edx_7.b = (edx_6 + edx_5)[result]
        ecx_7[2] = edx_7.b
        uint32_t edx_8 = zx.d(ebx_6[1])
        var_c = &ebx_6[2]
        void* ebx_15
        ebx_15.b = *(edi_8 + edx_8 + result)
        ecx_7[3] = ebx_15.b
        int32_t ebx_16
        ebx_16.b = *(edx_8 + edi_12 + result)
        ecx_7[4] = ebx_16.b
        char* edx_9
        edx_9.b = (edx_8 + edx_5)[result]
        char* ebx_18 = var_10
        ecx_7[5] = edx_9.b
        uint32_t edx_10 = zx.d(*ebx_18)
        ecx_7 = &ecx_7[6]
        void* ebx_21
        ebx_21.b = *(edi_8 + edx_10 + result)
        *esi_2 = ebx_21.b
        int32_t ebx_22
        ebx_22.b = *(edx_10 + edi_12 + result)
        esi_2[1] = ebx_22.b
        char* edx_11
        edx_11.b = (edx_10 + edx_5)[result]
        esi_2[2] = edx_11.b
        uint32_t edx_12 = zx.d(ebx_18[1])
        var_10 = &ebx_18[2]
        void* ebx_27
        ebx_27.b = *(edi_8 + edx_12 + result)
        esi_2[3] = ebx_27.b
        ebx_27.b = *(edi_12 + edx_12 + result)
        esi_2[4] = ebx_27.b
        char* edx_13
        edx_13.b = (edx_12 + edx_5)[result]
        edi_5 = &edi_5[1]
        ebx_1 = &ebx_1[1]
        esi_2[5] = edx_13.b
        esi_2 = &esi_2[6]
        cond:0_1 = var_14_1 != 1
        var_14_1 -= 1
    while (cond:0_1)

if ((edx.b & 1) != 0)
    uint32_t edx_16 = zx.d(*ebx_1)
    uint32_t edi_15 = zx.d(*edi_5)
    int32_t* ebx_29 = *(edi_1 + (edx_16 << 2))
    int32_t edi_17 = *(ecx_1 + (edi_15 << 2)) + *(edi_3 + (edx_16 << 2))
    int32_t edx_18 = *(edi_2 + (edi_15 << 2))
    uint32_t edx_20 = zx.d(*var_c)
    void* ebx_34
    ebx_34.b = *(ebx_29 + edx_20 + result)
    *ecx_7 = ebx_34.b
    int32_t edi_18 = edi_17 s>> 0x10
    int32_t ebx_35
    ebx_35.b = *(edx_20 + edi_18 + result)
    ecx_7[1] = ebx_35.b
    char* edx_21
    edx_21.b = (edx_20 + edx_18)[result]
    ecx_7[2] = edx_21.b
    uint32_t ecx_10 = zx.d(*var_10)
    void* edx_23
    edx_23.b = *(ebx_29 + ecx_10 + result)
    *esi_2 = edx_23.b
    int32_t edx_24
    edx_24.b = *(ecx_10 + edi_18 + result)
    result.b = (ecx_10 + edx_18)[result]
    esi_2[1] = edx_24.b
    esi_2[2] = result.b

return result
