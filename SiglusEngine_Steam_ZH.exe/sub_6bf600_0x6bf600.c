// 函数: sub_6bf600
// 地址: 0x6bf600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** esi = arg3

if (esi == arg2)
    return arg4

void* edi = arg4

do
    if (edi != esi)
        sub_52e3c0(edi, esi, 0, 0xffffffff)
    
    if (edi + 0x18 != &esi[6])
        sub_52e3c0(edi + 0x18, &esi[6], 0, 0xffffffff)
    
    esi = &esi[0xc]
    edi += 0x30
while (esi != arg2)

return edi
