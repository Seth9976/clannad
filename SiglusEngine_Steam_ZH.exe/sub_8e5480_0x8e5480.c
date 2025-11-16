// 函数: sub_8e5480
// 地址: 0x8e5480
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
                int32_t var_d0
                int32_t eax_4 = var_f8
                    + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_10 = eax_4 + var_88
                int32_t ebx_18
                
                if (eax_4 + var_88 s< 0)
                    if (ebx_10 s< 0xffffff01)
                        ebx_10 = 0xffffff01
                    
                    int32_t ebx_21
                    ebx_21.b = edi[2]
                    ebx_18 = *((ebx_21 << 2) + *((ebx_10 << 2) + data_4ced578))
                else
                    if (ebx_10 s> 0xff)
                        ebx_10 = 0xff
                    
                    int32_t ebx_13
                    ebx_13.b = edi[2]
                    ebx_18 = *(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_7
                eax_7.b = edi[2]
                int32_t var_118
                edi[2] = eax_7.b + (*(((ebx_18 - eax_7) << 2) + var_118)).b
                int32_t ebx_27
                ebx_27.b = var_3c[1]
                int32_t eax_9
                eax_9.b = not.b(ebx_27.b)
                int32_t var_f4
                int32_t var_e8
                int32_t eax_12 = var_f4
                    + *(((eax_9 + *(((ebx_27 - eax_9) << 2) + var_d0) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_36 = eax_12 + var_84
                int32_t ebx_44
                
                if (eax_12 + var_84 s< 0)
                    if (ebx_36 s< 0xffffff01)
                        ebx_36 = 0xffffff01
                    
                    int32_t ebx_47
                    ebx_47.b = edi[1]
                    ebx_44 = *((ebx_47 << 2) + *((ebx_36 << 2) + data_4ced578))
                else
                    if (ebx_36 s> 0xff)
                        ebx_36 = 0xff
                    
                    int32_t ebx_39
                    ebx_39.b = edi[1]
                    ebx_44 = *(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_15
                eax_15.b = edi[1]
                edi[1] = eax_15.b + (*(((ebx_44 - eax_15) << 2) + var_118)).b
                int32_t ebx_53
                ebx_53.b = *var_3c
                int32_t eax_17
                eax_17.b = not.b(ebx_53.b)
                int32_t var_f0
                int32_t var_e4
                int32_t eax_20 = var_f0
                    + *(((eax_17 + *(((ebx_53 - eax_17) << 2) + var_d0) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_62 = eax_20 + var_80
                int32_t ebx_70
                
                if (eax_20 + var_80 s< 0)
                    if (ebx_62 s< 0xffffff01)
                        ebx_62 = 0xffffff01
                    
                    int32_t ebx_73
                    ebx_73.b = *edi
                    ebx_70 = *((ebx_73 << 2) + *((ebx_62 << 2) + data_4ced578))
                else
                    if (ebx_62 s> 0xff)
                        ebx_62 = 0xff
                    
                    int32_t ebx_65
                    ebx_65.b = *edi
                    ebx_70 = *(((ebx_65 - 0xff) << 2) + *((ebx_62 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_23
                eax_23.b = *edi
                *edi = eax_23.b + (*(((ebx_70 - eax_23) << 2) + var_118)).b
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
