// 函数: sub_476bb0
// 地址: 0x476bb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg1

if (esi s>= 0 && esi u<= 0x1ff)
    *(esi * 0x74 + &data_13747ac) -= 1
    
    if (*(esi * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi * 0x74 + 0x13747b0, esi * 0x74 + 0x13747b4)
        sub_425320(esi)

int32_t esi_1 = arg1[1]

if (esi_1 s< 0 || esi_1 u> 0x1ff)
    return 

*(esi_1 * 0x6c + &data_1382f88) -= 1

if (*(esi_1 * 0x6c + &data_1382f88) s<= 0)
    sub_428300(esi_1 * 0x6c + 0x1382f8c)
    return sub_428710(esi_1) __tailcall
