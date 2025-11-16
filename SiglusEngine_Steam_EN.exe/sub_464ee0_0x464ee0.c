// 函数: sub_464ee0
// 地址: 0x464ee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* eax_2 = arg4
char* var_830 = eax_2

if (arg3 s>= 0 && arg3 s< data_7031bc)
    int32_t eax_3 = arg2 + (arg3 << 1)
    eax_2 = *(eax_3 * 0x650 + &data_72d6bc)
    
    if (eax_2 == 0 || eax_2 == 1 || eax_2 == 2 || eax_2 == 5 || eax_2 == 6 || eax_2 == 7
            || eax_2 == 8)
        int32_t ebx_1 = *(eax_3 * 0x7a0 + 0x98bf08)
        uint32_t var_834
        void var_41c
        
        if (ebx_1 == 0xffffffff)
            var_834 = 0
        else
            if (ebx_1 u<= 0x1ff)
                *(ebx_1 * 0x6c + &data_1382f88) += 1
            
            sub_4cfd70(&var_41c, eax_3 * 0x650 + 0x72d6e4)
            var_834 = 1
        
        int32_t var_83c
        char var_82c
        char var_624[0x208]
        void var_214
        int32_t eax_7 = sub_464e40(&var_82c, &var_83c, var_830, &var_82c, &var_214, &var_624)
        uint32_t eax_8 = *(eax_3 * 0x650 + 0x72d6b8)
        
        if (eax_7 != 0xffffffff && var_82c == 0x3f)
            sub_4637f0(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
            sub_463320(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
        label_464ff4:
            uint32_t eax_9 = eax_8
            *(eax_3 * 0x650 + 0x72d6b8) = eax_9
            
            if (eax_9 == 0)
                eax_9 = 1
            
            *(eax_3 * 0x650 + &data_72d6bc) = eax_9
            *(eax_3 * 0x650 + 0x72d72c) = arg5
            *(eax_3 * 0x7a0 + &data_98c1f8) = *(eax_3 * 0x7a0 + 0x98c284) + 1
            sub_4648c0(&var_41c, eax_3 * 0x7a0 + &data_98bf04, eax_3 * 0x650 + &data_72d6b0, ebx_1, 
                &var_41c)
            int32_t eax_15 = sub_464900(&var_214, eax_3 * 0x7a0 + &data_98bf04, 
                eax_3 * 0x650 + &data_72d6b0, eax_7, &var_214, var_83c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_15
        
        void var_850
        int32_t var_840
        sub_464530(eax_8, &var_624, eax_8, arg5, &var_834, &var_840, 0, var_834, &var_850)
        sub_4637f0(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
        eax_2 = sub_463320(eax_3 * 0x650 + &data_72d6b0, eax_3 * 0x7a0 + &data_98bf04)
        int32_t ecx_12 = var_840
        
        if (ecx_12 != 0xffffffff)
            char* eax_16 = &var_82c
            
            if (eax_7 == 0xffffffff)
                eax_16 = &var_624
            
            int32_t eax_20
            
            if (ecx_12 == 0xfffffffe)
                *(eax_3 * 0x650 + 0x72d6b8) = eax_8
                *(eax_3 * 0x650 + &data_72d6bc) = var_834
                eax_20 = *(eax_3 * 0x7a0 + 0x98c284) + 1
                *(eax_3 * 0x7a0 + &data_98c1f8) = eax_20
            else if (ecx_12 != 0xfffffffd)
                eax_20 = sub_464800(eax_8, eax_3 * 0x7a0 + &data_98bf04, 
                    eax_3 * 0x650 + &data_72d6b0, eax_8, eax_16, arg5, var_834, ecx_12)
            else
                eax_20 = sub_464850(eax_8, eax_3 * 0x7a0 + &data_98bf04, 
                    eax_3 * 0x650 + &data_72d6b0, eax_8, eax_16, arg5, var_834, &var_850)
            
            *(eax_3 * 0x7a0 + 0x98bf08) = ebx_1
            
            if (ebx_1 != 0xffffffff)
                sub_4cfdf0(eax_20, &var_41c, eax_3 * 0x650 + 0x72d6e4, 0x24)
            
            int32_t ebx_3 = *(eax_3 * 0x7a0 + 0x98c284) + 1
            int32_t eax_23 = var_83c
            *(eax_3 * 0x7a0 + &data_98c1f8) = ebx_3
            *(eax_3 * 0x7a0 + 0x98bf0c) = eax_7
            *(eax_3 * 0x7a0 + 0x98bf10) = eax_23
            
            if (eax_7 != 0xffffffff)
                eax_23 = sub_4cfdf0(eax_23, &var_214, eax_3 * 0x650 + 0x72d708, 0x24)
            
            *(eax_3 * 0x7a0 + &data_98c1f8) = ebx_3
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_23
        
        if (eax_7 != 0xffffffff)
            goto label_464ff4
        
        if (ebx_1 != 0xffffffff && ebx_1 u<= 0x1ff)
            *(ebx_1 * 0x6c + &data_1382f88) -= 1
            
            if (*(ebx_1 * 0x6c + &data_1382f88) s<= 0)
                sub_428300(ebx_1 * 0x6c + 0x1382f8c)
                eax_2 = sub_428710(ebx_1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
