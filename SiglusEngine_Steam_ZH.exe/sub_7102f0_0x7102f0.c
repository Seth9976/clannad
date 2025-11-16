// 函数: sub_7102f0
// 地址: 0x7102f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &NT3::C_d3d_effect_source_creator::`vftable'

if (arg1[0x78] u>= 0x10)
    j__free(arg1[0x73])

arg1[0x78] = 0xf
arg1[0x77] = 0
arg1[0x73].b = 0
return sub_710240(&arg1[1]) __tailcall
