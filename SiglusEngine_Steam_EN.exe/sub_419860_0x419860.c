// 函数: sub_419860
// 地址: 0x419860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_1321e9c s> 0 && data_1321ea0 != 0)
    int32_t var_14_1 = arg4
    int32_t var_10_1 = arg5
    int32_t var_c_1 = arg6
    int32_t var_1c = arg3
    int32_t var_18_1 = arg2
    int32_t* eax_6 = sub_419220(&var_1c, 0, &data_1321e9c, &var_1c)
    
    if (eax_6 != 0)
        void* esi_1 = eax_6[3]
        
        if (esi_1 != 0)
            int32_t eax_7 = arg7
            int32_t ecx = 0
            
            if (data_12dc4bc != 0)
                ecx = 0x1a
                
                if (eax_7 != 0)
                    eax_7 = 1
            
            if (sub_4e8000(eax_7, *(esi_1 + 0x20), ecx + 0x19, eax_7, &data_704898) != 0)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 1
            
            sub_418fc0(esi_1, *(esi_1 + 0x20))

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
