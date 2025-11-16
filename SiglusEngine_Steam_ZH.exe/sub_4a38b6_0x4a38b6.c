// 函数: sub_4a38b6
// 地址: 0x4a38b6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = *(*(arg1 + 0x14) + (arg2 << 2))
int32_t edi
int32_t var_c = edi
void* edx_1 = *(*(arg1 + 0x10) + (*(eax_1 + 4) << 2))
*(eax_1 + 0x48) = arg3
int32_t edx_2 = *(edx_1 + 0x20)

if (edx_2 != 0)
    int32_t* edx_3 = edx_2 + ((*(eax_1 + 0x10) + (*(eax_1 + 0xc) << 2)) << 2)
    int32_t edi_5 = *edx_3
    
    if (edi_5 != 0xffffffff)
        *(eax_1 + 0x4c) = edi_5
        *(*(*(arg1 + 0x14) + (*edx_3 << 2)) + 0x50) = arg2
    
    *edx_3 = arg2

void* result = *(eax_1 + 0x14)

if (result == 0xffffffff)
    return result

return sub_4a3858(arg1, result, arg3)
