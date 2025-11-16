// 函数: sub_848e90
// 地址: 0x848e90
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
                ebx_2.b = *(esi_1 + 3)
                
                if (ebx_2 != 0)
                    int32_t edx_2 = *((ebx_2 << 2) + &data_4e3da80)
                    int32_t eax
                    eax.b = *(esi_1 + 2)
                    int32_t eax_2
                    eax_2.b = *(esi_1 + 1)
                    int32_t eax_4
                    eax_4.b = *esi_1
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax << 2))
                        + *(&data_4e3e280 + (eax_2 << 2)) + *(&data_4e3de80 + (eax_4 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_6 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_10
                    ebx_10.b = *(esi_1 + 2)
                    int32_t eax_8 = edx_6 + *(((ebx_10 - edx_6) << 2) + eax_6)
                    int32_t eax_9
                    eax_9.b = not.b(eax_8.b)
                    int32_t eax_11
                    eax_11.b = edi[2]
                    int32_t var_d0
                    edi[2] = eax_11.b +
                        (*(((eax_9 + *(((eax_8 - eax_9) << 2) + var_d0) - eax_11) << 2) + edx_2)).b
                    int32_t ebx_22
                    ebx_22.b = *(esi_1 + 1)
                    int32_t eax_14 = edx_6 + *(((ebx_22 - edx_6) << 2) + eax_6)
                    int32_t eax_15
                    eax_15.b = not.b(eax_14.b)
                    int32_t eax_17
                    eax_17.b = edi[1]
                    edi[1] = eax_17.b + (
                        *(((eax_15 + *(((eax_14 - eax_15) << 2) + var_d0) - eax_17) << 2) + edx_2)).b
                    int32_t ebx_34
                    ebx_34.b = *esi_1
                    int32_t eax_20 = edx_6 + *(((ebx_34 - edx_6) << 2) + eax_6)
                    int32_t eax_21
                    eax_21.b = not.b(eax_20.b)
                    int32_t eax_23
                    eax_23.b = *edi
                    *edi = eax_23.b + (
                        *(((eax_21 + *(((eax_20 - eax_21) << 2) + var_d0) - eax_23) << 2) + edx_2)).b
            
            edi = &edi[4]
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
