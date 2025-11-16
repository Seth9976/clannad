// 函数: sub_4e4bb4
// 地址: 0x4e4bb4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result_1 = arg3
int32_t esi = arg2
int32_t edi
int32_t var_10 = edi
int32_t result

while (true)
    void* eax_3 = *(*(*(arg1 + 4) + 0x14) + (result_1 << 2))
    int32_t result_2 = *(eax_3 + 0x38)
    
    if (result_2 == 0xffffffff)
        *(eax_3 + 0x30) = 0xffffffff
        int32_t edi_1 = *(eax_3 + 4)
        *(eax_3 + 0x74) = esi
        
        if ((*(*(*(*(arg1 + 4) + 0x10) + (edi_1 << 2)) + 4) & 0x10) == 0)
            if (*(arg1 + 0x10) != 0)
                *(*(arg1 + 0x10) + (((*(arg1 + 0xc))[esi] + *(*(arg1 + 8) + (esi << 2))) << 2)) =
                    result_1
                esi = arg2
            
            int32_t* edx_1 = *(arg1 + 8) + (esi << 2)
            *edx_1 += 1
        
        result = *(eax_3 + 8)
        
        if (result == 0xffffffff)
            break
        
        result_1 = result
    else
        result_1 = result_2

return result
