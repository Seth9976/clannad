// 函数: sub_8deee0
// 地址: 0x8deee0
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
                int32_t var_e0
                int32_t var_d4
                int32_t eax_2 = var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)
                int32_t var_88
                int32_t ebx_6 = eax_2 + var_88
                char eax_5
                
                if (eax_2 + var_88 s< 0)
                    if (ebx_6 s< 0xffffff01)
                        ebx_6 = 0xffffff01
                    
                    int32_t ebx_15
                    ebx_15.b = edi[2]
                    eax_5 = (*((ebx_15 << 2) + *((ebx_6 << 2) + data_4ced578))).b
                else
                    if (ebx_6 s> 0xff)
                        ebx_6 = 0xff
                    
                    int32_t ebx_9
                    ebx_9.b = edi[2]
                    eax_5 = (*(((ebx_9 - 0xff) << 2) + *((ebx_6 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_5
                int32_t ebx_18
                ebx_18.b = var_3c[1]
                int32_t var_dc
                int32_t eax_8 = var_dc + *(((ebx_18 - var_dc) << 2) + var_d4)
                int32_t var_84
                int32_t ebx_23 = eax_8 + var_84
                char eax_11
                
                if (eax_8 + var_84 s< 0)
                    if (ebx_23 s< 0xffffff01)
                        ebx_23 = 0xffffff01
                    
                    int32_t ebx_32
                    ebx_32.b = edi[1]
                    eax_11 = (*((ebx_32 << 2) + *((ebx_23 << 2) + data_4ced578))).b
                else
                    if (ebx_23 s> 0xff)
                        ebx_23 = 0xff
                    
                    int32_t ebx_26
                    ebx_26.b = edi[1]
                    eax_11 = (*(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_11
                int32_t ebx_35
                ebx_35.b = *var_3c
                int32_t var_d8
                int32_t eax_14 = var_d8 + *(((ebx_35 - var_d8) << 2) + var_d4)
                int32_t var_80
                int32_t ebx_40 = eax_14 + var_80
                char eax
                
                if (eax_14 + var_80 s< 0)
                    if (ebx_40 s< 0xffffff01)
                        ebx_40 = 0xffffff01
                    
                    int32_t ebx_49
                    ebx_49.b = *edi
                    eax = (*((ebx_49 << 2) + *((ebx_40 << 2) + data_4ced578))).b
                else
                    if (ebx_40 s> 0xff)
                        ebx_40 = 0xff
                    
                    int32_t ebx_43
                    ebx_43.b = *edi
                    eax = (*(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578))).b - 1
                
                *edi = eax
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
