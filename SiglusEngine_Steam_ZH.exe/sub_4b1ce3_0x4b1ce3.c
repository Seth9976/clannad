// 函数: sub_4b1ce3
// 地址: 0x4b1ce3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_4a2fdf(arg1, *(arg1 + 0x88), 3, 0x20400)
sub_4a2fdf(arg1, *(arg1 + 0x8c), 6, 0x401)
sub_4a2fdf(arg1, *(arg1 + 0x90), 0xa, 0x4401)
int32_t edi
int32_t var_8c_1 = edi
int32_t eax_1 = *(arg1 + 0xc8) & 0xffff0000

if (eax_1 == 0x46580000 || eax_1 == 0x54580000)
    sub_4a2fdf(arg1, *(arg1 + 0x88), 2, 0x31028)

if ((*(arg1 + 0xc8) & 0xffff0000) != 0xfffe0000)
    sub_4a2fdf(arg1, *(arg1 + 0x80), 0x10, 0x200)

sub_4a2fdf(arg1, *(arg1 + 0x84), 0x20, 0x42000)
sub_4a2fdf(arg1, *(arg1 + 0xb4), 0x2020, 0x40000)
sub_4a2fdf(arg1, *(arg1 + 0xb8), 0x40020, 0x2000)

if ((*(arg1 + 0xc8) & 0xffff0000) != 0xffff0000)
    sub_4a2fdf(arg1, *(arg1 + 0x94), 0x80, 0)

int32_t eax_6 = *(arg1 + 0x30)
int32_t result
int32_t var_80[0x19]

if (eax_6 == 0)
label_4b1ea6:
    int32_t result_1 = sub_4aba37(arg1, &var_80, *(arg1 + 0x88), *(arg1 + 0x2c))
    
    if (result_1 s< 0)
        sub_4a36d6(&var_80)
        result = result_1
    else
        result_1 = sub_4ac102(arg1, &var_80, 1)
        
        if (result_1 s< 0)
            sub_4a36d6(&var_80)
            result = result_1
        else
            sub_4a36d6(&var_80)
            result_1 = sub_4aba37(arg1, &var_80, *(arg1 + 0x90), *(arg1 + 0x34))
            
            if (result_1 s< 0)
                sub_4a36d6(&var_80)
                result = result_1
            else
                result_1 = sub_4ac102(arg1, &var_80, 1)
                
                if (result_1 s< 0)
                    sub_4a36d6(&var_80)
                    result = result_1
                else
                    sub_4a36d6(&var_80)
                    
                    if ((*(arg1 + 0xcc) & 4) != 0)
                        result = 0
                    else
                        int32_t var_14_1 = 0
                        sub_4a3f75(arg1)
                        int32_t i = 0
                        
                        if (*(arg1 + 0xc) u<= 0)
                            result = 0
                        else
                            do
                                int32_t* eax_13 = *(*(arg1 + 0x18) + (i << 2))
                                
                                if ((*eax_13 & 0xfff00000) == 0x10000000)
                                    int32_t ecx_23 = 0
                                    int32_t var_10_1 = 0
                                    int32_t j = 0
                                    
                                    if (eax_13[3] u> 0)
                                        do
                                            int32_t edx_1 = eax_13[4][j]
                                            int32_t ecx_25 = *(arg1 + 0x14)
                                            int32_t edi_4 = *((j << 2) + eax_13[2])
                                            void* edx_2 = *(ecx_25 + (edx_1 << 2))
                                            void* ecx_26 = *(ecx_25 + (edi_4 << 2))
                                            
                                            if (*(edx_2 + 4) != *(ecx_26 + 4)
                                                    || *(edx_2 + 8) != *(ecx_26 + 8)
                                                    || *(edx_2 + 0xc) != *(ecx_26 + 0xc)
                                                    || *(edx_2 + 0x10) != *(ecx_26 + 0x10)
                                                    || *(edx_2 + 0x14) != *(ecx_26 + 0x14)
                                                    || *(edx_2 + 0x18) != *(ecx_26 + 0x18)
                                                    || *(edx_2 + 0x3c) != 0
                                                    || *(ecx_26 + 0x3c) != 0)
                                                *(eax_13[4] + (var_10_1 << 2)) = edx_1
                                                int32_t* edx_4 = eax_13[2]
                                                edx_4[var_10_1] = edx_4[j]
                                                ecx_23 = var_10_1 + 1
                                                var_10_1 = ecx_23
                                            else
                                                int32_t ecx_27 = 0xffffffff
                                                
                                                if (edi_4 != 0xffffffff)
                                                    ecx_27 =
                                                        *(*(*(arg1 + 0x14) + (edi_4 << 2)) + 0x30)
                                                
                                                *(edx_2 + 0x30) = ecx_27
                                                ecx_23 = var_10_1
                                            
                                            j += 1
                                        while (j u< eax_13[3])
                                    
                                    if (ecx_23 != eax_13[3])
                                        int32_t edx_7 = neg.d(ecx_23)
                                        *eax_13 = sbb.d(edx_7, edx_7, ecx_23 != 0)
                                            & ((ecx_23 & 0xfffff) | 0x10000000)
                                        eax_13[1] = ecx_23
                                        eax_13[3] = ecx_23
                                        var_14_1 = 1
                                
                                i += 1
                            while (i u< *(arg1 + 0xc))
                            
                            if (var_14_1 == 0)
                                result = 0
                            else
                                sub_4a3f8e(arg1)
                                result = sub_4a6590(arg1)
                                
                                if (result s>= 0)
                                    result = sub_49ff18(arg1)
                                    
                                    if (result s>= 0)
                                        result = 0
else
    result = sub_4aba37(arg1, &var_80, *(arg1 + 0x8c), eax_6)
    
    if (result s>= 0)
        if (sub_4ac102(arg1, &var_80, nullptr) s>= 0)
            sub_4ac102(arg1, &var_80, 1)
        else
            sub_4a2fdf(arg1, *(arg1 + 0x88), 2, 0x30028)
        
        sub_4a36d6(&var_80)
        goto label_4b1ea6
return result
