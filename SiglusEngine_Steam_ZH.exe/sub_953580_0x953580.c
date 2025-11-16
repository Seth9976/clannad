// 函数: sub_953580
// 地址: 0x953580
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
                    int32_t var_d0
                    int32_t eax_20 = eax_19 + *(((eax_18 - eax_19) << 2) + var_d0)
                    int32_t var_88
                    int32_t ebx_35 = eax_20 + var_88
                    int32_t ebx_43
                    
                    if (eax_20 + var_88 s< 0)
                        if (ebx_35 s< 0xffffff01)
                            ebx_35 = 0xffffff01
                        
                        int32_t ebx_46
                        ebx_46.b = edi[2]
                        ebx_43 = *((ebx_46 << 2) + *((ebx_35 << 2) + data_4ced578))
                    else
                        if (ebx_35 s> 0xff)
                            ebx_35 = 0xff
                        
                        int32_t ebx_38
                        ebx_38.b = edi[2]
                        ebx_43 = *(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_23
                    eax_23.b = edi[2]
                    edi[2] = eax_23.b + (*(((ebx_43 - eax_23) << 2) + edx_2)).b
                    int32_t ebx_52
                    ebx_52.b = var_18[1]
                    int32_t eax_26 = edx_6 + *(((ebx_52 - edx_6) << 2) + eax_16)
                    int32_t eax_27
                    eax_27.b = not.b(eax_26.b)
                    int32_t eax_28 = eax_27 + *(((eax_26 - eax_27) << 2) + var_d0)
                    int32_t var_84
                    int32_t ebx_61 = eax_28 + var_84
                    int32_t ebx_69
                    
                    if (eax_28 + var_84 s< 0)
                        if (ebx_61 s< 0xffffff01)
                            ebx_61 = 0xffffff01
                        
                        int32_t ebx_72
                        ebx_72.b = edi[1]
                        ebx_69 = *((ebx_72 << 2) + *((ebx_61 << 2) + data_4ced578))
                    else
                        if (ebx_61 s> 0xff)
                            ebx_61 = 0xff
                        
                        int32_t ebx_64
                        ebx_64.b = edi[1]
                        ebx_69 = *(((ebx_64 - 0xff) << 2) + *((ebx_61 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_31
                    eax_31.b = edi[1]
                    edi[1] = eax_31.b + (*(((ebx_69 - eax_31) << 2) + edx_2)).b
                    int32_t ebx_78
                    ebx_78.b = *var_18
                    int32_t eax_34 = edx_6 + *(((ebx_78 - edx_6) << 2) + eax_16)
                    int32_t eax_35
                    eax_35.b = not.b(eax_34.b)
                    int32_t eax_36 = eax_35 + *(((eax_34 - eax_35) << 2) + var_d0)
                    int32_t var_80
                    int32_t ebx_87 = eax_36 + var_80
                    int32_t ebx_95
                    
                    if (eax_36 + var_80 s< 0)
                        if (ebx_87 s< 0xffffff01)
                            ebx_87 = 0xffffff01
                        
                        int32_t ebx_98
                        ebx_98.b = *edi
                        ebx_95 = *((ebx_98 << 2) + *((ebx_87 << 2) + data_4ced578))
                    else
                        if (ebx_87 s> 0xff)
                            ebx_87 = 0xff
                        
                        int32_t ebx_90
                        ebx_90.b = *edi
                        ebx_95 = *(((ebx_90 - 0xff) << 2) + *((ebx_87 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_39
                    eax_39.b = *edi
                    result = eax_39 + *(((ebx_95 - eax_39) << 2) + edx_2)
                    *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
