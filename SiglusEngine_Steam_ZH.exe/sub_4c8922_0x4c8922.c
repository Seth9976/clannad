// 函数: sub_4c8922
// 地址: 0x4c8922
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(*(arg1 + 0x100) + 0x10)
int32_t* eax_1 = *(arg1 + 0x14)
void* edx_1 = eax_1[*ecx]
int32_t edi
int32_t var_1c = edi

if ((*(*(*(arg1 + 0x10) + (*(edx_1 + 4) << 2)) + 4) & 1) == 0 || *(edx_1 + 0x3c) != 0
        || *(eax_1[ecx[1]] + 0x3c) != 0)
    int32_t var_c_1 = 0
    
    if (*(arg1 + 8) u> 0)
        int32_t i_3 = *(arg1 + 8)
        int32_t i
        
        do
            void* ecx_3 = *eax_1
            
            if (*(arg1 + 0x88) == *(ecx_3 + 4))
                int32_t ecx_4 = *(ecx_3 + 0xc)
                
                if (ecx_4 u>= var_c_1)
                    var_c_1 = ecx_4 + 1
            
            eax_1 = &eax_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t eax_2 = sub_49f5a4(arg1, 0x10000004, 4, 4)
    
    if (eax_2 == 0xffffffff)
        return 0x8007000e
    
    void* eax_3 = *(*(arg1 + 0x18) + (eax_2 << 2))
    void* ecx_8 = eax_3
    int32_t result = sub_49e7bf(ecx_8, *(arg1 + 0x100))
    
    if (result s< 0)
        return result
    
    for (int32_t i_1 = 0; i_1 u< 4; )
        void* var_20_2 = ecx_8
        void* var_24_1 = ecx_8
        var_24_1.q = fconvert.d(float.t(0))
        int32_t eax_4 = sub_49f544(arg1, *(arg1 + 0x88), var_c_1, i_1, var_24_1)
        
        if (eax_4 == 0xffffffff)
            return 0x8007000e
        
        int32_t eax_5 = *(arg1 + 0x14)
        int32_t* edi_4 = i_1 << 2
        result = sub_49f12c(*(eax_5 + (eax_4 << 2)), 
            *(eax_5 + (*(edi_4 + *(*(arg1 + 0x100) + 0x10)) << 2)))
        
        if (result s< 0)
            return result
        
        int32_t eax_6 = *(arg1 + 0x14)
        *(*(eax_6 + (eax_4 << 2)) + 0x18) =
            *(*(eax_6 + (*(edi_4 + *(*(arg1 + 0x100) + 0x10)) << 2)) + 0x18)
        int32_t eax_8 = *(arg1 + 0x14)
        i_1 += 1
        *(*(eax_8 + (eax_4 << 2)) + 0x14) =
            *(*(eax_8 + (*(edi_4 + *(*(arg1 + 0x100) + 0x10)) << 2)) + 0x14)
        *(edi_4 + *(eax_3 + 0x10)) = *(edi_4 + *(*(arg1 + 0x100) + 0x10))
        ecx_8 = *(*(arg1 + 0x100) + 0x10)
        *(edi_4 + ecx_8) = eax_4
        *(edi_4 + *(eax_3 + 8)) = eax_4
    
    for (int32_t i_2 = *(arg1 + 0xc) - 2; i_2 u> *(arg1 + 0xfc); i_2 -= 1)
        int32_t* edx_5 = *(arg1 + 0x18) + (i_2 << 2)
        edx_5[1] = *edx_5
    
    *(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2) + 4) = eax_3

*(arg1 + 0x18c) = 1
return 0
