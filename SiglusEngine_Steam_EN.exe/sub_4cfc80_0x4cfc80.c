// 函数: sub_4cfc80
// 地址: 0x4cfc80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0

if (arg1 == 0)
    return 0

for (char i = *arg1; i != 0; i = *arg1)
    if (i u< 0x80)
        edx += 1
        arg1 = &arg1[1]
    else if (i u< 0xa0)
        if (i u>= 0xfe)
            edx += 1
            arg1 = &arg1[1]
        else
            edx += 2
            arg1 = &arg1[2]
    else if (i u<= 0xdf || i u>= 0xfe)
        edx += 1
        arg1 = &arg1[1]
    else
        edx += 2
        arg1 = &arg1[2]

return edx + 1
