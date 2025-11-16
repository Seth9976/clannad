// 函数: sub_428300
// 地址: 0x428300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1[0xe]
void* eax = &arg1[0xe]
int32_t i = 0

if (arg1[0xf] s> 0)
    do
        sub_428280(esi)
        i += 1
        esi = &esi[0x10]
    while (i s< arg1[0xf])
    
    eax = &arg1[0xe]

int32_t result = sub_4d6c40(&arg1[0xd], eax)
*arg1 = 0
arg1[4].b = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
return result
