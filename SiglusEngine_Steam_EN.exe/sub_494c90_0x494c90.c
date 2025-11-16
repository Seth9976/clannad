// 函数: sub_494c90
// 地址: 0x494c90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1be46dc == 0
int32_t var_c = arg2
int32_t var_8 = arg1
int32_t arg_4
int32_t arg_8

if (cond:0 || sub_4d2220(&var_8, data_1bfe278, data_1bfe274, data_1bfe27c, data_1bfe280, &var_8, 
        &var_c, &arg_4, &arg_8) == 0)
    return 

int32_t edi_1 = data_1be46d0
int32_t eax = var_c s>> 3
int32_t ecx_2 = var_8 s>> 3
int32_t ebx_2 = arg_8 s>> 3
int32_t esi_4 = (arg_4 s>> 3) - ecx_2 + 1
data_1be46d4 = 1
int32_t i_1 = ebx_2 - eax + 1
int32_t var_10_1 = esi_4
int32_t edi_2 = edi_1 - esi_4
int32_t edx_4 = edi_1 * eax + data_1be46dc + ecx_2
int32_t var_14_1 = edi_2

if (i_1 s<= 0)
    return 

int32_t i

do
    if (esi_4 s> 0)
        int32_t edi_4 = __builtin_memset(edx_4, 0x1010101, esi_4 u>> 2 << 2)
        int32_t ecx_5 = esi_4
        esi_4 = var_10_1
        edx_4 += esi_4
        __builtin_memset(edi_4, 1, ecx_5 & 3)
        edi_2 = var_14_1
    
    edx_4 += edi_2
    i = i_1
    i_1 -= 1
while (i != 1)
