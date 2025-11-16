// 函数: sub_543ea0
// 地址: 0x543ea0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char string
GetDlgItemTextA(data_20c1654, 0x4ef6, &string, 0x800)

if (string != 0)
    int32_t* edi_1 = data_20c1664
    uint32_t eax_2 = sub_4cfc80(&string)
    sub_4d1c30(sub_4d6960(eax_2, edi_1, data_20c1660, eax_2, "DEBUG_STR_INPUT"), &string, *edi_1, 
        eax_2)

BOOL result = EndDialog(data_20c1654, 0)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
