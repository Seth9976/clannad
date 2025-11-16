// 函数: sub_75484c
// 地址: 0x75484c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t* eax = __getptd()
int32_t eax_2 = _wcslen(eax[0x27]) - 3
int32_t eax_3 = neg.d(eax_2)
int32_t eax_4 = sbb.d(eax_3, eax_3, eax_2 != 0)
eax[0x2b] = eax_4 + 1
int32_t eax_6

if (eax_4 == 0xffffffff)
    eax_6 = sub_7548a5(eax[0x27])
else
    eax_6 = 2

eax[0x2a] = eax_6
EnumSystemLocalesW(sub_754ac4, 1)

if ((*arg1 & 4) == 0)
    *arg1 = 0

return arg1
