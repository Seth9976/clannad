// 函数: sub_887c90
// 地址: 0x887c90
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
                        int32_t eax_3
                        eax_3.b = esi_1[2]
                        int32_t eax_5
                        eax_5.b = esi_1[1]
                        int32_t eax_7
                        eax_7.b = *esi_1
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_3 << 2))
                            + *(&data_4e3e280 + (eax_5 << 2)) + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_9 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_18
                        ebx_18.b = esi_1[2]
                        int32_t eax_11 = edx_6 + *(((ebx_18 - edx_6) << 2) + eax_9)
                        int32_t eax_12
                        eax_12.b = not.b(eax_11.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_17 = var_f8 + *(((var_e0 + *(((eax_12
                            + *(((eax_11 - eax_12) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
                            << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_35 = eax_17 + var_88
                        int32_t ebx_43
                        
                        if (eax_17 + var_88 s< 0)
                            if (ebx_35 s< 0xffffff01)
                                ebx_35 = 0xffffff01
                            
                            int32_t ebx_46
                            ebx_46.b = edi[2]
                            ebx_43 = *((ebx_46 << 2) + *((ebx_35 << 2) + data_4ced578))
                        else
                            if (ebx_35 s> 0xff)
                                ebx_35 = 0xff
                            
                            int32_t ebx_38
                            ebx_38.b = edi[2]
                            ebx_43 =
                                *(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_20
                        eax_20.b = edi[2]
                        edi[2] = eax_20.b + (*(((ebx_43 - eax_20) << 2) + edx_2)).b
                        int32_t ebx_52
                        ebx_52.b = esi_1[1]
                        int32_t eax_23 = edx_6 + *(((ebx_52 - edx_6) << 2) + eax_9)
                        int32_t eax_24
                        eax_24.b = not.b(eax_23.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t var_dc
                        int32_t eax_29 = var_f4 + *(((var_dc + *(((eax_24
                            + *(((eax_23 - eax_24) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
                            << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_69 = eax_29 + var_84
                        int32_t ebx_77
                        
                        if (eax_29 + var_84 s< 0)
                            if (ebx_69 s< 0xffffff01)
                                ebx_69 = 0xffffff01
                            
                            int32_t ebx_80
                            ebx_80.b = edi[1]
                            ebx_77 = *((ebx_80 << 2) + *((ebx_69 << 2) + data_4ced578))
                        else
                            if (ebx_69 s> 0xff)
                                ebx_69 = 0xff
                            
                            int32_t ebx_72
                            ebx_72.b = edi[1]
                            ebx_77 =
                                *(((ebx_72 - 0xff) << 2) + *((ebx_69 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_32
                        eax_32.b = edi[1]
                        edi[1] = eax_32.b + (*(((ebx_77 - eax_32) << 2) + edx_2)).b
                        int32_t ebx_86
                        ebx_86.b = *esi_1
                        int32_t eax_35 = edx_6 + *(((ebx_86 - edx_6) << 2) + eax_9)
                        int32_t eax_36
                        eax_36.b = not.b(eax_35.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t var_d8
                        int32_t eax_41 = var_f0 + *(((var_d8 + *(((eax_36
                            + *(((eax_35 - eax_36) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
                            << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_103 = eax_41 + var_80
                        int32_t ebx_111
                        
                        if (eax_41 + var_80 s< 0)
                            if (ebx_103 s< 0xffffff01)
                                ebx_103 = 0xffffff01
                            
                            int32_t ebx_114
                            ebx_114.b = *edi
                            ebx_111 = *((ebx_114 << 2) + *((ebx_103 << 2) + data_4ced578))
                        else
                            if (ebx_103 s> 0xff)
                                ebx_103 = 0xff
                            
                            int32_t ebx_106
                            ebx_106.b = *edi
                            ebx_111 =
                                *(((ebx_106 - 0xff) << 2) + *((ebx_103 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_44
                        eax_44.b = *edi
                        *edi = eax_44.b + (*(((ebx_111 - eax_44) << 2) + edx_2)).b
            
            int32_t eax_47 = var_a0 + 1
            int32_t var_bc
            
            if (eax_47 s>= var_bc)
                eax_47 = 0
            
            var_a0 = eax_47
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
