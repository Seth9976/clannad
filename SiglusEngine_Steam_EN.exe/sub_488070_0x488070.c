// 函数: sub_488070
// 地址: 0x488070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_808[0x800]
_memset(&var_808, 0, 0x800)
void* esi = &data_1090b58
int32_t edi = 0

for (void* i = &data_8fcd8c; i s< 0x90818c; )
    int32_t ecx_1
    
    if (edi u> 0x3f)
        ecx_1 = 0
    label_4880ce:
        int32_t eax_2 = *(esi + 0x14)
        
        if (eax_2 s>= 0 && eax_2 s< 0x40)
            *(&var_808 + ((ecx_1 + (eax_2 << 3)) << 2)) = 1
        
        int32_t eax_4 = *esi
        
        if (eax_4 s>= 0 && eax_4 s< 0x40)
            *(&var_808 + ((ecx_1 + (eax_4 << 3)) << 2)) = 1
    else
        ecx_1 = data_1313290
        
        if (*(i + 4) != 0)
            ecx_1 = *i
        
        if (ecx_1 s< 0 || ecx_1 s>= 8)
            ecx_1 = 0
        
        if (ecx_1 u<= 7)
            goto label_4880ce
    i += 0x2d0
    esi += 0x1d4
    edi += 1

int32_t ecx_2 = 0
char (* result)[0x800] = &var_808
int32_t var_80c = 0

for (void* i_1 = &data_1b1bd94; i_1 s< &data_1b8a594; )
    int32_t j = 0
    char (* result_1)[0x800] = result
    
    do
        if (*result == 0 && *i_1 != 0)
            sub_4b62e0(ecx_2, j)
            result = result_1
            ecx_2 = var_80c
        
        j += 1
        result = &(*result)[4]
        i_1 += 0x374
        result_1 = result
    while (j s< 8)
    
    ecx_2 += 1
    var_80c = ecx_2

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
