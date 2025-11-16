// 函数: sub_4d91ca
// 地址: 0x4d91ca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x40]

if (arg1[0x23] == *(*(arg1[5] + (**(eax + 0x10) << 2)) + 4))
    return sub_4d8e04(arg1, 0x2e, 0)

int32_t edi
int32_t var_1c_1 = edi
int32_t var_8_1
int32_t eax_1

if ((*(arg1 + 0x6e) & 0x10) == 0)
    eax_1 = *(eax + 0xc)
    var_8_1 = 0
    
    if (eax_1 u> 0)
        void* eax_2 = arg1[0x40]
        int32_t* edx_3 = *(eax_2 + 0x10)
        int32_t esi_2 = arg1[5]
        int32_t* eax_4 = *(eax_2 + 8) - edx_3
        int32_t* edi_1 = edx_3
        int32_t* var_10_1 = eax_4
        
        while (true)
            void* edx_4 = *(esi_2 + (*(eax_4 + edi_1) << 2))
            void* eax_7 = *(esi_2 + (*edi_1 << 2))
            
            if (*(eax_7 + 4) != *(edx_4 + 4))
                break
            
            if (*(eax_7 + 8) != *(edx_4 + 8))
                break
            
            if (*(eax_7 + 0xc) != *(edx_4 + 0xc))
                break
            
            if (*(eax_7 + 0x10) != *(edx_4 + 0x10))
                break
            
            if (*(eax_7 + 0x3c) != *(edx_4 + 0x3c))
                break
            
            if ((arg1[0x33].b & 4) != 0 && *(eax_7 + 0x60) != 0)
                break
            
            var_8_1 += 1
            edi_1 = &edi_1[1]
            
            if (var_8_1 u>= eax_1)
                break
            
            eax_4 = var_10_1

int32_t result

if ((*(arg1 + 0x6e) & 0x10) != 0 || var_8_1 != eax_1)
    int32_t i = 0
    
    if (*(arg1[0x40] + 0xc) u> 0)
        do
            void* eax_11 = arg1[0x40]
            int32_t edx_5 = arg1[5]
            int32_t* esi_5 = *(edx_5 + (*(*(eax_11 + 0x10) + (i << 2)) << 2))
            
            if ((*esi_5 & 0xe000000) == 0)
                *esi_5 |= **(edx_5 + (*(*(eax_11 + 8) + (i << 2)) << 2)) & 0xe000000
            
            i += 1
        while (i u< *(arg1[0x40] + 0xc))
    
    void* eax_19 = arg1[0x40]
    int32_t edx_7 = *(eax_19 + 0xc)
    result = sub_4d75f7(arg1, 1, *(eax_19 + 0x10), edx_7, *(eax_19 + 8), nullptr, nullptr, edx_7, 
        0, 0, 0, 0)
else
    result = 0

return result
