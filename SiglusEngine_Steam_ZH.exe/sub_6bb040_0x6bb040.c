// 函数: sub_6bb040
// 地址: 0x6bb040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = arg1[5]
void* i

if (ecx u< 8)
    i = arg1
else
    i = *arg1

while (true)
    int32_t* ecx_1
    
    if (ecx u< 8)
        ecx_1 = arg1
    else
        ecx_1 = *arg1
    
    int32_t var_c_1 = 7
    void* edi_1 = ecx_1 + (arg1[4] << 1)
    int32_t var_10_1 = 0
    int16_t var_20 = 0
    sub_52e720(&var_20, &data_aee7a0, 3)
    uint32_t var_24
    
    for (; i != edi_1; i += 2)
        var_24 = zx.d(*i)
        
        if (sub_55af30(&var_20, &var_24, nullptr, 1) == 0xffffffff)
            break
    
    if (var_c_1 u>= 8)
        j__free(var_20.d)
    
    int32_t* ecx_4
    
    if (arg1[5] u< 8)
        ecx_4 = arg1
    else
        ecx_4 = *arg1
    
    int32_t eax_6 = arg1[4]
    var_24 = 1
    void* ecx_5 = ecx_4 + (eax_6 << 1)
    void* result = i
    
    if (i != ecx_5)
        uint32_t edx_1 = zx.d(*i)
        
        if (edx_1 == 0x2b)
            var_24 = 1
            result = i + 2
        else if (edx_1 == 0x2d)
            var_24 = 0xffffffff
            result = i + 2
    
    void* i_1 = result
    
    if (result == ecx_5)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
    
    result = zx.d(*result) - 0x30
    
    if (result.w u> 9)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
    
    int32_t edx_2 = 0
    
    do
        uint32_t edi_2 = zx.d(*i_1)
        
        if (edi_2.w - 0x30 u> 9)
            break
        
        i_1 += 2
        edx_2 = edi_2 + ((edx_2 * 5 - 0x18) << 1)
    while (i_1 != ecx_5)
    
    uint32_t edx_6 = edx_2 * var_24
    int32_t eax_10 = arg2[1]
    var_24 = edx_6
    uint32_t var_28 = edx_6
    
    if (&var_28 u>= eax_10 || *arg2 u> &var_28)
        if (eax_10 == arg2[2])
            sub_55d250(arg2, 1)
            edx_6 = var_24
        
        uint32_t* eax_13 = arg2[1]
        
        if (eax_13 != 0)
            *eax_13 = edx_6
    else
        uint32_t ecx_7 = (&var_28 - *arg2) s>> 2
        var_24 = ecx_7
        
        if (eax_10 == arg2[2])
            sub_55d250(arg2, 1)
            ecx_7 = var_24
        
        int32_t* edx_5 = arg2[1]
        
        if (edx_5 != 0)
            *edx_5 = *(*arg2 + (ecx_7 << 2))
    
    arg2[1] += 4
    int32_t* ecx_10
    
    if (arg1[5] u< 8)
        ecx_10 = arg1
    else
        ecx_10 = *arg1
    
    int32_t var_c_2 = 7
    void* edi_4 = ecx_10 + (arg1[4] << 1)
    int32_t var_10_2 = 0
    var_20 = 0
    sub_52e720(&var_20, &data_aee7a0, 3)
    
    for (; i_1 != edi_4; i_1 += 2)
        var_24 = zx.d(*i_1)
        
        if (sub_55af30(&var_20, &var_24, nullptr, 1) == 0xffffffff)
            break
    
    if (var_c_2 u>= 8)
        j__free(var_20.d)
    
    ecx = arg1[5]
    int32_t* edx_7
    
    if (ecx u< 8)
        edx_7 = arg1
    else
        edx_7 = *arg1
    
    result = edx_7 + (arg1[4] << 1)
    
    if (i_1 == result || *i_1 != 0x2c)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
    
    i = i_1 + 2
