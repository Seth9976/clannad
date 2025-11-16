// 函数: sub_64ff70
// 地址: 0x64ff70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3d77
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_45c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = data_bac458

if (*(result + 0x493) == 0)
    int32_t var_1ec
    int32_t (* esi_2)[0x1f]
    int32_t var_94[0x1f]
    int32_t var_18
    
    if (*(arg1 + 0x130) != 1)
        sub_54aed0(&var_1ec)
        int32_t var_8_3 = 2
        __builtin_memcpy(&var_94, arg1, 0x80)
        var_94[var_18] = 3
    label_6500a8:
        int32_t var_18_2 = var_18 + 1
        esi_2 = &var_94
        int32_t var_1f0_1 = 1
        var_1ec = 0x12
    else
        char eax_3
        
        if (*(arg1 + 0x1b8) s> 0)
            eax_3 = sub_5d84f0(arg1, 1)
        
        if (*(arg1 + 0x1b8) s<= 0 || eax_3 != 0)
            *(arg1 + 0x33c) = 0
            sub_54aed0(&var_1ec)
            int32_t var_8_2 = 1
            __builtin_memcpy(&var_94, arg1, 0x80)
            var_94[var_18] = 0x37
            goto label_6500a8
        
        *(arg1 + 0x33c) = 1
        sub_54aed0(&var_1ec)
        int32_t var_8_1 = 0
        var_1ec = 0x12
        int32_t var_18_1 = 1
        void var_44c
        __builtin_memcpy(&var_44c, arg1, 0x80)
        var_94[0] = 3
        void var_26c
        esi_2 = sub_573260(&var_94, &var_44c, &var_26c, &var_94)
    void var_1e8
    __builtin_memcpy(&var_1e8, esi_2, 0x80)
    void var_5b4
    sub_54cf80(&var_5b4, &var_1ec)
    sub_6766e0()
    void var_160
    sub_54ae40(&var_160)
    int32_t var_3c4
    sub_54aed0(&var_3c4)
    int32_t var_8_4 = 3
    var_3c4 = 0x1a
    void var_3c0
    __builtin_memcpy(&var_3c0, arg1, 0x80)
    sub_54cf80(&var_5b4, &var_3c4)
    sub_6766e0()
    sub_54aed0(&var_1ec)
    var_8_4.b = 4
    var_1ec = 0x19
    __builtin_memcpy(&var_1e8, arg1, 0x80)
    sub_54cf80(&var_5b4, &var_1ec)
    sub_6766e0()
    sub_54ae40(&var_160)
    void var_338
    result = sub_54ae40(&var_338)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
