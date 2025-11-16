// 函数: sub_66e9a0
// 地址: 0x66e9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg2

if (arg3 == esi)
    return arg4

int32_t* edi = arg4

do
    esi -= 0x30
    edi -= 0x30
    
    if (edi != esi)
        sub_52e3c0(edi, esi, 0, 0xffffffff)
    
    if (&edi[6] != &esi[6])
        sub_52e3c0(&edi[6], &esi[6], 0, 0xffffffff)
while (esi != arg3)

return edi
