// 函数: sub_6e1250
// 地址: 0x6e1250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
uint32_t eax = _fread(esi, arg2, arg3, *arg4)
uint32_t edx = eax
int32_t i_1 = edx * arg2

if (i_1 s<= 0)
    return eax

int32_t i

do
    eax.b = arg4[3].b
    esi += 1
    *(esi - 1) ^= eax.b
    i = i_1
    i_1 -= 1
while (i != 1)
return edx
