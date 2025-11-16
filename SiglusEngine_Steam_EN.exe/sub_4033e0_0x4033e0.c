// 函数: sub_4033e0
// 地址: 0x4033e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1[7]

if (ebx == 0)
    return 0xffffff7f

int32_t eax_1 = sub_410bd0(arg2, 0x20)
*arg1 = eax_1

if (eax_1 != 0)
    return 0xffffff7a

arg1[1] = sub_410bd0(arg2, 8)
arg1[2] = sub_410bd0(arg2, 0x20)
arg1[3] = sub_410bd0(arg2, 0x20)
arg1[4] = sub_410bd0(arg2, 0x20)
arg1[5] = sub_410bd0(arg2, 0x20)
*ebx = 1 << sub_410bd0(arg2, 4)
int32_t edx_1 = 1 << sub_410bd0(arg2, 4)
ebx[1] = edx_1

if (arg1[2] s>= 1 && arg1[1] s>= 1)
    int32_t ebx_1 = *ebx
    
    if (ebx_1 s>= 8 && edx_1 s>= ebx_1 && sub_410bd0(arg2, 1) == 1)
        return 0

sub_403140(arg1)
return 0xffffff7b
