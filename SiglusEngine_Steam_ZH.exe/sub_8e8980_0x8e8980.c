// 函数: sub_8e8980
// 地址: 0x8e8980
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
                        int32_t var_e0
                        int32_t var_d4
                        int32_t eax_5 = var_e0 + *(((ebx_13 - var_e0) << 2) + var_d4)
                        int32_t var_88
                        int32_t ebx_18 = eax_5 + var_88
                        int32_t ebx_26
                        
                        if (eax_5 + var_88 s< 0)
                            if (ebx_18 s< 0xffffff01)
                                ebx_18 = 0xffffff01
                            
                            int32_t ebx_29
                            ebx_29.b = edi[2]
                            ebx_26 = *((ebx_29 << 2) + *((ebx_18 << 2) + data_4ced578))
                        else
                            if (ebx_18 s> 0xff)
                                ebx_18 = 0xff
                            
                            int32_t ebx_21
                            ebx_21.b = edi[2]
                            ebx_26 =
                                *(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_8
                        eax_8.b = edi[2]
                        edi[2] = eax_8.b + (*(((ebx_26 - eax_8) << 2) + edx_2)).b
                        int32_t ebx_35
                        ebx_35.b = var_3c[1]
                        int32_t var_dc
                        int32_t eax_11 = var_dc + *(((ebx_35 - var_dc) << 2) + var_d4)
                        int32_t var_84
                        int32_t ebx_40 = eax_11 + var_84
                        int32_t ebx_48
                        
                        if (eax_11 + var_84 s< 0)
                            if (ebx_40 s< 0xffffff01)
                                ebx_40 = 0xffffff01
                            
                            int32_t ebx_51
                            ebx_51.b = edi[1]
                            ebx_48 = *((ebx_51 << 2) + *((ebx_40 << 2) + data_4ced578))
                        else
                            if (ebx_40 s> 0xff)
                                ebx_40 = 0xff
                            
                            int32_t ebx_43
                            ebx_43.b = edi[1]
                            ebx_48 =
                                *(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_14
                        eax_14.b = edi[1]
                        edi[1] = eax_14.b + (*(((ebx_48 - eax_14) << 2) + edx_2)).b
                        int32_t ebx_57
                        ebx_57.b = *var_3c
                        int32_t var_d8
                        int32_t eax_17 = var_d8 + *(((ebx_57 - var_d8) << 2) + var_d4)
                        int32_t var_80
                        int32_t ebx_62 = eax_17 + var_80
                        int32_t ebx_70
                        
                        if (eax_17 + var_80 s< 0)
                            if (ebx_62 s< 0xffffff01)
                                ebx_62 = 0xffffff01
                            
                            int32_t ebx_73
                            ebx_73.b = *edi
                            ebx_70 = *((ebx_73 << 2) + *((ebx_62 << 2) + data_4ced578))
                        else
                            if (ebx_62 s> 0xff)
                                ebx_62 = 0xff
                            
                            int32_t ebx_65
                            ebx_65.b = *edi
                            ebx_70 =
                                *(((ebx_65 - 0xff) << 2) + *((ebx_62 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_20
                        eax_20.b = *edi
                        *edi = eax_20.b + (*(((ebx_70 - eax_20) << 2) + edx_2)).b
            
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
