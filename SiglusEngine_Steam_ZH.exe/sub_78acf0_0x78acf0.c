// 函数: sub_78acf0
// 地址: 0x78acf0
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
            int32_t ebx_5
            ebx_5.b = *(esi_1 + 2)
            int32_t eax_3
            eax_3.b = edi[2]
            int32_t var_e0
            int32_t var_d4
            int32_t eax_4 = eax_3 + *(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4)) << 2) + edx_1)
            
            if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            edi[2] = eax_4.b
            int32_t ebx_13
            ebx_13.b = *(esi_1 + 1)
            int32_t eax_7
            eax_7.b = edi[1]
            int32_t var_dc
            int32_t eax_8 =
                eax_7 + *(((var_dc + *(((ebx_13 - var_dc) << 2) + var_d4)) << 2) + edx_1)
            
            if (eax_8 s> 0xff)
                eax_8 = 0xff
            
            edi[1] = eax_8.b
            int32_t ebx_21
            ebx_21.b = *esi_1
            int32_t eax_11
            eax_11.b = *edi
            int32_t var_d8
            int32_t eax = eax_11 + *(((var_d8 + *(((ebx_21 - var_d8) << 2) + var_d4)) << 2) + edx_1)
            
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
