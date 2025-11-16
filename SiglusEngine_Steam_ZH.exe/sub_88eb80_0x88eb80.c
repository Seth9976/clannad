// 函数: sub_88eb80
// 地址: 0x88eb80
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
                
                int32_t var_118
                int32_t var_168_1 = var_118
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
                int32_t eax_13
                eax_13.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t* ebx_20 = ((var_f8 + *(((var_e0
                    + *(((edx_5 + *(((ebx_6 - edx_5) << 2) + eax_6) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)) << 2) + *((eax_13 << 2) + &data_4e3da80)
                *(edi + 2) = (*ebx_20).b
                int32_t ebx_21
                ebx_21.b = *(esi_1 + 1)
                int32_t eax_24
                eax_24.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t* ebx_35 = ((var_f4 + *(((var_dc
                    + *(((edx_5 + *(((ebx_21 - edx_5) << 2) + eax_6) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)) << 2) + *((eax_24 << 2) + &data_4e3da80)
                *(edi + 1) = (*ebx_35).b
                int32_t ebx_36
                ebx_36.b = *esi_1
                int32_t eax_35
                eax_35.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t* ebx_50 = ((var_f0 + *(((var_d8
                    + *(((edx_5 + *(((ebx_36 - edx_5) << 2) + eax_6) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)) << 2) + *((eax_35 << 2) + &data_4e3da80)
                *edi = (*ebx_50).b
            
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
