// 函数: sub_4e0ca0
// 地址: 0x4e0ca0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY* var_8 = arg1
HKEY* var_8_1 = arg1

if (arg3 == 0)
    return arg3 + 0xd

void* cbData = nullptr
void* edx = arg3
char* eax_2
void* edi_1

do
    eax_2 = edx
    edi_1 = &eax_2[1]
    
    do
        arg1.b = *eax_2
        eax_2 = &eax_2[1]
    while (arg1.b != 0)
    
    edx += eax_2 - edi_1 + 1
    cbData += eax_2 - edi_1 + 1
while (eax_2 - edi_1 != 0)
return RegSetValueExA(*var_8_1, arg2, 0, REG_MULTI_SZ, arg3, cbData)
