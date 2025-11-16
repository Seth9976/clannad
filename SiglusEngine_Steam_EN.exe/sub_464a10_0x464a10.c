// 函数: sub_464a10
// 地址: 0x464a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg2

if (arg3 s>= 0 && arg3 s< data_7031bc)
    int32_t eax_3 = eax_2 + (arg3 << 1)
    int32_t var_634
    uint32_t var_630
    char var_218[0x20c]
    void* eax_5 = sub_464730(&var_630, &var_634, arg7, &var_630, &var_218, arg5)
    
    if (eax_5 == 0)
        if (arg9 != 0)
            int32_t* eax_25 = sub_463320(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_25
        
        eax_2 = sub_463970(eax_5, eax_2, arg3, 0)
    else
        int32_t var_63c
        char var_628
        void var_420
        int32_t eax_7 = sub_464940(&var_63c, arg8, &var_218, &var_63c, &var_628, &var_420, &var_218)
        int32_t ebx_1
        
        if (eax_7 != 0xffffffff && var_628 == 0x3f)
            if (arg9 == 0)
                sub_463970(eax_7, eax_2, arg3, 0)
            else
                sub_463320(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
            
            uint32_t eax_8 = arg4
            *(eax_3 * 0x650 + 0x72d6b8) = eax_8
            int32_t var_668_3 = var_634
            
            if (eax_8 == 0)
                eax_8 = 1
            
            *(eax_3 * 0x650 + &data_72d6bc) = eax_8
            *(eax_3 * 0x650 + 0x72d72c) = arg6
            int32_t eax_11 = *(eax_3 * 0x7a0 + 0x98c284) + 1
            *(eax_3 * 0x7a0 + &data_98c1f8) = eax_11
            sub_4648c0(eax_11, eax_3 * 0x7a0 + &data_98bf04, eax_3 * 0x650 + &data_72d6b0, 
                var_668_3, arg7)
            ebx_1 = eax_7
            goto label_464c68
        
        void var_654
        int32_t var_644
        uint32_t* eax_13 =
            sub_464530(&var_630, &var_218, arg4, arg6, &var_630, &var_644, 0, var_630, &var_654)
        
        if (arg9 == 0)
            sub_463970(eax_13, eax_2, arg3, 0)
        else
            sub_463320(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
        
        eax_2 = var_644
        ebx_1 = eax_7
        
        if (eax_2 != 0xffffffff)
            char* ecx_8 = &var_628
            
            if (ebx_1 == 0xffffffff)
                ecx_8 = &var_218
            
            int32_t eax_17
            
            if (eax_2 != 0xfffffffe)
                if (eax_2 != 0xfffffffd)
                    eax_17 = sub_464800(arg4, eax_3 * 0x7a0 + &data_98bf04, 
                        eax_3 * 0x650 + &data_72d6b0, arg4, ecx_8, arg6, var_630, eax_2)
                else
                    eax_17 = sub_464850(arg4, eax_3 * 0x7a0 + &data_98bf04, 
                        eax_3 * 0x650 + &data_72d6b0, arg4, ecx_8, arg6, var_630, &var_654)
                
                goto label_464c51
            
            *(eax_3 * 0x650 + 0x72d6b8) = arg4
            *(eax_3 * 0x650 + &data_72d6bc) = var_630
        label_464c3a:
            eax_17 = *(eax_3 * 0x7a0 + 0x98c284) + 1
            *(eax_3 * 0x7a0 + &data_98c1f8) = eax_17
        label_464c51:
            sub_4648c0(eax_17, eax_3 * 0x7a0 + &data_98bf04, eax_3 * 0x650 + &data_72d6b0, var_634, 
                arg7)
        label_464c68:
            int32_t eax_23 = sub_464900(&var_420, eax_3 * 0x7a0 + &data_98bf04, 
                eax_3 * 0x650 + &data_72d6b0, ebx_1, &var_420, var_63c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_23
        
        if (ebx_1 != 0xffffffff)
            uint32_t eax_19 = arg4
            *(eax_3 * 0x650 + 0x72d6b8) = eax_19
            
            if (eax_19 == 0)
                eax_19 = 1
            
            *(eax_3 * 0x650 + &data_72d6bc) = eax_19
            *(eax_3 * 0x650 + 0x72d72c) = arg6
            goto label_464c3a
        
        int32_t esi_3 = var_634
        
        if (esi_3 != 0xffffffff && esi_3 u<= 0x1ff)
            *(esi_3 * 0x6c + &data_1382f88) -= 1
            
            if (*(esi_3 * 0x6c + &data_1382f88) s<= 0)
                sub_428300(esi_3 * 0x6c + 0x1382f8c)
                int32_t eax_24 = sub_428710(esi_3)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_24

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
