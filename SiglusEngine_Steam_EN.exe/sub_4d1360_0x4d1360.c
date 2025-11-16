// 函数: sub_4d1360
// 地址: 0x4d1360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[2]

if (eax != 0)
    void* eax_3 = (eax * 3 + 3) << 2
    sub_4d6ae0(eax_3, &arg1[1], arg1, eax_3)
else
    sub_4d6960(eax, &arg1[1], arg1, 0xc, "STRS")

int32_t ecx = arg1[2] * 3
int32_t eax_5 = arg1[1]
*(eax_5 + (ecx << 2)) = 0
int32_t* eax_6 = eax_5 + (ecx << 2)
eax_6[1] = 0

if (arg2 != 0)
    uint32_t eax_7 = sub_4cfc80(arg2)
    sub_4d6960(eax_7, &eax_6[1], eax_6, eax_7, "STRS_STR")
    sub_4d1c30(&eax_6[1], arg2, eax_6[1], eax_7)

int32_t result = sub_4cfc80(arg2)
eax_6[2] = result
arg1[2] += 1
return result
