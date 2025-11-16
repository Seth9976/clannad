// 函数: sub_6f54d0
// 地址: 0x6f54d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg3 + arg1[7]
int32_t ebx_1 = arg4 + arg1[8]
int32_t var_10
char eax_2
int32_t ecx

if (eax_1 s>= 0 && arg1[1] s> eax_1 && ebx_1 s>= 0 && arg1[2] s> ebx_1)
    int32_t var_24_1 = 0
    int32_t* var_28_1 = arg1
    eax_2, ecx = sub_6f3b20(arg1, arg1, &var_10)

int32_t* result

if (eax_1 s< 0 || arg1[1] s<= eax_1 || ebx_1 s< 0 || arg1[2] s<= ebx_1 || eax_2 == 0)
    result = arg2
else
    int32_t var_24_2 = ecx
    int32_t var_c
    int32_t esi_4 = *(var_10 * ebx_1 + var_c + (eax_1 << 2))
    result = arg2
    
    if (sub_6f3c40(arg1) != 0)
        *result = esi_4
        return result

*result = 0
return result
