// 函数: sub_7546df
// 地址: 0x7546df
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t* eax_2 = __getptd()
int32_t* edi = __getptd()[0xee]
uint32_t Locale = sub_754b9f(arg1)
int32_t ecx = eax_2[0x2c]
int32_t ecx_1 = neg.d(ecx)
void lCData
int32_t eax_4 =
    GetLocaleInfoW(Locale, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff005) + 0x1002, &lCData, 0xf0)
int32_t result

if (eax_4 != 0)
    if (sub_75d36c(eax_2[0x28], &lCData) == 0 && sub_754c79(Locale.w) != 0)
        *edi |= 4
        edi[2] = Locale
        edi[1] = Locale
    
    result = not.d(*edi u>> 2) & 1
else
    *edi &= eax_4
    result = eax_4 + 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
