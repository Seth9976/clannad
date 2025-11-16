// 函数: sub_650b40
// 地址: 0x650b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac504
int32_t result = *(ecx + 0xbc)

if (result != *(ecx + 0xc0))
    void* edx_1 = *(ecx + 0xc0)
    int64_t var_14 = *(edx_1 - 0xe)
    int32_t var_c_1 = *(edx_1 - 6)
    int16_t var_8_1 = *(edx_1 - 2)
    int64_t* ecx_2 = *sub_651340(ecx + 0xc8, &var_14)
    *arg1 = *ecx_2
    arg1[1].d = ecx_2[1].d
    void* ecx_3 = data_bac504
    *(arg1 + 0xc) = *(ecx_2 + 0xc)
    void** eax_7 = *sub_651340(ecx_3 + 0xc8, &var_14) + 0x10
    
    if (&arg1[2] != eax_7)
        sub_52e3c0(&arg1[2], eax_7, 0, 0xffffffff)
    
    void** eax_10 = *sub_651340(data_bac504 + 0xc8, &var_14) + 0x28
    
    if (&arg1[5] != eax_10)
        sub_52e3c0(&arg1[5], eax_10, 0, 0xffffffff)
    
    void** eax_13 = *sub_651340(data_bac504 + 0xc8, &var_14) + 0x40
    
    if (&arg1[8] != eax_13)
        sub_52e3c0(&arg1[8], eax_13, 0, 0xffffffff)
    
    void** eax_16 = *sub_651340(data_bac504 + 0xc8, &var_14) + 0x58
    
    if (&arg1[0xb] != eax_16)
        sub_52e3c0(&arg1[0xb], eax_16, 0, 0xffffffff)
    
    void** eax_19 = *sub_651340(data_bac504 + 0xc8, &var_14) + 0x70
    
    if (&arg1[0xe] != eax_19)
        sub_52e3c0(&arg1[0xe], eax_19, 0, 0xffffffff)
    
    int32_t* edi_2 = *sub_651340(data_bac504 + 0xc8, &var_14) + 0x88
    sub_5970d0(&arg1[0x11], edi_2)
    void* ecx_21 = data_bac504
    *(arg1 + 0x94) = edi_2[3]
    int32_t* edi_4 = *sub_651340(ecx_21 + 0xc8, &var_14) + 0x98
    sub_5970d0(&arg1[0x13], edi_4)
    result = edi_4[3]
    *(arg1 + 0xa4) = result

return result
