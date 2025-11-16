// 函数: sub_953c80
// 地址: 0x953c80
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
            int32_t eax_21 = edx_6 + *(((ebx_17 - edx_6) << 2) + eax_19)
            int32_t var_88
            int32_t ebx_22 = eax_21 + var_88
            int32_t ebx_30
            
            if (eax_21 + var_88 s< 0)
                if (ebx_22 s< 0xffffff01)
                    ebx_22 = 0xffffff01
                
                int32_t ebx_33
                ebx_33.b = edi[2]
                ebx_30 = *((ebx_33 << 2) + *((ebx_22 << 2) + data_4ced578))
            else
                if (ebx_22 s> 0xff)
                    ebx_22 = 0xff
                
                int32_t ebx_25
                ebx_25.b = edi[2]
                ebx_30 = *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_24
            eax_24.b = edi[2]
            edi[2] = eax_24.b + (*(((ebx_30 - eax_24) << 2) + edx_2)).b
            int32_t ebx_39
            ebx_39.b = var_18[1]
            int32_t eax_27 = edx_6 + *(((ebx_39 - edx_6) << 2) + eax_19)
            int32_t var_84
            int32_t ebx_44 = eax_27 + var_84
            int32_t ebx_52
            
            if (eax_27 + var_84 s< 0)
                if (ebx_44 s< 0xffffff01)
                    ebx_44 = 0xffffff01
                
                int32_t ebx_55
                ebx_55.b = edi[1]
                ebx_52 = *((ebx_55 << 2) + *((ebx_44 << 2) + data_4ced578))
            else
                if (ebx_44 s> 0xff)
                    ebx_44 = 0xff
                
                int32_t ebx_47
                ebx_47.b = edi[1]
                ebx_52 = *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_30
            eax_30.b = edi[1]
            edi[1] = eax_30.b + (*(((ebx_52 - eax_30) << 2) + edx_2)).b
            int32_t ebx_61
            ebx_61.b = *var_18
            int32_t eax_33 = edx_6 + *(((ebx_61 - edx_6) << 2) + eax_19)
            int32_t var_80
            int32_t ebx_66 = eax_33 + var_80
            int32_t ebx_74
            
            if (eax_33 + var_80 s< 0)
                if (ebx_66 s< 0xffffff01)
                    ebx_66 = 0xffffff01
                
                int32_t ebx_77
                ebx_77.b = *edi
                ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
            else
                if (ebx_66 s> 0xff)
                    ebx_66 = 0xff
                
                int32_t ebx_69
                ebx_69.b = *edi
                ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_36
            eax_36.b = *edi
            result = eax_36 + *(((ebx_74 - eax_36) << 2) + edx_2)
            *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
