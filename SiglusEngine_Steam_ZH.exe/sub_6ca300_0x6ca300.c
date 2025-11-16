// 函数: sub_6ca300
// 地址: 0x6ca300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_6cad70()

if (result != 0)
    *(result + 0x78) |= 0x200000
    bool cond:0_1 = *(result + 0x5c) == 0
    *(result + 0xc0) = 0x2000
    *(result + 0xd4) = 1
    *(result + 0xc4) = 0xffffffff
    *(result + 0xd0) = 8
    *(result + 0xcc) = 0xf
    *(result + 0xc8) = 8
    *(result + 0xe8) = 0
    *(result + 0xd8) = 0xffffffff
    *(result + 0xe4) = 8
    *(result + 0xe0) = 0xf
    *(result + 0xdc) = 8
    *(result + 0x60) = 0
    *(result + 0x58) = sub_6d7a80
    *(result + 0x174) = sub_6d7ac0
    
    if (not(cond:0_1))
        *(result + 0x5c) = 0
        sub_6d4470(result, "Can't set both read_data_fn and write_data_fn in the same structure")

return result
