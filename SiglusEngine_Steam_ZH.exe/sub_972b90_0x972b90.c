// 函数: sub_972b90
// 地址: 0x972b90
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
    
    int32_t eax_6 = *esi_2
    
    if (eax_6 != 0)
        int32_t var_b8
        int32_t var_9c
        int32_t var_8c
        int32_t var_8
        
        if (eax_6 s> 0)
            edi = &edi[var_8]
            int32_t eax_10 = var_9c + 1
            ebx_1 = &ebx_1[var_bc]
            
            if (eax_10 s>= var_b8)
                eax_10 -= var_b8
                ebx_1 -= var_8c
            
            var_9c = eax_10
        else
            edi -= var_8
            int32_t eax_8 = var_9c - 1
            ebx_1 -= var_bc
            
            if (eax_8 s<= 0)
                eax_8 += var_b8
                ebx_1 = &ebx_1[var_8c]
            
            var_9c = eax_8
    
    var_98 = ebx_1
    int32_t eax_11
    eax_11.b = *var_98
    int32_t var_b4
    
    if (var_b4 != 0)
        eax_11.b = not.b(eax_11.b)
    
    i = i_1
    char var_b0
    int32_t var_ac
    result = (eax_11 << var_b0) + var_ac
    
    if (result s< 0)
        result = 0
    else if (result s> 0xff)
        result = 0xff
    
    if (result != 0)
        int32_t var_11c
        int32_t result_1 = *(*((result << 2) + &data_4e3da80) + var_11c)
        
        if (result_1 != 0)
            int32_t ecx_2 = result_1 << 2
            int32_t eax_13
            eax_13.b = edi[3]
            result = eax_13 << 2
            int32_t ecx_6 = *(*(ecx_2 + &data_4dae580) + result)
            
            if (ecx_6 != 0)
                int32_t edx_6 = *(*(ecx_2 + &data_4dee980) + result)
                char* var_18
                int32_t eax_14
                eax_14.b = var_18[2]
                int32_t eax_16
                eax_16.b = var_18[1]
                int32_t eax_18
                eax_18.b = *var_18
                uint32_t edx_10 = (*(&data_4e3d680 + (eax_14 << 2))
                    + *(&data_4e3e280 + (eax_16 << 2)) + *(&data_4e3de80 + (eax_18 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_20 = *(&data_4e3da80 + var_cc)
                int32_t ebx_14
                ebx_14.b = var_18[2]
                int32_t eax_22 = edx_10 + *(((ebx_14 - edx_10) << 2) + eax_20)
                int32_t eax_23
                eax_23.b = not.b(eax_22.b)
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_26 = var_e0
                    + *(((eax_23 + *(((eax_22 - eax_23) << 2) + var_d0) - var_e0) << 2) + var_d4)
                int32_t ebx_27
                ebx_27.b = var_18[1]
                int32_t eax_28 = edx_10 + *(((ebx_27 - edx_10) << 2) + eax_20)
                int32_t eax_29
                eax_29.b = not.b(eax_28.b)
                int32_t var_dc
                int32_t eax_32 = var_dc
                    + *(((eax_29 + *(((eax_28 - eax_29) << 2) + var_d0) - var_dc) << 2) + var_d4)
                int32_t ebx_40
                ebx_40.b = *var_18
                int32_t eax_34 = edx_10 + *(((ebx_40 - edx_10) << 2) + eax_20)
                int32_t eax_35
                eax_35.b = not.b(eax_34.b)
                int32_t var_d8
                int32_t eax_38 = var_d8
                    + *(((eax_35 + *(((eax_34 - eax_35) << 2) + var_d0) - var_d8) << 2) + var_d4)
                result = result_1
                
                if (result != 0xff)
                    int32_t ebx_58
                    ebx_58.b = edi[3]
                    
                    if (ebx_58 != 0)
                        int32_t eax_41 = *((result << 2) + &data_4d6e180)
                        *((eax_32 << 2) + eax_41)
                        *((eax_38 << 2) + eax_41)
                        int32_t eax_42
                        eax_42.b = edi[2]
                        edi[2] = (divu.dp.d(mulu.dp.d(eax_42, edx_6), ecx_6)).b
                        int32_t eax_47
                        eax_47.b = edi[1]
                        edi[1] = (divu.dp.d(mulu.dp.d(eax_47, edx_6), ecx_6)).b
                        int32_t eax_52
                        eax_52.b = *edi
                        result = divu.dp.d(mulu.dp.d(eax_52, edx_6), ecx_6)
                        *edi = result.b
                        edi[3] = ecx_6.b
                    else
                        edi[2] = eax_26.b
                        edi[1] = eax_32.b
                        *edi = eax_38.b
                        edi[3] = result.b
                else
                    edi[2] = eax_26.b
                    edi[1] = eax_32.b
                    *edi = eax_38.b
                    edi[3] = result.b
    
    esi_1 = esi_2 + 4
    i_1 = i - 1
while (i != 1)
return result
