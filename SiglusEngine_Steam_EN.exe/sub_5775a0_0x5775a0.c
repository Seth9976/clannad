// 函数: sub_5775a0
// 地址: 0x5775a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (data_13702a0 == 0 && data_13702c4 == 0)
    *(arg1 * 0x3920 + 0xf8c764) = 0
    *(arg1 * 0x3920 + &data_f89bcc) += 1
    return 

int32_t eax = data_1321ec4

if (eax != 1 && eax != 2 && eax != 3)
    int32_t eax_1 = sub_4534a0()
    
    if (eax_1 == 0)
        int32_t eax_5 = *(arg1 * 0x3920 + 0xf8c774) - *(arg1 * 0x3920 + 0xf8c76c)
            - *(arg1 * 0x2d0 + 0x8fcd84) + data_1320e58
        sub_577180(eax_5, 
            *(arg1 * 0x3920 + 0xf8c770) - *(arg1 * 0x3920 + 0xf8c768) - *(arg1 * 0x2d0 + 0x8fcd80)
                + data_131d2cc, 
            arg1, eax_5, eax_1)
        return 

*arg2 = 1
