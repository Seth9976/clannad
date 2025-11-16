// 函数: sub_638730
// 地址: 0x638730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]

if (eax != 0)
    j__free(eax)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

int32_t result = *arg1

if (result != 0)
    result = j__free(result)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
