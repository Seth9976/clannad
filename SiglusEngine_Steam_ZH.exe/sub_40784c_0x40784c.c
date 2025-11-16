// 函数: sub_40784c
// 地址: 0x40784c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0x8876086c

void*** eax = sub_745f3f(0x584)
void*** esi_1

if (eax == 0)
    esi_1 = nullptr
else
    esi_1 = sub_45c2f7(eax)

if (esi_1 == 0)
    return 0x8007000e

int32_t edi
int32_t var_10_1 = edi
int32_t result_1 = sub_45b2aa(esi_1, arg1, arg2, 1)
int32_t result

if (result_1 s>= 0)
    *arg3 = esi_1
    result = 0
else
    sub_40782b(esi_1, 1)
    result = result_1

return result
