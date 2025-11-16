// 函数: sub_494d60
// 地址: 0x494d60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

arg4 -= 7
int32_t arg_8 = arg_8 - 7
bool cond:0 = data_1be46dc == 0
int32_t var_8 = arg3 + 7
int32_t var_c = arg2 + 7

if (cond:0 || sub_4d2220(&var_8, data_1bfe278, data_1bfe274, data_1bfe27c, data_1bfe280, &var_8, 
        &var_c, &arg4, &arg_8) == 0)
    return 

int32_t edi_1 = data_1be46d0
arg1 = var_c s>> 3
int32_t ecx_3 = var_8 s>> 3
int32_t edx_5 = (arg4 s>> 3) - ecx_3 + 1
int32_t esi_3 = edi_1 * arg1 + data_1be46dc
int32_t i_1 = (arg_8 s>> 3) - arg1 + 1
int32_t edi_2 = edi_1 - edx_5
arg4 = edx_5
int32_t esi_4 = esi_3 + ecx_3
arg_8 = edi_2

if (i_1 s<= 0)
    return 

int32_t i

do
    if (edx_5 s> 0)
        int32_t edi_4 = __builtin_memset(esi_4, 0, edx_5 u>> 2 << 2)
        int32_t ecx_6 = edx_5
        edx_5 = arg4
        esi_4 += edx_5
        __builtin_memset(edi_4, 0, ecx_6 & 3)
        edi_2 = arg_8
    
    esi_4 += edi_2
    i = i_1
    i_1 -= 1
while (i != 1)
