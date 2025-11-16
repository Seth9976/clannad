// 函数: sub_42a5a2
// 地址: 0x42a5a2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg2
int32_t edi
int32_t var_c = edi
void* ecx = &eax[1]
char i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
int32_t* eax_3 = sub_745f3f(eax - ecx + 5)

if (eax_3 == 0)
    return 0x8007000e

*eax_3 = *arg1
arg1[1] += eax - ecx
*arg1 = eax_3
int32_t esi_2
int32_t edi_3
edi_3, esi_2 = __builtin_memcpy(&eax_3[1], arg2, (eax - ecx + 1) u>> 2 << 2)
__builtin_memcpy(edi_3, esi_2, (eax - ecx + 1) & 3)
return 0
