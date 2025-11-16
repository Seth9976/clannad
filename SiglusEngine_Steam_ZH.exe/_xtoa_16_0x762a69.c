// 函数: _xtoa@16
// 地址: 0x762a69
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg1
char* esi = arg2

if (arg4 != 0)
    *esi = 0x2d
    esi = &esi[1]
    i = neg.d(i)

char* edi = esi

do
    int32_t edx_1 = 0
    uint32_t temp1_1 = modu.dp.d(edx_1:i, arg3)
    i = divu.dp.d(edx_1:i, arg3)
    uint32_t edx_2
    
    if (temp1_1 u<= 9)
        edx_2.b = temp1_1.b + 0x30
    else
        edx_2.b = temp1_1.b + 0x57
    
    *esi = edx_2.b
    esi = &esi[1]
while (i != 0)

*esi = i.b
void* esi_1 = esi - 1

do
    i.b = *edi
    char ecx = *esi_1
    *esi_1 = i.b
    esi_1 -= 1
    *edi = ecx
    edi = &edi[1]
while (edi u< esi_1)

return i
