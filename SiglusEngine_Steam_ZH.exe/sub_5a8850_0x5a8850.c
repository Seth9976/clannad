// 函数: sub_5a8850
// 地址: 0x5a8850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5a88e0(arg1)
int32_t eax = arg1[6]

if (eax != 0)
    j__free(eax)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

int32_t result = arg1[3]

if (result != 0)
    result = j__free(result)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

int32_t* ecx = *arg1

if (ecx != 0)
    int32_t* var_10_3 = arg1
    int32_t* var_14_1 = ecx
    sub_55d500(ecx, arg1[1])
    result = j__free(*arg1)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
