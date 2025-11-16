// 函数: sub_4e1dd0
// 地址: 0x4e1dd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg2

if (arg1 == 0)
    return 0

PSTR eax
eax.b = *arg1

if (eax.b == 0)
    return nullptr

do
    if (eax.b == ebx.b)
        return arg1
    
    arg1 = CharNextA(arg1)
    eax.b = *arg1
while (eax.b != 0)

return 0
