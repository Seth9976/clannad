// 函数: sub_8a39e0
// 地址: 0x8a39e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_3c
void* esi_1 = var_3c
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
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
        int32_t temp5_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t var_114
                int32_t ecx_3 = var_114 << 2
                int32_t eax
                eax.b = edi[3]
                int32_t eax_1 = eax << 2
                int32_t ecx_7 = *(*(ecx_3 + &data_4dae580) + eax_1)
                
                if (ecx_7 != 0)
                    int32_t edx_5 = *(*(ecx_3 + &data_4dee980) + eax_1)
                    int32_t ebx_2
                    ebx_2.b = *(esi_1 + 2)
                    int32_t eax_2
                    eax_2.b = not.b(ebx_2.b)
                    int32_t var_d0
                    int32_t eax_3 = eax_2 + *(((ebx_2 - eax_2) << 2) + var_d0)
                    int32_t ebx_7
                    ebx_7.b = *(esi_1 + 1)
                    int32_t eax_4
                    eax_4.b = not.b(ebx_7.b)
                    int32_t eax_5 = eax_4 + *(((ebx_7 - eax_4) << 2) + var_d0)
                    int32_t ebx_12
                    ebx_12.b = *esi_1
                    int32_t eax_6
                    eax_6.b = not.b(ebx_12.b)
                    int32_t eax_7 = eax_6 + *(((ebx_12 - eax_6) << 2) + var_d0)
                    
                    if (var_114 != 0xff)
                        int32_t ebx_22
                        ebx_22.b = edi[3]
                        
                        if (ebx_22 != 0)
                            int32_t eax_11 = *((var_114 << 2) + &data_4d6e180)
                            *((eax_5 << 2) + eax_11)
                            *((eax_7 << 2) + eax_11)
                            int32_t eax_12
                            eax_12.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_12, edx_5), ecx_7)).b
                            int32_t eax_17
                            eax_17.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_17, edx_5), ecx_7)).b
                            int32_t eax_22
                            eax_22.b = *edi
                            *edi = (divu.dp.d(mulu.dp.d(eax_22, edx_5), ecx_7)).b
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
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 += var_24
        int32_t temp7_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp7_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 += var_20
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 += ebx
    
    i_1 = i - 1
while (i != 1)
return result
