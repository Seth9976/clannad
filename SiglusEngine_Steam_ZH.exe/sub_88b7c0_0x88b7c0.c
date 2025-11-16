// 函数: sub_88b7c0
// 地址: 0x88b7c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_3c
char* esi_1 = var_3c
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
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
        int32_t temp4_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                void* var_98
                int32_t eax
                eax.b = *(var_98 + var_a0)
                int32_t var_b4
                
                if (var_b4 != 0)
                    eax.b = not.b(eax.b)
                
                char var_b0
                int32_t var_ac
                int32_t eax_2 = (eax << var_b0) + var_ac
                
                if (eax_2 s< 0)
                    eax_2 = 0
                else if (eax_2 s> 0xff)
                    eax_2 = 0xff
                
                if (eax_2 != 0)
                    int32_t var_11c
                    int32_t ebx_10 = *(*((eax_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_10 != 0)
                        int32_t edx_2 = *((ebx_10 << 2) + &data_4e3da80)
                        int32_t ebx_14
                        ebx_14.b = esi_1[2]
                        int32_t eax_3
                        eax_3.b = not.b(ebx_14.b)
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_6 = var_e0 + *(((eax_3 + *(((ebx_14 - eax_3) << 2) + var_d0)
                            - var_e0) << 2) + var_d4)
                        int32_t var_88
                        int32_t ebx_23 = eax_6 + var_88
                        int32_t ebx_31
                        
                        if (eax_6 + var_88 s< 0)
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
                                *(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_9
                        eax_9.b = edi[2]
                        edi[2] = eax_9.b + (*(((ebx_31 - eax_9) << 2) + edx_2)).b
                        int32_t ebx_40
                        ebx_40.b = esi_1[1]
                        int32_t eax_11
                        eax_11.b = not.b(ebx_40.b)
                        int32_t var_dc
                        int32_t eax_14 = var_dc + *(((eax_11 + *(((ebx_40 - eax_11) << 2) + var_d0)
                            - var_dc) << 2) + var_d4)
                        int32_t var_84
                        int32_t ebx_49 = eax_14 + var_84
                        int32_t ebx_57
                        
                        if (eax_14 + var_84 s< 0)
                            if (ebx_49 s< 0xffffff01)
                                ebx_49 = 0xffffff01
                            
                            int32_t ebx_60
                            ebx_60.b = edi[1]
                            ebx_57 = *((ebx_60 << 2) + *((ebx_49 << 2) + data_4ced578))
                        else
                            if (ebx_49 s> 0xff)
                                ebx_49 = 0xff
                            
                            int32_t ebx_52
                            ebx_52.b = edi[1]
                            ebx_57 =
                                *(((ebx_52 - 0xff) << 2) + *((ebx_49 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_17
                        eax_17.b = edi[1]
                        edi[1] = eax_17.b + (*(((ebx_57 - eax_17) << 2) + edx_2)).b
                        int32_t ebx_66
                        ebx_66.b = *esi_1
                        int32_t eax_19
                        eax_19.b = not.b(ebx_66.b)
                        int32_t var_d8
                        int32_t eax_22 = var_d8 + *(((eax_19 + *(((ebx_66 - eax_19) << 2) + var_d0)
                            - var_d8) << 2) + var_d4)
                        int32_t var_80
                        int32_t ebx_75 = eax_22 + var_80
                        int32_t ebx_83
                        
                        if (eax_22 + var_80 s< 0)
                            if (ebx_75 s< 0xffffff01)
                                ebx_75 = 0xffffff01
                            
                            int32_t ebx_86
                            ebx_86.b = *edi
                            ebx_83 = *((ebx_86 << 2) + *((ebx_75 << 2) + data_4ced578))
                        else
                            if (ebx_75 s> 0xff)
                                ebx_75 = 0xff
                            
                            int32_t ebx_78
                            ebx_78.b = *edi
                            ebx_83 =
                                *(((ebx_78 - 0xff) << 2) + *((ebx_75 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_25
                        eax_25.b = *edi
                        *edi = eax_25.b + (*(((ebx_83 - eax_25) << 2) + edx_2)).b
            
            int32_t eax_28 = var_a0 + 1
            int32_t var_bc
            
            if (eax_28 s>= var_bc)
                eax_28 = 0
            
            var_a0 = eax_28
            edi = &edi[4]
            temp4_1 = edx
            edx -= var_44
        while (temp4_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp2_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp2_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i_1 = i - 1
while (i != 1)
return result
