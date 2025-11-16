// 函数: sub_70ade0
// 地址: 0x70ade0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &
    NT3::C_d3d_effect_source_creator_skinned_mesh::`vftable'{for `NT3::C_d3d_effect_source_creator'}
sub_70c760(&arg1[0x36f])
sub_70ac20(&arg1[0x306])
sub_702710(&arg1[0x2ec])
sub_70ac20(&arg1[0x283])
sub_702710(&arg1[0x269])
sub_70ac20(&arg1[0x200])
sub_702710(&arg1[0x1e6])
sub_70ac20(&arg1[0x17d])
sub_702710(&arg1[0x163])
sub_702710(&arg1[0x149])
sub_702710(&arg1[0x12f])
sub_702710(&arg1[0x115])
sub_702710(&arg1[0xfb])
sub_702710(&arg1[0xe1])
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
