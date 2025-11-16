// 函数: sub_900980
// 地址: 0x900980
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
    i = i_1
    int32_t temp3_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp3_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp6_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                int32_t var_114
                int32_t ecx_3 = var_114 << 2
                int32_t eax_1
                eax_1.b = edi[3]
                int32_t eax = eax_1 << 2
                int32_t ecx_7 = *(*(ecx_3 + &data_4dae580) + eax)
                
                if (ecx_7 != 0)
                    int32_t edx_5 = *(*(ecx_3 + &data_4dee980) + eax)
                    char* var_3c
                    int32_t eax_2
                    eax_2.b = var_3c[2]
                    int32_t eax_4
                    eax_4.b = var_3c[1]
                    int32_t eax_6
                    eax_6.b = *var_3c
                    uint32_t edx_9 = (*(&data_4e3d680 + (eax_2 << 2))
                        + *(&data_4e3e280 + (eax_4 << 2)) + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_8 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_5
                    ebx_5.b = var_3c[2]
                    int32_t var_e0
                    int32_t var_d4
                    int32_t eax_12 = var_e0
                        + *(((edx_9 + *(((ebx_5 - edx_9) << 2) + eax_8) - var_e0) << 2) + var_d4)
                    int32_t ebx_14
                    ebx_14.b = var_3c[1]
                    int32_t var_dc
                    int32_t eax_16 = var_dc
                        + *(((edx_9 + *(((ebx_14 - edx_9) << 2) + eax_8) - var_dc) << 2) + var_d4)
                    int32_t ebx_23
                    ebx_23.b = *var_3c
                    int32_t var_d8
                    int32_t eax_20 = var_d8
                        + *(((edx_9 + *(((ebx_23 - edx_9) << 2) + eax_8) - var_d8) << 2) + var_d4)
                    
                    if (var_114 != 0xff)
                        int32_t ebx_37
                        ebx_37.b = edi[3]
                        
                        if (ebx_37 != 0)
                            int32_t eax_23 = *((var_114 << 2) + &data_4d6e180)
                            *((eax_16 << 2) + eax_23)
                            *((eax_20 << 2) + eax_23)
                            int32_t eax_24
                            eax_24.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_24, edx_5), ecx_7)).b
                            int32_t eax_29
                            eax_29.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_29, edx_5), ecx_7)).b
                            int32_t eax_34
                            eax_34.b = *edi
                            *edi = divu.dp.d(mulu.dp.d(eax_34, edx_5), ecx_7).b
                            edi[3] = ecx_7.b
                        else
                            edi[2] = eax_12.b
                            edi[1] = eax_16.b
                            *edi = eax_20.b
                            edi[3] = var_114.b
                    else
                        edi[2] = eax_12.b
                        edi[1] = eax_16.b
                        *edi = eax_20.b
                        edi[3] = var_114.b
            
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
