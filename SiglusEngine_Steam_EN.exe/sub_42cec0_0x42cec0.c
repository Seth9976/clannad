// 函数: sub_42cec0
// 地址: 0x42cec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s>= 2)
    return 

void* ecx = &(&data_8c4ca4)[arg3 * 0x22]

if ((&data_8c4ca4)[arg3 * 0x22] == 0)
    return 

int32_t eax = *(ecx + 0x50)
int32_t edx = *(ecx + 0x54)
*(ecx + 0x64) = eax
*(ecx + 0x6c) = edx

if (arg6 != 0)
    *(ecx + 0x68) = arg2
else
    *(ecx + 0x68) = eax

if (arg7 != 0)
    *(ecx + 0x70) = arg4
else
    *(ecx + 0x70) = edx

if (arg5 s<= 0)
    int32_t edx_2 = *(ecx + 0x70)
    int32_t eax_2 = *(ecx + 0x68)
    *(ecx + 0x7c) = 0
    *(ecx + 0x54) = edx_2
    *(ecx + 0x50) = eax_2
    return sub_42cd60(ecx, &(&data_ef08e8)[arg3 * 0x60]) __tailcall

*(ecx + 0x78) = data_131310c
*(ecx + 0x7c) = arg5
*(ecx + 0x80) = 0

if (arg8 == 1)
    *(ecx + 0x74) = 4
else if (arg8 == 2)
    *(ecx + 0x74) = 3
else
    *(ecx + 0x74) = 0

if (arg9 == 0)
    return 

data_71929c = 0x37
data_7192a0 = 0
data_7192e0 = 0
