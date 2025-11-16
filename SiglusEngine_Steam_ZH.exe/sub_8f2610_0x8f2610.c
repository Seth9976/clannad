// 函数: sub_8f2610
// 地址: 0x8f2610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_54
void* edi = var_54
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
                int32_t eax_14
                eax_14.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t* ebx_19 = ((var_f8 + *(((var_e0
                    + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)) << 2) + *((eax_14 << 2) + &data_4e3da80)
                int32_t eax_18
                eax_18.b = *(edi + 2)
                int32_t var_118
                *(edi + 2) = eax_18.b + (*(((*ebx_19 - eax_18) << 2) + var_118)).b
                int32_t ebx_24
                ebx_24.b = var_3c[1]
                int32_t eax_26
                eax_26.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t* ebx_38 = ((var_f4 + *(((var_dc
                    + *(((edx_5 + *(((ebx_24 - edx_5) << 2) + eax_7) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)) << 2) + *((eax_26 << 2) + &data_4e3da80)
                int32_t eax_30
                eax_30.b = *(edi + 1)
                *(edi + 1) = eax_30.b + (*(((*ebx_38 - eax_30) << 2) + var_118)).b
                int32_t ebx_43
                ebx_43.b = *var_3c
                int32_t eax_38
                eax_38.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t* ebx_57 = ((var_f0 + *(((var_d8
                    + *(((edx_5 + *(((ebx_43 - edx_5) << 2) + eax_7) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)) << 2) + *((eax_38 << 2) + &data_4e3da80)
                int32_t eax_42
                eax_42.b = *edi
                *edi = eax_42.b + (*(((*ebx_57 - eax_42) << 2) + var_118)).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
