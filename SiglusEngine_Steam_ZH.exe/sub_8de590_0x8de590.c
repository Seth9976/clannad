// 函数: sub_8de590
// 地址: 0x8de590
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
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t eax_4 = var_f8
                    + *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_10 = eax_4 + var_88
                char eax_7
                
                if (eax_4 + var_88 s< 0)
                    if (ebx_10 s< 0xffffff01)
                        ebx_10 = 0xffffff01
                    
                    int32_t ebx_19
                    ebx_19.b = edi[2]
                    eax_7 = (*((ebx_19 << 2) + *((ebx_10 << 2) + data_4ced578))).b
                else
                    if (ebx_10 s> 0xff)
                        ebx_10 = 0xff
                    
                    int32_t ebx_13
                    ebx_13.b = edi[2]
                    eax_7 = (*(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_7
                int32_t ebx_22
                ebx_22.b = var_3c[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_12 = var_f4
                    + *(((var_dc + *(((ebx_22 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_31 = eax_12 + var_84
                char eax_15
                
                if (eax_12 + var_84 s< 0)
                    if (ebx_31 s< 0xffffff01)
                        ebx_31 = 0xffffff01
                    
                    int32_t ebx_40
                    ebx_40.b = edi[1]
                    eax_15 = (*((ebx_40 << 2) + *((ebx_31 << 2) + data_4ced578))).b
                else
                    if (ebx_31 s> 0xff)
                        ebx_31 = 0xff
                    
                    int32_t ebx_34
                    ebx_34.b = edi[1]
                    eax_15 = (*(((ebx_34 - 0xff) << 2) + *((ebx_31 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_15
                int32_t ebx_43
                ebx_43.b = *var_3c
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_20 = var_f0
                    + *(((var_d8 + *(((ebx_43 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_52 = eax_20 + var_80
                char eax
                
                if (eax_20 + var_80 s< 0)
                    if (ebx_52 s< 0xffffff01)
                        ebx_52 = 0xffffff01
                    
                    int32_t ebx_61
                    ebx_61.b = *edi
                    eax = (*((ebx_61 << 2) + *((ebx_52 << 2) + data_4ced578))).b
                else
                    if (ebx_52 s> 0xff)
                        ebx_52 = 0xff
                    
                    int32_t ebx_55
                    ebx_55.b = *edi
                    eax = (*(((ebx_55 - 0xff) << 2) + *((ebx_52 << 2) + data_4ced578))).b - 1
                
                *edi = eax
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
