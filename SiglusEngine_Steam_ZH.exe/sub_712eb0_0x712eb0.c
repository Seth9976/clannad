// 函数: sub_712eb0
// 地址: 0x712eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 == arg2)
    return arg4

void* ebx = arg4
void** esi = arg2 + 0x1c
int32_t* edi = ebx + 0x1c

do
    esi -= 0x68
    edi -= 0x68
    ebx -= 0x68
    
    if (&edi[-6] != &esi[-6])
        sub_541b40(&edi[-6], &esi[-6], 0, 0xffffffff)
    
    if (edi != esi)
        sub_541b40(edi, esi, 0, 0xffffffff)
    
    if (&edi[6] != &esi[6])
        sub_541b40(&edi[6], &esi[6], 0, 0xffffffff)
    
    if (&edi[0xc] != &esi[0xc])
        sub_541b40(&edi[0xc], &esi[0xc], 0, 0xffffffff)
    
    edi[0x12] = esi[0x12]
while (&esi[-7] != arg3)

return ebx
