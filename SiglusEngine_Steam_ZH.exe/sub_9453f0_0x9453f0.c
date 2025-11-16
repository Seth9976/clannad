// 函数: sub_9453f0
// 地址: 0x9453f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
        int32_t eax_2
        eax_2.b = var_18[2]
        int32_t eax_4
        eax_4.b = var_18[1]
        int32_t eax_6
        eax_6.b = *var_18
        uint32_t edx_6 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
            + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_8 = *(&data_4e3da80 + var_cc)
        int32_t ebx_9
        ebx_9.b = var_18[2]
        int32_t var_f8
        int32_t var_ec
        int32_t eax_12 =
            var_f8 + *(((edx_6 + *(((ebx_9 - edx_6) << 2) + eax_8) - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_18 = eax_12 + var_88
        int32_t ebx_26
        
        if (eax_12 + var_88 s< 0)
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
        
        int32_t eax_15
        eax_15.b = edi[2]
        edi[2] = eax_15.b + (*(((ebx_26 - eax_15) << 2) + edx_2)).b
        int32_t ebx_35
        ebx_35.b = var_18[1]
        int32_t var_f4
        int32_t var_e8
        int32_t eax_20 =
            var_f4 + *(((edx_6 + *(((ebx_35 - edx_6) << 2) + eax_8) - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_44 = eax_20 + var_84
        int32_t ebx_52
        
        if (eax_20 + var_84 s< 0)
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
        
        int32_t eax_23
        eax_23.b = edi[1]
        edi[1] = eax_23.b + (*(((ebx_52 - eax_23) << 2) + edx_2)).b
        int32_t ebx_61
        ebx_61.b = *var_18
        int32_t var_f0
        int32_t var_e4
        int32_t eax_28 =
            var_f0 + *(((edx_6 + *(((ebx_61 - edx_6) << 2) + eax_8) - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_70 = eax_28 + var_80
        int32_t ebx_78
        
        if (eax_28 + var_80 s< 0)
            if (ebx_70 s< 0xffffff01)
                ebx_70 = 0xffffff01
            
            int32_t ebx_81
            ebx_81.b = *edi
            ebx_78 = *((ebx_81 << 2) + *((ebx_70 << 2) + data_4ced578))
        else
            if (ebx_70 s> 0xff)
                ebx_70 = 0xff
            
            int32_t ebx_73
            ebx_73.b = *edi
            ebx_78 = *(((ebx_73 - 0xff) << 2) + *((ebx_70 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_31
        eax_31.b = *edi
        result = eax_31 + *(((ebx_78 - eax_31) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
