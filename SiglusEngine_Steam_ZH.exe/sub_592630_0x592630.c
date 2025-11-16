// 函数: sub_592630
// 地址: 0x592630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == arg2)
    return arg4

int32_t* edi = arg4
int32_t* esi = arg3 + 8

do
    *edi = esi[-2]
    edi[1] = esi[-1]
    edi[2] = *esi
    int32_t eax_2
    eax_2.b = esi[1].b
    edi[3].b = eax_2.b
    
    if (&edi[4] != &esi[2])
        sub_52e3c0(&edi[4], &esi[2], 0, 0xffffffff)
    
    esi = &esi[0xa]
    edi = &edi[0xa]
while (&esi[-2] != arg2)

return edi
