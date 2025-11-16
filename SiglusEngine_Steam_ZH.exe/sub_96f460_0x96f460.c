// 函数: sub_96f460
// 地址: 0x96f460
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
            int32_t result_2 = *(*((result << 2) + &data_4e3da80) + (ebx_2 << 2))
            
            if (result_2 != 0)
                int32_t ecx_2 = result_2 << 2
                int32_t eax_10
                eax_10.b = edi[3]
                result = eax_10 << 2
                int32_t ecx_6 = *(*(ecx_2 + &data_4dae580) + result)
                
                if (ecx_6 != 0)
                    int32_t edx_6 = *(*(ecx_2 + &data_4dee980) + result)
                    int32_t eax_11
                    eax_11.b = var_18[2]
                    int32_t eax_13
                    eax_13.b = var_18[1]
                    int32_t eax_15
                    eax_15.b = *var_18
                    uint32_t edx_10 = (*(&data_4e3d680 + (eax_11 << 2))
                        + *(&data_4e3e280 + (eax_13 << 2)) + *(&data_4e3de80 + (eax_15 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_17 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_17
                    ebx_17.b = var_18[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t eax_21 = var_f8 +
                        *(((edx_10 + *(((ebx_17 - edx_10) << 2) + eax_17) - var_f8) << 2) + var_ec)
                    int32_t ebx_26
                    ebx_26.b = var_18[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t eax_25 = var_f4 +
                        *(((edx_10 + *(((ebx_26 - edx_10) << 2) + eax_17) - var_f4) << 2) + var_e8)
                    int32_t ebx_35
                    ebx_35.b = *var_18
                    int32_t var_f0
                    int32_t var_e4
                    int32_t eax_29 = var_f0 +
                        *(((edx_10 + *(((ebx_35 - edx_10) << 2) + eax_17) - var_f0) << 2) + var_e4)
                    result = result_2
                    
                    if (result != 0xff)
                        int32_t ebx_49
                        ebx_49.b = edi[3]
                        
                        if (ebx_49 != 0)
                            int32_t eax_32 = *((result << 2) + &data_4d6e180)
                            *((eax_25 << 2) + eax_32)
                            *((eax_29 << 2) + eax_32)
                            int32_t eax_33
                            eax_33.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_33, edx_6), ecx_6)).b
                            int32_t eax_38
                            eax_38.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_38, edx_6), ecx_6)).b
                            int32_t eax_43
                            eax_43.b = *edi
                            result = divu.dp.d(mulu.dp.d(eax_43, edx_6), ecx_6)
                            *edi = result.b
                            edi[3] = ecx_6.b
                        else
                            edi[2] = eax_21.b
                            edi[1] = eax_25.b
                            *edi = eax_29.b
                            edi[3] = result.b
                    else
                        edi[2] = eax_21.b
                        edi[1] = eax_25.b
                        *edi = eax_29.b
                        edi[3] = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
