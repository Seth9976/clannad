// 函数: sub_4a4ab3
// 地址: 0x4a4ab3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = *(arg1 + 8)
int32_t edi
int32_t var_28 = edi
int32_t var_8 = 0

if (i_3 u> 0)
    int32_t* ecx = *(arg1 + 0x14)
    int32_t i
    
    do
        int32_t edx_2 = *(*ecx + 0xc)
        
        if (edx_2 u> var_8 && edx_2 != 0xffffffff)
            var_8 = edx_2
        
        ecx = &ecx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t var_8_1 = var_8 + 1
int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* edi_1 = *(*(arg1 + 0x18) + (i_1 << 2))
        int32_t j_2 = *(edi_1 + 0xc)
        
        if (j_2 u> 0)
            int32_t* edx_3 = *(edi_1 + 0x10)
            int32_t j_1 = j_2
            int32_t j
            
            do
                void* ecx_3 = *(*(arg1 + 0x14) + (*edx_3 << 2))
                
                if (*(ecx_3 + 0x44) == 0xffffffff
                        && (*(*(*(arg1 + 0x10) + (*(ecx_3 + 4) << 2)) + 4) & 0x20) != 0)
                    j_2 -= 1
                
                edx_3 = &edx_3[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        if (j_2 != *(edi_1 + 0xc))
            void* const var_14_1 = nullptr
            
            if (j_2 != 0)
                int32_t eax_3 = sub_49f5a4(arg1, (j_2 & 0xfffff) | 0x10000000, j_2, j_2)
                
                if (eax_3 == 0xffffffff)
                    return 0x8007000e
                
                void* eax_4 = *(*(arg1 + 0x18) + (eax_3 << 2))
                var_14_1 = eax_4
                sub_49e7bf(eax_4, edi_1)
            
            int32_t var_c_1 = 0
            
            if (*(edi_1 + 0xc) u> 0)
                void* var_18_1 = nullptr
                bool cond:4_1
                
                do
                    void* ebx_3 = *(*(arg1 + 0x14) + (*(*(edi_1 + 0x10) + (var_c_1 << 2)) << 2))
                    int32_t ecx_11 = *(arg1 + 0x10)
                    void* eax_8 = *(ecx_11 + (*(ebx_3 + 4) << 2))
                    int32_t var_2c_3 = ecx_11
                    int32_t var_30_2 = ecx_11
                    var_30_2.q = fconvert.d(float.t(0))
                    int32_t eax_9 =
                        sub_49f544(arg1, *(arg1 + 0x88), var_8_1, *(ebx_3 + 0x10), var_30_2)
                    
                    if (*(ebx_3 + 0x44) != 0xffffffff || (*(eax_8 + 4) & 0x20) == 0)
                        int32_t* ecx_15 = var_18_1
                        *(ecx_15 + *(var_14_1 + 0x10)) = *(*(edi_1 + 0x10) + (var_c_1 << 2))
                        *(ecx_15 + *(var_14_1 + 8)) = eax_9
                        var_18_1 = &ecx_15[1]
                    
                    *(*(edi_1 + 0x10) + (var_c_1 << 2)) = eax_9
                    cond:4_1 = var_c_1 + 1 u< *(edi_1 + 0xc)
                    var_c_1 += 1
                while (cond:4_1)
            
            var_8_1 += 1
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

int32_t result = sub_4a39e3(arg1)

if (result s< 0)
    return result

int32_t i_2 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_12 = *(*(arg1 + 0x14) + (i_2 << 2))
        
        if (*(eax_12 + 0x48) == 0xffffffff && *(eax_12 + 0x54) == 0xffffffff)
            *(eax_12 + 4) = *(arg1 + 0x74)
        
        i_2 += 1
    while (i_2 u< *(arg1 + 8))

return 0
