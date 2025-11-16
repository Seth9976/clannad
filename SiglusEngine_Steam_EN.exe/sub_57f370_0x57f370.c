// 函数: sub_57f370
// 地址: 0x57f370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = arg2
int32_t var_c = arg1

if (arg1 u> 0x3f)
    return 

void* ebx_1 = arg1 * 0x3920
char* esi_1 = ebx_1 + 0xf8d0dc
void* eax_2 = arg1 * 0x2d0 + &data_8fcb48
int32_t* edi_1 = ebx_1 + 0xf8c79c
int32_t i = 0
void* eax_3 = eax_2 - esi_1
void* var_8_1 = eax_3

do
    if (arg2 != 0 || (*(eax_3 + esi_1 + 0x38) != arg2 && edi_1[0x49] != 1))
        if (*esi_1 != 0)
            eax_3 = sub_57ef70(eax_3, i, arg1, esi_1, *(esi_1 + 0x24), 1, 0)
    else if (*esi_1 != 0)
        eax_3 = sub_57ef70(eax_3, i, arg1, esi_1, *(esi_1 + 0x24), 1, 0)
    else
        eax_3 = sub_57ee30(eax_3 + esi_1, edi_1)
    
    sub_4d1ba0(eax_3, 0x24, esi_1, 0)
    eax_3 = var_8_1
    i += 1
    arg1 = var_c
    arg2 = var_10
    *(esi_1 + 0x24) = 0xffffffff
    esi_1 = &esi_1[0x40]
    edi_1[0x49] = 0
    edi_1 = &edi_1[0x4a]
while (i s< 8)

sub_460f90(ebx_1 + &data_f8d35c, eax_2)
