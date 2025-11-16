// 函数: sub_40d05a
// 地址: 0x40d05a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
int32_t i_1 = 0
int32_t i = 0

if (*(arg1 + 0x23c) u> 0)
    do
        *(arg3 + (i << 2)) = 0xffffffff
        i += 1
    while (i u< *(arg1 + 0x23c))

int32_t var_8_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        int32_t eax_2 = *(arg2 + (i_1 << 2))
        
        if (eax_2 != 0xffffffff)
            int32_t edx_1 = *(arg1 + 0x24c) + eax_2 * 0xc
            
            for (int32_t j = 0; j u< 3; j += 1)
                int32_t* eax_5 = arg3 + (*(edx_1 + (j << 2)) << 2)
                
                if (*eax_5 == 0xffffffff)
                    int32_t ebx_2 = var_8_1
                    var_8_1 += 1
                    *eax_5 = ebx_2
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0x264))

return 0
