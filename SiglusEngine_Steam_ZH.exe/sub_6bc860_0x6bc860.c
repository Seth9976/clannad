// 函数: sub_6bc860
// 地址: 0x6bc860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0 || arg3 == 0)
    return 

void* var_8_1 = &data_b5b408
int32_t* edi_1 = arg3
int32_t* esi_1 = arg2
int32_t i = arg4

do
    int32_t j = 0x10
    int32_t edx = 0
    
    do
        int32_t eax
        eax.b = *(var_8_1 + edx)
        
        if (arg5 != 0)
            if (eax s< 0x80)
                *edi_1 = *esi_1
        else if (eax s>= 0x80)
            *edi_1 = *esi_1
        
        esi_1 = &esi_1[1]
        edi_1 = &edi_1[1]
        edx += 1
        
        if (edx s>= 5)
            edx = 0
        
        j -= 1
    while (j != 0)
    
    arg1 = var_8_1 + 5
    
    if (arg1 s>= 0xb5b421)
        arg1 = &data_b5b408
    
    var_8_1 = arg1
    i -= 1
while (i != 0)
