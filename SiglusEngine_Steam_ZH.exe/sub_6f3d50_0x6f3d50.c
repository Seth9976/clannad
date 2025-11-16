// 函数: sub_6f3d50
// 地址: 0x6f3d50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_1c = 0
int32_t* var_20 = arg1
int32_t var_10
char result
int32_t ecx
result, ecx = sub_6f3b20(arg1, arg1, &var_10)

if (result == 0)
    return result

int32_t i = 0

if (arg1[4] s> 0)
    ecx = arg1[3]
    
    do
        int32_t edx_1 = 0
        int32_t var_c
        void* eax_2 = var_10 * i + var_c
        
        if (ecx s> 0)
            do
                ecx.b = arg2
                eax_2 += 4
                *(eax_2 - 4) = ecx.b
                edx_1 += 1
                ecx.b = arg3
                *(eax_2 - 3) = ecx.b
                ecx.b = arg4
                *(eax_2 - 2) = ecx.b
                ecx.b = arg5
                *(eax_2 - 1) = ecx.b
                ecx = arg1[3]
            while (edx_1 s< ecx)
        
        i += 1
    while (i s< arg1[4])

int32_t var_1c_1 = ecx
return sub_6f3c40(arg1) != 0
