// 函数: sub_49e939
// 地址: 0x49e939
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000
bool cond:2_1

if (eax u> 0x74200000)
    if (eax != 0x74300000 && eax != 0x74400000 && eax != 0x74500000 && eax != 0x74600000
            && eax != 0x74700000 && eax != 0x74a00000)
        cond:2_1 = eax == 0x74b00000
        goto label_49e9b6
else if (eax != 0x74200000)
    if (eax u> 0x11500000)
        if (eax != 0x20800000 && eax != 0x20900000)
            cond:2_1 = eax == 0x74100000
        label_49e9b6:
            
            if (not(cond:2_1))
                return 0
    else if (eax != 0x11500000 && eax != 0x11100000 && eax != 0x11200000 && eax != 0x11300000)
        cond:2_1 = eax == 0x11400000
        goto label_49e9b6
return 1
