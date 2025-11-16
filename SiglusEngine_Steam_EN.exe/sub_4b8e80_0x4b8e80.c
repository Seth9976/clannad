// 函数: sub_4b8e80
// 地址: 0x4b8e80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
sub_4b8010(&arg3[3], arg2)
int32_t esi = arg3[4]
sub_4d6c40(&arg3[1], &arg3[2])
*arg3 = 0
arg3[1] = 0
arg3[2] = 0

if (esi s> 0)
    if (esi s> 0x80)
        esi = 0x80
    
    uint32_t eax = esi * 0x1b4
    *arg3 = esi
    sub_4d6960(eax, &arg3[2], &arg3[1], eax, "weather_sub")

int32_t* edi = arg3[2]
int32_t i = 0

if (*arg3 s> 0)
    do
        edi[0x1a] = 2
        sub_4b8940(&arg3[3], edi, i, &arg3[3], arg5, 1)
        i += 1
        edi = &edi[0x6d]
    while (i s< *arg3)

arg3[0x6a] = arg4
return arg4
