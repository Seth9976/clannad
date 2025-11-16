// 函数: sub_952e70
// 地址: 0x952e70
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
            int32_t ebx_12 = *(*((result << 2) + &data_4e3da80) + (ebx_2 << 2))
            
            if (ebx_12 != 0)
                int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
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
                int32_t ebx_20
                ebx_20.b = var_18[2]
                int32_t eax_18 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_16)
                int32_t eax_19
                eax_19.b = not.b(eax_18.b)
                int32_t var_d0
                int32_t eax_20 = eax_19 + *(((eax_18 - eax_19) << 2) + var_d0)
                int32_t var_88
                int32_t ebx_29 = eax_20 + var_88
                int32_t ebx_37
                
                if (eax_20 + var_88 s< 0)
                    if (ebx_29 s< 0xffffff01)
                        ebx_29 = 0xffffff01
                    
                    int32_t ebx_40
                    ebx_40.b = edi[2]
                    ebx_37 = *((ebx_40 << 2) + *((ebx_29 << 2) + data_4ced578))
                else
                    if (ebx_29 s> 0xff)
                        ebx_29 = 0xff
                    
                    int32_t ebx_32
                    ebx_32.b = edi[2]
                    ebx_37 = *(((ebx_32 - 0xff) << 2) + *((ebx_29 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_23
                eax_23.b = edi[2]
                edi[2] = eax_23.b + (*(((ebx_37 - eax_23) << 2) + edx_2)).b
                int32_t ebx_46
                ebx_46.b = var_18[1]
                int32_t eax_26 = edx_6 + *(((ebx_46 - edx_6) << 2) + eax_16)
                int32_t eax_27
                eax_27.b = not.b(eax_26.b)
                int32_t eax_28 = eax_27 + *(((eax_26 - eax_27) << 2) + var_d0)
                int32_t var_84
                int32_t ebx_55 = eax_28 + var_84
                int32_t ebx_63
                
                if (eax_28 + var_84 s< 0)
                    if (ebx_55 s< 0xffffff01)
                        ebx_55 = 0xffffff01
                    
                    int32_t ebx_66
                    ebx_66.b = edi[1]
                    ebx_63 = *((ebx_66 << 2) + *((ebx_55 << 2) + data_4ced578))
                else
                    if (ebx_55 s> 0xff)
                        ebx_55 = 0xff
                    
                    int32_t ebx_58
                    ebx_58.b = edi[1]
                    ebx_63 = *(((ebx_58 - 0xff) << 2) + *((ebx_55 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_31
                eax_31.b = edi[1]
                edi[1] = eax_31.b + (*(((ebx_63 - eax_31) << 2) + edx_2)).b
                int32_t ebx_72
                ebx_72.b = *var_18
                int32_t eax_34 = edx_6 + *(((ebx_72 - edx_6) << 2) + eax_16)
                int32_t eax_35
                eax_35.b = not.b(eax_34.b)
                int32_t eax_36 = eax_35 + *(((eax_34 - eax_35) << 2) + var_d0)
                int32_t var_80
                int32_t ebx_81 = eax_36 + var_80
                int32_t ebx_89
                
                if (eax_36 + var_80 s< 0)
                    if (ebx_81 s< 0xffffff01)
                        ebx_81 = 0xffffff01
                    
                    int32_t ebx_92
                    ebx_92.b = *edi
                    ebx_89 = *((ebx_92 << 2) + *((ebx_81 << 2) + data_4ced578))
                else
                    if (ebx_81 s> 0xff)
                        ebx_81 = 0xff
                    
                    int32_t ebx_84
                    ebx_84.b = *edi
                    ebx_89 = *(((ebx_84 - 0xff) << 2) + *((ebx_81 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_39
                eax_39.b = *edi
                result = eax_39 + *(((ebx_89 - eax_39) << 2) + edx_2)
                *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
