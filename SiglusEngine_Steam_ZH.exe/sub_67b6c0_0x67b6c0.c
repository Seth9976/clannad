// 函数: sub_67b6c0
// 地址: 0x67b6c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char var_8 = 0
int32_t esi = arg1[3]
int32_t var_18
int32_t var_10

if (arg2 u> esi)
    int32_t eax_1 = *arg1
    int32_t ecx = 0
    var_10 = eax_1
    int32_t var_c_1 = 0
    
    if (esi != 0)
        sub_67bd10(&var_10, esi)
        ecx = var_c_1
        eax_1 = var_10
    
    sub_67b950(arg1, &var_18, arg2 - esi, &var_8, eax_1, ecx)
    return 

if (arg2 u>= esi)
    return 

int32_t eax_3 = *arg1
var_10 = eax_3
int32_t var_c_2 = 0

if (esi != 0)
    sub_67bd10(&var_10, esi)
    eax_3 = *arg1

var_18 = eax_3
int32_t var_14_1 = 0
void var_20
int32_t* eax_4 = sub_67ba50(&var_18, &var_20, arg2)
sub_67b820(arg1, &var_18, *eax_4, eax_4[1], var_10, var_c_2)
