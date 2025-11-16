// 函数: sub_8efcf0
// 地址: 0x8efcf0
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
                        int32_t ebx_12 = *(*((eax_3 << 2) + &data_4e3da80) + (ebx_1 << 2))
                        
                        if (ebx_12 != 0)
                            int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
                            int32_t ebx_16
                            ebx_16.b = var_3c[2]
                            int32_t eax_4
                            eax_4.b = not.b(ebx_16.b)
                            int32_t var_d0
                            int32_t eax_5 = eax_4 + *(((ebx_16 - eax_4) << 2) + var_d0)
                            int32_t var_88
                            int32_t ebx_21 = eax_5 + var_88
                            int32_t ebx_29
                            
                            if (eax_5 + var_88 s< 0)
                                if (ebx_21 s< 0xffffff01)
                                    ebx_21 = 0xffffff01
                                
                                int32_t ebx_32
                                ebx_32.b = edi[2]
                                ebx_29 = *((ebx_32 << 2) + *((ebx_21 << 2) + data_4ced578))
                            else
                                if (ebx_21 s> 0xff)
                                    ebx_21 = 0xff
                                
                                int32_t ebx_24
                                ebx_24.b = edi[2]
                                ebx_29 = *(((ebx_24 - 0xff) << 2) + *((ebx_21 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_8
                            eax_8.b = edi[2]
                            edi[2] = eax_8.b + (*(((ebx_29 - eax_8) << 2) + edx_2)).b
                            int32_t ebx_38
                            ebx_38.b = var_3c[1]
                            int32_t eax_10
                            eax_10.b = not.b(ebx_38.b)
                            int32_t eax_11 = eax_10 + *(((ebx_38 - eax_10) << 2) + var_d0)
                            int32_t var_84
                            int32_t ebx_43 = eax_11 + var_84
                            int32_t ebx_51
                            
                            if (eax_11 + var_84 s< 0)
                                if (ebx_43 s< 0xffffff01)
                                    ebx_43 = 0xffffff01
                                
                                int32_t ebx_54
                                ebx_54.b = edi[1]
                                ebx_51 = *((ebx_54 << 2) + *((ebx_43 << 2) + data_4ced578))
                            else
                                if (ebx_43 s> 0xff)
                                    ebx_43 = 0xff
                                
                                int32_t ebx_46
                                ebx_46.b = edi[1]
                                ebx_51 = *(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_14
                            eax_14.b = edi[1]
                            edi[1] = eax_14.b + (*(((ebx_51 - eax_14) << 2) + edx_2)).b
                            int32_t ebx_60
                            ebx_60.b = *var_3c
                            int32_t eax_16
                            eax_16.b = not.b(ebx_60.b)
                            int32_t eax_17 = eax_16 + *(((ebx_60 - eax_16) << 2) + var_d0)
                            int32_t var_80
                            int32_t ebx_65 = eax_17 + var_80
                            int32_t ebx_73
                            
                            if (eax_17 + var_80 s< 0)
                                if (ebx_65 s< 0xffffff01)
                                    ebx_65 = 0xffffff01
                                
                                int32_t ebx_76
                                ebx_76.b = *edi
                                ebx_73 = *((ebx_76 << 2) + *((ebx_65 << 2) + data_4ced578))
                            else
                                if (ebx_65 s> 0xff)
                                    ebx_65 = 0xff
                                
                                int32_t ebx_68
                                ebx_68.b = *edi
                                ebx_73 = *(((ebx_68 - 0xff) << 2) + *((ebx_65 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_20
                            eax_20.b = *edi
                            *edi = eax_20.b + (*(((ebx_73 - eax_20) << 2) + edx_2)).b
            
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
