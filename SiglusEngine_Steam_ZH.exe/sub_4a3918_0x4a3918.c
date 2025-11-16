// 函数: sub_4a3918
// 地址: 0x4a3918
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t i = 0
int32_t edi_1 = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t edx_1 = *(arg1 + 0x14)
        void* eax_1 = *(edx_1 + (i << 2))
        int32_t esi_1 = *(eax_1 + 0x38)
        
        if (esi_1 != 0xffffffff)
            void* edx_2 = *(edx_1 + (esi_1 << 2))
            *(eax_1 + 4) = *(edx_2 + 4)
            *(eax_1 + 8) = *(edx_2 + 8)
            *(eax_1 + 0xc) = *(edx_2 + 0xc)
            *(eax_1 + 0x10) = *(edx_2 + 0x10)
            *(eax_1 + 0x48) = *(edx_2 + 0x48)
            *(eax_1 + 0x4c) = *(edx_2 + 0x4c)
            *(eax_1 + 0x50) = *(edx_2 + 0x50)
            int32_t esi_9 = *(edx_2 + 0x54)
            
            if (esi_9 != 0xffffffff)
                int32_t edi_2 = *(eax_1 + 0x54)
                
                if (esi_9 u>= edi_2)
                    esi_9 = edi_2
                
                *(eax_1 + 0x54) = esi_9
                *(edx_2 + 0x54) = esi_9
                int32_t esi_12 = *(edx_2 + 0x58)
                int32_t edi_3 = *(eax_1 + 0x58)
                
                if (esi_12 u<= edi_3)
                    esi_12 = edi_3
                
                *(eax_1 + 0x58) = esi_12
                *(edx_2 + 0x58) = esi_12
                *(edx_2 + 0x5c) += *(eax_1 + 0x5c)
            else
                *(edx_2 + 0x54) = *(eax_1 + 0x54)
                *(edx_2 + 0x58) = *(eax_1 + 0x58)
                *(edx_2 + 0x5c) = *(eax_1 + 0x5c)
            
            edi_1 = 1
        
        i += 1
    while (i u< *(arg1 + 8))
    
    if (edi_1 != 0)
        int32_t i_1 = 0
        
        if (*(arg1 + 8) u> 0)
            do
                int32_t eax_4 = *(arg1 + 0x14)
                void* edx_3 = *(eax_4 + (i_1 << 2))
                int32_t esi_13 = *(edx_3 + 0x38)
                
                if (esi_13 != 0xffffffff)
                    *(edx_3 + 0x54) = *(*(eax_4 + (esi_13 << 2)) + 0x54)
                
                i_1 += 1
            while (i_1 u< *(arg1 + 8))

return 0
