// 函数: sub_6ff620
// 地址: 0x6ff620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0xc) = *"333?333?333?"
*arg1 = &NT3::C_d3d_point_light::`vftable'{for `NT3::C_d3d_light_interface'}
__builtin_memcpy(&arg1[7], 
    "\x9a\x99\x99\x3e\x9a\x99\x99\x3e\x9a\x99\x99\x3e\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x"
"00\x00\x00\x3f\x00\x00\x80\x3f", 
    0x20)
arg1[1] = 1
arg1[2] = 0xffffffff
*(arg1 + 0x3c) = data_4ecd064
arg1[0x11] = data_4ecd06c
arg1[0x12] = 0x3a83126f
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x15] = 0x42c80000
return arg1
