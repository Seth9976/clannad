// 函数: sub_70dc50
// 地址: 0x70dc50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &NT3::C_d3d_effect_func_interface::`vftable'

if (arg1[6] u>= 0x10)
    j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
