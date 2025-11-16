// 函数: sub_571ae0
// 地址: 0x571ae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg6
int32_t esi = arg3
int32_t hbr = result
int32_t ecx_1

if (arg7 == 0xffffffff || arg8 == 0xffffffff || arg9 == 0xffffffff || arg10 == 0xffffffff)
    ecx_1 = arg5
    result = arg4
label_571b54:
    RECT lprc
    lprc.left = esi
    lprc.right = result + 1
    lprc.bottom = ecx_1 + 1
    lprc.top = arg2
    result = FillRect(data_20f0288, &lprc, hbr)
else if (esi s<= arg9)
    result = arg4
    
    if (result s>= arg7 && arg2 s<= arg10)
        ecx_1 = arg5
        
        if (ecx_1 s>= arg8)
            if (esi s< arg7)
                esi = arg7
            
            if (result s> arg9)
                result = arg9
            
            if (arg2 s< arg8)
                arg2 = arg8
            
            if (ecx_1 s> arg10)
                ecx_1 = arg10
            
            goto label_571b54
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
