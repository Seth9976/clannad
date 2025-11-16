// 函数: sub_4a3104
// 地址: 0x4a3104
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t i_4 = arg2
int32_t esi = 0
int32_t edi
int32_t var_14 = edi
int32_t var_8_1 = 0
int32_t i = i_4

if (i_4 != 0xffffffff)
    do
        i = *(*(*(arg1 + 0x14) + (i << 2)) + 0x14)
        var_8_1 += 1
    while (i != 0xffffffff)

int32_t i_5 = arg4
int32_t i_1 = i_5

if (i_5 != 0xffffffff)
    do
        i_1 = *(*(*(arg1 + 0x14) + (i_1 << 2)) + 0x14)
        esi += 1
    while (i_1 != 0xffffffff)

bool cond:2 = esi u<= var_8_1

if (esi u< var_8_1)
    int32_t i_6 = var_8_1 - esi
    int32_t i_2
    
    do
        void* eax = *(*(arg1 + 0x14) + (i_4 << 2))
        var_8_1 -= 1
        i_2 = i_6
        i_6 -= 1
        i_4 = *(eax + 0x14)
        arg3 = *(eax + 0x18)
    while (i_2 != 1)
    cond:2 = esi u<= var_8_1

int32_t edi_4

if (cond:2)
    edi_4 = arg5
else
    int32_t i_7 = esi - var_8_1
    int32_t i_3
    
    do
        i_3 = i_7
        i_7 -= 1
        void* ecx_1 = *(*(arg1 + 0x14) + (i_5 << 2))
        edi_4 = *(ecx_1 + 0x18)
        i_5 = *(ecx_1 + 0x14)
    while (i_3 != 1)

if (i_4 != i_5)
    int32_t edx_2 = *(arg1 + 0x14)
    
    do
        void* eax_1 = *(edx_2 + (i_4 << 2))
        void* ecx_2 = *(edx_2 + (i_5 << 2))
        edi_4 = *(ecx_2 + 0x18)
        i_4 = *(eax_1 + 0x14)
        i_5 = *(ecx_2 + 0x14)
        arg3 = *(eax_1 + 0x18)
    while (i_4 != i_5)

int32_t result
result.b = arg3 != edi_4
return result
