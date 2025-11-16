// 函数: sub_42bd0a
// 地址: 0x42bd0a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = sub_745f3f(0xc)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_42bc79(eax, arg2)

if (eax_1 == 0)
    return 0x8007000e

eax_1[1] = *(arg1 + 0x68)
*(arg1 + 0x68) = eax_1
*(arg1 + 0x298) = arg2
return 0
