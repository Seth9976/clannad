// 函数: sub_4b5743
// 地址: 0x4b5743
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xc)
int32_t edi
int32_t var_20 = edi
void* eax_1 = sub_49ec23(0x74)
int32_t* edi_1

if (eax_1 == 0)
    edi_1 = nullptr
else
    edi_1 = sub_49e789(eax_1)

if (edi_1 == 0)
    return 0x8007000e

int32_t result_1 = sub_49ec6e(edi_1, 0x10000004, 4, 4, 0)
int32_t result

if (result_1 s>= 0)
    int32_t i_3 = 0xffffffff
    int32_t i = 0
    
    if (*(arg1 + 8) u> 0)
        do
            int32_t eax_5 = i << 2
            
            if (*(*(eax_5 + *(arg1 + 0x14)) + 4) == *(arg1 + 0x84))
                *(edi_1[2] + (*(*(eax_5 + *(arg1 + 0x14)) + 0x10) << 2)) = i
                *(*(eax_5 + *(arg1 + 0x14)) + 4) = *(arg1 + 0x88)
                *(*(eax_5 + *(arg1 + 0x14)) + 0xc) = 0xffffffff
                i_3 = *(*(eax_5 + *(arg1 + 0x14)) + 0x6c)
            
            i += 1
        while (i u< *(arg1 + 8))
    
    int32_t ebx_3 = 0
    
    while (true)
        int32_t i_2 = i
        int32_t i_1 = i
        i_1.q = fconvert.d(float.t(0))
        *(edi_1[4] + (ebx_3 << 2)) = sub_49f544(arg1, *(arg1 + 0x84), 0, ebx_3, i_1)
        int32_t eax_9 = edi_1[4]
        
        if (*(eax_9 + (ebx_3 << 2)) == 0xffffffff)
            result = 0x8007000e
            goto label_4b5844
        
        void* eax_11 = *(*(arg1 + 0x14) + (*(eax_9 + (ebx_3 << 2)) << 2))
        *(eax_11 + 0x3c) = 0
        i = i_3
        ebx_3 += 1
        *(eax_11 + 0x6c) = i
        
        if (ebx_3 u>= 4)
            result_1 = sub_49f431(arg1, edi_1)
            
            if (result_1 s< 0)
                break
            
            int32_t eax_12 = 0
            int32_t var_10_1 = 0
            
            if (eax u> 0)
                do
                    void* eax_13 = *(*(arg1 + 0x18) + (eax_12 << 2))
                    void* var_c_1 = eax_13
                    
                    if (eax_13 != 0)
                        int32_t ecx_8 = *(eax_13 + 0xc)
                        
                        if (ecx_8 != 0 && *(*(*(arg1 + 0x14) + (**(eax_13 + 0x10) << 2)) + 4)
                                == *(arg1 + 0x84))
                            int32_t var_8_1 = 0
                            
                            if (ecx_8 u> 0)
                                while (true)
                                    int32_t* ecx_9 = nullptr
                                    
                                    while (true)
                                        int32_t* eax_15 = *(eax_13 + 0x10) + (var_8_1 << 2)
                                        
                                        if (*eax_15 == *(ecx_9 + edi_1[4]))
                                            *eax_15 = *(ecx_9 + edi_1[2])
                                        
                                        ecx_9 = &ecx_9[1]
                                        
                                        if (ecx_9 u>= 0x10)
                                            break
                                        
                                        eax_13 = var_c_1
                                    
                                    var_8_1 += 1
                                    
                                    if (var_8_1 u>= ecx_8)
                                        break
                                    
                                    eax_13 = var_c_1
                    
                    eax_12 = var_10_1 + 1
                    var_10_1 = eax_12
                while (eax_12 u< eax)
            
            return 0

result = result_1
label_4b5844:
sub_46cb59(edi_1, 1)
return result
