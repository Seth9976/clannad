// 函数: sub_4750f0
// 地址: 0x4750f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* var_10 = &data_98bf04

if (data_7031bc s<= 0)
    return 

void* edx_1 = &data_72d6b0
void* eax = &data_12b926c
void* var_c_1 = &data_72d6b0
void* var_14_1 = &data_12b926c
void* ebx_1 = &data_98bf04
void* var_8_1 = &data_12b9280
void* edi_1 = &data_72d6b0
void* ecx_1 = &data_12b9280

do
    int32_t eax_3 = *eax
    
    if (eax_3 s<= data_7030c8 || *(edx_1 + 0x65c) != 0 || *((i << 2) + &data_8c16b0) != 0)
        if (i s>= 0 && i s< data_7031bc)
            int32_t eax_1 = *(edi_1 + 0xc)
            
            if (eax_1 == 5 || eax_1 == 8)
                data_703008 = 1
            
            int32_t var_24_1
            int32_t eax_2
            
            if (*ecx_1 != 0 || *((i << 2) + &data_8c16b0) == 2)
                sub_4637f0(edi_1, ebx_1)
                eax_2 = sub_463250(ebx_1 + 0x20)
                var_24_1 = 1
            else
                sub_4637f0(edi_1, ebx_1)
                eax_2 = sub_463250(ebx_1 + 0x20)
                var_24_1 = 0
            
            eax_3 = sub_4633c0(eax_2, ebx_1, edi_1, var_24_1)
        
        sub_4d1c30(eax_3, var_c_1 + 0x650, var_c_1, 0x650)
        sub_4d1c30(var_10, var_10 + 0x7a0, var_10, 0x7a0)
        
        if (i s>= 0 && i s< data_7031bc)
            *((i << 2) + &data_8c16b0) = 0
            int32_t var_24_2
            
            if (*var_8_1 != 0)
                var_24_2 = 1
            else
                var_24_2 = 0
            
            sub_4633c0(var_8_1, ebx_1 + 0x7a0, edi_1 + 0x650, var_24_2)
    
    i += 1
    var_c_1 += 0xca0
    eax = var_14_1 + 0x24
    var_8_1 += 0x24
    edi_1 += 0xca0
    var_10 += 0xf40
    ebx_1 += 0xf40
    ecx_1 = var_8_1
    edx_1 = var_c_1
    var_14_1 = eax
while (i s< data_7031bc)
