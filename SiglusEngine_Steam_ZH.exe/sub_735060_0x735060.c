// 函数: sub_735060
// 地址: 0x735060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* ecx = *(ebx + 0x1b8)
int32_t result = *(ebx + 0x12c)
int32_t result_1 = result
int32_t edx = *(ecx + 0x10)
int32_t edx_1 = *(ecx + 0x14)
int32_t edx_2 = *(ecx + 0x18)
int32_t ecx_1 = *(ecx + 0x1c)
int32_t ecx_2 = *arg2
void* var_c = *(ecx_2 + (arg3 << 3) + 4)
void* var_8 = *(ecx_2 + (arg3 << 3))
char* edi_1 = *(arg2[1] + (arg3 << 2))
char* esi_1 = *(arg2[2] + (arg3 << 2))
arg3 = arg4[1]
uint32_t i_2 = *(ebx + 0x5c) u>> 1
arg2 = *arg4
uint32_t i_1 = i_2

if (i_2 != 0)
    uint32_t i
    
    do
        uint32_t edx_5 = zx.d(*edi_1)
        uint32_t ecx_9 = zx.d(*esi_1)
        int32_t* edi_3 = *(edx + (ecx_9 << 2))
        int32_t ebx_5 = (*(ecx_1 + (edx_5 << 2)) + *(edx_2 + (ecx_9 << 2))) s>> 0x10
        int32_t esi_4 = *(edx_1 + (edx_5 << 2))
        char* ecx_11 = var_8
        uint32_t edx_6 = zx.d(*ecx_11)
        *arg2 = *(edx_6 + edi_3 + result)
        *(arg2 + 1) = *(edx_6 + ebx_5 + result_1)
        result = result_1
        *(arg2 + 2) = (edx_6 + esi_4)[result]
        uint32_t edx_9 = zx.d(ecx_11[1])
        var_8 = &ecx_11[2]
        *(arg2 + 3) = *(edx_9 + edi_3 + result)
        arg2[1].b = *(edx_9 + ebx_5 + result)
        char* edi_5 = arg3
        *(arg2 + 5) = *(edx_9 + esi_4 + result)
        char* ecx_27 = var_c
        arg2 += 6
        uint32_t edx_12 = zx.d(*ecx_27)
        *edi_5 = *(edi_3 + edx_12 + result)
        edi_5[1] = *(edx_12 + ebx_5 + result)
        edi_5[2] = (edx_12 + esi_4)[result]
        uint32_t edx_15 = zx.d(ecx_27[1])
        var_c = &ecx_27[2]
        edi_5[3] = *(edi_3 + edx_15 + result)
        edi_5[4] = *(edx_15 + ebx_5 + result)
        esi_1 = &esi_1[1]
        edi_5[5] = (edx_15 + esi_4)[result]
        i = i_1
        i_1 -= 1
        arg3 = &edi_5[6]
        edi_1 = &edi_1[1]
    while (i != 1)
    ebx = arg1

if ((*(ebx + 0x5c) & 1) != 0)
    uint32_t ecx_45 = zx.d(*esi_1)
    uint32_t edx_16 = zx.d(*edi_1)
    void* edi_8 = *(edx + (ecx_45 << 2))
    int32_t ebx_10 = (*(ecx_1 + (edx_16 << 2)) + *(edx_2 + (ecx_45 << 2))) s>> 0x10
    int32_t esi_6 = *(edx_1 + (edx_16 << 2))
    uint32_t edx_17 = zx.d(*var_8)
    *arg2 = *(edx_17 + edi_8 + result)
    *(arg2 + 1) = *(edx_17 + ebx_10 + result)
    *(arg2 + 2) = (edx_17 + esi_6)[result]
    uint32_t edx_19 = zx.d(*var_c)
    *arg3 = *(edi_8 + edx_19 + result)
    *(arg3 + 1) = *(edx_19 + ebx_10 + result)
    result.b = (edx_19 + esi_6)[result]
    *(arg3 + 2) = result.b

return result
