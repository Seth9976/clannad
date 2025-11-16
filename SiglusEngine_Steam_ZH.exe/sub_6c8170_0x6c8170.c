// 函数: sub_6c8170
// 地址: 0x6c8170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6c8100(arg1)

if (arg2 s<= 0 || arg3 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

arg1[0x19] = arg4
arg1[0x1a] = arg5
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q((arg2 << 2) + 3)
arg1[0x18] = 0x20
arg1[0x17] = arg3
arg1[0x16] = arg2
arg1[0x14] = 4
int32_t ecx = (edx & 3) + eax_4
*arg1 = 0x28
eax_4.w = arg1[0x18].w
int32_t ecx_1 = ecx & 0xfffffffc
arg1[0x13] = ecx_1
int32_t ecx_2 = ecx_1 * arg3
*(arg1 + 0xe) = eax_4.w
arg1[1] = arg2
arg1[2] = neg.d(arg3)
arg1[3].w = 1
arg1[0x15] = ecx_2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[4] = 3
arg1[5] = ecx_2
arg1[0xa] = 0xff0000
arg1[0xb] = 0xff00
arg1[0xc] = 0xff

if (arg1[0xd].b == 0)
    sub_5979b0(&arg1[0xe], ecx_2)
    int32_t eax_7
    eax_7.b = 1
    return eax_7

HBITMAP eax_6 = CreateDIBSection(GetDC(nullptr), arg1, DIB_RGB_COLORS, &arg1[0x11], nullptr, 0)
arg1[0x12] = eax_6
eax_6.b = eax_6 != 0
return eax_6
