// 函数: sub_46b450
// 地址: 0x46b450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2

if (arg3 s> esi)
    arg1 = arg3
    arg3 = esi
    esi = arg1

if (arg3 s< 0)
    return 

int32_t ebx_1 = data_7031bc

if (esi s>= ebx_1)
    return 

int32_t i_1 = esi - arg3 + 1

if (i_1 s<= 0)
    return 

int32_t* edi_2 = (arg4 + (arg3 << 1)) * 0x650 + 0x72d8cc
int32_t i

do
    if (arg3 s>= 0 && arg3 s< ebx_1)
        int32_t edx_1 = zx.d(arg5) * 0x1010101
        *edi_2 = edx_1
        edi_2[1] = edx_1
    
    arg3 += 1
    edi_2 = &edi_2[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
