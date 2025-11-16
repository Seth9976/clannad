// 函数: sub_6364f0
// 地址: 0x6364f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t** eax = arg1[3]
sub_5d47e0(&arg1[3], &var_8, *eax, eax)
j__free(arg1[3])
int32_t result = *arg1

if (result != 0)
    result = j__free(result)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
