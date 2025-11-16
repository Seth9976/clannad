// 函数: sub_423d30
// 地址: 0x423d30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (*arg3 != 0)
    int32_t ecx = arg3[3]
    
    if (ecx s> 0 || arg3[4] s> 0)
        HGLOBAL edi_1 = arg4
        
        if (edi_1 s<= 0)
            edi_1 = 1
        
        int32_t eax_1 = arg7
        void* ecx_1
        
        if (eax_1 s> 0)
            ecx_1 = arg5
        else
            eax_1 = ecx
            ecx_1 = nullptr
            arg7 = eax_1
        
        int32_t ebx_1 = arg8
        int32_t edx
        
        if (ebx_1 s> 0)
            edx = arg6
        else
            ebx_1 = arg3[4]
            edx = 0
        
        int32_t var_22c_1 = ebx_1
        int32_t var_234_1 = edx
        int32_t var_218_1 = edx
        edx.b = arg2
        result = sub_423cc0(eax_1, edx.b, arg3, ecx_1, edi_1, ecx_1, var_234_1, eax_1)
        
        if (result.b == 0)
            void var_210
            int32_t ecx_4 = sub_4d67a0(*arg3, &var_210)
            void* var_22c_2 = &var_210
            result = sub_4299f0(&var_210, arg3[3], arg3[1], arg3[4], arg3, 0, ecx_4, edi_1, ecx_1, 
                var_218_1, arg7, ebx_1, arg9, arg10, arg11)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
