// 函数: sub_7132b0
// 地址: 0x7132b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 =
    &NT3::C_d3d_effect_source_creator_shadow_map::`vftable'{for `NT3::C_d3d_effect_source_creator'}
sub_702710(&arg1[0xc7])
sub_702710(&arg1[0xad])
sub_702710(&arg1[0x93])
sub_702710(&arg1[0x79])
*arg1 = &NT3::C_d3d_effect_source_creator::`vftable'

if (arg1[0x78] u>= 0x10)
    j__free(arg1[0x73])

arg1[0x78] = 0xf
arg1[0x77] = 0
arg1[0x73].b = 0
return sub_710240(&arg1[1]) __tailcall
