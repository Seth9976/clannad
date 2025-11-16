// 函数: sub_4c92c0
// 地址: 0x4c92c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0 || *arg3 == 0)
    int32_t* eax_4
    eax_4.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_4

char var_210[0x208]
sub_4cfd70(&var_210, arg3)
char (* ecx_1)[0x208] = &var_210

while (true)
    char eax_5 = *ecx_1
    
    if (eax_5 u>= 0x80 && (eax_5 u< 0xa0 || eax_5 u> 0xdf) && eax_5 u< 0xfe)
        ecx_1 = &(*ecx_1)[2]
        continue
    
    if (eax_5 == 0)
        break
    
    if (eax_5 u>= 0x61 && eax_5 u<= 0x7a)
        *ecx_1 = eax_5 - 0x20
    
    ecx_1 = &(*ecx_1)[1]

int32_t esi = data_20af414
void* eax_6

if (esi != 0 && data_20af204 == arg2)
    eax_6 = sub_4d0f10(&data_20af208, &var_210)

int32_t ebx

if (esi == 0 || data_20af204 != arg2 || eax_6 != 0)
    sub_4c91b0()
    ebx.b = sub_4c91f0(&var_210, arg2)
    data_1cd536a = ebx.b
    sub_4cfd70(&data_20af208, &var_210)
    esi = data_20af414
    data_20af204 = arg2
else
    ebx.b = data_1cd536a

if (ebx.b == 0)
    eax_6.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_6

*arg4 = esi
*arg5 = data_20af418
*arg6 = data_20af41c
int32_t eax_10
eax_10.b = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_10
