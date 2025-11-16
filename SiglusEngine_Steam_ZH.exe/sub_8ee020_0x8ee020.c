// 函数: sub_8ee020
// 地址: 0x8ee020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    i = i_1
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                void* var_98
                int32_t eax_1
                eax_1.b = *(var_98 + var_a0)
                int32_t var_b4
                
                if (var_b4 != 0)
                    eax_1.b = not.b(eax_1.b)
                
                char var_b0
                int32_t var_ac
                int32_t eax_3 = (eax_1 << var_b0) + var_ac
                
                if (eax_3 s< 0)
                    eax_3 = 0
                else if (eax_3 s> 0xff)
                    eax_3 = 0xff
                
                if (eax_3 != 0)
                    int32_t var_11c
                    int32_t ebx_9 = *(*((eax_3 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_9 != 0)
                        int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
                        char* var_3c
                        int32_t ebx_13
                        ebx_13.b = var_3c[2]
                        int32_t eax_4
                        eax_4.b = not.b(ebx_13.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_d0
                        int32_t eax_7 = var_f8 + *(((eax_4 + *(((ebx_13 - eax_4) << 2) + var_d0)
                            - var_f8) << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_22 = eax_7 + var_88
                        int32_t ebx_30
                        
                        if (eax_7 + var_88 s< 0)
                            if (ebx_22 s< 0xffffff01)
                                ebx_22 = 0xffffff01
                            
                            int32_t ebx_33
                            ebx_33.b = edi[2]
                            ebx_30 = *((ebx_33 << 2) + *((ebx_22 << 2) + data_4ced578))
                        else
                            if (ebx_22 s> 0xff)
                                ebx_22 = 0xff
                            
                            int32_t ebx_25
                            ebx_25.b = edi[2]
                            ebx_30 =
                                *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_10
                        eax_10.b = edi[2]
                        edi[2] = eax_10.b + (*(((ebx_30 - eax_10) << 2) + edx_2)).b
                        int32_t ebx_39
                        ebx_39.b = var_3c[1]
                        int32_t eax_12
                        eax_12.b = not.b(ebx_39.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_15 = var_f4 + *(((eax_12 + *(((ebx_39 - eax_12) << 2) + var_d0)
                            - var_f4) << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_48 = eax_15 + var_84
                        int32_t ebx_56
                        
                        if (eax_15 + var_84 s< 0)
                            if (ebx_48 s< 0xffffff01)
                                ebx_48 = 0xffffff01
                            
                            int32_t ebx_59
                            ebx_59.b = edi[1]
                            ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
                        else
                            if (ebx_48 s> 0xff)
                                ebx_48 = 0xff
                            
                            int32_t ebx_51
                            ebx_51.b = edi[1]
                            ebx_56 =
                                *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_18
                        eax_18.b = edi[1]
                        edi[1] = eax_18.b + (*(((ebx_56 - eax_18) << 2) + edx_2)).b
                        int32_t ebx_65
                        ebx_65.b = *var_3c
                        int32_t eax_20
                        eax_20.b = not.b(ebx_65.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_23 = var_f0 + *(((eax_20 + *(((ebx_65 - eax_20) << 2) + var_d0)
                            - var_f0) << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_74 = eax_23 + var_80
                        int32_t ebx_82
                        
                        if (eax_23 + var_80 s< 0)
                            if (ebx_74 s< 0xffffff01)
                                ebx_74 = 0xffffff01
                            
                            int32_t ebx_85
                            ebx_85.b = *edi
                            ebx_82 = *((ebx_85 << 2) + *((ebx_74 << 2) + data_4ced578))
                        else
                            if (ebx_74 s> 0xff)
                                ebx_74 = 0xff
                            
                            int32_t ebx_77
                            ebx_77.b = *edi
                            ebx_82 =
                                *(((ebx_77 - 0xff) << 2) + *((ebx_74 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_26
                        eax_26.b = *edi
                        *edi = eax_26.b + (*(((ebx_82 - eax_26) << 2) + edx_2)).b
            
            int32_t eax = var_a0 + 1
            int32_t var_bc
            
            if (eax s>= var_bc)
                eax = 0
            
            var_a0 = eax
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
