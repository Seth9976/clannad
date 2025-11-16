// 函数: sub_8e17a0
// 地址: 0x8e17a0
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
                
                int32_t var_118
                int32_t var_160_1 = var_118
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
                char eax_12
                
                if (eax_9 + var_88 s< 0)
                    if (ebx_10 s< 0xffffff01)
                        ebx_10 = 0xffffff01
                    
                    int32_t ebx_19
                    ebx_19.b = edi[2]
                    eax_12 = (*((ebx_19 << 2) + *((ebx_10 << 2) + data_4ced578))).b
                else
                    if (ebx_10 s> 0xff)
                        ebx_10 = 0xff
                    
                    int32_t ebx_13
                    ebx_13.b = edi[2]
                    eax_12 = (*(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578))).b - 1
                
                edi[2] = eax_12
                int32_t ebx_22
                ebx_22.b = var_3c[1]
                int32_t eax_15 = edx_5 + *(((ebx_22 - edx_5) << 2) + eax_7)
                int32_t var_84
                int32_t ebx_27 = eax_15 + var_84
                char eax_18
                
                if (eax_15 + var_84 s< 0)
                    if (ebx_27 s< 0xffffff01)
                        ebx_27 = 0xffffff01
                    
                    int32_t ebx_36
                    ebx_36.b = edi[1]
                    eax_18 = (*((ebx_36 << 2) + *((ebx_27 << 2) + data_4ced578))).b
                else
                    if (ebx_27 s> 0xff)
                        ebx_27 = 0xff
                    
                    int32_t ebx_30
                    ebx_30.b = edi[1]
                    eax_18 = (*(((ebx_30 - 0xff) << 2) + *((ebx_27 << 2) + data_4ced578))).b - 1
                
                edi[1] = eax_18
                int32_t ebx_39
                ebx_39.b = *var_3c
                int32_t eax_21 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_7)
                int32_t var_80
                int32_t ebx_44 = eax_21 + var_80
                char eax
                
                if (eax_21 + var_80 s< 0)
                    if (ebx_44 s< 0xffffff01)
                        ebx_44 = 0xffffff01
                    
                    int32_t ebx_53
                    ebx_53.b = *edi
                    eax = (*((ebx_53 << 2) + *((ebx_44 << 2) + data_4ced578))).b
                else
                    if (ebx_44 s> 0xff)
                        ebx_44 = 0xff
                    
                    int32_t ebx_47
                    ebx_47.b = *edi
                    eax = (*(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578))).b - 1
                
                *edi = eax
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
