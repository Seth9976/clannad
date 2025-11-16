// 函数: sub_4a1fda
// 地址: 0x4a1fda
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t ecx = *ebx

if ((ecx & 0xfff00000) != 0)
    int32_t j_5 = ecx & 0xfffff
    uint32_t i_2 = divu.dp.d(0:(ebx[1]), j_5)
    int32_t j_4 = j_5
    
    if (i_2 u> 0)
        int32_t* var_8_1 = nullptr
        uint32_t i_1 = i_2
        int32_t edi
        int32_t var_20_1 = edi
        uint32_t i
        
        do
            if (j_5 u> 0)
                int32_t* edi_1 = var_8_1
                int32_t j_2 = j_5
                int32_t j
                
                do
                    void* eax_5 = *(*(arg1 + 0x14) + (*(edi_1 + ebx[2]) << 2))
                    int32_t ecx_2 = *(eax_5 + 0x48)
                    
                    if (ecx_2 != 0xffffffff && *(eax_5 + 8) == 0xffffffff)
                        void* edx_4 = *(*(arg1 + 0x18) + (ecx_2 << 2))
                        *(eax_5 + 0x40) |= 1 << (*(edx_4 + 0x24)).b
                        ebx = arg2
                        *(edx_4 + 0x28) = 1
                    
                    edi_1 = &edi_1[1]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                int32_t* edx_5 = var_8_1
                int32_t j_3 = j_4
                int32_t j_1
                
                do
                    void* eax_8 = *(*(arg1 + 0x14) + (*(edx_5 + ebx[2]) << 2))
                    int32_t ecx_5 = *(eax_8 + 0x48)
                    
                    if (ecx_5 != 0xffffffff && *(eax_8 + 8) == 0xffffffff)
                        void* eax_10 = *(*(arg1 + 0x18) + (ecx_5 << 2))
                        
                        if (*(eax_10 + 0x28) != 0)
                            int32_t ecx_8 = (*(eax_10 + 0x24) + 1) & 0x1f
                            *(eax_10 + 0x28) = 0
                            *(eax_10 + 0x24) = ecx_8
                    
                    edx_5 = &edx_5[1]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                j_5 = j_4
            
            var_8_1 = &var_8_1[j_5]
            i = i_1
            i_1 -= 1
        while (i != 1)

return 0
