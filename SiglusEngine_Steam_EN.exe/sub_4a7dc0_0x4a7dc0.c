// 函数: sub_4a7dc0
// 地址: 0x4a7dc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_1bfe288 == 0
*arg2 = 0
*arg4 = 0
*arg6 = 0
*arg5 = 0

if (cond:0)
    return 

arg1 = data_1bfe28c

if (arg3 s>= *arg1)
    return 

arg1 = arg1[arg3 + 2]

if (arg1 == 0)
    return 

void* ecx_2 = data_1bfe288 + 0x40 + arg1
int32_t eax = *(arg1 + data_1bfe288)

if (eax == 0)
    *arg2 = ecx_2
    *arg4 = ecx_2 + 0x100
    *arg5 = ecx_2 + 0x200
else if (eax == 1)
    *arg2 = ecx_2
    *arg4 = ecx_2 + 0x100
    *arg5 = ecx_2 + 0x200
    *arg6 = *(ecx_2 + 0x300)
