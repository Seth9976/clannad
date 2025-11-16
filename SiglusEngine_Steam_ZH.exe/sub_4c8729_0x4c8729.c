// 函数: sub_4c8729
// 地址: 0x4c8729
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = **(arg1 + 0x100)
int32_t edi
int32_t var_24 = edi
int32_t edi_2 = eax_1 & 0xfffff
int32_t var_18 = edi_2

if ((eax_1 & 0xfff00000) != 0x20800000)
    return 1

int32_t var_1c_1 = 0
int32_t i = 0
int32_t* var_10_1 = nullptr

do
    int32_t var_8_1 = 0
    
    if (edi_2 u> 0)
        void* eax_3 = *(arg1 + 0x100)
        int32_t* eax_5 = *(eax_3 + 8) + var_10_1
        int32_t* var_c_1 = *(eax_3 + 0x10)
        
        do
            int32_t edx_1 = *(arg1 + 0x14)
            void* ecx_3 = *(edx_1 + (*var_c_1 << 2))
            void* edx_2 = *(edx_1 + (*eax_5 << 2))
            
            if (*(edx_2 + 4) != *(ecx_3 + 4))
                break
            
            if (*(edx_2 + 8) != *(ecx_3 + 8))
                break
            
            if (*(edx_2 + 0xc) != *(ecx_3 + 0xc))
                break
            
            if (*(edx_2 + 0x10) != *(ecx_3 + 0x10))
                break
            
            var_8_1 += 1
            var_c_1 = &var_c_1[1]
            eax_5 = &eax_5[1]
        while (var_8_1 u< edi_2)
    
    if (var_8_1 != edi_2)
        int32_t eax_9 = sub_49f5a4(arg1, (edi_2 & 0xfffff) | 0x10000000, edi_2, edi_2)
        
        if (eax_9 == 0xffffffff)
            return 0x8007000e
        
        int32_t var_c_2 = 0
        void* ebx_5 = *(*(arg1 + 0x18) + (eax_9 << 2))
        
        if (edi_2 u> 0)
            int32_t* var_8_2 = var_10_1
            
            do
                int32_t edi_4 = var_c_2 << 2
                *(edi_4 + *(ebx_5 + 8)) = *(var_8_2 + *(*(arg1 + 0x100) + 8))
                *(var_8_2 + *(*(arg1 + 0x100) + 8)) = sub_49f64b(arg1, 
                    *(*(arg1 + 0x14) + (*(edi_4 + *(*(arg1 + 0x100) + 0x10)) << 2)))
                *(edi_4 + *(ebx_5 + 0x10)) = *(var_8_2 + *(*(arg1 + 0x100) + 8))
                
                if (*(edi_4 + *(ebx_5 + 0x10)) == 0xffffffff)
                    return 0x8007000e
                
                int32_t eax_22 = *(arg1 + 0x14)
                var_c_2 += 1
                var_8_2 = &var_8_2[1]
                *(*(eax_22 + (*(edi_4 + *(ebx_5 + 0x10)) << 2)) + 0x14) =
                    *(*(eax_22 + (*(edi_4 + *(ebx_5 + 8)) << 2)) + 0x14)
                int32_t eax_24 = *(arg1 + 0x14)
                *(*(eax_24 + (*(edi_4 + *(ebx_5 + 0x10)) << 2)) + 0x18) =
                    *(*(eax_24 + (*(edi_4 + *(ebx_5 + 8)) << 2)) + 0x18)
            while (var_c_2 u< var_18)
            
            edi_2 = var_18
        
        while (true)
            if (eax_9 u<= *(arg1 + 0xfc))
                if (eax_9 u<= 0)
                    break
                
                if ((**(*(arg1 + 0x18) + (eax_9 << 2) - 4) & 0xfff00000) != 0x20800000)
                    break
            
            int32_t* ecx_24 = *(arg1 + 0x18) + (eax_9 << 2)
            *ecx_24 = ecx_24[-1]
            eax_9 -= 1
        
        *(*(arg1 + 0x18) + (eax_9 << 2)) = ebx_5
        *(arg1 + 0xfc) += 1
        var_1c_1 = 1
    
    i += 1
    var_10_1 = &var_10_1[edi_2]
while (i u< 2)

int32_t result
result.b = var_1c_1 == 0
return result
