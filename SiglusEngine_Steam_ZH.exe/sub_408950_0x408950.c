// 函数: sub_408950
// 地址: 0x408950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_84
sub_4081c5(&var_84, arg1)
void var_44
sub_4081c5(&var_44, arg2)
int32_t var_4c
int32_t eax = var_4c
int32_t var_c

if (eax u<= var_c)
    eax = var_c

int32_t result

if (eax u<= 0)
    result = 2
else
    result = eax * 2 + 4

int32_t var_7c
int32_t var_3c

if (var_7c u> 0 || var_3c u> 0)
    result |= 0x10

int32_t var_74
int32_t var_34

if (var_74 u> 0 || var_34 u> 0)
    result |= 0x40

int32_t var_70
int32_t var_30

if (var_70 u> 0 || var_30 u> 0)
    result |= 0x80

int32_t var_48
int32_t ecx_2 = var_48
int32_t var_8

if (ecx_2 u<= var_8)
    ecx_2 = var_8

if (ecx_2 u<= 0)
    return result

return result | ecx_2 << 8
