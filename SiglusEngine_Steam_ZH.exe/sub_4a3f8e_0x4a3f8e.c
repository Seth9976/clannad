// 函数: sub_4a3f8e
// 地址: 0x4a3f8e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t edx_1 = *(arg1 + 0x14)
        void* eax_1 = *(edx_1 + (i << 2))
        int32_t esi_1 = *(eax_1 + 8)
        int32_t edx_3
        
        if (esi_1 == 0xffffffff)
            edx_3 = 0xffffffff
        else
            edx_3 = *(*(edx_1 + (esi_1 << 2)) + 0x30)
        
        *(eax_1 + 8) = edx_3
        int32_t edx_4 = *(eax_1 + 0x14)
        int32_t edx_6
        
        if (edx_4 == 0xffffffff)
            edx_6 = 0xffffffff
        else
            edx_6 = *(*(*(arg1 + 0x14) + (edx_4 << 2)) + 0x30)
        
        *(eax_1 + 0x14) = edx_6
        int32_t edx_7 = *(eax_1 + 0x38)
        int32_t edx_9
        
        if (edx_7 == 0xffffffff)
            edx_9 = 0xffffffff
        else
            edx_9 = *(*(*(arg1 + 0x14) + (edx_7 << 2)) + 0x30)
        
        i += 1
        *(eax_1 + 0x38) = edx_9
    while (i u< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* eax_3 = *(*(arg1 + 0x18) + (i_1 << 2))
        int32_t j = 0
        
        if (*eax_3 != 0)
            if (eax_3[1] u> 0)
                do
                    int32_t* edx_12 = eax_3[2] + (j << 2)
                    int32_t edi_1 = *edx_12
                    int32_t edi_3
                    
                    if (edi_1 == 0xffffffff)
                        edi_3 = 0xffffffff
                    else
                        edi_3 = *(*(*(arg1 + 0x14) + (edi_1 << 2)) + 0x30)
                    
                    j += 1
                    *edx_12 = edi_3
                while (j u< eax_3[1])
            
            int32_t j_1 = 0
            
            if (eax_3[3] u> 0)
                do
                    int32_t* edx_14 = eax_3[4] + (j_1 << 2)
                    int32_t edi_4 = *edx_14
                    int32_t edi_6
                    
                    if (edi_4 == 0xffffffff)
                        edi_6 = 0xffffffff
                    else
                        edi_6 = *(*(*(arg1 + 0x14) + (edi_4 << 2)) + 0x30)
                    
                    j_1 += 1
                    *edx_14 = edi_6
                while (j_1 u< eax_3[3])
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

return 0
