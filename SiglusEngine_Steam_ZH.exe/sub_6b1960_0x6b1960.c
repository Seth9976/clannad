// 函数: sub_6b1960
// 地址: 0x6b1960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg4
int32_t result_1 = result
int32_t result_9 = arg3
int32_t result_11 = result_9
int32_t result_2 = result_9 + 0x11c
int32_t result_3 = result_2

if (result_2 != arg2)
    int32_t result_8 = result_2 - 0x11c
    
    do
        int32_t result_4 = result_2
        void var_124
        __builtin_memcpy(&var_124, result_2, 0x11c)
        int32_t result_7
        
        if (result_1(&var_124, result_9) == 0)
            int32_t result_5 = result_8
            result = result_1(&var_124, result_8)
            
            while (result.b != 0)
                int32_t result_6 = result_4
                int32_t result_10 = result_5
                result_4 = result_5
                result_5 -= 0x11c
                __builtin_memcpy(result_6, result_10, 0x11c)
                result = result_1(&var_124, result_5)
            
            result_7 = result_4
            result_2 = result_3
            result_9 = result_11
        else
            result_9 = result_11
            result = result_2
            
            if (result_9 != result_2)
                do
                    result -= 0x11c
                    __builtin_memcpy(result + 0x11c, result, 0x11c)
                while (result != result_9)
            
            result_7 = result_9
        
        result_8 += 0x11c
        result_2 += 0x11c
        __builtin_memcpy(result_7, &var_124, 0x11c)
        result_3 = result_2
    while (result_2 != arg2)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
