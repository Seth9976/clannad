// 函数: sub_96dc20
// 地址: 0x96dc20
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
                int32_t ebx_10
                ebx_10.b = var_18[2]
                int32_t var_f8
                int32_t var_ec
                int32_t eax_15 = var_f8 + *(((ebx_10 - var_f8) << 2) + var_ec)
                int32_t ebx_15
                ebx_15.b = var_18[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_17 = var_f4 + *(((ebx_15 - var_f4) << 2) + var_e8)
                int32_t ebx_20
                ebx_20.b = *var_18
                int32_t var_f0
                int32_t var_e4
                int32_t eax_19 = var_f0 + *(((ebx_20 - var_f0) << 2) + var_e4)
                result = result_1
                
                if (result != 0xff)
                    int32_t ebx_30
                    ebx_30.b = edi[3]
                    
                    if (ebx_30 != 0)
                        int32_t eax_22 = *((result << 2) + &data_4d6e180)
                        *((eax_17 << 2) + eax_22)
                        *((eax_19 << 2) + eax_22)
                        int32_t eax_23
                        eax_23.b = edi[2]
                        edi[2] = (divu.dp.d(mulu.dp.d(eax_23, edx_6), ecx_6)).b
                        int32_t eax_28
                        eax_28.b = edi[1]
                        edi[1] = (divu.dp.d(mulu.dp.d(eax_28, edx_6), ecx_6)).b
                        int32_t eax_33
                        eax_33.b = *edi
                        result = divu.dp.d(mulu.dp.d(eax_33, edx_6), ecx_6)
                        *edi = result.b
                        edi[3] = ecx_6.b
                    else
                        edi[2] = eax_15.b
                        edi[1] = eax_17.b
                        *edi = eax_19.b
                        edi[3] = result.b
                else
                    edi[2] = eax_15.b
                    edi[1] = eax_17.b
                    *edi = eax_19.b
                    edi[3] = result.b
    
    esi_1 = esi_2 + 4
    i_1 = i - 1
while (i != 1)
return result
