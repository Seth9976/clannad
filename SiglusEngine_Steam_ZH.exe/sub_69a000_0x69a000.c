// 函数: sub_69a000
// 地址: 0x69a000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
esi.w = arg2

if (arg1 == 0)
    return 0

int16_t i = *arg1

if (i == 0)
    return nullptr

do
    if (i == esi.w)
        return arg1
    
    arg1 = CharNextW(arg1)
    i = *arg1
while (i != 0)

return 0
