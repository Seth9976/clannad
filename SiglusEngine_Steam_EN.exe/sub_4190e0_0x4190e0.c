// 函数: sub_4190e0
// 地址: 0x4190e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_1321ebc == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

char var_210[0x208]
sub_4cfd70(&var_210, arg1)
char (* ecx_3)[0x208] = &var_210

while (true)
    char eax_3 = *ecx_3
    
    if (eax_3 u>= 0x80 && (eax_3 u< 0xa0 || eax_3 u> 0xdf) && eax_3 u< 0xfe)
        ecx_3 = &(*ecx_3)[2]
        continue
    
    if (eax_3 == 0)
        break
    
    if (eax_3 u>= 0x61 && eax_3 u<= 0x7a)
        *ecx_3 = eax_3 - 0x20
    
    ecx_3 = &(*ecx_3)[1]

int32_t ebx = data_1321eb8
int32_t esi = 0
char* result = data_1321ec0

if (ebx s> 0)
    do
        if (sub_4d0f10(result, &var_210) == 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
        
        esi += 1
        result = &result[0x3c]
    while (esi s< ebx)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
