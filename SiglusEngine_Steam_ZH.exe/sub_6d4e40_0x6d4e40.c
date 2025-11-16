// 函数: sub_6d4e40
// 地址: 0x6d4e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (*(arg3 + 0x80) != 0)
    char var_45_1 = arg2.b
    int32_t i = 0xa
    uint8_t var_48 = (arg2 u>> 0x18).b
    uint8_t var_47_1 = (arg2 u>> 0x10).b
    uint8_t var_46_1 = (arg2 u>> 8).b
    char var_42_1 = *(arg3 + 0x83)
    char var_41_1 = *(arg3 + 0x82)
    char var_40_1 = *(arg3 + 0x81)
    int16_t var_44_1 = 0x203a
    char var_3f_1 = *(arg3 + 0x80)
    
    while (i u< 0x3f)
        (&var_48)[i] = (*"ning: %s")[i]
        i += 1
        
        if ((*"ning: %s")[i] == 0)
            break
    
    (&var_48)[i] = 0
    sub_6d4470(arg3, &var_48)
    
    if (*(arg3 + 0x80) == 0x49444154)
        *(arg3 + 0x9c) = "in use by IDAT"
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 0xfffffffe
    
    *(arg3 + 0x80) = 0

int32_t var_50 = *(arg3 + 0xc4)
int32_t var_4c = *(arg3 + 0xc8)
int32_t var_58 = *(arg3 + 0xd0)
int32_t edi = *(arg3 + 0xcc)
int32_t edx_1

if (arg2 != 0x49444154)
    edi = *(arg3 + 0xe0)
    edx_1 = *(arg3 + 0xe8)
    var_50 = *(arg3 + 0xd8)
    var_4c = *(arg3 + 0xdc)
    var_58 = *(arg3 + 0xe4)
else if ((*(arg3 + 0x78) & 1) == 0)
    edx_1.b = *(arg3 + 0x14e) != 8
else
    edx_1 = *(arg3 + 0xd4)

if (arg4 u<= 0x4000)
    int32_t i_1 = 1 << (edi.b - 1)
    
    while (arg4 + 0x106 u<= i_1)
        i_1 u>>= 1
        edi -= 1

int32_t eax_19 = var_50
int32_t ecx_5

if ((*(arg3 + 0x78) & 2) == 0)
    ecx_5 = var_4c
else
    if (*(arg3 + 0xec) == eax_19)
        ecx_5 = var_4c
    
    if (*(arg3 + 0xec) != eax_19 || *(arg3 + 0xf0) != ecx_5 || *(arg3 + 0xf4) != edi
            || *(arg3 + 0xf8) != var_58 || *(arg3 + 0xfc) != edx_1)
        if (sub_7233d0(arg3 + 0x84) != 0)
            sub_6d4470(arg3, "deflateEnd failed (ignored)")
        
        *(arg3 + 0x78) &= 0xfffffffd
        eax_19 = var_50
        ecx_5 = var_4c

bool cond:1 = (*(arg3 + 0x78) & 2) == 0
*(arg3 + 0x84) = 0
*(arg3 + 0x88) = 0
*(arg3 + 0x90) = 0
*(arg3 + 0x94) = 0
int32_t result

if (cond:1)
    result = sub_722850(eax_19, eax_19, arg3 + 0x84, ecx_5, edi, var_58, edx_1)
    
    if (result == 0)
        *(arg3 + 0x78) |= 2
    label_6d5099:
        *(arg3 + 0x80) = arg2
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
else
    result = sub_722a50(arg3 + 0x84)
    
    if (result == 0)
        sub_723530(*(arg3 + 0xa0))
        
        if (result == 0)
            goto label_6d5099

sub_6cb6b0(arg3, result)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
