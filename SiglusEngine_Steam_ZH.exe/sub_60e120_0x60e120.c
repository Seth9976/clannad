// 函数: sub_60e120
// 地址: 0x60e120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_60e050()
int16_t var_20
int16_t* lpText = sub_532b80(sub_683ad0(0), arg1, &var_20, 0xaf3930)
PWSTR lpCaption = data_bac510 + 0x1c

if (*(lpCaption + 0x14) u>= 8)
    lpCaption = *lpCaption

if (*(lpText + 0x14) u>= 8)
    lpText = *lpText

enum MESSAGEBOX_RESULT result = MessageBoxW(data_4ebe3ac, lpText, lpCaption, 0x34)
int32_t var_c

if (var_c u>= 8)
    j__free(var_20.d)

int32_t var_c_1 = 7
int32_t var_10 = 0
var_20 = 0
sub_683ad0(1)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
