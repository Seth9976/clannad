// 函数: sub_49ea13
// 地址: 0x49ea13
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000
bool cond:7_1

if (eax u> 0x73800000)
    if (eax u> 0x74100000)
        if (eax u> 0x74600000)
            if (eax != 0x74700000 && eax != 0x74a00000)
                cond:7_1 = eax == 0x74b00000
            label_49eb71:
                
                if (not(cond:7_1))
                    return 0
        else if (eax != 0x74600000 && eax != 0x74200000 && eax != 0x74300000 && eax != 0x74400000)
            cond:7_1 = eax == 0x74500000
            goto label_49eb71
    else if (eax != 0x74100000)
        if (eax u> 0x73d00000)
            if (eax != 0x73e00000 && eax != 0x73f00000)
                cond:7_1 = eax == 0x74000000
                goto label_49eb71
        else if (eax != 0x73d00000 && eax != 0x73900000 && eax != 0x73a00000 && eax != 0x73b00000)
            cond:7_1 = eax == 0x73c00000
            goto label_49eb71
else if (eax != 0x73800000)
    if (eax u> 0x20900000)
        if (eax u> 0x73400000)
            if (eax != 0x73500000 && eax != 0x73600000)
                cond:7_1 = eax == 0x73700000
                goto label_49eb71
        else if (eax != 0x73400000 && eax != 0x73000000 && eax != 0x73100000 && eax != 0x73200000)
            cond:7_1 = eax == 0x73300000
            goto label_49eb71
    else if (eax != 0x20900000)
        if (eax u> 0x11400000)
            if (eax != 0x11500000 && eax != 0x20700000)
                cond:7_1 = eax == 0x20800000
                goto label_49eb71
        else if (eax != 0x11400000 && eax != 0x10f00000 && eax != 0x11100000 && eax != 0x11200000)
            cond:7_1 = eax == 0x11300000
            goto label_49eb71
return 1
