// 函数: sub_8f08d0
// 地址: 0x8f08d0
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
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
                        int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
                        int32_t ebx_11
                        ebx_11.b = var_3c[2]
                        int32_t var_88
                        int32_t ebx_12 = ebx_11 + var_88
                        int32_t ebx_20
                        
                        if (ebx_11 + var_88 s< 0)
                            if (ebx_12 s< 0xffffff01)
                                ebx_12 = 0xffffff01
                            
                            int32_t ebx_23
                            ebx_23.b = edi[2]
                            ebx_20 = *((ebx_23 << 2) + *((ebx_12 << 2) + data_4ced578))
                        else
                            if (ebx_12 s> 0xff)
                                ebx_12 = 0xff
                            
                            int32_t ebx_15
                            ebx_15.b = edi[2]
                            ebx_20 =
                                *(((ebx_15 - 0xff) << 2) + *((ebx_12 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_3
                        eax_3.b = edi[2]
                        edi[2] = eax_3.b + (*(((ebx_20 - eax_3) << 2) + edx_2)).b
                        int32_t ebx_29
                        ebx_29.b = var_3c[1]
                        int32_t var_84
                        int32_t ebx_30 = ebx_29 + var_84
                        int32_t ebx_38
                        
                        if (ebx_29 + var_84 s< 0)
                            if (ebx_30 s< 0xffffff01)
                                ebx_30 = 0xffffff01
                            
                            int32_t ebx_41
                            ebx_41.b = edi[1]
                            ebx_38 = *((ebx_41 << 2) + *((ebx_30 << 2) + data_4ced578))
                        else
                            if (ebx_30 s> 0xff)
                                ebx_30 = 0xff
                            
                            int32_t ebx_33
                            ebx_33.b = edi[1]
                            ebx_38 =
                                *(((ebx_33 - 0xff) << 2) + *((ebx_30 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_7
                        eax_7.b = edi[1]
                        edi[1] = eax_7.b + (*(((ebx_38 - eax_7) << 2) + edx_2)).b
                        int32_t ebx_47
                        ebx_47.b = *var_3c
                        int32_t var_80
                        int32_t ebx_48 = ebx_47 + var_80
                        int32_t ebx_56
                        
                        if (ebx_47 + var_80 s< 0)
                            if (ebx_48 s< 0xffffff01)
                                ebx_48 = 0xffffff01
                            
                            int32_t ebx_59
                            ebx_59.b = *edi
                            ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
                        else
                            if (ebx_48 s> 0xff)
                                ebx_48 = 0xff
                            
                            int32_t ebx_51
                            ebx_51.b = *edi
                            ebx_56 =
                                *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_11
                        eax_11.b = *edi
                        *edi = eax_11.b + (*(((ebx_56 - eax_11) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
