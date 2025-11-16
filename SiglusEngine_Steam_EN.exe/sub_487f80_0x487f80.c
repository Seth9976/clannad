// 函数: sub_487f80
// 地址: 0x487f80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_80c[0x804]
_memset(&var_80c, 0, 0x800)
void* esi = &data_1090b58
int32_t edi = 0

for (void* i = &data_8fcd8c; i s< 0x90818c; )
    int32_t ecx_1
    
    if (edi u> 0x3f)
        ecx_1 = 0
    label_487fde:
        int32_t eax_2 = *(esi + 0x14)
        
        if (eax_2 s>= 0 && eax_2 s< 0x40)
            *(&var_80c + ((ecx_1 + (eax_2 << 3)) << 2)) = 1
        
        int32_t eax_4 = *esi
        
        if (eax_4 s>= 0 && eax_4 s< 0x40)
            *(&var_80c + ((ecx_1 + (eax_4 << 3)) << 2)) = 1
    else
        ecx_1 = data_1313290
        
        if (*(i + 4) != 0)
            ecx_1 = *i
        
        if (ecx_1 s< 0 || ecx_1 s>= 8)
            ecx_1 = 0
        
        if (ecx_1 u<= 7)
            goto label_487fde
    i += 0x2d0
    esi += 0x1d4
    edi += 1

int32_t i_1 = 0
char (* edi_1)[0x804] = &var_80c
int32_t i_2 = 0

do
    for (int32_t j = 0; j s< 8; )
        if (*edi_1 == 1)
            sub_4b6a40(i_1, j)
            i_1 = i_2
        
        j += 1
        edi_1 = &(*edi_1)[4]
    
    i_1 += 1
    i_2 = i_1
while (i_1 s< 0x40)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return i_1
