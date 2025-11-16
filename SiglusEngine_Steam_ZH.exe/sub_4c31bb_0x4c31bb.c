// 函数: sub_4c31bb
// 地址: 0x4c31bb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* edx = *(arg2 + 4)
int32_t var_8_1 = 0
int32_t edi
int32_t var_14 = edi

if (edx u> 0)
    int32_t* edx_1 = *(arg2 + 8)
    
    do
        void* eax_2 = *(*(arg1 + 0x14) + (*edx_1 << 2))
        
        if (*(arg1 + 0x88) == *(eax_2 + 4))
            int32_t eax_3 = *(eax_2 + 0x50)
            
            if (eax_3 u< arg3 && (*(*(*(arg1 + 0x18) + (eax_3 << 2)) + 2) & 0xfff0) != 0)
                return 1
        
        var_8_1 += 1
        edx_1 = &edx_1[1]
    while (var_8_1 u< edx)

return 0
