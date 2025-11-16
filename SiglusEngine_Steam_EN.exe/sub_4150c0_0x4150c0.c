// 函数: sub_4150c0
// 地址: 0x4150c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4d1c30(sub_415010(arg1), arg2, arg1, 0x3b88)
int32_t eax_1 = arg1[0xd]

if (eax_1 u<= 0x1ff)
    *(eax_1 * 0x74 + &data_13747ac) += 1

int32_t eax_4 = arg1[0xe]

if (eax_4 u<= 0x1ff)
    *(eax_4 * 0x74 + &data_13747ac) += 1

void* edi = &arg1[0x15]
void* ebx_2 = arg2 + 0x58
void* ecx_2 = arg1 - arg2
int32_t result = 0x10
void* var_8 = ecx_2
int32_t result_1 = 0x10
int32_t i

do
    if (*(ebx_2 - 4) != 0)
        void* edx_1 = ecx_2 + ebx_2
        *edi = 0
        *edx_1 = 0
        char* ecx_3 = *ebx_2
        char* var_10_1 = ecx_3
        
        if (ecx_3 != 0)
            int32_t esi_1 = 0
            char* eax_9 = ecx_3
            
            if (*ecx_3 != 0)
                do
                    ecx_3.b = *eax_9
                    
                    if (ecx_3.b u< 0x80)
                        esi_1 += 1
                        eax_9 = &eax_9[1]
                    else if (ecx_3.b u< 0xa0)
                        if (ecx_3.b u>= 0xfe)
                            esi_1 += 1
                            eax_9 = &eax_9[1]
                        else
                            esi_1 += 2
                            eax_9 = &eax_9[2]
                    else if (ecx_3.b u<= 0xdf || ecx_3.b u>= 0xfe)
                        esi_1 += 1
                        eax_9 = &eax_9[1]
                    else
                        esi_1 += 2
                        eax_9 = &eax_9[2]
                while (*eax_9 != 0)
            
            sub_4d1c30(sub_4d6960(eax_9, edx_1, edi, esi_1 + 1, "BTNSEL_STR"), var_10_1, 
                *(var_8 + ebx_2), esi_1 + 1)
            result = result_1
        
        ecx_2 = var_8
    
    if (*(ebx_2 + 4) != 0)
        *(edi + 8) = 0
        *(edi + 0xc) = 0
    
    if (*(ebx_2 + 0xc) != 0)
        *(edi + 0x10) = 0
        *(edi + 0x14) = 0
    
    edi += 0x3b4
    ebx_2 += 0x3b4
    i = result
    result -= 1
    result_1 = result
while (i != 1)
return result
