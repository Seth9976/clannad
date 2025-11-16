// 函数: sub_4130d0
// 地址: 0x4130d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_4
int32_t ecx

if (arg5 - 1 u> 3)
    eax_4 = 0
    ecx = 0
else
    switch (arg5)
        case 1
            eax_4 = 1
            ecx = 0
        case 2
            eax_4 = 2
            ecx = 0
        case 3
            eax_4 = 1
            ecx = 1
        case 4
            eax_4 = 2
            ecx = 1

int32_t var_20
char var_1c[0x14]
void* result = sub_4a59e0(eax_4, arg2, arg3, arg4, eax_4, ecx, &var_20, &var_1c, 0x14)

if (result != 0)
    int32_t edi_1 = arg13
    int32_t esi_1 = 0
    int32_t ebx_1 = arg14
    
    if (var_20 s> 0)
        do
            result.b = var_1c[esi_1]
            
            if (result.b != 0xff)
                uint32_t edx = zx.d(result.b)
                result = arg12
                void* ecx_4 = edx * arg10 + arg6
                int32_t edx_2 = edx * arg11 + arg7
                
                if (result s>= 0)
                    int32_t eax_10 = arg8 - 1 + ecx_4
                    result = sub_4128b0(eax_10, edx_2, ecx_4, eax_10, arg9 - 1 + edx_2, result, 
                        edi_1, ebx_1, arg17, 0, 0, 0, 0, 0, 0, arg19, 0, 0, 0, 0, arg18)
            
            edi_1 += arg15
            esi_1 += 1
            ebx_1 += arg16
        while (esi_1 s< var_20)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
