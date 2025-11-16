// 函数: sub_49e8e1
// 地址: 0x49e8e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000
bool cond:1_1

if (eax u> 0x70700000)
    if (eax != 0x70b00000 && eax != 0x70c00000 && eax != 0x70d00000)
        cond:1_1 = eax == 0x71000000
    label_49e930:
        
        if (not(cond:1_1))
            return 0
else if (eax != 0x70700000 && eax != 0x50300000 && eax != 0x70100000 && eax != 0x70200000
        && eax != 0x70500000)
    cond:1_1 = eax == 0x70600000
    goto label_49e930
return 1
