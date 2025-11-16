// 函数: sub_418050
// 地址: 0x418050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_1320e8c == 0 || data_1320e90 s<= 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0xffffffff

char var_210[0x208]
char* edx
sub_4cfd70(&var_210, edx)
char (* ecx_1)[0x208] = &var_210

while (true)
    char eax_2 = *ecx_1
    
    if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
        ecx_1 = &(*ecx_1)[2]
        continue
    
    if (eax_2 == 0)
        break
    
    if (eax_2 u>= 0x61 && eax_2 u<= 0x7a)
        *ecx_1 = eax_2 - 0x20
    
    ecx_1 = &(*ecx_1)[1]

uint32_t result_4 = data_1320e90
int32_t edi
int32_t var_21c = edi
uint32_t result_2 = result_4
uint32_t result_3 = 0
uint32_t result_1 = result_4 u>> 1
uint32_t result

while (true)
    int32_t eax_4 = sub_4d0f10(&var_210, data_1320e8c + 3 + result_1 * 0xa8)
    result = result_1
    uint32_t esi_1
    
    if (eax_4 s>= 0)
        if (eax_4 s<= 0)
            break
        
        result_3 = result_1
        esi_1 = result_1 + result_2
    else
        result_2 = result_1
        esi_1 = result_1 + result_3
    
    result_1 = esi_1 u>> 1
    
    if (result_1 != result && result_1 u< data_1320e90)
        continue
    
    result = 0xffffffff
    break

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
