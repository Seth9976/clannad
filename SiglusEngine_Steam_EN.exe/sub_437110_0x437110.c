// 函数: sub_437110
// 地址: 0x437110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg3

if (esi s> arg2)
    int32_t eax_2 = esi
    esi = arg2
    arg2 = eax_2

void text
int32_t result

if (esi == 0x3e7)
    result = 0
    
    if (arg4 != 2)
        result = 1
    else
        data_12b9260 = *arg5
        data_12b9264 = arg5[1]
        data_12b925c = 1
    
label_4371d3:
    
    if (result == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
    
label_4371de:
    
    if (data_702fc0 == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result
    
    if (esi != arg2)
        int32_t var_420_2 = arg2
        int32_t var_424_1 = esi
        sub_4c84d0(&text, "SERIALPDT.%03d:%03d\n")
    else
        int32_t var_420_1 = esi
        sub_4c84d0(&text, "SERIALPDT.%03d\n")
    
    if (arg6 != 0)
        MessageBoxA(arg6, &text, "Gameexe.ini ", MB_OK)
    
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return result

if (esi s< 0 || arg2 s>= 8)
    if (data_702fc0 != 0)
        if (esi != arg2)
            int32_t var_420_4 = arg2
            int32_t var_424_2 = esi
            sub_4c84d0(&text, "SERIALPDT.%03d:%03d\n")
        else
            int32_t var_420_3 = esi
            sub_4c84d0(&text, "SERIALPDT.%03d\n")
        
        if (arg6 != 0)
            MessageBoxA(arg6, &text, "Gameexe.ini ", MB_OK)
    
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1

int32_t i_1 = 0

if (arg2 - esi + 1 s<= 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void* ecx_1 = &(&data_12b9204)[esi * 3]
int32_t i

do
    result = 0
    
    if (arg4 != 2)
        result = 1
        goto label_4371de
    
    *(ecx_1 - 4) = *arg5
    *ecx_1 = arg5[1]
    i = i_1 + 1
    *(ecx_1 - 8) = 1
    ecx_1 += 0xc
    i_1 = i
while (i s< arg2 - esi + 1)
goto label_4371d3
