// 函数: sub_4b5154
// 地址: 0x4b5154
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
int32_t* edi_1 = *(arg1 + 0x100)

if ((*edi_1 & 0xfff00000) != 0x10100000)
    return 0

int32_t* eax_3 = *(arg1 + 0x100)
int32_t ecx = *(arg1 + 0x14)
int32_t var_8_1 = 0
int32_t i_4 = *eax_3 & 0xfffff

if ((*(*(*(arg1 + 0x10) + (*(*(ecx + (*eax_3[2] << 2)) + 4) << 2)) + 4) & 0x200) != 0)
    var_8_1 = 1

if ((*(arg1 + 0x6e) & 2) != 0 && i_4 u> 0)
    int32_t* var_c_1 = edi_1[2]
    int32_t i_2 = i_4
    int32_t i
    
    do
        void* eax_12 = *(ecx + (*var_c_1 << 2))
        
        if ((*(eax_12 + 0x3c) & 0x200) != 0)
            var_8_1 = 1
        
        int32_t edi_2 = *(eax_12 + 0x38)
        
        if (edi_2 != 0xffffffff)
            eax_12 = *(ecx + (edi_2 << 2))
        
        if ((*(eax_12 + 0x3c) & 0x200) != 0)
            var_8_1 = 1
        
        var_c_1 = &var_c_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (var_8_1 == 0)
    return 0

void* eax_13 = sub_49ec23(0x74)
int32_t* var_8_2

if (eax_13 == 0)
    var_8_2 = nullptr
else
    var_8_2 = sub_49e789(eax_13)

if (var_8_2 == 0)
    return 0x8007000e

int32_t result = sub_49ec6e(var_8_2, (i_4 & 0xfffff) | 0x20500000, i_4 * 2, i_4, 0)

if (result s>= 0)
    result = sub_49e7bf(var_8_2, *(arg1 + 0x100))
    
    if (result s>= 0)
        int32_t eax_21
        int32_t ecx_5
        eax_21, ecx_5 = sub_49f4eb(arg1, 0xabfed8, 0x311, 1, 4)
        int32_t eax_22
        
        if (eax_21 != 0xffffffff)
            int32_t var_24_2 = ecx_5
            int32_t var_28_2 = ecx_5
            var_28_2.q = fconvert.d(fconvert.t(-1.0))
            eax_22 = sub_49f544(arg1, eax_21, 0, 0, var_28_2)
        
        if (eax_21 == 0xffffffff || eax_22 == 0xffffffff)
            result = 0x8007000e
        else
            int32_t eax_24 = i_4 << 2
            int32_t esi_3
            int32_t edi_4
            edi_4, esi_3 = __builtin_memcpy(var_8_2[2], *(*(arg1 + 0x100) + 8), eax_24 u>> 2 << 2)
            int32_t* edx_5 = var_8_2
            __builtin_memcpy(edi_4, esi_3, eax_24 & 3)
            int32_t var_10_1 = eax_24
            int32_t eax_26 = eax_24
            int32_t esi_5
            int32_t edi_6
            edi_6, esi_5 = __builtin_memcpy(edx_5[4], *(*(arg1 + 0x100) + 0x10), eax_24 u>> 2 << 2)
            __builtin_memcpy(edi_6, esi_5, eax_26 & 3)
            int32_t i_3 = i_4
            
            if (i_3 u> 0)
                int32_t i_1
                
                do
                    *(eax_26 + edx_5[2]) = eax_22
                    eax_26 += 4
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            void* ecx_16 = *(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2))
            result = 0
            
            if (ecx_16 != 0)
                sub_46cb59(ecx_16, 1)
                edx_5 = var_8_2
            
            *(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2)) = edx_5
            var_8_2 = nullptr

if (var_8_2 != 0)
    sub_46cb59(var_8_2, 1)

return result
