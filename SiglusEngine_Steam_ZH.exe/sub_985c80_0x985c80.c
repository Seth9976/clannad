// 函数: sub_985c80
// 地址: 0x985c80
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
                
                char* esi_2 = edi
                int32_t var_118
                int32_t var_160_1 = var_118
                int32_t eax_1
                eax_1.b = esi_2[2]
                int32_t eax_3
                eax_3.b = esi_2[1]
                int32_t eax_5
                eax_5.b = *esi_2
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_5
                ebx_5.b = esi_2[2]
                int32_t eax_9 = edx_5 + *(((ebx_5 - edx_5) << 2) + eax_7)
                int32_t eax_10
                eax_10.b = not.b(eax_9.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                *(edi + 2) = (var_f8 + *(((var_e0
                    + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)).b
                int32_t ebx_21
                ebx_21.b = esi_2[1]
                int32_t eax_17 = edx_5 + *(((ebx_21 - edx_5) << 2) + eax_7)
                int32_t eax_18
                eax_18.b = not.b(eax_17.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                *(edi + 1) = (var_f4 + *(((var_dc
                    + *(((eax_18 + *(((eax_17 - eax_18) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)).b
                int32_t ebx_37
                ebx_37.b = *esi_2
                int32_t eax_25 = edx_5 + *(((ebx_37 - edx_5) << 2) + eax_7)
                int32_t eax_26
                eax_26.b = not.b(eax_25.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                *edi = (var_f0 + *(((var_d8
                    + *(((eax_26 + *(((eax_25 - eax_26) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
