// 函数: sub_94cde0
// 地址: 0x94cde0
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
                int32_t var_f8
                int32_t var_ec
                int32_t eax_11 = var_f8 + *(((ebx_16 - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_21 = eax_11 + var_88
                int32_t ebx_29
                
                if (eax_11 + var_88 s< 0)
                    if (ebx_21 s< 0xffffff01)
                        ebx_21 = 0xffffff01
                    
                    int32_t ebx_32
                    ebx_32.b = edi[2]
                    ebx_29 = *((ebx_32 << 2) + *((ebx_21 << 2) + data_4ced578))
                else
                    if (ebx_21 s> 0xff)
                        ebx_21 = 0xff
                    
                    int32_t ebx_24
                    ebx_24.b = edi[2]
                    ebx_29 = *(((ebx_24 - 0xff) << 2) + *((ebx_21 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_14
                eax_14.b = edi[2]
                edi[2] = eax_14.b + (*(((ebx_29 - eax_14) << 2) + edx_2)).b
                int32_t ebx_38
                ebx_38.b = var_18[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_17 = var_f4 + *(((ebx_38 - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_43 = eax_17 + var_84
                int32_t ebx_51
                
                if (eax_17 + var_84 s< 0)
                    if (ebx_43 s< 0xffffff01)
                        ebx_43 = 0xffffff01
                    
                    int32_t ebx_54
                    ebx_54.b = edi[1]
                    ebx_51 = *((ebx_54 << 2) + *((ebx_43 << 2) + data_4ced578))
                else
                    if (ebx_43 s> 0xff)
                        ebx_43 = 0xff
                    
                    int32_t ebx_46
                    ebx_46.b = edi[1]
                    ebx_51 = *(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_20
                eax_20.b = edi[1]
                edi[1] = eax_20.b + (*(((ebx_51 - eax_20) << 2) + edx_2)).b
                int32_t ebx_60
                ebx_60.b = *var_18
                int32_t var_f0
                int32_t var_e4
                int32_t eax_23 = var_f0 + *(((ebx_60 - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_65 = eax_23 + var_80
                int32_t ebx_73
                
                if (eax_23 + var_80 s< 0)
                    if (ebx_65 s< 0xffffff01)
                        ebx_65 = 0xffffff01
                    
                    int32_t ebx_76
                    ebx_76.b = *edi
                    ebx_73 = *((ebx_76 << 2) + *((ebx_65 << 2) + data_4ced578))
                else
                    if (ebx_65 s> 0xff)
                        ebx_65 = 0xff
                    
                    int32_t ebx_68
                    ebx_68.b = *edi
                    ebx_73 = *(((ebx_68 - 0xff) << 2) + *((ebx_65 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_26
                eax_26.b = *edi
                result = eax_26 + *(((ebx_73 - eax_26) << 2) + edx_2)
                *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
