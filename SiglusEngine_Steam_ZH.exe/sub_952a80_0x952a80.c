// 函数: sub_952a80
// 地址: 0x952a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_1 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    char* var_98
    char* ebx_1 = var_98
    int32_t eax_1 = *esi_1
    void* esi_2 = &esi_1[1]
    int32_t var_bc
    
    if (eax_1 != 0)
        int32_t var_a0
        int32_t var_90
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
            int32_t eax_5 = var_a0 + 1
            ebx_1 = &ebx_1[1]
            
            if (eax_5 s>= var_bc)
                eax_5 -= var_bc
                ebx_1 -= var_90
            
            var_a0 = eax_5
        else
            edi -= var_c
            int32_t eax_3 = var_a0 - 1
            ebx_1 -= 1
            
            if (eax_3 s<= 0)
                eax_3 += var_bc
                ebx_1 = &ebx_1[var_90]
            
            var_a0 = eax_3
    
    result = *esi_2
    
    if (result != 0)
        int32_t var_b8
        int32_t result_1
        int32_t var_8c
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
            result = result_1 + 1
            ebx_1 = &ebx_1[var_bc]
            
            if (result s>= var_b8)
                result -= var_b8
                ebx_1 -= var_8c
            
            result_1 = result
        else
            edi -= var_8
            result = result_1 - 1
            ebx_1 -= var_bc
            
            if (result s<= 0)
                result += var_b8
                ebx_1 = &ebx_1[var_8c]
            
            result_1 = result
    
    var_98 = ebx_1
    char* var_18
    int32_t ebx_2
    ebx_2.b = var_18[3]
    
    if (ebx_2 != 0)
        int32_t var_11c
        int32_t ebx_8 = *(*((ebx_2 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_8 != 0)
            int32_t eax_8
            eax_8.b = *var_98
            int32_t var_b4
            
            if (var_b4 != 0)
                eax_8.b = not.b(eax_8.b)
            
            char var_b0
            int32_t var_ac
            result = (eax_8 << var_b0) + var_ac
            
            if (result s< 0)
                result = 0
            else if (result s> 0xff)
                result = 0xff
            
            if (result != 0)
                int32_t ebx_18 = *(*((result << 2) + &data_4e3da80) + (ebx_8 << 2))
                
                if (ebx_18 != 0)
                    int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
                    int32_t eax_10
                    eax_10.b = var_18[2]
                    int32_t eax_12
                    eax_12.b = var_18[1]
                    int32_t eax_14
                    eax_14.b = *var_18
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_10 << 2))
                        + *(&data_4e3e280 + (eax_12 << 2)) + *(&data_4e3de80 + (eax_14 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_16 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_26
                    ebx_26.b = var_18[2]
                    int32_t eax_18 = edx_6 + *(((ebx_26 - edx_6) << 2) + eax_16)
                    int32_t eax_19
                    eax_19.b = not.b(eax_18.b)
                    int32_t var_e0
                    int32_t var_d4
                    int32_t var_d0
                    int32_t eax_22 = var_e0 +
                        *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    int32_t var_88
                    int32_t ebx_39 = eax_22 + var_88
                    int32_t ebx_47
                    
                    if (eax_22 + var_88 s< 0)
                        if (ebx_39 s< 0xffffff01)
                            ebx_39 = 0xffffff01
                        
                        int32_t ebx_50
                        ebx_50.b = edi[2]
                        ebx_47 = *((ebx_50 << 2) + *((ebx_39 << 2) + data_4ced578))
                    else
                        if (ebx_39 s> 0xff)
                            ebx_39 = 0xff
                        
                        int32_t ebx_42
                        ebx_42.b = edi[2]
                        ebx_47 = *(((ebx_42 - 0xff) << 2) + *((ebx_39 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_25
                    eax_25.b = edi[2]
                    edi[2] = eax_25.b + (*(((ebx_47 - eax_25) << 2) + edx_2)).b
                    int32_t ebx_56
                    ebx_56.b = var_18[1]
                    int32_t eax_28 = edx_6 + *(((ebx_56 - edx_6) << 2) + eax_16)
                    int32_t eax_29
                    eax_29.b = not.b(eax_28.b)
                    int32_t var_dc
                    int32_t eax_32 = var_dc +
                        *(((eax_29 + *(((eax_28 - eax_29) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    int32_t var_84
                    int32_t ebx_69 = eax_32 + var_84
                    int32_t ebx_77
                    
                    if (eax_32 + var_84 s< 0)
                        if (ebx_69 s< 0xffffff01)
                            ebx_69 = 0xffffff01
                        
                        int32_t ebx_80
                        ebx_80.b = edi[1]
                        ebx_77 = *((ebx_80 << 2) + *((ebx_69 << 2) + data_4ced578))
                    else
                        if (ebx_69 s> 0xff)
                            ebx_69 = 0xff
                        
                        int32_t ebx_72
                        ebx_72.b = edi[1]
                        ebx_77 = *(((ebx_72 - 0xff) << 2) + *((ebx_69 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_35
                    eax_35.b = edi[1]
                    edi[1] = eax_35.b + (*(((ebx_77 - eax_35) << 2) + edx_2)).b
                    int32_t ebx_86
                    ebx_86.b = *var_18
                    int32_t eax_38 = edx_6 + *(((ebx_86 - edx_6) << 2) + eax_16)
                    int32_t eax_39
                    eax_39.b = not.b(eax_38.b)
                    int32_t var_d8
                    int32_t eax_42 = var_d8 +
                        *(((eax_39 + *(((eax_38 - eax_39) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    int32_t var_80
                    int32_t ebx_99 = eax_42 + var_80
                    int32_t ebx_107
                    
                    if (eax_42 + var_80 s< 0)
                        if (ebx_99 s< 0xffffff01)
                            ebx_99 = 0xffffff01
                        
                        int32_t ebx_110
                        ebx_110.b = *edi
                        ebx_107 = *((ebx_110 << 2) + *((ebx_99 << 2) + data_4ced578))
                    else
                        if (ebx_99 s> 0xff)
                            ebx_99 = 0xff
                        
                        int32_t ebx_102
                        ebx_102.b = *edi
                        ebx_107 =
                            *(((ebx_102 - 0xff) << 2) + *((ebx_99 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_45
                    eax_45.b = *edi
                    result = eax_45 + *(((ebx_107 - eax_45) << 2) + edx_2)
                    *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
