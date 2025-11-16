// 函数: sub_4cfd70
// 地址: 0x4cfd70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 0

char i = *arg2
char* esi = arg1

for (; i != 0; i = *arg2)
    if (i u< 0x80)
    label_4cfda1:
        *arg1 = i
        arg1 = &arg1[1]
        arg2 = &arg2[1]
    else
        if (i u< 0xa0)
            if (i u>= 0xfe)
                goto label_4cfda1
        else if (i u<= 0xdf || i u>= 0xfe)
            goto label_4cfda1
        
        *arg1 = i
        arg1[1] = arg2[1]
        arg1 = &arg1[2]
        arg2 = &arg2[2]

*arg1 = 0
return arg1 - esi + 1
