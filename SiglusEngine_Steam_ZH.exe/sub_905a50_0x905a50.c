// 函数: sub_905a50
// 地址: 0x905a50
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
                    int32_t ebx_1
                    ebx_1.b = var_3c[2]
                    int32_t eax_2
                    eax_2.b = not.b(ebx_1.b)
                    int32_t var_d0
                    int32_t eax_3 = eax_2 + *(((ebx_1 - eax_2) << 2) + var_d0)
                    int32_t ebx_6
                    ebx_6.b = var_3c[1]
                    int32_t eax_4
                    eax_4.b = not.b(ebx_6.b)
                    int32_t eax_5 = eax_4 + *(((ebx_6 - eax_4) << 2) + var_d0)
                    int32_t ebx_11
                    ebx_11.b = *var_3c
                    int32_t eax_6
                    eax_6.b = not.b(ebx_11.b)
                    int32_t eax_7 = eax_6 + *(((ebx_11 - eax_6) << 2) + var_d0)
                    
                    if (var_114 != 0xff)
                        int32_t ebx_21
                        ebx_21.b = edi[3]
                        
                        if (ebx_21 != 0)
                            int32_t eax_10 = *((var_114 << 2) + &data_4d6e180)
                            *((eax_5 << 2) + eax_10)
                            *((eax_7 << 2) + eax_10)
                            int32_t eax_11
                            eax_11.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_11, edx_5), ecx_7)).b
                            int32_t eax_16
                            eax_16.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_16, edx_5), ecx_7)).b
                            int32_t eax_21
                            eax_21.b = *edi
                            *edi = divu.dp.d(mulu.dp.d(eax_21, edx_5), ecx_7).b
                            edi[3] = ecx_7.b
                        else
                            edi[2] = eax_3.b
                            edi[1] = eax_5.b
                            *edi = eax_7.b
                            edi[3] = var_114.b
                    else
                        edi[2] = eax_3.b
                        edi[1] = eax_5.b
                        *edi = eax_7.b
                        edi[3] = var_114.b
            
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
