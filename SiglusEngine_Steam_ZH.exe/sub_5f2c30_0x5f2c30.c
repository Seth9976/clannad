// 函数: sub_5f2c30
// 地址: 0x5f2c30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0 || arg6 == 0)
    return &arg3[arg6]

int32_t var_38
int32_t var_18

if (arg5 s<= arg6 && arg5 s<= sub_5f2390(arg7))
    int32_t* ecx_2 = *(arg7 + 0x10)
    ecx_2[1] = *ecx_2
    int32_t var_34
    sub_5f2aa0(sub_5f27c0(&var_38, arg7), arg3, &var_18, arg2, var_38, var_34)
    int32_t eax_4 = var_18
    
    if (eax_4 != 0)
        j__free(eax_4)
    
    _memcpy(arg3, arg2, (arg4 - arg2) & 0xfffffffc)
    int32_t* eax_9 = *(arg7 + 0x10)
    int32_t* edx_1 = *eax_9
    void* ecx_7 = (eax_9[1] - edx_1) & 0xfffffffc
    void* result = arg4 - ecx_7
    _memcpy(result, edx_1, ecx_7)
    return result

int32_t eax_11 = sub_5f2390(arg7)

if (arg6 s> eax_11)
    if (arg3 != arg2 && arg2 != arg4)
        sub_5f30a0(eax_11, arg2, arg3, arg4)
    
    return &arg3[(arg4 - arg2) s>> 2]

int32_t* ecx_9 = *(arg7 + 0x10)
ecx_9[1] = *ecx_9
var_38 = 0
int32_t var_30_3 = 0
int32_t var_2c_2 = 0
int32_t eax_13 = *(arg7 + 0x10)
int32_t var_28_4 = eax_13
sub_5f2aa0(eax_13, arg2, &var_18, arg4, var_38, 0)
int32_t eax_14 = var_18

if (eax_14 != 0)
    j__free(eax_14)

int32_t eax_15 = (arg2 - arg3) s>> 2 << 2
_memcpy(arg4 - eax_15, arg3, eax_15)
int32_t* eax_16 = *(arg7 + 0x10)
int32_t* ecx_13 = *eax_16
_memcpy(arg3, ecx_13, (eax_16[1] - ecx_13) s>> 2 << 2)
return &arg3[(eax_16[1] - ecx_13) s>> 2]
