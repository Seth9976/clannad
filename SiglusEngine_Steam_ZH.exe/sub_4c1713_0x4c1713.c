// 函数: sub_4c1713
// 地址: 0x4c1713
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx_1 = arg1 - arg2
arg1 = 0
void* ecx = &data_b598e0
int32_t edi
int32_t var_10 = edi

do
    int32_t* eax_1 = arg2
    int32_t edi_1 = 1
    int32_t j_1 = 4
    int32_t j
    
    do
        if (*(edx_1 + eax_1) != *ecx && *eax_1 != 0xffffffff)
            edi_1 = 0
        
        ecx += 4
        eax_1 = &eax_1[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    
    if (edi_1 != 0)
        return 1
    
    arg1 += 0x10
while (arg1 u< 0x80)

return 0
