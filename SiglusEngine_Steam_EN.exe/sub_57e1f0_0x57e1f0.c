// 函数: sub_57e1f0
// 地址: 0x57e1f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t j

for (int32_t i = 0; i s< 0x40; i += 1)
    j = 0
    void* ecx_1 = &data_8fcd4c
    
    do
        if (*ecx_1 == i)
            *((i << 2) + &data_13931a0) = j
            break
        
        j += 1
        ecx_1 += 0x2d0
    while (j s< 0x40)

if (data_702fc0 != 0)
    char var_48[0x40]
    sub_4d1ba0(j, 0x40, &var_48, 0)
    void* i_1 = &data_13931a0
    enum MESSAGEBOX_STYLE uType = data_1c05500
    
    do
        if (var_48[*i_1] != 0 && uType == MB_OK)
            MessageBoxA(data_7027bc, 0x624598, "DEBUG", uType)
            uType = MB_OKCANCEL
            data_1c05500 = 1
        
        j = *i_1
        i_1 += 4
        var_48[j] = 1
    while (i_1 s< &data_13932a0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return j
