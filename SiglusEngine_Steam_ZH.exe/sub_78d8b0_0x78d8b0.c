// 函数: sub_78d8b0
// 地址: 0x78d8b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *(esi_1 + 3)
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t eax_1
            eax_1.b = *(esi_1 + 2)
            int32_t eax_3
            eax_3.b = *(esi_1 + 1)
            int32_t eax_5
            eax_5.b = *esi_1
            uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_7 = *(&data_4e3da80 + var_cc)
            int32_t ebx_9
            ebx_9.b = *(esi_1 + 2)
            int32_t eax_9 = edx_5 + *(((ebx_9 - edx_5) << 2) + eax_7)
            int32_t eax_10
            eax_10.b = not.b(eax_9.b)
            int32_t eax_14
            eax_14.b = edi[2]
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_15 = eax_14 + *(((var_e0
                + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4)) << 2)
                + edx_1)
            
            if (eax_15 s> 0xff)
                eax_15 = 0xff
            
            edi[2] = eax_15.b
            int32_t ebx_25
            ebx_25.b = *(esi_1 + 1)
            int32_t eax_17 = edx_5 + *(((ebx_25 - edx_5) << 2) + eax_7)
            int32_t eax_18
            eax_18.b = not.b(eax_17.b)
            int32_t eax_22
            eax_22.b = edi[1]
            int32_t var_dc
            int32_t eax_23 = eax_22 + *(((var_dc
                + *(((eax_18 + *(((eax_17 - eax_18) << 2) + var_d0) - var_dc) << 2) + var_d4)) << 2)
                + edx_1)
            
            if (eax_23 s> 0xff)
                eax_23 = 0xff
            
            edi[1] = eax_23.b
            int32_t ebx_41
            ebx_41.b = *esi_1
            int32_t eax_25 = edx_5 + *(((ebx_41 - edx_5) << 2) + eax_7)
            int32_t eax_26
            eax_26.b = not.b(eax_25.b)
            int32_t eax_30
            eax_30.b = *edi
            int32_t var_d8
            int32_t eax = eax_30 + *(((var_d8
                + *(((eax_26 + *(((eax_25 - eax_26) << 2) + var_d0) - var_d8) << 2) + var_d4)) << 2)
                + edx_1)
            
            if (eax s> 0xff)
                eax = 0xff
            
            *edi = eax.b
        
        esi_1 += 4
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
