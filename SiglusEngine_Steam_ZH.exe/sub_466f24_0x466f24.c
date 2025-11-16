// 函数: sub_466f24
// 地址: 0x466f24
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* __saved_ebx_5 = arg1
int32_t edi
int32_t var_c = edi
int32_t ecx

if ((__saved_ebx_5[0x5c] & 0x40) == 0)
    ecx = sub_499eeb(__saved_ebx_5)

if (__saved_ebx_5[0x113] != 0 && (__saved_ebx_5[0x60] & 2) != 0)
    uint32_t eax_1 = zx.d(__saved_ebx_5[0x114])
    char* __saved_ebx_2
    uint32_t __saved_ebx_3
    bool cond:2_1
    
    if (eax_1 == 0)
        if ((__saved_ebx_5[0xd4] & 7) != 0)
            cond:2_1 = arg3 == 0
        label_467036:
            
            if (cond:2_1)
                __saved_ebx_2 = __saved_ebx_5
                return sub_49a843(ecx)
            
            __saved_ebx_3 = 0xff
        label_467045:
            __saved_ebx_2 = __saved_ebx_5
            return sub_49a843(sub_499883(__saved_ebx_5, arg3, __saved_ebx_3))
    else if (eax_1 == 1)
        if ((__saved_ebx_5[0xd4] & 7) != 0 || *(__saved_ebx_5 + 0xb8) u< 5)
            if (arg3 == 0)
                __saved_ebx_2 = __saved_ebx_5
                return sub_49a843(ecx)
            
            __saved_ebx_3 = 0xf
            goto label_467045
    else if (eax_1 == 2)
        int32_t eax_10 = *(__saved_ebx_5 + 0xd4)
        ecx.b = eax_10.b & 7
        
        if (ecx.b != 4)
            if (arg3 == 0)
                __saved_ebx_2 = __saved_ebx_5
                return sub_49a843(ecx)
            
            cond:2_1 = (eax_10.b & 4) == 0
            goto label_467036
    else if (eax_1 == 3)
        if ((__saved_ebx_5[0xd4] & 3) != 0 || *(__saved_ebx_5 + 0xb8) u< 3)
            if (arg3 == 0)
                __saved_ebx_2 = __saved_ebx_5
                return sub_49a843(ecx)
            
            __saved_ebx_3 = 0x33
            goto label_467045
    else if (eax_1 == 4)
        int32_t eax_9 = *(__saved_ebx_5 + 0xd4)
        ecx.b = eax_9.b & 3
        
        if (ecx.b != 2)
            if (arg3 == 0)
                __saved_ebx_2 = __saved_ebx_5
                return sub_49a843(ecx)
            
            cond:2_1 = (eax_9.b & 2) == 0
            goto label_467036
    else if (eax_1 == 5)
        if ((__saved_ebx_5[0xd4] & 1) != 0 || *(__saved_ebx_5 + 0xb8) u< 2)
            if (arg3 == 0)
                __saved_ebx_2 = __saved_ebx_5
                return sub_49a843(ecx)
            
            __saved_ebx_3 = 0x55
            goto label_467045
    else if (eax_1 == 6 && (__saved_ebx_5[0xd4] & 1) == 0)
        __saved_ebx_2 = __saved_ebx_5
        return sub_49a843(ecx)

if ((__saved_ebx_5[0x58] & 4) == 0)
    sub_46691d(__saved_ebx_5, "Invalid attempt to read row data")
    noreturn

*(__saved_ebx_5 + 0x70) = *(__saved_ebx_5 + 0xdc)
*(__saved_ebx_5 + 0x74) = *(__saved_ebx_5 + 0xcc)

while (true)
    if (*(__saved_ebx_5 + 0x68) == 0)
        while (*(__saved_ebx_5 + 0xfc) == 0)
            sub_49a08a(__saved_ebx_5, 0)
            sub_468e37(__saved_ebx_5, &arg1, 4)
            *(__saved_ebx_5 + 0xfc) = sub_499762(&arg1)
            sub_466a6c(__saved_ebx_5)
            sub_4997a6(__saved_ebx_5, &__saved_ebx_5[0x10c], 4)
            
            if (*(__saved_ebx_5 + 0x10c) != 0x54414449)
                sub_46691d(__saved_ebx_5, "Not enough image data")
                noreturn
        
        int32_t eax_14 = *(__saved_ebx_5 + 0xa0)
        int32_t edx_1 = *(__saved_ebx_5 + 0xfc)
        char* ecx_2 = *(__saved_ebx_5 + 0x9c)
        *(__saved_ebx_5 + 0x68) = eax_14
        *(__saved_ebx_5 + 0x64) = ecx_2
        
        if (eax_14 u> edx_1)
            *(__saved_ebx_5 + 0x68) = edx_1
        
        sub_4997a6(__saved_ebx_5, ecx_2, *(__saved_ebx_5 + 0x68))
        *(__saved_ebx_5 + 0xfc) -= *(__saved_ebx_5 + 0x68)
    
    int32_t* eax_16 = sub_4993ef(&__saved_ebx_5[0x64], 1)
    
    if (eax_16 == 1)
        if (*(__saved_ebx_5 + 0x74) != 0 || *(__saved_ebx_5 + 0x68) != 0
                || *(__saved_ebx_5 + 0xfc) != 0)
            sub_46691d(__saved_ebx_5, "Extra compressed data")
            noreturn
        
        *(__saved_ebx_5 + 0x58) |= 8
        *(__saved_ebx_5 + 0x5c) |= 0x20
    else
        if (eax_16 != 0)
            break
        
        if (*(__saved_ebx_5 + 0x74) != 0)
            continue
    
    eax_16.b = __saved_ebx_5[0x116]
    __saved_ebx_5[0xfa] = __saved_ebx_5[0x11a]
    __saved_ebx_5[0xf9] = __saved_ebx_5[0x117]
    char ecx_3 = __saved_ebx_5[0x119]
    __saved_ebx_5[0xfb] = ecx_3
    __saved_ebx_5[0xf8] = eax_16.b
    int32_t eax_18 = *(__saved_ebx_5 + 0xd0)
    *(__saved_ebx_5 + 0xf0) = eax_18
    char* eax_19 = *(__saved_ebx_5 + 0xdc)
    *(__saved_ebx_5 + 0xf4) = (zx.d(ecx_3) * eax_18 + 7) u>> 3
    sub_499d72(__saved_ebx_5, &__saved_ebx_5[0xf0], &eax_19[1], *(__saved_ebx_5 + 0xd8) + 1, 
        zx.d(*eax_19))
    int32_t var_14_8 = *(__saved_ebx_5 + 0xc8) + 1
    int32_t ecx_11 = sub_4986c8(__saved_ebx_5, *(__saved_ebx_5 + 0xd8), *(__saved_ebx_5 + 0xdc))
    
    if (*(__saved_ebx_5 + 0x60) != 0)
        ecx_11 = sub_468c96(__saved_ebx_5)
    
    int32_t eax_23
    
    if (__saved_ebx_5[0x113] != 0)
        eax_23 = *(__saved_ebx_5 + 0x60)
    
    if (__saved_ebx_5[0x113] == 0 || (eax_23.b & 2) == 0)
        if (arg2 != 0)
            ecx_11 = sub_499883(__saved_ebx_5, arg2, 0xff)
        
        if (arg3 != 0)
            ecx_11 = sub_499883(__saved_ebx_5, arg3, 0xff)
    else
        ecx_11.b = __saved_ebx_5[0x114]
        
        if (ecx_11.b u< 6)
            int32_t var_14_10 = eax_23
            ecx_11 = sub_499a9b(&__saved_ebx_5[0xf0], *(__saved_ebx_5 + 0xdc) + 1, zx.d(ecx_11.b))
        
        if (arg3 != 0)
            ecx_11 =
                sub_499883(__saved_ebx_5, arg3, *((zx.d(__saved_ebx_5[0x114]) << 2) + &data_ac4170))
        
        if (arg2 != 0)
            ecx_11 =
                sub_499883(__saved_ebx_5, arg2, *((zx.d(__saved_ebx_5[0x114]) << 2) + &data_ac4154))
    
    char* __saved_ebx_6 = __saved_ebx_5
    sub_49a843(ecx_11)
    int32_t* result = *(__saved_ebx_5 + 0x16c)
    
    if (result == 0)
        return result
    
    return result(__saved_ebx_5, *(__saved_ebx_5 + 0xd4), zx.d(__saved_ebx_5[0x114]))

char const* const eax_17 = *(__saved_ebx_5 + 0x7c)

if (eax_17 == 0)
    eax_17 = "Decompression error"

sub_46691d(__saved_ebx_5, eax_17)
noreturn
