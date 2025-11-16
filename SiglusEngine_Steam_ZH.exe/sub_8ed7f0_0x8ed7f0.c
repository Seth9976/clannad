// 函数: sub_8ed7f0
// 地址: 0x8ed7f0
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
                        int32_t eax_4
                        eax_4.b = var_3c[2]
                        int32_t eax_6
                        eax_6.b = var_3c[1]
                        int32_t eax_8
                        eax_8.b = *var_3c
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_4 << 2))
                            + *(&data_4e3e280 + (eax_6 << 2)) + *(&data_4e3de80 + (eax_8 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_10 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_17
                        ebx_17.b = var_3c[2]
                        int32_t eax_12 = edx_6 + *(((ebx_17 - edx_6) << 2) + eax_10)
                        int32_t var_88
                        int32_t ebx_22 = eax_12 + var_88
                        int32_t ebx_30
                        
                        if (eax_12 + var_88 s< 0)
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
                        
                        int32_t eax_15
                        eax_15.b = edi[2]
                        edi[2] = eax_15.b + (*(((ebx_30 - eax_15) << 2) + edx_2)).b
                        int32_t ebx_39
                        ebx_39.b = var_3c[1]
                        int32_t eax_18 = edx_6 + *(((ebx_39 - edx_6) << 2) + eax_10)
                        int32_t var_84
                        int32_t ebx_44 = eax_18 + var_84
                        int32_t ebx_52
                        
                        if (eax_18 + var_84 s< 0)
                            if (ebx_44 s< 0xffffff01)
                                ebx_44 = 0xffffff01
                            
                            int32_t ebx_55
                            ebx_55.b = edi[1]
                            ebx_52 = *((ebx_55 << 2) + *((ebx_44 << 2) + data_4ced578))
                        else
                            if (ebx_44 s> 0xff)
                                ebx_44 = 0xff
                            
                            int32_t ebx_47
                            ebx_47.b = edi[1]
                            ebx_52 =
                                *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_21
                        eax_21.b = edi[1]
                        edi[1] = eax_21.b + (*(((ebx_52 - eax_21) << 2) + edx_2)).b
                        int32_t ebx_61
                        ebx_61.b = *var_3c
                        int32_t eax_24 = edx_6 + *(((ebx_61 - edx_6) << 2) + eax_10)
                        int32_t var_80
                        int32_t ebx_66 = eax_24 + var_80
                        int32_t ebx_74
                        
                        if (eax_24 + var_80 s< 0)
                            if (ebx_66 s< 0xffffff01)
                                ebx_66 = 0xffffff01
                            
                            int32_t ebx_77
                            ebx_77.b = *edi
                            ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
                        else
                            if (ebx_66 s> 0xff)
                                ebx_66 = 0xff
                            
                            int32_t ebx_69
                            ebx_69.b = *edi
                            ebx_74 =
                                *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_27
                        eax_27.b = *edi
                        *edi = eax_27.b + (*(((ebx_74 - eax_27) << 2) + edx_2)).b
            
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
