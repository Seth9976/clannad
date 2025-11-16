// 函数: sub_4a8780
// 地址: 0x4a8780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_1bfe294
char* ebx = arg1

if (eax_2 == 0 || ebx == 0 || *ebx == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

if (arg2 != 0)
    void var_210
    sub_4cfd70(&var_210, ebx)
    void* ecx_3 = &var_210
    
    while (true)
        char eax_4 = *ecx_3
        
        if (eax_4 u>= 0x80 && (eax_4 u< 0xa0 || eax_4 u> 0xdf) && eax_4 u< 0xfe)
            ecx_3 += 2
            continue
        
        if (eax_4 == 0)
            break
        
        if (eax_4 u>= 0x61 && eax_4 u<= 0x7a)
            *ecx_3 = eax_4 - 0x20
        
        ecx_3 += 1
    
    eax_2 = data_1bfe294
    ebx = &var_210

int32_t i = 0
char* edi = data_1bfe29c

if (eax_2 s> 0)
    do
        if (sub_4d0f10(edi, ebx) == 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return &edi[0x40]
        
        i += 1
        edi -= 0xffffff80
    while (i s< data_1bfe294)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
