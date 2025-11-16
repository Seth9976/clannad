// 函数: sub_945e70
// 地址: 0x945e70
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
        int32_t var_e0
        int32_t var_d4
        int32_t eax_14 = var_f8 + *(((var_e0
            + *(((edx_6 + *(((ebx_9 - edx_6) << 2) + eax_8) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)
        int32_t var_88
        int32_t ebx_22 = eax_14 + var_88
        int32_t ebx_30
        
        if (eax_14 + var_88 s< 0)
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
        
        int32_t eax_17
        eax_17.b = edi[2]
        edi[2] = eax_17.b + (*(((ebx_30 - eax_17) << 2) + edx_2)).b
        int32_t ebx_39
        ebx_39.b = var_18[1]
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_24 = var_f4 + *(((var_dc
            + *(((edx_6 + *(((ebx_39 - edx_6) << 2) + eax_8) - var_dc) << 2) + var_d4) - var_f4) << 2)
            + var_e8)
        int32_t var_84
        int32_t ebx_52 = eax_24 + var_84
        int32_t ebx_60
        
        if (eax_24 + var_84 s< 0)
            if (ebx_52 s< 0xffffff01)
                ebx_52 = 0xffffff01
            
            int32_t ebx_63
            ebx_63.b = edi[1]
            ebx_60 = *((ebx_63 << 2) + *((ebx_52 << 2) + data_4ced578))
        else
            if (ebx_52 s> 0xff)
                ebx_52 = 0xff
            
            int32_t ebx_55
            ebx_55.b = edi[1]
            ebx_60 = *(((ebx_55 - 0xff) << 2) + *((ebx_52 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_27
        eax_27.b = edi[1]
        edi[1] = eax_27.b + (*(((ebx_60 - eax_27) << 2) + edx_2)).b
        int32_t ebx_69
        ebx_69.b = *var_18
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_34 = var_f0 + *(((var_d8
            + *(((edx_6 + *(((ebx_69 - edx_6) << 2) + eax_8) - var_d8) << 2) + var_d4) - var_f0) << 2)
            + var_e4)
        int32_t var_80
        int32_t ebx_82 = eax_34 + var_80
        int32_t ebx_90
        
        if (eax_34 + var_80 s< 0)
            if (ebx_82 s< 0xffffff01)
                ebx_82 = 0xffffff01
            
            int32_t ebx_93
            ebx_93.b = *edi
            ebx_90 = *((ebx_93 << 2) + *((ebx_82 << 2) + data_4ced578))
        else
            if (ebx_82 s> 0xff)
                ebx_82 = 0xff
            
            int32_t ebx_85
            ebx_85.b = *edi
            ebx_90 = *(((ebx_85 - 0xff) << 2) + *((ebx_82 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_37
        eax_37.b = *edi
        result = eax_37 + *(((ebx_90 - eax_37) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
