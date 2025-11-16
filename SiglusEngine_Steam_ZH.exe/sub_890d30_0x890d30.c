// 函数: sub_890d30
// 地址: 0x890d30
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp2_1
        
        do
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
                        int32_t edx_2 = *((ebx_8 << 2) + &data_4e3da80)
                        int32_t eax
                        eax.b = esi_1[2]
                        int32_t eax_2
                        eax_2.b = esi_1[1]
                        int32_t eax_4
                        eax_4.b = *esi_1
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax << 2))
                            + *(&data_4e3e280 + (eax_2 << 2)) + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_6 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_16
                        ebx_16.b = esi_1[2]
                        int32_t eax_8 = edx_6 + *(((ebx_16 - edx_6) << 2) + eax_6)
                        int32_t eax_9
                        eax_9.b = not.b(eax_8.b)
                        int32_t eax_15
                        eax_15.b = edi[2]
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t* ebx_34 = ((var_f8 + *(((var_e0 +
                            *(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - var_e0) << 2) + var_d4)
                            - var_f8) << 2) + var_ec)) << 2) + *((eax_15 << 2) + &data_4e3da80)
                        int32_t eax_19
                        eax_19.b = edi[2]
                        edi[2] = eax_19.b + (*(((*ebx_34 - eax_19) << 2) + edx_2)).b
                        int32_t ebx_39
                        ebx_39.b = esi_1[1]
                        int32_t eax_22 = edx_6 + *(((ebx_39 - edx_6) << 2) + eax_6)
                        int32_t eax_23
                        eax_23.b = not.b(eax_22.b)
                        int32_t eax_29
                        eax_29.b = edi[1]
                        int32_t var_f4
                        int32_t var_e8
                        int32_t var_dc
                        int32_t* ebx_57 = ((var_f4 + *(((var_dc + *(((eax_23
                            + *(((eax_22 - eax_23) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
                            << 2) + var_e8)) << 2) + *((eax_29 << 2) + &data_4e3da80)
                        int32_t eax_33
                        eax_33.b = edi[1]
                        edi[1] = eax_33.b + (*(((*ebx_57 - eax_33) << 2) + edx_2)).b
                        int32_t ebx_62
                        ebx_62.b = *esi_1
                        int32_t eax_36 = edx_6 + *(((ebx_62 - edx_6) << 2) + eax_6)
                        int32_t eax_37
                        eax_37.b = not.b(eax_36.b)
                        int32_t eax_43
                        eax_43.b = *edi
                        int32_t var_f0
                        int32_t var_e4
                        int32_t var_d8
                        int32_t* ebx_80 = ((var_f0 + *(((var_d8 + *(((eax_37
                            + *(((eax_36 - eax_37) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
                            << 2) + var_e4)) << 2) + *((eax_43 << 2) + &data_4e3da80)
                        int32_t eax_47
                        eax_47.b = *edi
                        *edi = eax_47.b + (*(((*ebx_80 - eax_47) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp2_1 = edx
            edx -= var_44
        while (temp2_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp4_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp4_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
