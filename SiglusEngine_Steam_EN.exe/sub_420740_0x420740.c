// 函数: sub_420740
// 地址: 0x420740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t ecx = *arg1

if (ecx != 0)
    void* edi_1 = arg1[3]
    
    if (edi_1 s> 0 || arg1[4] s> 0)
        int32_t ebx_1 = arg1[4]
        
        if (edi_1 s> 0 || ebx_1 s> 0)
            result = arg1[5]
            
            if (result == 0 || result == 1)
                void var_210
                int32_t ecx_1 = sub_4d67a0(ecx, &var_210)
                void* var_220_1 = &var_210
                result = sub_4299f0(&var_210, arg1[3], arg1[1], arg1[4], arg1, 0, ecx_1, 1, 
                    nullptr, 0, edi_1, ebx_1, nullptr, 0, 1)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
