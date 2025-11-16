// 函数: sub_482cf0
// 地址: 0x482cf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_210
sub_4cfd70(&var_210, arg1)
char* esi = &var_210
int32_t eax_2 = sub_4d1610(&var_210, 0x5c)
void var_20f

if (eax_2 != 0xffffffff)
    esi = &var_20f + eax_2
int32_t eax_3 = sub_4d1610(esi, 0x2e)

if (eax_3 == 0xffffffff)
    eax_3 = sub_4cfc80(esi)
    esi -= 1

char* ecx_4 = &var_210
esi[eax_3] = 0

while (true)
    eax_3.b = *ecx_4
    
    if (eax_3.b u>= 0x80 && (eax_3.b u< 0xa0 || eax_3.b u> 0xdf) && eax_3.b u< 0xfe)
        ecx_4 = &ecx_4[2]
        continue
    
    if (eax_3.b == 0)
        break
    
    if (eax_3.b u>= 0x61 && eax_3.b u<= 0x7a)
        eax_3.b -= 0x20
        *ecx_4 = eax_3.b
    
    ecx_4 = &ecx_4[1]

void* esi_2 = &data_928db0
int32_t result = 0xef2ef8

for (int32_t i = 0; i s< 0x100; )
    if (*esi_2 != 0 && sub_4d0f10(&var_210, esi_2) == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
    
    i += 1
    esi_2 += 0x24
    result += 0x3b8

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
