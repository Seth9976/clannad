// 函数: sub_8e0740
// 地址: 0x8e0740
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
        int32_t temp5_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t eax_1
                eax_1.b = var_3c[2]
                int32_t eax_3
                eax_3.b = var_3c[1]
                int32_t eax_5
                eax_5.b = *var_3c
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_5
                ebx_5.b = var_3c[2]
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t eax_13 = var_f8 + *(((var_e0
                    + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_18 = eax_13 + var_88
                int32_t ebx_26
                
                if (eax_13 + var_88 s< 0)
                    if (ebx_18 s< 0xffffff01)
                        ebx_18 = 0xffffff01
                    
                    int32_t ebx_29
                    ebx_29.b = edi[2]
                    ebx_26 = *((ebx_29 << 2) + *((ebx_18 << 2) + data_4ced578))
                else
                    if (ebx_18 s> 0xff)
                        ebx_18 = 0xff
                    
                    int32_t ebx_21
                    ebx_21.b = edi[2]
                    ebx_26 = *(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_16
                eax_16.b = edi[2]
                int32_t var_118
                edi[2] = eax_16.b + (*(((ebx_26 - eax_16) << 2) + var_118)).b
                int32_t ebx_35
                ebx_35.b = var_3c[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_23 = var_f4 + *(((var_dc
                    + *(((edx_5 + *(((ebx_35 - edx_5) << 2) + eax_7) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_48 = eax_23 + var_84
                int32_t ebx_56
                
                if (eax_23 + var_84 s< 0)
                    if (ebx_48 s< 0xffffff01)
                        ebx_48 = 0xffffff01
                    
                    int32_t ebx_59
                    ebx_59.b = edi[1]
                    ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
                else
                    if (ebx_48 s> 0xff)
                        ebx_48 = 0xff
                    
                    int32_t ebx_51
                    ebx_51.b = edi[1]
                    ebx_56 = *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_26
                eax_26.b = edi[1]
                edi[1] = eax_26.b + (*(((ebx_56 - eax_26) << 2) + var_118)).b
                int32_t ebx_65
                ebx_65.b = *var_3c
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_33 = var_f0 + *(((var_d8
                    + *(((edx_5 + *(((ebx_65 - edx_5) << 2) + eax_7) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_78 = eax_33 + var_80
                int32_t ebx_86
                
                if (eax_33 + var_80 s< 0)
                    if (ebx_78 s< 0xffffff01)
                        ebx_78 = 0xffffff01
                    
                    int32_t ebx_89
                    ebx_89.b = *edi
                    ebx_86 = *((ebx_89 << 2) + *((ebx_78 << 2) + data_4ced578))
                else
                    if (ebx_78 s> 0xff)
                        ebx_78 = 0xff
                    
                    int32_t ebx_81
                    ebx_81.b = *edi
                    ebx_86 = *(((ebx_81 - 0xff) << 2) + *((ebx_78 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_36
                eax_36.b = *edi
                *edi = eax_36.b + (*(((ebx_86 - eax_36) << 2) + var_118)).b
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
