// 函数: sub_8e4990
// 地址: 0x8e4990
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
                int32_t eax_9 = edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7)
                int32_t var_88
                int32_t ebx_10 = eax_9 + var_88
                int32_t ebx_18
                
                if (eax_9 + var_88 s< 0)
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
                
                int32_t eax_12
                eax_12.b = edi[2]
                int32_t var_118
                edi[2] = eax_12.b + (*(((ebx_18 - eax_12) << 2) + var_118)).b
                int32_t ebx_27
                ebx_27.b = var_3c[1]
                int32_t eax_15 = edx_5 + *(((ebx_27 - edx_5) << 2) + eax_7)
                int32_t var_84
                int32_t ebx_32 = eax_15 + var_84
                int32_t ebx_40
                
                if (eax_15 + var_84 s< 0)
                    if (ebx_32 s< 0xffffff01)
                        ebx_32 = 0xffffff01
                    
                    int32_t ebx_43
                    ebx_43.b = edi[1]
                    ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
                else
                    if (ebx_32 s> 0xff)
                        ebx_32 = 0xff
                    
                    int32_t ebx_35
                    ebx_35.b = edi[1]
                    ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_18
                eax_18.b = edi[1]
                edi[1] = eax_18.b + (*(((ebx_40 - eax_18) << 2) + var_118)).b
                int32_t ebx_49
                ebx_49.b = *var_3c
                int32_t eax_21 = edx_5 + *(((ebx_49 - edx_5) << 2) + eax_7)
                int32_t var_80
                int32_t ebx_54 = eax_21 + var_80
                int32_t ebx_62
                
                if (eax_21 + var_80 s< 0)
                    if (ebx_54 s< 0xffffff01)
                        ebx_54 = 0xffffff01
                    
                    int32_t ebx_65
                    ebx_65.b = *edi
                    ebx_62 = *((ebx_65 << 2) + *((ebx_54 << 2) + data_4ced578))
                else
                    if (ebx_54 s> 0xff)
                        ebx_54 = 0xff
                    
                    int32_t ebx_57
                    ebx_57.b = *edi
                    ebx_62 = *(((ebx_57 - 0xff) << 2) + *((ebx_54 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_24
                eax_24.b = *edi
                *edi = eax_24.b + (*(((ebx_62 - eax_24) << 2) + var_118)).b
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
