// 函数: sub_7547cf
// 地址: 0x7547cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = &__getptd()[0x27]
int32_t eax_1 = _wcslen(*esi)
int16_t* var_14 = *(esi + 4)
int32_t eax_3 = neg.d(eax_1 - 3)
*(esi + 0x10) = sbb.d(eax_3, eax_3, eax_1 != 3) + 1
int32_t eax_7 = _wcslen(var_14) - 3
int32_t eax_8 = neg.d(eax_7)
*(esi + 0x14) = sbb.d(eax_8, eax_8, eax_7 != 0) + 1
*(arg1 + 4) = 0
int32_t eax_11

if (*(esi + 0x10) == 0)
    eax_11 = sub_7548a5(*esi)
else
    eax_11 = 2

*(esi + 0xc) = eax_11
BOOL result = EnumSystemLocalesW(sub_7548cf, 1)

if ((*arg1 & 0x100) == 0 || (*arg1 & 0x200) == 0 || (*arg1 & 7) == 0)
    *arg1 = 0

return result
