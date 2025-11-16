// 函数: sub_5ad260
// 地址: 0x5ad260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
int32_t* esi = arg3 + 8

do
    *edi = esi[-2]
    edi[1] = esi[-1]
    edi[2] = *esi
    edi[3] = esi[1]
    edi[4] = esi[2]
    
    if (&edi[5] != &esi[3])
        sub_52e3c0(&edi[5], &esi[3], 0, 0xffffffff)
    
    if (&edi[0xb] != &esi[9])
        sub_52e3c0(&edi[0xb], &esi[9], 0, 0xffffffff)
    
    esi = &esi[0x11]
    edi = &edi[0x11]
while (&esi[-2] != arg2)

return edi
