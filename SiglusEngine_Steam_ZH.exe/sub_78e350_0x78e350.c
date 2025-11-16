// 函数: sub_78e350
// 地址: 0x78e350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t eax_1
                eax_1.b = esi_1[2]
                int32_t eax_3
                eax_3.b = esi_1[1]
                int32_t eax_5
                eax_5.b = *esi_1
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_15
                ebx_15.b = esi_1[2]
                int32_t eax_9 = edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7)
                int32_t eax_10
                eax_10.b = not.b(eax_9.b)
                int32_t eax_12
                eax_12.b = edi[2]
                int32_t var_d0
                int32_t eax_13 =
                    eax_12 + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0)) << 2) + edx_1)
                
                if (eax_13 s> 0xff)
                    eax_13 = 0xff
                
                edi[2] = eax_13.b
                int32_t ebx_27
                ebx_27.b = esi_1[1]
                int32_t eax_15 = edx_5 + *(((ebx_27 - edx_5) << 2) + eax_7)
                int32_t eax_16
                eax_16.b = not.b(eax_15.b)
                int32_t eax_18
                eax_18.b = edi[1]
                int32_t eax_19 =
                    eax_18 + *(((eax_16 + *(((eax_15 - eax_16) << 2) + var_d0)) << 2) + edx_1)
                
                if (eax_19 s> 0xff)
                    eax_19 = 0xff
                
                edi[1] = eax_19.b
                int32_t ebx_39
                ebx_39.b = *esi_1
                int32_t eax_21 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_7)
                int32_t eax_22
                eax_22.b = not.b(eax_21.b)
                int32_t eax_24
                eax_24.b = *edi
                int32_t eax =
                    eax_24 + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0)) << 2) + edx_1)
                
                if (eax s> 0xff)
                    eax = 0xff
                
                *edi = eax.b
        
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
