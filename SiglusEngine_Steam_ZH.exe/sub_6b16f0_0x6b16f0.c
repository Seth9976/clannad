// 函数: sub_6b16f0
// 地址: 0x6b16f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_6 = (arg2 - arg3) s/ 0x11c
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(eax_6)
void* result = eax_7 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    result = (i << 1) + 2
    int32_t edx_4 = arg3
    int32_t esi_3 = i * 0x11c + edx_4
    
    do
        void var_124
        __builtin_memcpy(&var_124, esi_3 - 0x11c, 0x11c)
        void* j_1 = i - 1
        void* j = result - 2
        int32_t eax_9
        
        for (eax_9 = eax_6; j s< eax_9; j = (j << 1) + 2)
            int32_t ecx_1 = j * 0x11c + edx_4
            
            if (arg4(ecx_1, ecx_1 - 0x11c) != 0)
                j -= 1
            
            edx_4 = arg3
            eax_9 = eax_6
            __builtin_memcpy(j_1 * 0x11c + edx_4, j * 0x11c + edx_4, 0x11c)
            j_1 = j
        
        if (j == eax_9)
            __builtin_memcpy(j_1 * 0x11c + edx_4, edx_4 - 0x11c + eax_9 * 0x11c, 0x11c)
            j_1 = eax_6 - 1
        
        i -= 1
        sub_6b1cd0(&var_124, j_1, arg3, i, &var_124, arg4)
        edx_4 = arg3
        result -= 2
        esi_3 -= 0x11c
    while (i s> 0)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
