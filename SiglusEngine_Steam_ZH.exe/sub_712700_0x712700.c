// 函数: sub_712700
// 地址: 0x712700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = (arg2 - arg3) s/ 0x68

if (i s> 1)
    void* esi_3 = arg2 - 0x4c
    
    do
        struct NT3::C_d3d_effect_global_val::VTable* var_80
        sub_703520(&var_80, esi_3 - 0x1c)
        int32_t var_8_1 = 0
        
        if (esi_3 - 0x18 != arg3 + 4)
            sub_541b40(esi_3 - 0x18, arg3 + 4, 0, 0xffffffff)
        
        if (esi_3 != arg3 + 0x1c)
            sub_541b40(esi_3, arg3 + 0x1c, 0, 0xffffffff)
        
        if (esi_3 + 0x18 != arg3 + 0x34)
            sub_541b40(esi_3 + 0x18, arg3 + 0x34, 0, 0xffffffff)
        
        if (esi_3 + 0x30 != arg3 + 0x4c)
            sub_541b40(esi_3 + 0x30, arg3 + 0x4c, 0, 0xffffffff)
        
        *(esi_3 + 0x48) = *(arg3 + 0x64)
        int32_t eax_18 = (0xffffffe4 - arg3 + esi_3) s/ 0x68
        sub_712c60(eax_18, nullptr, arg3, eax_18, &var_80, arg4)
        int32_t var_8_2 = 0xffffffff
        sub_702710(&var_80)
        esi_3 -= 0x68
        i = (0x4c - arg3 + esi_3) s/ 0x68
    while (i s> 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return i
