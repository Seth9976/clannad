// 函数: sub_88c0b0
// 地址: 0x88c0b0
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
                        int32_t ebx_13 = *(*((eax_2 << 2) + &data_4e3da80) + (ebx_2 << 2))
                        
                        if (ebx_13 != 0)
                            int32_t edx_2 = *((ebx_13 << 2) + &data_4e3da80)
                            int32_t ebx_17
                            ebx_17.b = esi_1[2]
                            int32_t eax_3
                            eax_3.b = not.b(ebx_17.b)
                            int32_t var_d0
                            int32_t eax_4 = eax_3 + *(((ebx_17 - eax_3) << 2) + var_d0)
                            int32_t var_88
                            int32_t ebx_22 = eax_4 + var_88
                            int32_t ebx_30
                            
                            if (eax_4 + var_88 s< 0)
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
                                ebx_30 = *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_7
                            eax_7.b = edi[2]
                            edi[2] = eax_7.b + (*(((ebx_30 - eax_7) << 2) + edx_2)).b
                            int32_t ebx_39
                            ebx_39.b = esi_1[1]
                            int32_t eax_9
                            eax_9.b = not.b(ebx_39.b)
                            int32_t eax_10 = eax_9 + *(((ebx_39 - eax_9) << 2) + var_d0)
                            int32_t var_84
                            int32_t ebx_44 = eax_10 + var_84
                            int32_t ebx_52
                            
                            if (eax_10 + var_84 s< 0)
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
                                ebx_52 = *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_13
                            eax_13.b = edi[1]
                            edi[1] = eax_13.b + (*(((ebx_52 - eax_13) << 2) + edx_2)).b
                            int32_t ebx_61
                            ebx_61.b = *esi_1
                            int32_t eax_15
                            eax_15.b = not.b(ebx_61.b)
                            int32_t eax_16 = eax_15 + *(((ebx_61 - eax_15) << 2) + var_d0)
                            int32_t var_80
                            int32_t ebx_66 = eax_16 + var_80
                            int32_t ebx_74
                            
                            if (eax_16 + var_80 s< 0)
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
                                ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_19
                            eax_19.b = *edi
                            *edi = eax_19.b + (*(((ebx_74 - eax_19) << 2) + edx_2)).b
            
            int32_t eax_22 = var_a0 + 1
            int32_t var_bc
            
            if (eax_22 s>= var_bc)
                eax_22 = 0
            
            var_a0 = eax_22
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
