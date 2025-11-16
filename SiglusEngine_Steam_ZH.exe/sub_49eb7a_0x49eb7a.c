// 函数: sub_49eb7a
// 地址: 0x49eb7a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000
bool cond:1_1

if (eax u> 0x60800000)
    if (eax != 0x60a00000 && eax != 0x60c00000 && eax != 0x60d00000 && eax != 0x60f00000
            && eax != 0x61100000)
        cond:1_1 = eax == 0x61200000
    label_49ebe5:
        
        if (not(cond:1_1))
            return 0
else if (eax != 0x60800000 && eax != 0x10d00000 && eax != 0x10e00000 && eax != 0x60000000
        && eax != 0x60200000 && eax != 0x60300000 && eax != 0x60500000)
    cond:1_1 = eax == 0x60700000
    goto label_49ebe5
return 1
