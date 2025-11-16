// 函数: sub_6d5310
// 地址: 0x6d5310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ecx = arg6
int32_t ebx

switch (ecx)
    case 0
        ebx = arg5
        
        if (ebx - 1 u> 0xf)
            sub_6d42e0(arg3, "Invalid bit depth for grayscale image")
            noreturn
        
        switch (ebx + &jump_table_6d5608[1]:3)
            case &lookup_table_6d5610[2], &lookup_table_6d5610[4], &lookup_table_6d5610[5], 
                    &lookup_table_6d5610[6], &lookup_table_6d5610[8], &lookup_table_6d5610[9], 
                    &lookup_table_6d5610[0xa], &lookup_table_6d5610[0xb], 
                    &lookup_table_6d5610[0xc], &lookup_table_6d5610[0xd], &lookup_table_6d5610[0xe]
                sub_6d42e0(arg3, "Invalid bit depth for grayscale image")
                noreturn
        
    label_6d5358:
        *(arg3 + 0x153) = 1
    label_6d53ce:
        
        if (arg7 != 0)
            sub_6d4470(arg3, "Invalid compression type specified")
            ecx = arg6
            arg7 = 0
        
        if ((*(arg3 + 0x248) & 4) == 0 || (*(arg3 + 0x74) & 0x1000) != 0 || (ecx != 2 && ecx != 6))
            if (arg8 != 0)
                sub_6d4470(arg3, "Invalid filter type specified")
                arg8 = 0
        else if (arg8 != 0x40 && arg8 != 0)
            sub_6d4470(arg3, "Invalid filter type specified")
            arg8 = 0
        
        int32_t edx = arg9
        
        if (edx != 0 && edx != 1)
            sub_6d4470(arg3, "Invalid interlace type specified")
            edx = 1
        
        *(arg3 + 0x24c) = arg8.b
        *(arg3 + 0x26c) = arg7.b
        *(arg3 + 0x104) = arg4
        int32_t eax_9
        eax_9.b = *(arg3 + 0x153)
        eax_9.w = muls.dp.b(eax_9.b, ebx.b)
        *(arg3 + 0x150) = ebx.b
        *(arg3 + 0x152) = eax_9.b
        *(arg3 + 0x14f) = arg6.b
        *(arg3 + 0x14c) = edx.b
        *(arg3 + 0x100) = arg2
        uint32_t eax_10 = zx.d(eax_9.b)
        uint32_t eax_12
        
        if (eax_9.b u< 8)
            eax_12 = (eax_10 * arg2 + 7) u>> 3
        else
            eax_12 = (eax_10 u>> 3) * arg2
        
        *(arg3 + 0x110) = eax_12
        *(arg3 + 0x10c) = arg2
        uint8_t var_18 = (arg2 u>> 0x18).b
        uint8_t var_17 = (arg2 u>> 0x10).b
        uint8_t var_16 = (arg2 u>> 8).b
        char var_15 = arg2.b
        uint8_t var_14 = (arg4 u>> 0x18).b
        uint8_t var_13 = (arg4 u>> 0x10).b
        uint8_t var_12 = (arg4 u>> 8).b
        *(arg3 + 0x154) = *(arg3 + 0x153)
        char var_11 = arg4.b
        char var_f = arg6.b
        char var_e = arg7.b
        char var_c = edx.b
        *(arg3 + 0x151) = ebx.b
        char var_10 = ebx.b
        char var_d = arg8.b
        sub_6d4aa0(arg8, 0x49484452, arg3, 0xd)
        int32_t eax_31 = *(arg3 + 0x58)
        
        if (eax_31 == 0)
            sub_6d42e0(arg3, "Call to NULL write function")
            noreturn
        
        sub_6caa70(eax_31(arg3, &var_18, 0xd), &var_18, arg3, 0xd)
        int32_t result = sub_6d4bb0(arg3)
        
        if (*(arg3 + 0x14e) == 0)
            if (*(arg3 + 0x14f) == 3 || *(arg3 + 0x150) u< 8)
                *(arg3 + 0x14e) = 8
            else
                *(arg3 + 0x14e) = 0xf8
        
        *(arg3 + 0x74) = 1
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
    case 2
        ebx = arg5
        
        if (ebx != 8 && ebx != 0x10)
            sub_6d42e0(arg3, "Invalid bit depth for RGB image")
            noreturn
        
        *(arg3 + 0x153) = 3
        goto label_6d53ce
    case 3
        ebx = arg5
        
        if (ebx - 1 u> 7)
            sub_6d42e0(arg3, "Invalid bit depth for paletted image")
            noreturn
        
        switch (ebx + &jump_table_6d5620[1]:3)
            case &lookup_table_6d5628[2], &lookup_table_6d5628[4], &lookup_table_6d5628[5], 
                    &lookup_table_6d5628[6]
                sub_6d42e0(arg3, "Invalid bit depth for paletted image")
                noreturn
        
        goto label_6d5358
    case 4
        ebx = arg5
        
        if (ebx != 8 && ebx != 0x10)
            sub_6d42e0(arg3, "Invalid bit depth for grayscale+alpha image")
            noreturn
        
        *(arg3 + 0x153) = 2
        goto label_6d53ce
    case 6
        ebx = arg5
        
        if (ebx != 8 && ebx != 0x10)
            sub_6d42e0(arg3, "Invalid bit depth for RGBA image")
            noreturn
        
        *(arg3 + 0x153) = 4
        goto label_6d53ce

sub_6d42e0(arg3, "Invalid image color type specified")
noreturn
