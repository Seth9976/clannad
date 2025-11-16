// 函数: sub_41c570
// 地址: 0x41c570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char i = *arg1
char* esi = arg1

for (; i != 0; i = *arg1)
    if (i u< 0x80)
    label_41c59d:
        
        if (i == 0xd && arg1[1] == 0xa)
            *arg2 = &arg1[2]
            return arg1 - esi
        
        if (i == 0xa)
            *arg2 = &arg1[1]
            return arg1 - esi
        
        arg1 = &arg1[1]
    else if (i u< 0xa0)
        if (i u>= 0xfe)
            goto label_41c59d
        
        arg1 = &arg1[2]
    else
        if (i u<= 0xdf || i u>= 0xfe)
            goto label_41c59d
        
        arg1 = &arg1[2]

void* result = arg1 - esi

if (arg1 != esi)
    result -= 1

*arg2 = arg1
return result
