// 函数: sub_59fdd0
// 地址: 0x59fdd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg3 == arg2)
    return arg4

int32_t* ebx = arg4
void** esi = arg3 + 8
int32_t* edi = &ebx[2]

do
    *ebx = esi[-2]
    edi[-1] = esi[-1]
    
    if (edi != esi)
        sub_52e3c0(edi, esi, 0, 0xffffffff)
    
    ebx = &ebx[0xe]
    edi[6] = esi[6]
    edi[7] = esi[7]
    edi[8] = esi[8]
    edi[9] = esi[9]
    edi[0xa] = esi[0xa]
    edi[0xb].b = esi[0xb].b
    *(edi + 0x2d) = *(esi + 0x2d)
    arg3.b = *(esi + 0x2e)
    esi = &esi[0xe]
    *(edi + 0x2e) = arg3.b
    edi = &edi[0xe]
while (&esi[-2] != arg2)

return ebx
