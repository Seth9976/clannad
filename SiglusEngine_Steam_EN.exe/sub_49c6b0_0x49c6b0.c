// 函数: sub_49c6b0
// 地址: 0x49c6b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
void* eax_1 = __security_cookie ^ &__saved_ebp
void* var_8 = eax_1
int32_t var_2e8 = arg2

if (arg1 u<= 7 && arg2 u<= 1)
    eax_1 = arg2 + (arg1 << 1)
    void* esi_2 = &(&data_8d02b4)[eax_1 * 0xb20]
    int32_t ecx = *esi_2
    
    if (ecx != 0 && *(esi_2 + 0xc) != 0)
        int32_t eax_2 = data_71929c
        
        if (eax_2 == 0x1c || eax_2 == 0x1d || eax_2 == 0x1e || eax_2 == 0x1f)
            var_2e8 = 0
        
        eax_1 = *(esi_2 + 0x2c74)
        
        if (eax_1 != 0xffffffff)
            eax_1 = eax_1 * 0x2c + esi_2
            void* var_2f0_1 = eax_1
            void* edi_1 = *(eax_1 + 0x64)
            void var_300
            void var_2fc
            int32_t var_2f4
            int32_t var_2ec
            int32_t var_2e4
            char var_2e0[0xf4]
            
            if (ecx - 1 u<= 5)
                switch (ecx)
                    case 1, 2, 3, 4
                        int32_t var_2f8_1 = 0
                        
                        if (edi_1 != 0xffffffff)
                            goto label_49c7ad
                        
                        if (*(eax_1 + 0x6c) != 0)
                            eax_1 = sub_499a90(eax_1, eax_1 + 0x6c, (ecx - 1) | edi_1, 2, 1)
                            edi_1 = eax_1
                            
                            if (edi_1 != 0xffffffff)
                                var_2f8_1 = 1
                            label_49c7ad:
                                eax_1 = sub_49a330(&var_2ec, &var_300, edi_1, &var_2ec, &var_2f4, 
                                    &var_2fc)
                                
                                if (eax_1 != 0)
                                    sub_4cfdf0(eax_1, var_2f0_1 + 0x6c, &var_2e0, 0x24)
                                    int32_t var_1c4_1 = var_2e8
                                    int32_t var_1c0_1 = *(esi_2 + 0x14)
                                    int32_t var_1bc_1 = *(esi_2 + 0x18)
                                    int32_t var_1b8_1 = *(esi_2 + 0x1c)
                                    int32_t var_1b4_1 = *(esi_2 + 0x20)
                                    int32_t var_1ec_1 = 0
                                    int32_t var_1e4_1 = var_2ec - 1
                                    int32_t var_1e8_1 = 0
                                    int32_t var_1e0_1 = var_2f4 - 1
                                    int32_t eax_14 = *esi_2
                                    
                                    if (eax_14 != 1)
                                        var_2e4 = 0x7d1
                                    
                                    if (eax_14 == 1 || eax_14 == 2)
                                        var_2e4 = 0x7d0
                                    
                                    eax_1 = sub_42a6d0(&var_2e4)
                                
                                if (var_2f8_1 != 0 && edi_1 u<= 0x3ff)
                                    eax_1 = edi_1 * 0x2c + &data_8c52b4
                                    *(eax_1 + 0x28) -= 1
                                    
                                    if (*(eax_1 + 0x28) s<= 0)
                                        sub_4d6c40(edi_1 * 0x34 + &data_f2e6f8, 
                                            edi_1 * 0x34 + &data_f2e6fc)
                                        int32_t eax_16 = sub_4997c0(edi_1)
                                        sub_5f02dd(var_8 ^ &__saved_ebp)
                                        return eax_16
                    case 5, 6
                        if (edi_1 != 0xffffffff)
                            eax_1 =
                                sub_49a330(&var_2ec, &var_300, edi_1, &var_2ec, &var_2f4, &var_2fc)
                            
                            if (eax_1 == 1)
                                sub_4cfdf0(eax_1, var_2f0_1 + 0x6c, &var_2e0, 0x24)
                                int32_t var_1c4_2 = var_2e8
                                int32_t var_1c0_2 = *(esi_2 + 0x14)
                                int32_t var_1bc_2 = *(esi_2 + 0x18)
                                int32_t var_1b8_2 = *(esi_2 + 0x1c)
                                int32_t var_1b4_2 = *(esi_2 + 0x20)
                                int32_t var_1ec_2 = *(esi_2 + 0x44)
                                int32_t var_1e8_2 = *(esi_2 + 0x48)
                                var_2e4 = 0x7d2
                                eax_1 = sub_42a6d0(&var_2e4)

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
