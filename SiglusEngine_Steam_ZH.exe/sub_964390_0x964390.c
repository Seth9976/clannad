// 函数: sub_964390
// 地址: 0x964390
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
                int32_t ebx_16
                ebx_16.b = var_18[2]
                int32_t eax_10
                eax_10.b = not.b(ebx_16.b)
                int32_t eax_14
                eax_14.b = edi[2]
                int32_t eax_18
                eax_18.b = edi[2]
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t ebx_29 = (*(((var_e0
                    + *(((eax_10 + *(((ebx_16 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4))
                    << 2) + *((eax_14 << 2) + &data_4e3da80)) - eax_18) << 2
                edi[2] = eax_18.b + (*(ebx_29 + edx_2)).b
                int32_t ebx_31
                ebx_31.b = var_18[1]
                int32_t eax_20
                eax_20.b = not.b(ebx_31.b)
                int32_t eax_24
                eax_24.b = edi[1]
                int32_t eax_28
                eax_28.b = edi[1]
                int32_t var_dc
                int32_t ebx_44 = (*(((var_dc
                    + *(((eax_20 + *(((ebx_31 - eax_20) << 2) + var_d0) - var_dc) << 2) + var_d4))
                    << 2) + *((eax_24 << 2) + &data_4e3da80)) - eax_28) << 2
                edi[1] = eax_28.b + (*(ebx_44 + edx_2)).b
                int32_t ebx_46
                ebx_46.b = *var_18
                int32_t eax_30
                eax_30.b = not.b(ebx_46.b)
                int32_t eax_34
                eax_34.b = *edi
                int32_t eax_38
                eax_38.b = *edi
                int32_t var_d8
                int32_t ebx_59 = (*(((var_d8
                    + *(((eax_30 + *(((ebx_46 - eax_30) << 2) + var_d0) - var_d8) << 2) + var_d4))
                    << 2) + *((eax_34 << 2) + &data_4e3da80)) - eax_38) << 2
                result = eax_38 + *(ebx_59 + edx_2)
                *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
