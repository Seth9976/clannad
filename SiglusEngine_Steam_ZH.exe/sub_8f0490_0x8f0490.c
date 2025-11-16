// 函数: sub_8f0490
// 地址: 0x8f0490
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
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    int32_t var_11c
                    int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_7 != 0)
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
                            int32_t ebx_18 = *(*((eax_3 << 2) + &data_4e3da80) + (ebx_7 << 2))
                            
                            if (ebx_18 != 0)
                                int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
                                int32_t ebx_22
                                ebx_22.b = var_3c[2]
                                int32_t var_88
                                int32_t ebx_23 = ebx_22 + var_88
                                int32_t ebx_31
                                
                                if (ebx_22 + var_88 s< 0)
                                    if (ebx_23 s< 0xffffff01)
                                        ebx_23 = 0xffffff01
                                    
                                    int32_t ebx_34
                                    ebx_34.b = edi[2]
                                    ebx_31 = *((ebx_34 << 2) + *((ebx_23 << 2) + data_4ced578))
                                else
                                    if (ebx_23 s> 0xff)
                                        ebx_23 = 0xff
                                    
                                    int32_t ebx_26
                                    ebx_26.b = edi[2]
                                    ebx_31 =
                                        *(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_6
                                eax_6.b = edi[2]
                                edi[2] = eax_6.b + (*(((ebx_31 - eax_6) << 2) + edx_2)).b
                                int32_t ebx_40
                                ebx_40.b = var_3c[1]
                                int32_t var_84
                                int32_t ebx_41 = ebx_40 + var_84
                                int32_t ebx_49
                                
                                if (ebx_40 + var_84 s< 0)
                                    if (ebx_41 s< 0xffffff01)
                                        ebx_41 = 0xffffff01
                                    
                                    int32_t ebx_52
                                    ebx_52.b = edi[1]
                                    ebx_49 = *((ebx_52 << 2) + *((ebx_41 << 2) + data_4ced578))
                                else
                                    if (ebx_41 s> 0xff)
                                        ebx_41 = 0xff
                                    
                                    int32_t ebx_44
                                    ebx_44.b = edi[1]
                                    ebx_49 =
                                        *(((ebx_44 - 0xff) << 2) + *((ebx_41 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_10
                                eax_10.b = edi[1]
                                edi[1] = eax_10.b + (*(((ebx_49 - eax_10) << 2) + edx_2)).b
                                int32_t ebx_58
                                ebx_58.b = *var_3c
                                int32_t var_80
                                int32_t ebx_59 = ebx_58 + var_80
                                int32_t ebx_67
                                
                                if (ebx_58 + var_80 s< 0)
                                    if (ebx_59 s< 0xffffff01)
                                        ebx_59 = 0xffffff01
                                    
                                    int32_t ebx_70
                                    ebx_70.b = *edi
                                    ebx_67 = *((ebx_70 << 2) + *((ebx_59 << 2) + data_4ced578))
                                else
                                    if (ebx_59 s> 0xff)
                                        ebx_59 = 0xff
                                    
                                    int32_t ebx_62
                                    ebx_62.b = *edi
                                    ebx_67 =
                                        *(((ebx_62 - 0xff) << 2) + *((ebx_59 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_14
                                eax_14.b = *edi
                                *edi = eax_14.b + (*(((ebx_67 - eax_14) << 2) + edx_2)).b
            
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
