// 函数: sub_42c1ff
// 地址: 0x42c1ff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = sub_745f3f(0x10)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_42b91c(eax, arg2, *(arg1 + 0x50))

if (eax_1 == 0)
    return 0x8007000e

eax_1[3] = *(*(arg1 + 0x268) + 0x38)
*(*(arg1 + 0x268) + 0x38) = eax_1
int32_t eax_3

if (*(arg1 + 0x50) == 0 || arg2 == 0)
    eax_3 = 0
else
    eax_3 = 1

*(arg1 + 0x54) = eax_3
return 0
