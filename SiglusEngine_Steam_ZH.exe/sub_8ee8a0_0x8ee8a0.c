// 函数: sub_8ee8a0
// 地址: 0x8ee8a0
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
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_9 = var_f8 + *(((var_e0 + *(((eax_4
                            + *(((ebx_13 - eax_4) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
                            << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_26 = eax_9 + var_88
                        int32_t ebx_34
                        
                        if (eax_9 + var_88 s< 0)
                            if (ebx_26 s< 0xffffff01)
                                ebx_26 = 0xffffff01
                            
                            int32_t ebx_37
                            ebx_37.b = edi[2]
                            ebx_34 = *((ebx_37 << 2) + *((ebx_26 << 2) + data_4ced578))
                        else
                            if (ebx_26 s> 0xff)
                                ebx_26 = 0xff
                            
                            int32_t ebx_29
                            ebx_29.b = edi[2]
                            ebx_34 =
                                *(((ebx_29 - 0xff) << 2) + *((ebx_26 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_12
                        eax_12.b = edi[2]
                        edi[2] = eax_12.b + (*(((ebx_34 - eax_12) << 2) + edx_2)).b
                        int32_t ebx_43
                        ebx_43.b = var_3c[1]
                        int32_t eax_14
                        eax_14.b = not.b(ebx_43.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t var_dc
                        int32_t eax_19 = var_f4 + *(((var_dc + *(((eax_14
                            + *(((ebx_43 - eax_14) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
                            << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_56 = eax_19 + var_84
                        int32_t ebx_64
                        
                        if (eax_19 + var_84 s< 0)
                            if (ebx_56 s< 0xffffff01)
                                ebx_56 = 0xffffff01
                            
                            int32_t ebx_67
                            ebx_67.b = edi[1]
                            ebx_64 = *((ebx_67 << 2) + *((ebx_56 << 2) + data_4ced578))
                        else
                            if (ebx_56 s> 0xff)
                                ebx_56 = 0xff
                            
                            int32_t ebx_59
                            ebx_59.b = edi[1]
                            ebx_64 =
                                *(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_22
                        eax_22.b = edi[1]
                        edi[1] = eax_22.b + (*(((ebx_64 - eax_22) << 2) + edx_2)).b
                        int32_t ebx_73
                        ebx_73.b = *var_3c
                        int32_t eax_24
                        eax_24.b = not.b(ebx_73.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t var_d8
                        int32_t eax_29 = var_f0 + *(((var_d8 + *(((eax_24
                            + *(((ebx_73 - eax_24) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
                            << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_86 = eax_29 + var_80
                        int32_t ebx_94
                        
                        if (eax_29 + var_80 s< 0)
                            if (ebx_86 s< 0xffffff01)
                                ebx_86 = 0xffffff01
                            
                            int32_t ebx_97
                            ebx_97.b = *edi
                            ebx_94 = *((ebx_97 << 2) + *((ebx_86 << 2) + data_4ced578))
                        else
                            if (ebx_86 s> 0xff)
                                ebx_86 = 0xff
                            
                            int32_t ebx_89
                            ebx_89.b = *edi
                            ebx_94 =
                                *(((ebx_89 - 0xff) << 2) + *((ebx_86 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_32
                        eax_32.b = *edi
                        *edi = eax_32.b + (*(((ebx_94 - eax_32) << 2) + edx_2)).b
            
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
