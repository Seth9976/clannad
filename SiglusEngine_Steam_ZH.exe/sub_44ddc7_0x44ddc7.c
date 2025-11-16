// 函数: sub_44ddc7
// 地址: 0x44ddc7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t* eax = sub_745f3f(0x1c)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_446745(eax)

if (eax_1 == 0)
    return 0x8007000e

eax_1[1] = arg2
eax_1[3] = arg3
*eax_1 = 5
(*(arg1 + 0xfc))[6] = eax_1
*(arg1 + 0xfc) = eax_1
return 0
