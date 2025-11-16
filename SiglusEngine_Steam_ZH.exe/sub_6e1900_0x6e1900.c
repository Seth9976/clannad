// 函数: sub_6e1900
// 地址: 0x6e1900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[5] = arg1[4]
int32_t eax_1 = arg1[7]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t result = arg1[4]

if (result != 0)
    result = j__free(result)
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

return result
