// 函数: _GetLocaleNameFromLangCountry
// 地址: 0x75400d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = _wcslen(*arg1)
int16_t* var_10 = arg1[1]
int32_t eax_2 = neg.d(eax - 3)
arg1[4] = sbb.d(eax_2, eax_2, eax != 3) + 1
int32_t eax_6 = _wcslen(var_10) - 3
int32_t eax_7 = neg.d(eax_6)
bool cond:0 = arg1[4] == 0
arg1[5] = sbb.d(eax_7, eax_7, eax_6 != 0) + 1
int32_t eax_10

if (cond:0)
    eax_10 = _GetPrimaryLen(*arg1)
else
    eax_10 = 2

arg1[3] = eax_10
BOOL result = sub_7551e2(_LangCountryEnumProcEx@12, 3, 0)

if ((arg1[2] & 0x100) == 0 || (arg1[2] & 0x200) == 0 || (arg1[2].b & 7) == 0)
    arg1[2] = 0

return result
