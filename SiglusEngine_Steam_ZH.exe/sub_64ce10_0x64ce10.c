// 函数: sub_64ce10
// 地址: 0x64ce10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3
int32_t var_34 = eax

if (eax != 0)
    int32_t arg_20
    int32_t arg_24
    int32_t arg_28
    int32_t arg_2c
    sub_64c4d0(&arg_20, arg4, arg2, &arg_20, &arg_24, &arg_28, &arg_2c)
    int32_t arg_8
    int32_t arg_c
    int32_t arg_10
    int32_t arg_14
    eax = sub_64c5e0(&arg_10, &arg_c, &arg_8, &arg_10, &arg_14, arg_20, arg_24, arg_28, arg_2c)
    
    if (eax.b != 0)
        int32_t eax_3 = arg_8
        int32_t ecx_3 = arg_10 - eax_3
        int32_t edx_2 = arg_c
        int32_t esi_2 = arg_14 - edx_2
        int32_t var_14_1 = ecx_3
        int32_t var_18_1 = esi_2
        int32_t var_8_1 = 4
        int32_t edi_1 = arg2 << 2
        
        if (ecx_3 s< 0)
            ecx_3 = neg.d(ecx_3)
            var_8_1 = 0xfffffffc
            var_14_1 = ecx_3
        
        if (esi_2 s< 0)
            esi_2 = neg.d(esi_2)
            edi_1 = neg.d(edi_1)
            var_18_1 = esi_2
        
        int32_t edi_2 = neg.d(edi_1)
        int32_t* ebx_3 = var_34 + ((arg2 * edx_2 + eax_3) << 2)
        int32_t eax_4
        
        if (arg6 == 0)
            eax_4.b = arg5
        else
            eax_4.b = 0xff
            eax_4.b = 0xff - arg5
        
        uint32_t eax_5 = zx.d(eax_4.b)
        int32_t edx_9 = ((eax_5 << 8 | eax_5) << 8 | eax_5) << 8 | eax_5
        int32_t var_34_1
        int32_t var_30_1
        int32_t var_2c_1
        int32_t var_28_1
        int32_t var_24_1
        int32_t var_20_1
        int32_t eax_10
        int32_t edi_3
        
        if (ecx_3 s<= esi_2)
            var_20_1 = esi_2
            edi_3 = neg.d(edi_2)
            var_28_1 = neg.d(esi_2)
            var_2c_1 = ecx_3 * 2
            var_34_1 = esi_2 * 2
            eax_10 = var_8_1
            var_24_1 = edi_3
            var_30_1 = eax_10
        else
            var_20_1 = ecx_3
            edi_3 = neg.d(edi_2)
            var_28_1 = neg.d(ecx_3)
            var_2c_1 = esi_2 * 2
            var_34_1 = ecx_3 * 2
            eax_10 = var_8_1
            var_24_1 = eax_10
            var_30_1 = edi_3
        
        if (esi_2 == 0)
            if (ecx_3 == 0)
                *ebx_3 = edx_9
                return eax_10
            
            int32_t* edi_4 = ebx_3
            int32_t i = var_14_1 + 1
            
            do
                *edi_4 = edx_9
                edi_4 += var_8_1
                i -= 1
            while (i != 0)
            
            return edx_9
        
        if (ecx_3 == 0)
            int32_t* edi_5 = ebx_3
            int32_t i_1 = var_18_1 + 1
            
            do
                *edi_5 = edx_9
                edi_5 += edi_3
                i_1 -= 1
            while (i_1 != 0)
            
            return edx_9
        
        int32_t* edi_6 = ebx_3
        eax = edx_9
        int32_t i_2 = var_20_1 + 1
        int32_t edx_12 = var_28_1
        
        do
            *edi_6 = eax
            edi_6 += var_24_1
            edx_12 += var_2c_1
            
            if (edx_12 s>= 0)
                edi_6 += var_30_1
                edx_12 -= var_34_1
            
            i_2 -= 1
        while (i_2 != 0)

return eax
