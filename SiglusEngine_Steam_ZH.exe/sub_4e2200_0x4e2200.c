// 函数: sub_4e2200
// 地址: 0x4e2200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x1c8)
int32_t ecx = *(arg1 + 0x148)
int32_t edx_1 = *(arg1 + 0x70)
int32_t esi = *(eax + 0x10)
int32_t esi_1 = *(eax + 0x14)
int32_t esi_2 = *(eax + 0x18)
int32_t eax_1 = *(eax + 0x1c)
int32_t edi
int32_t var_28 = edi
char* edi_1 = *(*arg2 + (arg3 << 2))
int32_t* esi_5 = *(arg2[1] + (arg3 << 2))
char* ebx_2 = *(arg2[2] + (arg3 << 2))
char* result = *arg4
uint32_t edx_2 = edx_1 u>> 1

if (edx_2 u> 0)
    arg2 = edx_2
    bool cond:0_1
    
    do
        uint32_t edx_3 = zx.d(*esi_5)
        uint32_t edx_4 = zx.d(*ebx_2)
        int32_t esi_8 = *(esi + (edx_4 << 2))
        int32_t esi_11 = *(eax_1 + (edx_3 << 2)) + *(esi_2 + (edx_4 << 2))
        uint32_t edx_6 = *(esi_1 + (edx_3 << 2))
        uint32_t edx_7 = zx.d(*edi_1)
        char* ebx_8
        ebx_8.b = (esi_8 + edx_7)[ecx]
        *result = ebx_8.b
        int32_t esi_12 = esi_11 s>> 0x10
        int32_t ebx_9
        ebx_9.b = *(edx_7 + esi_12 + ecx)
        result[1] = ebx_9.b
        uint32_t edx_8
        edx_8.b = *(edx_7 + edx_6 + ecx)
        result[2] = edx_8.b
        uint32_t edx_9 = zx.d(edi_1[1])
        char* ebx_12
        ebx_12.b = (esi_8 + edx_9)[ecx]
        result[3] = ebx_12.b
        ebx_12.b = *(esi_12 + edx_9 + ecx)
        void* edx_10
        edx_10.b = *(edx_9 + edx_6 + ecx)
        esi_5 += 1
        result[5] = edx_10.b
        result[4] = ebx_12.b
        ebx_2 = &ebx_2[1]
        edi_1 = &edi_1[2]
        result = &result[6]
        cond:0_1 = arg2 != 1
        arg2 -= 1
    while (cond:0_1)

if ((edx_1.b & 1) != 0)
    uint32_t edx_13 = zx.d(*esi_5)
    uint32_t esi_15 = zx.d(*edi_1)
    uint32_t ebx_13 = zx.d(*ebx_2)
    char* edx_16
    edx_16.b = (*(esi + (ebx_13 << 2)) + esi_15)[ecx]
    *result = edx_16.b
    int32_t edx_21
    edx_21.b = *(((*(eax_1 + (edx_13 << 2)) + *(esi_2 + (ebx_13 << 2))) s>> 0x10) + esi_15 + ecx)
    result[1] = edx_21.b
    ecx.b = (*(esi_1 + (edx_13 << 2)) + esi_15)[ecx]
    result[2] = ecx.b

return result
