// 函数: sub_721f80
// 地址: 0x721f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
int32_t i_1 = arg2
int32_t ebx = *result
arg1 = result[1]

if (i_1 s> 0)
    int32_t i
    
    do
        int32_t esi_1 = *result
        result = &result[2]
        int32_t* edx_1 = result[-1]
        int32_t ecx_2 = esi_1 - ebx
        ebx = esi_1
        result[-2] = ecx_2
        result[-1] = edx_1 - arg1
        arg1 = edx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
