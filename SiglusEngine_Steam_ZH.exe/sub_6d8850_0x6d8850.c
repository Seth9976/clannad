// 函数: sub_6d8850
// 地址: 0x6d8850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (*(arg1 + 0x80) != 0)
    int32_t i = 4
    char var_48 = *(arg1 + 0x83)
    char var_47_1 = *(arg1 + 0x82)
    char var_46_1 = *(arg1 + 0x81)
    char var_45_1 = *(arg1 + 0x80)
    
    while (i u< 0x3f)
        (&var_48)[i] = (*"%s")[i]
        i += 1
        
        if ((*"%s")[i] == 0)
            break
    
    (&var_48)[i] = 0
    char var_120[0xd8]
    sub_6d4690(&var_48, &var_120, arg1, &var_48)
    sub_6d4470(arg1, &var_120)
    *(arg1 + 0x80) = 0

bool cond:0 = (*(arg1 + 0x78) & 2) == 0
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x94) = 0
void* result

if (cond:0)
    result = sub_724c60(arg1 + 0x84)
    
    if (result == 0)
        *(arg1 + 0x78) |= 2
    label_6d897f:
        *(arg1 + 0x80) = arg2
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
else
    void* eax_7
    
    if (arg1 != 0xffffff7c)
        eax_7 = *(arg1 + 0xa0)
    
    if (arg1 == 0xffffff7c || eax_7 == 0)
        result = 0xfffffffe
    else
        *(eax_7 + 0x28) = 0
        *(eax_7 + 0x2c) = 0
        *(eax_7 + 0x30) = 0
        result = sub_724b20(arg1 + 0x84)
        
        if (result == 0)
            goto label_6d897f

sub_6cb6b0(arg1, result)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
