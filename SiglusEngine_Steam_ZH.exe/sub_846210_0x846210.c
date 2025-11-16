// 函数: sub_846210
// 地址: 0x846210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_3c
void* esi_1 = var_3c
void* var_54
void* edi = var_54
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
                
                int32_t eax
                eax.b = *(esi_1 + 2)
                int32_t eax_2
                eax_2.b = *(esi_1 + 1)
                int32_t eax_4
                eax_4.b = *esi_1
                uint32_t edx_5 = (*(&data_4e3d680 + (eax << 2)) + *(&data_4e3e280 + (eax_2 << 2))
                    + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_6 = *(&data_4e3da80 + var_cc)
                int32_t ebx_6
                ebx_6.b = *(esi_1 + 2)
                int32_t eax_11
                eax_11.b = *(edi + 2)
                int32_t var_118
                int32_t var_f8
                int32_t var_ec
                *(edi + 2) = eax_11.b + (*(((var_f8
                    + *(((edx_5 + *(((ebx_6 - edx_5) << 2) + eax_6) - var_f8) << 2) + var_ec)
                    - eax_11) << 2) + var_118)).b
                int32_t ebx_18
                ebx_18.b = *(esi_1 + 1)
                int32_t eax_17
                eax_17.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                *(edi + 1) = eax_17.b + (*(((var_f4
                    + *(((edx_5 + *(((ebx_18 - edx_5) << 2) + eax_6) - var_f4) << 2) + var_e8)
                    - eax_17) << 2) + var_118)).b
                int32_t ebx_30
                ebx_30.b = *esi_1
                int32_t eax_23
                eax_23.b = *edi
                int32_t var_f0
                int32_t var_e4
                *edi = eax_23.b + (*(((var_f0
                    + *(((edx_5 + *(((ebx_30 - edx_5) << 2) + eax_6) - var_f0) << 2) + var_e4)
                    - eax_23) << 2) + var_118)).b
            
            edi += 4
            temp2_1 = edx
            edx -= var_44
        while (temp2_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 += var_24
        int32_t temp4_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp4_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 += var_20
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 += ebx
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
