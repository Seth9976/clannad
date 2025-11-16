// 函数: sub_49f1a0
// 地址: 0x49f1a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0xffffffff

char* var_8 = nullptr
int32_t var_c = 0
uint32_t eax_1 = sub_4cfc80(arg1)
sub_4d6960(eax_1, &var_8, &var_c, eax_1, "DSBGMNTMP")
char* eax_2 = var_8
sub_4d1c30(eax_2, arg1, eax_2, eax_1)
char* ecx_2 = eax_2

if (eax_2 != 0)
    while (true)
        eax_2.b = *ecx_2
        
        if (eax_2.b u>= 0x80 && (eax_2.b u< 0xa0 || eax_2.b u> 0xdf) && eax_2.b u< 0xfe)
            ecx_2 = &ecx_2[2]
            continue
        
        if (eax_2.b == 0)
            break
        
        if (eax_2.b u>= 0x61 && eax_2.b u<= 0x7a)
            eax_2.b -= 0x20
            *ecx_2 = eax_2.b
        
        ecx_2 = &ecx_2[1]
    
    eax_2 = var_8

int32_t i = 0

if (data_12c109c s> 0)
    int32_t* edi_1 = &data_12be2f0
    
    do
        int32_t eax_3 = sub_4d0f10(eax_2, &edi_1[-9])
        
        if (eax_3 == 0)
            if (arg2 != eax_3)
                break
            
            if (*edi_1 == eax_3)
                break
        
        eax_2 = var_8
        i += 1
        edi_1 = &edi_1[0x17]
    while (i s< data_12c109c)

sub_4d6c40(&var_c, &var_8)

if (i == data_12c109c)
    return 0xffffffff

return i
