// 函数: sub_49f280
// 地址: 0x49f280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0xffffffff

char* var_8 = nullptr
int32_t var_c = 0
uint32_t eax_1 = sub_4cfc80(arg1)
sub_4d6960(eax_1, &var_8, &var_c, eax_1, "CDBGMNTMP")
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

if (data_12c3ca0 s> 0)
    char* edi_1 = &data_12c10d0
    
    do
        if (sub_4d0f10(eax_2, edi_1) == 0)
            break
        
        eax_2 = var_8
        i += 1
        edi_1 = &edi_1[0x58]
    while (i s< data_12c3ca0)

sub_4d6c40(&var_c, &var_8)

if (i == data_12c3ca0)
    return 0xffffffff

return i
