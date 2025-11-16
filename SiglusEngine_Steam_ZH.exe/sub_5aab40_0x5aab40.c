// 函数: sub_5aab40
// 地址: 0x5aab40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg3 == arg2)
    return arg4

int32_t* ebx = arg4
void** esi = arg3 + 0xc
void* edi = &ebx[3]

do
    *ebx = esi[-3]
    *(edi - 8) = esi[-2]
    *(edi - 4) = esi[-1]
    
    if (edi != esi)
        sub_52e3c0(edi, esi, 0, 0xffffffff)
    
    if (edi + 0x18 != &esi[6])
        sub_52e3c0(edi + 0x18, &esi[6], 0, 0xffffffff)
    
    esi = &esi[0xf]
    ebx = &ebx[0xf]
    edi += 0x3c
while (&esi[-3] != arg2)

return ebx
