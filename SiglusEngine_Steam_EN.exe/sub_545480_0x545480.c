// 函数: sub_545480
// 地址: 0x545480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char const* const edx

if (arg1 u> 4)
    edx = &data_6138e3
else
    switch (arg1)
        case 0
            edx = "High Resolution results makes surroundings turn black.\nLow Resolution results "
            "lets the screen stick out."
        case 1
            edx = "Deviating aspect ratio leads to the area under and above the screen turn black."
        case 2
            edx = "When the aspect ratio is different, the screen will be stretched."
        case 3
            edx = "When the aspect ratio is different, horizontal area will leave the screen.\nOr "
            "turns black."
        case 4
            edx = "Please adjust by custom settings."

void string
sub_4cfd70(&string, edx)
BOOL result = SetDlgItemTextA(data_1c054ec, 0x4f1c, &string)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
