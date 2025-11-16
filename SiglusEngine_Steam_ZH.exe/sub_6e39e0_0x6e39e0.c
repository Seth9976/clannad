// 函数: sub_6e39e0
// 地址: 0x6e39e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
char result = sub_6e3790(arg1)

if (result == 0)
    return result

int32_t ecx_1 = arg2

if (ecx_1 s>= 0)
    int32_t eax = arg1[0x47]
    
    if (ecx_1 s>= eax)
        ecx_1 = eax - 1
else
    ecx_1 = 0

if (ecx_1 == arg1[0x47] - 1 && arg1[0x44].b == 0)
    *(arg1 + 0x111) = 1

int32_t var_10 = ecx_1
int32_t var_14 = arg5
return sub_6e3a50(arg1, ecx_1, arg3, arg4, ecx_1)
