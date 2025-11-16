// 函数: sub_4b9255
// 地址: 0x4b9255
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = sub_4b723e(arg1, *(arg1 + 0x18), *(arg1 + 0xc))

if (result s>= 0)
    int32_t i = 0
    
    if (*(arg1 + 0xc) u> 0)
        do
            *(*(*(arg1 + 0x18) + (i << 2)) + 0x28) = 0
            void* edx_4 = *(*(arg1 + 0x18) + (i << 2))
            i += 1
            *(edx_4 + 0x24) = 0
        while (i u< *(arg1 + 0xc))
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0xc) u> 0)
        int32_t edi
        int32_t var_18_1 = edi
        
        do
            int32_t ecx = *(arg1 + 0x18)
            int32_t* edi_1 = *(ecx + (i_1 << 2))
            int32_t edx_6 = *edi_1 & 0xfff00000
            
            if (sub_4b4917(edx_6) != 0 || edx_6 == 0x11000000)
                int32_t ebx_1 = edi_1[9]
                sub_4c7a69(ecx, edi_1, 1)
                edi_1[9] = ebx_1
            
            i_1 += 1
        while (i_1 u< *(arg1 + 0xc))

return result
