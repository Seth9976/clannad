// 函数: sub_91e750
// 地址: 0x91e750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t var_11c
        int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_7 != 0)
            int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
            int32_t eax_2
            eax_2.b = var_18[2]
            int32_t eax_4
            eax_4.b = var_18[1]
            int32_t eax_6
            eax_6.b = *var_18
            uint32_t edx_6 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
                + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_8 = *(&data_4e3da80 + var_cc)
            int32_t ebx_15
            ebx_15.b = var_18[2]
            int32_t eax_10 = edx_6 + *(((ebx_15 - edx_6) << 2) + eax_8)
            int32_t eax_11
            eax_11.b = not.b(eax_10.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t ebx_34 = *(((var_f8 + *(((var_e0
                + *(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)) << 2) + edx_2)
            int32_t eax_17
            eax_17.b = edi[2]
            int32_t eax_18 = eax_17 + ebx_34
            
            if (eax_18 s> 0xff)
                eax_18 = 0xff
            
            edi[2] = eax_18.b
            int32_t ebx_35
            ebx_35.b = var_18[1]
            int32_t eax_20 = edx_6 + *(((ebx_35 - edx_6) << 2) + eax_8)
            int32_t eax_21
            eax_21.b = not.b(eax_20.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t ebx_54 = *(((var_f4 + *(((var_dc
                + *(((eax_21 + *(((eax_20 - eax_21) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)) << 2) + edx_2)
            int32_t eax_27
            eax_27.b = edi[1]
            int32_t eax_28 = eax_27 + ebx_54
            
            if (eax_28 s> 0xff)
                eax_28 = 0xff
            
            edi[1] = eax_28.b
            int32_t ebx_55
            ebx_55.b = *var_18
            int32_t eax_30 = edx_6 + *(((ebx_55 - edx_6) << 2) + eax_8)
            int32_t eax_31
            eax_31.b = not.b(eax_30.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t ebx_74 = *(((var_f0 + *(((var_d8
                + *(((eax_31 + *(((eax_30 - eax_31) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)) << 2) + edx_2)
            int32_t eax_37
            eax_37.b = *edi
            result = eax_37 + ebx_74
            
            if (result s> 0xff)
                result = 0xff
            
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
