// 函数: sub_465f60
// 地址: 0x465f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t result = arg1
int32_t result_1 = result
void* esi_1 = result * 0x650 + &data_72d6b0
void* ebx_1 = result * 0x7a0 + &data_98bf04

if (data_7031bc s> 0)
    int32_t i = 0
    
    do
        if (*(esi_1 + 0xc) != 8)
            sub_465e90(esi_1, ebx_1)
        else
            sub_478420(i, result)
        
        result = result_1
        i += 1
        esi_1 += 0xca0
        ebx_1 += 0xf40
    while (i s< data_7031bc)

return result
