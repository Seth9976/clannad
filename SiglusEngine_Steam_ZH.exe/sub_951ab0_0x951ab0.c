// 函数: sub_951ab0
// 地址: 0x951ab0
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
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_24 = var_f8 + *(((var_e0
                    + *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_37 = eax_24 + var_88
                int32_t ebx_45
                
                if (eax_24 + var_88 s< 0)
                    if (ebx_37 s< 0xffffff01)
                        ebx_37 = 0xffffff01
                    
                    int32_t ebx_48
                    ebx_48.b = edi[2]
                    ebx_45 = *((ebx_48 << 2) + *((ebx_37 << 2) + data_4ced578))
                else
                    if (ebx_37 s> 0xff)
                        ebx_37 = 0xff
                    
                    int32_t ebx_40
                    ebx_40.b = edi[2]
                    ebx_45 = *(((ebx_40 - 0xff) << 2) + *((ebx_37 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_27
                eax_27.b = edi[2]
                edi[2] = eax_27.b + (*(((ebx_45 - eax_27) << 2) + edx_2)).b
                int32_t ebx_54
                ebx_54.b = var_18[1]
                int32_t eax_30 = edx_6 + *(((ebx_54 - edx_6) << 2) + eax_16)
                int32_t eax_31
                eax_31.b = not.b(eax_30.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_36 = var_f4 + *(((var_dc
                    + *(((eax_31 + *(((eax_30 - eax_31) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_71 = eax_36 + var_84
                int32_t ebx_79
                
                if (eax_36 + var_84 s< 0)
                    if (ebx_71 s< 0xffffff01)
                        ebx_71 = 0xffffff01
                    
                    int32_t ebx_82
                    ebx_82.b = edi[1]
                    ebx_79 = *((ebx_82 << 2) + *((ebx_71 << 2) + data_4ced578))
                else
                    if (ebx_71 s> 0xff)
                        ebx_71 = 0xff
                    
                    int32_t ebx_74
                    ebx_74.b = edi[1]
                    ebx_79 = *(((ebx_74 - 0xff) << 2) + *((ebx_71 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_39
                eax_39.b = edi[1]
                edi[1] = eax_39.b + (*(((ebx_79 - eax_39) << 2) + edx_2)).b
                int32_t ebx_88
                ebx_88.b = *var_18
                int32_t eax_42 = edx_6 + *(((ebx_88 - edx_6) << 2) + eax_16)
                int32_t eax_43
                eax_43.b = not.b(eax_42.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_48 = var_f0 + *(((var_d8
                    + *(((eax_43 + *(((eax_42 - eax_43) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_105 = eax_48 + var_80
                int32_t ebx_113
                
                if (eax_48 + var_80 s< 0)
                    if (ebx_105 s< 0xffffff01)
                        ebx_105 = 0xffffff01
                    
                    int32_t ebx_116
                    ebx_116.b = *edi
                    ebx_113 = *((ebx_116 << 2) + *((ebx_105 << 2) + data_4ced578))
                else
                    if (ebx_105 s> 0xff)
                        ebx_105 = 0xff
                    
                    int32_t ebx_108
                    ebx_108.b = *edi
                    ebx_113 = *(((ebx_108 - 0xff) << 2) + *((ebx_105 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_51
                eax_51.b = *edi
                result = eax_51 + *(((ebx_113 - eax_51) << 2) + edx_2)
                *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
