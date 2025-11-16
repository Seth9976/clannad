// 函数: sub_63c490
// 地址: 0x63c490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* eax = arg1[0xb]

if (eax != 0)
    sub_641c70(eax, arg1[0xc])
    j__free(arg1[0xb])
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

int32_t eax_1 = arg1[7]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t** eax_2 = arg1[5]
sub_641c90(&arg1[5], &var_8, *eax_2, eax_2)
j__free(arg1[5])
int32_t** eax_3 = arg1[3]
sub_641bb0(&arg1[3], &var_8, *eax_3, eax_3)
int32_t result = j__free(arg1[3])
int32_t* ecx_3 = *arg1

if (ecx_3 != 0)
    int32_t* var_14_8 = var_8
    int32_t* var_18_4 = ecx_3
    sub_642980(ecx_3, arg1[1])
    result = j__free(*arg1)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
