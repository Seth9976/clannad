// 函数: sub_948770
// 地址: 0x948770
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
            int32_t eax_16 = var_f8 + *(((var_e0
                + *(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_32 = eax_16 + var_88
            int32_t ebx_40
            
            if (eax_16 + var_88 s< 0)
                if (ebx_32 s< 0xffffff01)
                    ebx_32 = 0xffffff01
                
                int32_t ebx_43
                ebx_43.b = edi[2]
                ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
            else
                if (ebx_32 s> 0xff)
                    ebx_32 = 0xff
                
                int32_t ebx_35
                ebx_35.b = edi[2]
                ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_19
            eax_19.b = edi[2]
            edi[2] = eax_19.b + (*(((ebx_40 - eax_19) << 2) + edx_2)).b
            int32_t ebx_49
            ebx_49.b = var_18[1]
            int32_t eax_22 = edx_6 + *(((ebx_49 - edx_6) << 2) + eax_8)
            int32_t eax_23
            eax_23.b = not.b(eax_22.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_28 = var_f4 + *(((var_dc
                + *(((eax_23 + *(((eax_22 - eax_23) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_66 = eax_28 + var_84
            int32_t ebx_74
            
            if (eax_28 + var_84 s< 0)
                if (ebx_66 s< 0xffffff01)
                    ebx_66 = 0xffffff01
                
                int32_t ebx_77
                ebx_77.b = edi[1]
                ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
            else
                if (ebx_66 s> 0xff)
                    ebx_66 = 0xff
                
                int32_t ebx_69
                ebx_69.b = edi[1]
                ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_31
            eax_31.b = edi[1]
            edi[1] = eax_31.b + (*(((ebx_74 - eax_31) << 2) + edx_2)).b
            int32_t ebx_83
            ebx_83.b = *var_18
            int32_t eax_34 = edx_6 + *(((ebx_83 - edx_6) << 2) + eax_8)
            int32_t eax_35
            eax_35.b = not.b(eax_34.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_40 = var_f0 + *(((var_d8
                + *(((eax_35 + *(((eax_34 - eax_35) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_100 = eax_40 + var_80
            int32_t ebx_108
            
            if (eax_40 + var_80 s< 0)
                if (ebx_100 s< 0xffffff01)
                    ebx_100 = 0xffffff01
                
                int32_t ebx_111
                ebx_111.b = *edi
                ebx_108 = *((ebx_111 << 2) + *((ebx_100 << 2) + data_4ced578))
            else
                if (ebx_100 s> 0xff)
                    ebx_100 = 0xff
                
                int32_t ebx_103
                ebx_103.b = *edi
                ebx_108 = *(((ebx_103 - 0xff) << 2) + *((ebx_100 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_43
            eax_43.b = *edi
            result = eax_43 + *(((ebx_108 - eax_43) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
