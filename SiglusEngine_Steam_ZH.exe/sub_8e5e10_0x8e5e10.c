// 函数: sub_8e5e10
// 地址: 0x8e5e10
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
                int32_t ebx_1
                ebx_1.b = var_3c[2]
                int32_t eax_1
                eax_1.b = not.b(ebx_1.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_6 = var_f8 + *(((var_e0
                    + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_14 = eax_6 + var_88
                int32_t ebx_22
                
                if (eax_6 + var_88 s< 0)
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
                
                int32_t eax_9
                eax_9.b = edi[2]
                int32_t var_118
                edi[2] = eax_9.b + (*(((ebx_22 - eax_9) << 2) + var_118)).b
                int32_t ebx_31
                ebx_31.b = var_3c[1]
                int32_t eax_11
                eax_11.b = not.b(ebx_31.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_16 = var_f4 + *(((var_dc
                    + *(((eax_11 + *(((ebx_31 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_44 = eax_16 + var_84
                int32_t ebx_52
                
                if (eax_16 + var_84 s< 0)
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
                    ebx_52 = *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_19
                eax_19.b = edi[1]
                edi[1] = eax_19.b + (*(((ebx_52 - eax_19) << 2) + var_118)).b
                int32_t ebx_61
                ebx_61.b = *var_3c
                int32_t eax_21
                eax_21.b = not.b(ebx_61.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_26 = var_f0 + *(((var_d8
                    + *(((eax_21 + *(((ebx_61 - eax_21) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_74 = eax_26 + var_80
                int32_t ebx_82
                
                if (eax_26 + var_80 s< 0)
                    if (ebx_74 s< 0xffffff01)
                        ebx_74 = 0xffffff01
                    
                    int32_t ebx_85
                    ebx_85.b = *edi
                    ebx_82 = *((ebx_85 << 2) + *((ebx_74 << 2) + data_4ced578))
                else
                    if (ebx_74 s> 0xff)
                        ebx_74 = 0xff
                    
                    int32_t ebx_77
                    ebx_77.b = *edi
                    ebx_82 = *(((ebx_77 - 0xff) << 2) + *((ebx_74 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_29
                eax_29.b = *edi
                *edi = eax_29.b + (*(((ebx_82 - eax_29) << 2) + var_118)).b
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
