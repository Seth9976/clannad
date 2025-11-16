// 函数: sub_40cd50
// 地址: 0x40cd50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg4
int32_t ecx = *edi
int32_t ebx = 0
int32_t i_2 = divs.dp.d(sx.q(arg3), ecx)

if (i_2 s<= 0)
    return 

int32_t* esi = arg2
int32_t i_1 = i_2
int32_t i

do
    int32_t eax_2
    int80_t st0_1
    st0_1, eax_2 = sub_40cdb0(edi, esi)
    ebx += sub_407f90(edi, eax_2, arg1)
    esi = &esi[ecx]
    i = i_1
    i_1 -= 1
while (i != 1)
