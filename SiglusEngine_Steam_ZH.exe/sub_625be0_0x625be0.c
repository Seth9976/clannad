// 函数: sub_625be0
// 地址: 0x625be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0 || arg6 == 0)
    return &arg3[arg6 * 2]

int32_t var_38
int32_t var_18

if (arg5 s<= arg6 && arg5 s<= sub_6253c0(arg7))
    int32_t* ecx_2 = *(arg7 + 0x10)
    ecx_2[1] = *ecx_2
    int32_t var_34
    sub_625a20(sub_5f27c0(&var_38, arg7), arg3, &var_18, arg2, var_38, var_34)
    int32_t eax_4 = var_18
    
    if (eax_4 != 0)
        eax_4 = j__free(eax_4)
    
    sub_5a4fe0(eax_4, arg4, arg2, arg3)
    int32_t* eax_6 = *(arg7 + 0x10)
    return sub_625d30(eax_6, eax_6[1], *eax_6, arg4)

int32_t eax_8 = sub_6253c0(arg7)

if (arg6 s> eax_8)
    if (arg3 != arg2 && arg2 != arg4)
        sub_626020(eax_8, arg2, arg3, arg4)
    
    return &arg3[((arg4 - arg2) s>> 3) * 2]

int32_t* ecx_8 = *(arg7 + 0x10)
ecx_8[1] = *ecx_8
var_38 = 0
int32_t var_30_1 = 0
int32_t var_2c = 0
int32_t eax_10 = *(arg7 + 0x10)
int32_t var_28_4 = eax_10
sub_625a20(eax_10, arg2, &var_18, arg4, var_38, 0)
int32_t eax_11 = var_18

if (eax_11 != 0)
    eax_11 = j__free(eax_11)

sub_625d30(eax_11, arg2, arg3, arg4)
int32_t** eax_12 = *(arg7 + 0x10)
return sub_5a4fe0(eax_12, eax_12[1], *eax_12, arg3)
