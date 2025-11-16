// 函数: sub_8babe0
// 地址: 0x8babe0
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
        int32_t temp3_1
        
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
                int32_t eax_12
                eax_12.b = edi[2]
                int32_t var_118
                int32_t var_e0
                int32_t var_d4
                int32_t eax_13 = eax_12 + *(((var_e0
                    + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7) - var_e0) << 2) + var_d4)) << 2)
                    + var_118)
                
                if (eax_13 s> 0xff)
                    eax_13 = 0xff
                
                edi[2] = eax_13.b
                int32_t ebx_17
                ebx_17.b = var_3c[1]
                int32_t eax_18
                eax_18.b = edi[1]
                int32_t var_dc
                int32_t eax_19 = eax_18 + *(((var_dc
                    + *(((edx_5 + *(((ebx_17 - edx_5) << 2) + eax_7) - var_dc) << 2) + var_d4)) << 2)
                    + var_118)
                
                if (eax_19 s> 0xff)
                    eax_19 = 0xff
                
                edi[1] = eax_19.b
                int32_t ebx_29
                ebx_29.b = *var_3c
                int32_t eax_24
                eax_24.b = *edi
                int32_t var_d8
                int32_t eax = eax_24 + *(((var_d8
                    + *(((edx_5 + *(((ebx_29 - edx_5) << 2) + eax_7) - var_d8) << 2) + var_d4)) << 2)
                    + var_118)
                
                if (eax s> 0xff)
                    eax = 0xff
                
                *edi = eax.b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
