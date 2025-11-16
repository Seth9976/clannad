// 函数: sub_87e3d0
// 地址: 0x87e3d0
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
                    int32_t edx_2 = *((ebx_2 << 2) + &data_4e3da80)
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
                    int32_t ebx_10
                    ebx_10.b = esi_1[2]
                    int32_t eax_8 = edx_6 + *(((ebx_10 - edx_6) << 2) + eax_6)
                    int32_t eax_9
                    eax_9.b = not.b(eax_8.b)
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t var_d0
                    int32_t eax_14 = var_f8 + *(((var_e0
                        + *(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - var_e0) << 2) + var_d4)
                        - var_f8) << 2) + var_ec)
                    int32_t var_88
                    int32_t ebx_27 = eax_14 + var_88
                    int32_t ebx_35
                    
                    if (eax_14 + var_88 s< 0)
                        if (ebx_27 s< 0xffffff01)
                            ebx_27 = 0xffffff01
                        
                        int32_t ebx_38
                        ebx_38.b = edi[2]
                        ebx_35 = *((ebx_38 << 2) + *((ebx_27 << 2) + data_4ced578))
                    else
                        if (ebx_27 s> 0xff)
                            ebx_27 = 0xff
                        
                        int32_t ebx_30
                        ebx_30.b = edi[2]
                        ebx_35 = *(((ebx_30 - 0xff) << 2) + *((ebx_27 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_17
                    eax_17.b = edi[2]
                    edi[2] = eax_17.b + (*(((ebx_35 - eax_17) << 2) + edx_2)).b
                    int32_t ebx_44
                    ebx_44.b = esi_1[1]
                    int32_t eax_20 = edx_6 + *(((ebx_44 - edx_6) << 2) + eax_6)
                    int32_t eax_21
                    eax_21.b = not.b(eax_20.b)
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_26 = var_f4 + *(((var_dc +
                        *(((eax_21 + *(((eax_20 - eax_21) << 2) + var_d0) - var_dc) << 2) + var_d4)
                        - var_f4) << 2) + var_e8)
                    int32_t var_84
                    int32_t ebx_61 = eax_26 + var_84
                    int32_t ebx_69
                    
                    if (eax_26 + var_84 s< 0)
                        if (ebx_61 s< 0xffffff01)
                            ebx_61 = 0xffffff01
                        
                        int32_t ebx_72
                        ebx_72.b = edi[1]
                        ebx_69 = *((ebx_72 << 2) + *((ebx_61 << 2) + data_4ced578))
                    else
                        if (ebx_61 s> 0xff)
                            ebx_61 = 0xff
                        
                        int32_t ebx_64
                        ebx_64.b = edi[1]
                        ebx_69 = *(((ebx_64 - 0xff) << 2) + *((ebx_61 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_29
                    eax_29.b = edi[1]
                    edi[1] = eax_29.b + (*(((ebx_69 - eax_29) << 2) + edx_2)).b
                    int32_t ebx_78
                    ebx_78.b = *esi_1
                    int32_t eax_32 = edx_6 + *(((ebx_78 - edx_6) << 2) + eax_6)
                    int32_t eax_33
                    eax_33.b = not.b(eax_32.b)
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_38 = var_f0 + *(((var_d8 +
                        *(((eax_33 + *(((eax_32 - eax_33) << 2) + var_d0) - var_d8) << 2) + var_d4)
                        - var_f0) << 2) + var_e4)
                    int32_t var_80
                    int32_t ebx_95 = eax_38 + var_80
                    int32_t ebx_103
                    
                    if (eax_38 + var_80 s< 0)
                        if (ebx_95 s< 0xffffff01)
                            ebx_95 = 0xffffff01
                        
                        int32_t ebx_106
                        ebx_106.b = *edi
                        ebx_103 = *((ebx_106 << 2) + *((ebx_95 << 2) + data_4ced578))
                    else
                        if (ebx_95 s> 0xff)
                            ebx_95 = 0xff
                        
                        int32_t ebx_98
                        ebx_98.b = *edi
                        ebx_103 = *(((ebx_98 - 0xff) << 2) + *((ebx_95 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_41
                    eax_41.b = *edi
                    *edi = eax_41.b + (*(((ebx_103 - eax_41) << 2) + edx_2)).b
            
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
