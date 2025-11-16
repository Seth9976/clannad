// 函数: sub_44e3b2
// 地址: 0x44e3b2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_446745(eax)

if (esi == 0)
    return 0x8007000e

int32_t edi
int32_t var_14_1 = edi
int32_t eax_2 = sub_745f3f(0x40)

if (eax_2 != 0)
    j_sub_4023fb(eax_2, arg3)
    esi[1] = arg2
    *esi = 9
    esi[3] = eax_2
    (*(arg1 + 0xfc))[6] = esi
    *(arg1 + 0xfc) = esi
    esi = nullptr
else
    result = 0x8007000e

if (esi != 0)
    sub_44ce0e(esi, 1)

return result
