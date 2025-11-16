// 函数: sub_4e4c29
// 地址: 0x4e4c29
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 4)
void* edx_1 = *(*(eax + 0x14) + (arg3 << 2))
int32_t* result = *(*(eax + 0x10) + (*(edx_1 + 4) << 2))
int32_t esi_2 = arg2

if ((result[1].b & 0x20) == 0 && *(edx_1 + 0x5c) != 0)
    int32_t eax_2 = *(arg1 + 0x24)
    
    if (eax_2 != 0)
        int32_t edi
        int32_t var_10_1 = edi
        *(eax_2 + (((*(arg1 + 0x20))[esi_2] + *(*(arg1 + 0x1c) + (esi_2 << 2))) << 2)) = arg3
        esi_2 = arg2
    
    result = *(arg1 + 0x1c) + (esi_2 << 2)
    *result += 1

int32_t edx_2 = *(edx_1 + 0x14)

if (edx_2 == 0xffffffff)
    return result

return sub_4e4bb4(arg1, esi_2, edx_2)
