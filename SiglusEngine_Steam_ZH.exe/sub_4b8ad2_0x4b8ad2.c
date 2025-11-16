// 函数: sub_4b8ad2
// 地址: 0x4b8ad2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
*arg7 = 0
int32_t result_1 = arg3

if (result_1 u< arg4)
    int32_t edi
    int32_t var_18_1 = edi
    
    do
        void* edi_1 = *(arg2 + (result_1 << 2))
        int32_t i = 0
        
        if (edi_1 != 0 && *(edi_1 + 4) u> 0)
            do
                int32_t esi_1 = *(*(edi_1 + 8) + (i << 2))
                void* edx_5 = *(*(arg1 + 0x14) + (esi_1 << 2))
                
                if (esi_1 == arg5 || *(edx_5 + 0x38) == arg5)
                    *(edx_5 + 0xc) = *(arg6 + 0xc)
                    *(edx_5 + 0x10) = *(arg6 + 0x10)
                    result = result_1
                    *arg7 = 1
                
                i += 1
            while (i u< *(edi_1 + 4))
        
        result_1 += 1
    while (result_1 u< arg4)

return result
