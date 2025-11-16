// 函数: sub_813d60
// 地址: 0x813d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t ebx_11
                ebx_11.b = var_124[2]
                int32_t var_f8
                int32_t var_ec
                int32_t eax_2 = var_f8 + *(((ebx_11 - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_16 = eax_2 + var_88
                int32_t ebx_24
                
                if (eax_2 + var_88 s< 0)
                    if (ebx_16 s< 0xffffff01)
                        ebx_16 = 0xffffff01
                    
                    int32_t ebx_27
                    ebx_27.b = edi[2]
                    ebx_24 = *((ebx_27 << 2) + *((ebx_16 << 2) + data_4ced578))
                else
                    if (ebx_16 s> 0xff)
                        ebx_16 = 0xff
                    
                    int32_t ebx_19
                    ebx_19.b = edi[2]
                    ebx_24 = *(((ebx_19 - 0xff) << 2) + *((ebx_16 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_5
                eax_5.b = edi[2]
                edi[2] = eax_5.b + (*(((ebx_24 - eax_5) << 2) + edx_1)).b
                int32_t ebx_33
                ebx_33.b = var_124[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_8 = var_f4 + *(((ebx_33 - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_38 = eax_8 + var_84
                int32_t ebx_46
                
                if (eax_8 + var_84 s< 0)
                    if (ebx_38 s< 0xffffff01)
                        ebx_38 = 0xffffff01
                    
                    int32_t ebx_49
                    ebx_49.b = edi[1]
                    ebx_46 = *((ebx_49 << 2) + *((ebx_38 << 2) + data_4ced578))
                else
                    if (ebx_38 s> 0xff)
                        ebx_38 = 0xff
                    
                    int32_t ebx_41
                    ebx_41.b = edi[1]
                    ebx_46 = *(((ebx_41 - 0xff) << 2) + *((ebx_38 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_11
                eax_11.b = edi[1]
                edi[1] = eax_11.b + (*(((ebx_46 - eax_11) << 2) + edx_1)).b
                int32_t ebx_55
                ebx_55.b = *var_124
                int32_t var_f0
                int32_t var_e4
                int32_t eax_14 = var_f0 + *(((ebx_55 - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_60 = eax_14 + var_80
                int32_t ebx_68
                
                if (eax_14 + var_80 s< 0)
                    if (ebx_60 s< 0xffffff01)
                        ebx_60 = 0xffffff01
                    
                    int32_t ebx_71
                    ebx_71.b = *edi
                    ebx_68 = *((ebx_71 << 2) + *((ebx_60 << 2) + data_4ced578))
                else
                    if (ebx_60 s> 0xff)
                        ebx_60 = 0xff
                    
                    int32_t ebx_63
                    ebx_63.b = *edi
                    ebx_68 = *(((ebx_63 - 0xff) << 2) + *((ebx_60 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_17
                eax_17.b = *edi
                *edi = eax_17.b + (*(((ebx_68 - eax_17) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
