// 函数: sub_85f1c0
// 地址: 0x85f1c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_3c
char* esi_1 = var_3c
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp2_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = esi_1[3]
                
                if (ebx_2 != 0)
                    int32_t edx_2 = *((ebx_2 << 2) + &data_4e3da80)
                    int32_t ebx_6
                    ebx_6.b = esi_1[2]
                    int32_t eax_4
                    eax_4.b = edi[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t eax_5 = eax_4 - *(((var_f8 +
                        *(((var_e0 + *(((ebx_6 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec))
                        << 2) + edx_2)
                    
                    if (eax_5 s< 0)
                        eax_5 = 0
                    
                    edi[2] = eax_5.b
                    int32_t ebx_18
                    ebx_18.b = esi_1[1]
                    int32_t eax_10
                    eax_10.b = edi[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_11 = eax_10 - *(((var_f4 +
                        *(((var_dc + *(((ebx_18 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8))
                        << 2) + edx_2)
                    
                    if (eax_11 s< 0)
                        eax_11 = 0
                    
                    edi[1] = eax_11.b
                    int32_t ebx_30
                    ebx_30.b = *esi_1
                    int32_t eax_16
                    eax_16.b = *edi
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_17 = eax_16 - *(((var_f0 +
                        *(((var_d8 + *(((ebx_30 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4))
                        << 2) + edx_2)
                    
                    if (eax_17 s< 0)
                        eax_17 = 0
                    
                    *edi = eax_17.b
            
            edi = &edi[4]
            temp2_1 = edx
            edx -= var_44
        while (temp2_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp4_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp4_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
