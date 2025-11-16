// 函数: sub_88b470
// 地址: 0x88b470
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
                
                int32_t ebx_2
                ebx_2.b = esi_1[3]
                
                if (ebx_2 != 0)
                    int32_t var_11c
                    int32_t ebx_8 = *(*((ebx_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_8 != 0)
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
                            int32_t ebx_19 = *(*((eax_2 << 2) + &data_4e3da80) + (ebx_8 << 2))
                            
                            if (ebx_19 != 0)
                                int32_t edx_2 = *((ebx_19 << 2) + &data_4e3da80)
                                int32_t ebx_23
                                ebx_23.b = esi_1[2]
                                int32_t eax_3
                                eax_3.b = not.b(ebx_23.b)
                                int32_t var_f8
                                int32_t var_ec
                                int32_t var_e0
                                int32_t var_d4
                                int32_t var_d0
                                int32_t eax_8 = var_f8 + *(((var_e0 + *(((eax_3
                                    + *(((ebx_23 - eax_3) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                    - var_f8) << 2) + var_ec)
                                int32_t var_88
                                int32_t ebx_36 = eax_8 + var_88
                                int32_t ebx_44
                                
                                if (eax_8 + var_88 s< 0)
                                    if (ebx_36 s< 0xffffff01)
                                        ebx_36 = 0xffffff01
                                    
                                    int32_t ebx_47
                                    ebx_47.b = edi[2]
                                    ebx_44 = *((ebx_47 << 2) + *((ebx_36 << 2) + data_4ced578))
                                else
                                    if (ebx_36 s> 0xff)
                                        ebx_36 = 0xff
                                    
                                    int32_t ebx_39
                                    ebx_39.b = edi[2]
                                    ebx_44 =
                                        *(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_11
                                eax_11.b = edi[2]
                                edi[2] = eax_11.b + (*(((ebx_44 - eax_11) << 2) + edx_2)).b
                                int32_t ebx_53
                                ebx_53.b = esi_1[1]
                                int32_t eax_13
                                eax_13.b = not.b(ebx_53.b)
                                int32_t var_f4
                                int32_t var_e8
                                int32_t var_dc
                                int32_t eax_18 = var_f4 + *(((var_dc + *(((eax_13
                                    + *(((ebx_53 - eax_13) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                    - var_f4) << 2) + var_e8)
                                int32_t var_84
                                int32_t ebx_66 = eax_18 + var_84
                                int32_t ebx_74
                                
                                if (eax_18 + var_84 s< 0)
                                    if (ebx_66 s< 0xffffff01)
                                        ebx_66 = 0xffffff01
                                    
                                    int32_t ebx_77
                                    ebx_77.b = edi[1]
                                    ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
                                else
                                    if (ebx_66 s> 0xff)
                                        ebx_66 = 0xff
                                    
                                    int32_t ebx_69
                                    ebx_69.b = edi[1]
                                    ebx_74 =
                                        *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_21
                                eax_21.b = edi[1]
                                edi[1] = eax_21.b + (*(((ebx_74 - eax_21) << 2) + edx_2)).b
                                int32_t ebx_83
                                ebx_83.b = *esi_1
                                int32_t eax_23
                                eax_23.b = not.b(ebx_83.b)
                                int32_t var_f0
                                int32_t var_e4
                                int32_t var_d8
                                int32_t eax_28 = var_f0 + *(((var_d8 + *(((eax_23
                                    + *(((ebx_83 - eax_23) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                    - var_f0) << 2) + var_e4)
                                int32_t var_80
                                int32_t ebx_96 = eax_28 + var_80
                                int32_t ebx_104
                                
                                if (eax_28 + var_80 s< 0)
                                    if (ebx_96 s< 0xffffff01)
                                        ebx_96 = 0xffffff01
                                    
                                    int32_t ebx_107
                                    ebx_107.b = *edi
                                    ebx_104 = *((ebx_107 << 2) + *((ebx_96 << 2) + data_4ced578))
                                else
                                    if (ebx_96 s> 0xff)
                                        ebx_96 = 0xff
                                    
                                    int32_t ebx_99
                                    ebx_99.b = *edi
                                    ebx_104 =
                                        *(((ebx_99 - 0xff) << 2) + *((ebx_96 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_31
                                eax_31.b = *edi
                                *edi = eax_31.b + (*(((ebx_104 - eax_31) << 2) + edx_2)).b
            
            int32_t eax_34 = var_a0 + 1
            int32_t var_bc
            
            if (eax_34 s>= var_bc)
                eax_34 = 0
            
            var_a0 = eax_34
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
