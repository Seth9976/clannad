// 函数: sub_4a352d
// 地址: 0x4a352d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t i = arg3
int32_t edi
int32_t var_18 = edi

do
    int32_t edx_1 = *(arg1 + 0x14)
    int32_t i_1 = *(*(edx_1 + (i << 2)) + 0x38)
    
    if (i_1 != 0xffffffff)
        i = i_1
    
    void* esi = *(edx_1 + (i << 2))
    
    if (*(esi + 4) == *arg2)
        int32_t edx_3 = *(esi + 0x74)
        
        if (arg2[0x16] != 0)
            int32_t edx_6 = arg2[0x14][edx_3] + *(arg2[0x13] + (edx_3 << 2))
            *(arg2[0x15] + (edx_6 << 2)) = edx_6
            int32_t edx_8 = edx_6 * 0xc
            *(edx_8 + arg2[0x16]) = arg4
            int32_t edi_8 = **(*(arg1 + 0x18) + (arg4 << 2)) & 0xfff00000
            
            if (edi_8 == 0x20700000 || edi_8 == 0x20800000 || edi_8 == 0x11500000)
                *(edx_8 + arg2[0x16] + 4) = *(esi + 0x14)
                *(edx_8 + arg2[0x16] + 8) = *(esi + 0x18)
            else
                *(edx_8 + arg2[0x16] + 4) =
                    *(*(*(arg1 + 0x14) + (**(*(*(arg1 + 0x18) + (arg4 << 2)) + 0x10) << 2)) + 0x14)
                *(edx_8 + arg2[0x16] + 8) =
                    *(*(*(arg1 + 0x14) + (**(*(*(arg1 + 0x18) + (arg4 << 2)) + 0x10) << 2)) + 0x18)
            
            void* ebx_12 = edx_8 + arg2[0x16]
            int32_t j = *(ebx_12 + 4)
            int32_t ebx_13 = *(ebx_12 + 8)
            void* edi_39
            
            for (; j != *(esi + 0x14); j = *(edi_39 + 0x14))
                int32_t* edi_24 = j << 2
                
                if ((*(*(*(arg1 + 0x10) + (*(*(edi_24 + *(arg1 + 0x14)) + 4) << 2)) + 5) & 0x80)
                        != 0)
                    *(edx_8 + arg2[0x16] + 4) = j
                    *(edx_8 + arg2[0x16] + 8) = ebx_13
                    *(edx_8 + arg2[0x16]) = *(*(edi_24 + *(arg1 + 0x14)) + 0x58)
                    
                    if (*(esi + 0x58) u< *(*(edi_24 + *(arg1 + 0x14)) + 0x58))
                        *(esi + 0x58) = *(*(edi_24 + *(arg1 + 0x14)) + 0x58)
                
                edi_39 = *(edi_24 + *(arg1 + 0x14))
                ebx_13 = *(edi_39 + 0x18)
        
        int32_t* edx_10 = arg2[0x13] + (edx_3 << 2)
        *edx_10 += 1
    
    i = *(esi + 8)
while (i != 0xffffffff)

return arg2
