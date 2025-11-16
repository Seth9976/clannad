// 函数: sub_94da40
// 地址: 0x94da40
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
                int32_t var_e0
                int32_t var_d4
                int32_t eax_13 = var_f8
                    + *(((var_e0 + *(((ebx_16 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_25 = eax_13 + var_88
                int32_t ebx_33
                
                if (eax_13 + var_88 s< 0)
                    if (ebx_25 s< 0xffffff01)
                        ebx_25 = 0xffffff01
                    
                    int32_t ebx_36
                    ebx_36.b = edi[2]
                    ebx_33 = *((ebx_36 << 2) + *((ebx_25 << 2) + data_4ced578))
                else
                    if (ebx_25 s> 0xff)
                        ebx_25 = 0xff
                    
                    int32_t ebx_28
                    ebx_28.b = edi[2]
                    ebx_33 = *(((ebx_28 - 0xff) << 2) + *((ebx_25 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_16
                eax_16.b = edi[2]
                edi[2] = eax_16.b + (*(((ebx_33 - eax_16) << 2) + edx_2)).b
                int32_t ebx_42
                ebx_42.b = var_18[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_21 = var_f4
                    + *(((var_dc + *(((ebx_42 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_51 = eax_21 + var_84
                int32_t ebx_59
                
                if (eax_21 + var_84 s< 0)
                    if (ebx_51 s< 0xffffff01)
                        ebx_51 = 0xffffff01
                    
                    int32_t ebx_62
                    ebx_62.b = edi[1]
                    ebx_59 = *((ebx_62 << 2) + *((ebx_51 << 2) + data_4ced578))
                else
                    if (ebx_51 s> 0xff)
                        ebx_51 = 0xff
                    
                    int32_t ebx_54
                    ebx_54.b = edi[1]
                    ebx_59 = *(((ebx_54 - 0xff) << 2) + *((ebx_51 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_24
                eax_24.b = edi[1]
                edi[1] = eax_24.b + (*(((ebx_59 - eax_24) << 2) + edx_2)).b
                int32_t ebx_68
                ebx_68.b = *var_18
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_29 = var_f0
                    + *(((var_d8 + *(((ebx_68 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_77 = eax_29 + var_80
                int32_t ebx_85
                
                if (eax_29 + var_80 s< 0)
                    if (ebx_77 s< 0xffffff01)
                        ebx_77 = 0xffffff01
                    
                    int32_t ebx_88
                    ebx_88.b = *edi
                    ebx_85 = *((ebx_88 << 2) + *((ebx_77 << 2) + data_4ced578))
                else
                    if (ebx_77 s> 0xff)
                        ebx_77 = 0xff
                    
                    int32_t ebx_80
                    ebx_80.b = *edi
                    ebx_85 = *(((ebx_80 - 0xff) << 2) + *((ebx_77 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_32
                eax_32.b = *edi
                result = eax_32 + *(((ebx_85 - eax_32) << 2) + edx_2)
                *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
