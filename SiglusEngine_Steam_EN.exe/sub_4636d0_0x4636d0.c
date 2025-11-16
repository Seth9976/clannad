// 函数: sub_4636d0
// 地址: 0x4636d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg2

if (esi s>= 0)
    if (*(arg1 + 0xc) != 2)
        if (esi u<= 0x1ff)
            *(esi * 0x74 + &data_13747ac) -= 1
            
            if (*(esi * 0x74 + &data_13747ac) s<= 0)
                sub_4d6c40(esi * 0x74 + 0x13747b0, esi * 0x74 + 0x13747b4)
                sub_425320(esi)
    else if (esi u<= 0xff)
        *(esi * 0x58 + &data_1b164b4) -= 1
        
        if (*(esi * 0x58 + &data_1b164b4) s<= 0)
            sub_4d6c40(esi * 0x58 + 0x1b164b8, esi * 0x58 + 0x1b164bc)
            sub_4d6c40(esi * 0x58 + 0x1b164d0, esi * 0x58 + 0x1b164d4)
            sub_481ee0(esi)

int32_t esi_1 = arg2[5]

if (esi_1 s>= 0 && esi_1 u<= 0x1ff)
    *(esi_1 * 0x74 + &data_13747ac) -= 1
    
    if (*(esi_1 * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi_1 * 0x74 + 0x13747b0, esi_1 * 0x74 + 0x13747b4)
        sub_425320(esi_1)

int32_t esi_2 = arg2[6]

if (esi_2 s>= 0 && esi_2 u<= 0x1ff)
    *(esi_2 * 0x74 + &data_13747ac) -= 1
    
    if (*(esi_2 * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi_2 * 0x74 + 0x13747b0, esi_2 * 0x74 + 0x13747b4)
        sub_425320(esi_2)

int32_t esi_3 = arg2[7]

if (esi_3 s< 0 || esi_3 u> 0x1ff)
    return 

*(esi_3 * 0x74 + &data_13747ac) -= 1

if (*(esi_3 * 0x74 + &data_13747ac) s<= 0)
    sub_4d6c40(esi_3 * 0x74 + 0x13747b0, esi_3 * 0x74 + 0x13747b4)
    return sub_425320(esi_3) __tailcall
