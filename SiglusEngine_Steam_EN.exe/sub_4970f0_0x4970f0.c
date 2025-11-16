// 函数: sub_4970f0
// 地址: 0x4970f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi = arg2
uint8_t* eax_3 = sub_495490(arg1)

if (eax_3 == 0)
    eax_3.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_3

if (esi == 0)
    void var_114
    sub_4d1ba0(eax_3, 0x101, &var_114, esi.b)
    esi = &var_114

int32_t eax_4 = sub_4d0f10(&eax_3[0x21d], esi)

if (eax_4 != 0)
    sub_4cfdf0(sub_4d1ba0(eax_4, 0x101, &eax_3[0x21d], 0), esi, &eax_3[0x21d], 0x101)
    sub_496f80(arg1, eax_3)

eax_4.b = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_4
