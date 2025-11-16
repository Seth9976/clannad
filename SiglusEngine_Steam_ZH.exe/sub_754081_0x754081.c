// 函数: sub_754081
// 地址: 0x754081
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = _wcslen(*arg1) - 3
int32_t eax_2 = neg.d(eax_1)
int32_t eax_3 = sbb.d(eax_2, eax_2, eax_1 != 0)
arg1[4] = eax_3 + 1
int32_t eax_5

if (eax_3 == 0xffffffff)
    eax_5 = _GetPrimaryLen(*arg1)
else
    eax_5 = 2

arg1[3] = eax_5
BOOL result = sub_7551e2(sub_75431d, 3, 0)

if ((arg1[2].b & 4) == 0)
    arg1[2] = 0

return result
