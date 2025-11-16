// 函数: sub_6345b0
// 地址: 0x6345b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2
int32_t ecx = *arg3

if (eax s< ecx)
label_6345ce:
    int32_t ecx_1 = *arg2
    int32_t edx = arg2[1]
    *arg2 = *arg3
    arg2[1] = arg3[1]
    *arg3 = ecx_1
    arg3[1] = edx
else if (eax s<= ecx && arg2[1] s< arg3[1])
    goto label_6345ce

int32_t edx_1 = *arg2
int32_t result = *arg4

if (result s< edx_1)
label_6345f5:
    int32_t result_1 = *arg4
    int32_t ebx_1 = arg4[1]
    *arg4 = *arg2
    arg4[1] = arg2[1]
    result = result_1
    *arg2 = result_1
    arg2[1] = ebx_1
    int32_t ecx_3 = *arg3
    
    if (result s< ecx_3)
    label_63461a:
        *arg2 = ecx_3
        result = arg3[1]
        arg2[1] = result
        *arg3 = result_1
        arg3[1] = ebx_1
    else if (result s<= ecx_3 && ebx_1 s< arg3[1])
        goto label_63461a
else if (result s<= edx_1)
    result = arg4[1]
    
    if (result s< arg2[1])
        goto label_6345f5

return result
