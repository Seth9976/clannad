// 函数: sub_8bca80
// 地址: 0x8bca80
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
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
                    int32_t eax_1
                    eax_1.b = var_3c[2]
                    int32_t eax_3
                    eax_3.b = var_3c[1]
                    int32_t eax_5
                    eax_5.b = *var_3c
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_1 << 2))
                        + *(&data_4e3e280 + (eax_3 << 2)) + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_7 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_9
                    ebx_9.b = var_3c[2]
                    int32_t eax_9 = edx_6 + *(((ebx_9 - edx_6) << 2) + eax_7)
                    int32_t eax_10
                    eax_10.b = not.b(eax_9.b)
                    int32_t eax_12
                    eax_12.b = edi[2]
                    int32_t var_d0
                    int32_t eax_13 =
                        eax_12 + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0)) << 2) + edx_2)
                    
                    if (eax_13 s> 0xff)
                        eax_13 = 0xff
                    
                    edi[2] = eax_13.b
                    int32_t ebx_21
                    ebx_21.b = var_3c[1]
                    int32_t eax_15 = edx_6 + *(((ebx_21 - edx_6) << 2) + eax_7)
                    int32_t eax_16
                    eax_16.b = not.b(eax_15.b)
                    int32_t eax_18
                    eax_18.b = edi[1]
                    int32_t eax_19 =
                        eax_18 + *(((eax_16 + *(((eax_15 - eax_16) << 2) + var_d0)) << 2) + edx_2)
                    
                    if (eax_19 s> 0xff)
                        eax_19 = 0xff
                    
                    edi[1] = eax_19.b
                    int32_t ebx_33
                    ebx_33.b = *var_3c
                    int32_t eax_21 = edx_6 + *(((ebx_33 - edx_6) << 2) + eax_7)
                    int32_t eax_22
                    eax_22.b = not.b(eax_21.b)
                    int32_t eax_24
                    eax_24.b = *edi
                    int32_t eax =
                        eax_24 + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0)) << 2) + edx_2)
                    
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
