// 函数: sub_614290
// 地址: 0x614290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0 || arg6 == 0)
    return &arg3[arg6 * 4]

void* var_38
void var_18

if (arg5 s<= arg6 && arg5 s<= sub_613710(arg7))
    int32_t* ecx_1 = *(arg7 + 0x10)
    ecx_1[1] = *ecx_1
    int32_t var_34
    int32_t var_30
    sub_613fb0(sub_5f27c0(&var_38, arg7), arg3, &var_18, arg2, var_38, var_34, var_30)
    sub_614780(sub_6135e0(&var_18), arg4, arg2, arg3)
    int32_t* eax_6 = *(arg7 + 0x10)
    return sub_614520(eax_6, eax_6[1], *eax_6, arg4)

int32_t eax_8 = sub_613710(arg7)

if (arg6 s> eax_8)
    if (arg3 != arg2 && arg2 != arg4)
        sub_614ae0(eax_8, arg2, arg3, arg4)
    
    return arg3 + ((arg4 - arg2) & 0xfffffff0)

int32_t* ecx_8 = *(arg7 + 0x10)
ecx_8[1] = *ecx_8
var_38 = nullptr
int32_t var_2c = 0
int32_t eax_10 = *(arg7 + 0x10)
int32_t var_28_2 = eax_10
sub_613fb0(eax_10, arg2, &var_18, arg4, var_38, 0, 0)
sub_614520(sub_6135e0(&var_18), arg2, arg3, arg4)
int32_t** eax_13 = *(arg7 + 0x10)
return sub_614780(eax_13, eax_13[1], *eax_13, arg3)
