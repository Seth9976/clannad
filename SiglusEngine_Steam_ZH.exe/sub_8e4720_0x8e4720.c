// 函数: sub_8e4720
// 地址: 0x8e4720
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
                    int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
                    int32_t eax_1
                    eax_1.b = var_3c[2]
                    int32_t eax_3
                    eax_3.b = var_3c[1]
                    int32_t eax_5
                    eax_5.b = *var_3c
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_1 << 2))
                        + *(&data_4e3e280 + (eax_3 << 2)) + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_7 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_9
                    ebx_9.b = var_3c[2]
                    int32_t eax_9 = edx_6 + *(((ebx_9 - edx_6) << 2) + eax_7)
                    int32_t var_88
                    int32_t ebx_14 = eax_9 + var_88
                    int32_t ebx_22
                    
                    if (eax_9 + var_88 s< 0)
                        if (ebx_14 s< 0xffffff01)
                            ebx_14 = 0xffffff01
                        
                        int32_t ebx_25
                        ebx_25.b = edi[2]
                        ebx_22 = *((ebx_25 << 2) + *((ebx_14 << 2) + data_4ced578))
                    else
                        if (ebx_14 s> 0xff)
                            ebx_14 = 0xff
                        
                        int32_t ebx_17
                        ebx_17.b = edi[2]
                        ebx_22 = *(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_12
                    eax_12.b = edi[2]
                    edi[2] = eax_12.b + (*(((ebx_22 - eax_12) << 2) + edx_2)).b
                    int32_t ebx_31
                    ebx_31.b = var_3c[1]
                    int32_t eax_15 = edx_6 + *(((ebx_31 - edx_6) << 2) + eax_7)
                    int32_t var_84
                    int32_t ebx_36 = eax_15 + var_84
                    int32_t ebx_44
                    
                    if (eax_15 + var_84 s< 0)
                        if (ebx_36 s< 0xffffff01)
                            ebx_36 = 0xffffff01
                        
                        int32_t ebx_47
                        ebx_47.b = edi[1]
                        ebx_44 = *((ebx_47 << 2) + *((ebx_36 << 2) + data_4ced578))
                    else
                        if (ebx_36 s> 0xff)
                            ebx_36 = 0xff
                        
                        int32_t ebx_39
                        ebx_39.b = edi[1]
                        ebx_44 = *(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_18
                    eax_18.b = edi[1]
                    edi[1] = eax_18.b + (*(((ebx_44 - eax_18) << 2) + edx_2)).b
                    int32_t ebx_53
                    ebx_53.b = *var_3c
                    int32_t eax_21 = edx_6 + *(((ebx_53 - edx_6) << 2) + eax_7)
                    int32_t var_80
                    int32_t ebx_58 = eax_21 + var_80
                    int32_t ebx_66
                    
                    if (eax_21 + var_80 s< 0)
                        if (ebx_58 s< 0xffffff01)
                            ebx_58 = 0xffffff01
                        
                        int32_t ebx_69
                        ebx_69.b = *edi
                        ebx_66 = *((ebx_69 << 2) + *((ebx_58 << 2) + data_4ced578))
                    else
                        if (ebx_58 s> 0xff)
                            ebx_58 = 0xff
                        
                        int32_t ebx_61
                        ebx_61.b = *edi
                        ebx_66 = *(((ebx_61 - 0xff) << 2) + *((ebx_58 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_24
                    eax_24.b = *edi
                    *edi = eax_24.b + (*(((ebx_66 - eax_24) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
