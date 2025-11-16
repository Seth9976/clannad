// 函数: sub_425430
// 地址: 0x425430
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
int32_t result = arg2

if (arg1 u<= 0x1ff && *(arg1 * 0x74 + 0x13747b0) == 0 && *(arg1 * 0x74 + &data_1374760) == 0)
    int32_t edx = *(arg1 * 0x74 + 0x137478c)
    
    if (edx != 0xffffffff)
        void* var_10_1 = arg1 * 0x74 + &data_1374790
        result = sub_4a83f0(arg1 * 0x74 + 0x13747cc, edx, arg1 * 0x74 + 0x13747b0, arg1, 
            arg1 * 0x74 + 0x13747cc)
    else
        result = sub_427370(arg1 * 0x74 + 0x13747cc, arg1 * 0x74 + 0x1374764, 
            arg1 * 0x74 + 0x13747b0, *(arg1 * 0x74 + 0x1374788), *(arg1 * 0x74 + 0x13747a0), 1, 
            *(arg1 * 0x74 + 0x13747a8), arg1 * 0x74 + 0x13747cc, result, 0)
    
    if (*(arg1 * 0x74 + 0x13747b0) == 0)
        *(arg1 * 0x74 + &data_1374760) = 1

return result
