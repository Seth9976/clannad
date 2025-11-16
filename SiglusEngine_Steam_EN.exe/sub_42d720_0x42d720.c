// 函数: sub_42d720
// 地址: 0x42d720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t* esi = arg1[0xa]
void* eax = &arg1[0xa]
*arg1 = 0
arg1[1] = 0xffffffff

if (arg1[0xb] s> 0)
    do
        *esi = 0xffffffff
        esi[1] = 0xffffffff
        eax = sub_4d1ba0(eax, 0x1e, &esi[2], 0)
        i += 1
        esi = &esi[0x2e]
    while (i s< arg1[0xb])
    
    eax = &arg1[0xa]

arg1[0xb] = 0
return sub_4d6c40(&arg1[9], eax) __tailcall
