// 函数: sub_4d7660
// 地址: 0x4d7660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t ebx_1 = data_70300c - 1
int32_t edx = data_7030dc
int32_t edi

if (arg6 s<= 0)
    *arg3 = 0
    edi = 0
else
    arg3[4] = 0
    arg3[0xc] = ebx_1
    edi = arg6
    arg3[8] = 0
    arg3[0x10] = arg6 - 1
    *arg3 = 1

int32_t esi_1 = arg6 + arg4
int32_t esi_2

if (esi_1 s>= edx)
    arg3[1] = 0
    esi_2 = edx - 1
else
    arg3[9] = esi_1
    arg3[5] = 0
    esi_2 = esi_1 - 1
    arg3[0xd] = ebx_1
    arg3[0x11] = edx - 1
    arg3[1] = 1

if (arg5 s<= 0)
    arg3[2] = 0
else
    arg3[6] = 0
    arg3[0xe] = arg5 - 1
    arg3[0xa] = edi
    arg3[0x12] = esi_2
    arg3[2] = 1

int32_t result = arg2 + arg5

if (result s>= data_70300c)
    arg3[3] = 0
    return result

arg3[0xb] = edi
arg3[0x13] = esi_2
arg3[0xf] = ebx_1
arg3[7] = result
arg3[3] = 1
return result
