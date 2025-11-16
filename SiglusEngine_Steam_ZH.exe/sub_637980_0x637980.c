// 函数: sub_637980
// 地址: 0x637980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[3]

if (ecx != 0)
    int32_t* var_10_1 = arg1
    int32_t* var_14_1 = ecx
    sub_6332b0(ecx, arg1[4])
    j__free(arg1[3])
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
