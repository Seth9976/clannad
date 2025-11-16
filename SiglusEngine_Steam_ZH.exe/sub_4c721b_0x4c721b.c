// 函数: sub_4c721b
// 地址: 0x4c721b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t esi = *ebx
int32_t edi
int32_t var_50 = edi
int32_t var_34 = 0
void var_30
void* edi_1 = &var_30
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
*(edi_2 + 4) = 0
int32_t eax_1 = esi & 0xfff00000
int32_t var_24 = esi

if (eax_1 == 0x50000000 || eax_1 == 0x70800000)
    int32_t edi_11 = 0
    
    for (int32_t i = 0; i u< 4; i += 1)
        if (i u>= (esi & 0xfffff))
            arg6[i] = 0xff
        else
            arg6[i] = i
    
    if (arg4 u> 0)
        int32_t esi_3 = *ebx[4]
        
        while (true)
            int32_t eax_15 = *(arg3 + (edi_11 << 2))
            void* ecx_8 = *(*(arg1 + 0x14) + (eax_15 << 2))
            
            if (eax_15 != esi_3 || *(ecx_8 + 0x3c) != arg7)
                if (*(ecx_8 + 0x38) != esi_3)
                    return 1
                
                if (*(ecx_8 + 0x3c) != arg7)
                    return 1
            
            edi_11 += 1
            
            if (edi_11 u>= arg4)
                return 0
else
    int32_t eax_2 = 0
    int32_t var_14_1 = 0
    int32_t var_44[0x3]
    
    if (arg4 u> 0)
        int32_t ecx = *(arg1 + 0x14)
        int32_t* ecx_2 = arg3 - arg5
        int32_t* var_8_1 = arg5
        int32_t* var_20_1 = ecx_2
        
        do
            int32_t var_10_1 = 0
            void* edx_3 = *(ecx + (*(ecx_2 + var_8_1) << 2))
            
            if (arg8 != 0)
                eax_2 = *var_8_1
            
            if (arg8 == 0 || eax_2 u< 4)
                int32_t esi_1 = 0
                
                if (ebx[3] u<= 0)
                    return 1
                
                void* edi_7 = ebx[4] - &var_34
                void* var_1c_1 = edi_7
                
                while (true)
                    int32_t __saved_ebp
                    
                    if (*((eax_2 << 2) + arg3) != *(edi_7 + &(&__saved_ebp)[esi_1 - 0xc])
                            || *(edx_3 + 0x3c) != arg7)
                        bool cond:5_1 = *(edx_3 + 0x38) != *(ebx[4] + (esi_1 << 2))
                        ebx = arg2
                        
                        if (not(cond:5_1) && *(edx_3 + 0x3c) == arg7)
                            goto label_4c72f4
                    else
                    label_4c72f4:
                        var_10_1 = 1
                        var_44[eax_2] = esi_1
                        (&__saved_ebp)[esi_1 - 0xc] = 1
                    
                    esi_1 += 1
                    
                    if (esi_1 u>= ebx[3])
                        break
                    
                    edi_7 = var_1c_1
                
                if (var_10_1 == 0)
                    return 1
                
                ecx_2 = var_20_1
                esi = var_24
            
            var_8_1 = &var_8_1[1]
            eax_2 = var_14_1 + 1
            var_14_1 = eax_2
        while (eax_2 u< arg4)
    
    if (arg8 == 0)
        int32_t eax_11 = 0
        int32_t ecx_5 = esi & 0xfffff
        
        if (ecx_5 u> 0)
            do
                if ((&var_34)[eax_11] == 0)
                    return 1
                
                eax_11 += 1
            while (eax_11 u< ecx_5)
    
    int32_t* eax_12 = arg6
    void* edx_7 = arg5 - eax_12
    int32_t i_2 = 4
    int32_t i_1
    
    do
        int32_t ecx_6 = *(edx_7 + eax_12)
        
        if (ecx_6 u>= 4)
            *eax_12 = 0xff
        else
            *eax_12 = var_44[ecx_6]
        
        eax_12 = &eax_12[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return 0
