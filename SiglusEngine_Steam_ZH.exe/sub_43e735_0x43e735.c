// 函数: sub_43e735
// 地址: 0x43e735
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void*** eax = sub_42cfa1(0x14)
void*** esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_46b602(eax, arg3, 0, 0xac0b94)

if (esi == 0)
    return 0

int32_t result = sub_43e585(arg1, arg2, esi)
esi[2] = 0
return result
