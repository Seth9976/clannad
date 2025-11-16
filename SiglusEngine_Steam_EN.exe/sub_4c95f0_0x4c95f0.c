// 函数: sub_4c95f0
// 地址: 0x4c95f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0 || *arg3 == 0)
    int32_t* eax_3
    eax_3.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_3

char var_210[0x208]
sub_4cfd70(&var_210, arg3)
char (* ecx_1)[0x208] = &var_210

while (true)
    char eax_4 = *ecx_1
    
    if (eax_4 u>= 0x80 && (eax_4 u< 0xa0 || eax_4 u> 0xdf) && eax_4 u< 0xfe)
        ecx_1 = &(*ecx_1)[2]
        continue
    
    if (eax_4 == 0)
        break
    
    if (eax_4 u>= 0x61 && eax_4 u<= 0x7a)
        *ecx_1 = eax_4 - 0x20
    
    ecx_1 = &(*ecx_1)[1]

int32_t esi = data_20af630
void* eax_5

if (esi != 0 && data_20af628 == arg2)
    eax_5 = sub_4d0f10(&data_20af420, &var_210)

int32_t ebx

if (esi == 0 || data_20af628 != arg2 || eax_5 != 0)
    sub_4c9500()
    ebx.b = sub_4c9540(&var_210, arg2)
    data_1cd536b = ebx.b
    sub_4cfd70(&data_20af420, &var_210)
    esi = data_20af630
    data_20af628 = arg2
else
    ebx.b = data_1cd536b

if (ebx.b == 0)
    eax_5.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_5

*arg4 = esi
*arg5 = data_20af634
int32_t eax_8
eax_8.b = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_8
