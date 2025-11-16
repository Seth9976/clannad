// 函数: sub_956730
// 地址: 0x956730
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
            int32_t ebx_13
            ebx_13.b = var_18[2]
            int32_t eax_13
            eax_13.b = not.b(ebx_13.b)
            int32_t var_d0
            int32_t eax_14 = eax_13 + *(((ebx_13 - eax_13) << 2) + var_d0)
            int32_t var_88
            int32_t ebx_18 = eax_14 + var_88
            int32_t ebx_26
            
            if (eax_14 + var_88 s< 0)
                if (ebx_18 s< 0xffffff01)
                    ebx_18 = 0xffffff01
                
                int32_t ebx_29
                ebx_29.b = edi[2]
                ebx_26 = *((ebx_29 << 2) + *((ebx_18 << 2) + data_4ced578))
            else
                if (ebx_18 s> 0xff)
                    ebx_18 = 0xff
                
                int32_t ebx_21
                ebx_21.b = edi[2]
                ebx_26 = *(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_17
            eax_17.b = edi[2]
            edi[2] = eax_17.b + (*(((ebx_26 - eax_17) << 2) + edx_2)).b
            int32_t ebx_35
            ebx_35.b = var_18[1]
            int32_t eax_19
            eax_19.b = not.b(ebx_35.b)
            int32_t eax_20 = eax_19 + *(((ebx_35 - eax_19) << 2) + var_d0)
            int32_t var_84
            int32_t ebx_40 = eax_20 + var_84
            int32_t ebx_48
            
            if (eax_20 + var_84 s< 0)
                if (ebx_40 s< 0xffffff01)
                    ebx_40 = 0xffffff01
                
                int32_t ebx_51
                ebx_51.b = edi[1]
                ebx_48 = *((ebx_51 << 2) + *((ebx_40 << 2) + data_4ced578))
            else
                if (ebx_40 s> 0xff)
                    ebx_40 = 0xff
                
                int32_t ebx_43
                ebx_43.b = edi[1]
                ebx_48 = *(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_23
            eax_23.b = edi[1]
            edi[1] = eax_23.b + (*(((ebx_48 - eax_23) << 2) + edx_2)).b
            int32_t ebx_57
            ebx_57.b = *var_18
            int32_t eax_25
            eax_25.b = not.b(ebx_57.b)
            int32_t eax_26 = eax_25 + *(((ebx_57 - eax_25) << 2) + var_d0)
            int32_t var_80
            int32_t ebx_62 = eax_26 + var_80
            int32_t ebx_70
            
            if (eax_26 + var_80 s< 0)
                if (ebx_62 s< 0xffffff01)
                    ebx_62 = 0xffffff01
                
                int32_t ebx_73
                ebx_73.b = *edi
                ebx_70 = *((ebx_73 << 2) + *((ebx_62 << 2) + data_4ced578))
            else
                if (ebx_62 s> 0xff)
                    ebx_62 = 0xff
                
                int32_t ebx_65
                ebx_65.b = *edi
                ebx_70 = *(((ebx_65 - 0xff) << 2) + *((ebx_62 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_29
            eax_29.b = *edi
            result = eax_29 + *(((ebx_70 - eax_29) << 2) + edx_2)
            *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
