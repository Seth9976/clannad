// 函数: sub_6b1860
// 地址: 0x6b1860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx_1 = arg2 - arg3
int32_t i = ebx_1 s/ 0x11c

if (i s> 1)
    int32_t esi_1 = arg2 - 0x11c
    int32_t var_128_1 = esi_1
    
    do
        void var_124
        __builtin_memcpy(&var_124, esi_1, 0x11c)
        void* var_144_1 = &var_124
        __builtin_memcpy(var_128_1, arg3, 0x11c)
        void* eax_9 = (ebx_1 - 0x11c) s/ 0x11c
        sub_6b1bd0(eax_9, nullptr, arg3, eax_9, var_144_1, arg4)
        esi_1 = var_128_1 - 0x11c
        var_128_1 = esi_1
        ebx_1 = esi_1 - arg3 + 0x11c
        i = ebx_1 s/ 0x11c
    while (i s> 1)

sub_745f2b(eax_1 ^ &__saved_ebp)
return i
