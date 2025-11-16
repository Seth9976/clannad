// 函数: sub_87be60
// 地址: 0x87be60
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
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t eax_12 = var_f8 + *(((var_e0
                        + *(((edx_6 + *(((ebx_10 - edx_6) << 2) + eax_6) - var_e0) << 2) + var_d4)
                        - var_f8) << 2) + var_ec)
                    int32_t var_88
                    int32_t ebx_23 = eax_12 + var_88
                    int32_t ebx_31
                    
                    if (eax_12 + var_88 s< 0)
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
                        ebx_31 = *(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_15
                    eax_15.b = edi[2]
                    edi[2] = eax_15.b + (*(((ebx_31 - eax_15) << 2) + edx_2)).b
                    int32_t ebx_40
                    ebx_40.b = esi_1[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_22 = var_f4 + *(((var_dc
                        + *(((edx_6 + *(((ebx_40 - edx_6) << 2) + eax_6) - var_dc) << 2) + var_d4)
                        - var_f4) << 2) + var_e8)
                    int32_t var_84
                    int32_t ebx_53 = eax_22 + var_84
                    int32_t ebx_61
                    
                    if (eax_22 + var_84 s< 0)
                        if (ebx_53 s< 0xffffff01)
                            ebx_53 = 0xffffff01
                        
                        int32_t ebx_64
                        ebx_64.b = edi[1]
                        ebx_61 = *((ebx_64 << 2) + *((ebx_53 << 2) + data_4ced578))
                    else
                        if (ebx_53 s> 0xff)
                            ebx_53 = 0xff
                        
                        int32_t ebx_56
                        ebx_56.b = edi[1]
                        ebx_61 = *(((ebx_56 - 0xff) << 2) + *((ebx_53 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_25
                    eax_25.b = edi[1]
                    edi[1] = eax_25.b + (*(((ebx_61 - eax_25) << 2) + edx_2)).b
                    int32_t ebx_70
                    ebx_70.b = *esi_1
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_32 = var_f0 + *(((var_d8
                        + *(((edx_6 + *(((ebx_70 - edx_6) << 2) + eax_6) - var_d8) << 2) + var_d4)
                        - var_f0) << 2) + var_e4)
                    int32_t var_80
                    int32_t ebx_83 = eax_32 + var_80
                    int32_t ebx_91
                    
                    if (eax_32 + var_80 s< 0)
                        if (ebx_83 s< 0xffffff01)
                            ebx_83 = 0xffffff01
                        
                        int32_t ebx_94
                        ebx_94.b = *edi
                        ebx_91 = *((ebx_94 << 2) + *((ebx_83 << 2) + data_4ced578))
                    else
                        if (ebx_83 s> 0xff)
                            ebx_83 = 0xff
                        
                        int32_t ebx_86
                        ebx_86.b = *edi
                        ebx_91 = *(((ebx_86 - 0xff) << 2) + *((ebx_83 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_35
                    eax_35.b = *edi
                    *edi = eax_35.b + (*(((ebx_91 - eax_35) << 2) + edx_2)).b
            
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
