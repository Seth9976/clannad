// 函数: sub_458ce7
// 地址: 0x458ce7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x8876086c

void*** eax = sub_745f3f(0x10)
void*** esi_1

if (eax == 0)
    esi_1 = nullptr
else
    esi_1 = sub_458ccf(eax)

if (esi_1 == 0)
    return 0x8007000e

int32_t edi
int32_t var_10_1 = edi
int32_t result_1 = (*esi_1)[6](arg1)
int32_t result

if (result_1 s>= 0)
    *arg2 = esi_1
    result = 0
else
    (*esi_1)[5](1)
    result = result_1

return result
