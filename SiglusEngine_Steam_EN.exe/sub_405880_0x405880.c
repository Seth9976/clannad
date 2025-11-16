// 函数: sub_405880
// 地址: 0x405880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
int32_t* i_2 = *result
int32_t* i_1 = arg5

if (i_1 s> i_2)
    i_1 = i_2

int32_t* i_3 = nullptr

if (i_1 s> 0)
    result = arg2
    int32_t* edx_2 = arg3 - result
    void* esi_2 = arg4 - result
    i_3 = i_1
    int32_t* i
    
    do
        int32_t ecx = *(edx_2 + result)
        result = &result[1]
        i = i_1
        i_1 -= 1
        *(esi_2 + result - 4) =
            fconvert.s(fconvert.t(*((ecx << 2) + &data_632b40)) * fconvert.t(result[-1]))
    while (i != 1)

if (i_3 s< i_2)
    result = nullptr
    __builtin_memset(arg4 + (i_3 << 2), 0, (i_2 - i_3) << 2)

return result
