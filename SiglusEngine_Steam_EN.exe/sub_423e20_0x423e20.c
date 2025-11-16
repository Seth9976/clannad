// 函数: sub_423e20
// 地址: 0x423e20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result
int32_t* esi = arg3

if (*esi != 0)
    result = esi[3]
    
    if ((result s> 0 || esi[4] s> 0) && arg4 s> 0 && (result s> 0 || esi[4] s> 0))
        result = esi[5]
        
        if (result != 0)
            if (result == 1)
                goto label_423e8b
            
            if (result == 2)
                result = sub_426820(arg3)
                
                if (result s< 2)
                    sub_423a40(arg3)
                    goto label_423e8b
        else
            sub_423c80(arg3)
        label_423e8b:
            void var_210
            sub_4d67a0(*esi, &var_210)
            void* var_21c_1 = &var_210
            int32_t var_220_1 = arg5
            int32_t var_224_1 = arg4
            result = sub_429b30(&var_210, esi[3], esi[1], esi[4], esi)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
