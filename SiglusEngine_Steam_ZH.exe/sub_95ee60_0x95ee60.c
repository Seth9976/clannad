// 函数: sub_95ee60
// 地址: 0x95ee60
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
    
    char var_b0
    int32_t var_ac
    result = (eax_11 << var_b0) + var_ac
    
    if (result s< 0)
        result = 0
    else if (result s> 0xff)
        result = 0xff
    
    if (result != 0)
        int32_t var_11c
        int32_t ebx_9 = *(*((result << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_9 != 0)
            int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
            char* var_18
            int32_t eax_13
            eax_13.b = var_18[2]
            int32_t eax_15
            eax_15.b = var_18[1]
            int32_t eax_17
            eax_17.b = *var_18
            uint32_t edx_6 = (*(&data_4e3d680 + (eax_13 << 2)) + *(&data_4e3e280 + (eax_15 << 2))
                + *(&data_4e3de80 + (eax_17 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_19 = *(&data_4e3da80 + var_cc)
            int32_t ebx_17
            ebx_17.b = var_18[2]
            int32_t eax_24
            eax_24.b = edi[2]
            int32_t eax_28
            eax_28.b = edi[2]
            int32_t var_f8
            int32_t var_ec
            int32_t ebx_30 = (*(((var_f8
                + *(((edx_6 + *(((ebx_17 - edx_6) << 2) + eax_19) - var_f8) << 2) + var_ec)) << 2)
                + *((eax_24 << 2) + &data_4e3da80)) - eax_28) << 2
            edi[2] = eax_28.b + (*(ebx_30 + edx_2)).b
            int32_t ebx_32
            ebx_32.b = var_18[1]
            int32_t eax_34
            eax_34.b = edi[1]
            int32_t eax_38
            eax_38.b = edi[1]
            int32_t var_f4
            int32_t var_e8
            int32_t ebx_45 = (*(((var_f4
                + *(((edx_6 + *(((ebx_32 - edx_6) << 2) + eax_19) - var_f4) << 2) + var_e8)) << 2)
                + *((eax_34 << 2) + &data_4e3da80)) - eax_38) << 2
            edi[1] = eax_38.b + (*(ebx_45 + edx_2)).b
            int32_t ebx_47
            ebx_47.b = *var_18
            int32_t eax_44
            eax_44.b = *edi
            int32_t eax_48
            eax_48.b = *edi
            int32_t var_f0
            int32_t var_e4
            int32_t ebx_60 = (*(((var_f0
                + *(((edx_6 + *(((ebx_47 - edx_6) << 2) + eax_19) - var_f0) << 2) + var_e4)) << 2)
                + *((eax_44 << 2) + &data_4e3da80)) - eax_48) << 2
            result = eax_48 + *(ebx_60 + edx_2)
            *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
