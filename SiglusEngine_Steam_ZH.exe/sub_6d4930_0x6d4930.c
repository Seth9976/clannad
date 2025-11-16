// 函数: sub_6d4930
// 地址: 0x6d4930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg1 != 0)
    result = *(arg1 + 0x44)
    
    if (result != 0 && *(arg1 + 0x48) u> 0 && result != arg1)
        void var_48
        int32_t edi
        __setjmp3(&__saved_ebp, arg1, edi, &var_48, 0, arg2, result)
        *(arg1 + 0x44) = &var_48
        *(arg1 + 0x48) = 0
        *(arg1 + 0x40) = sub_74b480
        result = sub_6d83a0(arg1, result)
    
    *(arg1 + 0x48) = 0
    *(arg1 + 0x44) = 0
    *(arg1 + 0x40) = 0

sub_745f2b(result_1 ^ &__saved_ebp)
return result
