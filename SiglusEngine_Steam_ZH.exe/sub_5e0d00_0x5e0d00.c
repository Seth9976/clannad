// 函数: sub_5e0d00
// 地址: 0x5e0d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg2
int32_t var_18
int32_t i_1

if (eax_2 == 0)
    int32_t edx_1 = *(arg1 + 4)
    int32_t eax_4 = *(arg1 + 0x14) * edx_1
    int32_t esi_1 = *(arg1 + 0x3c)
    i_1 = 1
    int32_t edx_2 = *(arg1 + 0x44)
    int32_t esi_2 = esi_1 + edx_2
    int32_t ebx_3 = (edx_1 - 1) * *(arg1 + 0x18) + eax_4
    int32_t eax_5 = *(arg1 + 8)
    int32_t temp0_1 = divs.dp.d(
        sx.q(eax_5 * *(arg1 + 0x14) + (eax_5 - 1) * *(arg1 + 0x1c) + edx_2 - *(arg1 + 0x38)), esi_2)
    int32_t var_14 = temp0_1
    int32_t* edx_5 = &var_14
    
    if (temp0_1 s<= 1)
        edx_5 = &i_1
    
    int32_t esi_4 = *(arg1 + 0x80) - *(arg1 + 0x7c)
    int32_t edi_3 = *edx_5
    int32_t eax_11
    int32_t edx_6
    edx_6:eax_11 = muls.dp.d(0xea0ea0eb, esi_4)
    var_18 = edi_3
    i_1 = 0
    int32_t edx_8 = (edx_6 + esi_4) s>> 7
    int32_t ebx_4 = 0
    int32_t esi_7 = *(arg1 + 0x80) - *(arg1 + 0x7c)
    var_14 = divs.dp.d(sx.q(ebx_3), divs.dp.d(sx.q((edx_8 u>> 0x1f) + edx_8 - 1), edi_3) + 1)
    eax_2 = esi_7 s/ 0x8c
    
    if (eax_2 s> 0)
        int32_t edi_4 = 0
        int32_t eax_34
        
        do
            int32_t* esi_8 = *(arg1 + 0x7c)
            
            if (*(esi_8 + edi_4) != 0)
                int32_t eax_24
                int32_t edx_15
                edx_15:eax_24 = sx.q(i_1)
                int32_t eax_26 = divs.dp.d(edx_15:eax_24, var_18) * var_14
                int32_t edx_18 = mods.dp.d(edx_15:eax_24, var_18) * esi_2 + *(arg1 + 0x10)
                *(esi_8 + edi_4 + 4) = eax_26
                int32_t var_24_1 = eax_26 + var_14
                *(esi_8 + edi_4 + 8) = edx_18
                i_1 += 1
                int32_t var_20_1 = esi_2 + edx_18
                int32_t var_28_1 = edx_18
                *(edi_4 + *(arg1 + 0x7c) + 0x2c) = eax_26.o
            
            ebx_4 += 1
            edi_4 += 0x8c
            eax_34 = (*(arg1 + 0x80) - *(arg1 + 0x7c)) s/ 0x8c
        while (ebx_4 s< eax_34)
        
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_34
else if (eax_2 == 1)
    int32_t* edi_5 = arg1 + 0x6c
    int32_t esi_12 = *(arg1 + 0x80) - *(arg1 + 0x7c)
    int32_t ebx_5 = *(arg1 + 0x10)
    int32_t eax_37 = ebx_5 - *(arg1 + 0x44)
    *edi_5 = 0
    int32_t i_3 = esi_12 s/ 0x8c
    edi_5[1] = eax_37
    i_1 = i_3
    
    if (i_3 s> 0)
        int32_t* ebx_6 = *(arg1 + 0x7c)
        int32_t esi_15 = 0
        int32_t i_2 = i_1
        int32_t i
        
        do
            if (*(ebx_6 + esi_15) != 0)
                int32_t edx_25 = *(ebx_6 + esi_15 + 0x24)
                bool cond:2_1 = *edi_5 s>= edx_25
                var_18 = *(ebx_6 + esi_15 + 0x28)
                int32_t* eax_39 = &var_18
                
                if (cond:2_1)
                    eax_39 = edi_5
                
                var_18 = edx_25
                *edi_5 = *eax_39
                int32_t var_1c_1 = *(ebx_6 + esi_15 + 0x24)
                *(arg1 + 0x70) += *(arg1 + 0x44) + *(ebx_6 + esi_15 + 0x28)
                i_2 = i_1
            
            esi_15 += 0x8c
            i = i_2
            i_2 -= 1
            i_1 = i_2
        while (i != 1)
    
    int32_t esi_17 = *(arg1 + 0x80) - *(arg1 + 0x7c)
    i_1 = 0
    eax_2 = esi_17 s/ 0x8c
    
    if (eax_2 s> 0)
        eax_2 = *(arg1 + 0x7c)
        int32_t edi_6 = 0
        int32_t var_10_3 = eax_2
        int32_t esi_19
        
        do
            if (*(eax_2 + edi_6) != 0)
                *(eax_2 + edi_6 + 8) = ebx_5
                *(eax_2 + edi_6 + 4) = 0
                int32_t edx_29 = *(arg1 + 0x7c)
                int32_t var_28_2 = ebx_5
                int32_t var_1c_2 = *(edx_29 + edi_6 + 0x24)
                int32_t var_24_2 = *(arg1 + 0x6c)
                int32_t var_20_2 = *(arg1 + 0x44) + *(edx_29 + edi_6 + 0x28) + ebx_5
                *(edx_29 + edi_6 + 0x2c) = 0.o
                int32_t edx_30 = *(arg1 + 0x7c)
                var_10_3 = edx_30
                int32_t var_1c_3 = *(edx_30 + edi_6 + 0x24)
                ebx_5 += *(arg1 + 0x44) + *(edx_30 + edi_6 + 0x28)
            
            esi_19 = *(arg1 + 0x80) - *(arg1 + 0x7c)
            edi_6 += 0x8c
            i_1 += 1
            eax_2 = var_10_3
        while (i_1 s< esi_19 s/ 0x8c)
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
