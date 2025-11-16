// 函数: sub_57ee90
// 地址: 0x57ee90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || arg2 u> 7)
    return 

int32_t esi_2 = arg2 << 6
void* edi_1 = arg2 * 0x128
void* eax_3 = arg1 * 0x2d0 + &data_8fcb48 + esi_2
void* eax_6 = arg2 * 0x14 + &data_1090c18 + arg1 * 0x1d4
*(edi_1 + arg1 * 0x3920 + &data_f89afc + 0x2ca0) = 0xffffffff
sub_4d1ba0(eax_6, 0x24, eax_3, 0)
*(eax_3 + 0x24) = 0xffffffff
int32_t var_1c_1 = 0
int32_t var_20_1 = 0
sub_41cc90(
    sub_57ee00(edi_1 + 0x2ca0 + arg1 * 0x3920 + &data_f89afc, 
        esi_2 + 0x35e0 + arg1 * 0x3920 + &data_f89afc), 
    0x24, edi_1 + 0x2ca4 + arg1 * 0x3920 + &data_f89afc)
*(eax_3 + 0x28) = 0
*(eax_3 + 0x2c) = *eax_6
*(eax_3 + 0x30) = *(eax_6 + 4)
*(eax_3 + 0x34) = *(eax_6 + 8)
*(eax_3 + 0x38) = *(eax_6 + 0xc)
*(eax_3 + 0x3c) = *(eax_6 + 0x10)
