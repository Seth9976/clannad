// 函数: sub_704ce0
// 地址: 0x704ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = &NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::`vftable'{for `NT3::C_d3d_effect_semantics_struct::SemanticsVal'}

if (arg1[0x25] u>= 0x10)
    j__free(arg1[0x20])

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0

if (arg1[0x1f] u>= 0x10)
    j__free(arg1[0x1a])

arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0
return sub_702710(arg1) __tailcall
