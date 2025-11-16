// 函数: sub_4b6980
// 地址: 0x4b6980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *((arg2 << 2) + &data_12997e4)

if (eax_2 != 5)
    int32_t* eax_4 = sub_4b6730(eax_2, arg3 + 0x26c, arg3 + 0x20, eax_2, arg4)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_4

int32_t ecx = *(arg3 + 0x20)

if (ecx != 0)
    void* edi_1 = *(arg3 + 0x2c)
    
    if (edi_1 s> 0 || *(arg3 + 0x30) s> 0)
        int32_t ebx_1 = *(arg3 + 0x30)
        
        if (edi_1 s> 0 || ebx_1 s> 0)
            eax_2 = *(arg3 + 0x34)
            
            if (eax_2 == 0 || eax_2 == 1)
                void var_210
                int32_t ecx_1 = sub_4d67a0(ecx, &var_210)
                void* var_220_1 = &var_210
                eax_2 = sub_4299f0(&var_210, *(arg3 + 0x2c), *(arg3 + 0x24), *(arg3 + 0x30), 
                    arg3 + 0x20, 0, ecx_1, 1, nullptr, 0, edi_1, ebx_1, nullptr, 0, 1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
