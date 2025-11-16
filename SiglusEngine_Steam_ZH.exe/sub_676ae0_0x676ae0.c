// 函数: sub_676ae0
// 地址: 0x676ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6e50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_5c
int16_t* eax_3 = sub_6106b0(&var_5c, arg1)
int32_t var_8_1 = 0
int32_t var_4c
int32_t ebx
int32_t var_44
int32_t var_30

if (var_4c != 0)
    int32_t* var_84 = nullptr
    int64_t var_7c_1 = 0
    var_8_1.b = 2
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, &data_af335c, 2)
    var_8_1.b = 3
    var_8_1.b = 2
    ebx.b = sub_6b7a80(&var_84, &var_5c, &var_2c) == 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    if (ebx.b == 0)
        char* var_20
        sub_5b9470(&var_20, 0x100000)
        var_8_1.b = 7
        char* esi_2 = var_20
        char* ecx_10 = esi_2
        
        if (esi_2 == var_1c_1)
            ecx_10 = nullptr
        
        sub_6b74a0(0, 0x100000, ecx_10, var_84)
        
        if (sub_6b73d0(var_84) != 0)
            var_84 = nullptr
            int64_t var_7c_2 = 0
        
        ebx.b = 1
        
        if (esi_2 != 0)
            j__free(esi_2)
    else
        int32_t var_74
        void** eax_7 = sub_6b9ed0(&var_74)
        var_8_1.b = 4
        int16_t* eax_8 = sub_532b80(eax_7, arg1, &var_44, u".omv")
        var_8_1.b = 5
        int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_2c, eax_7)
        var_8_1.b = 6
        sub_684160(data_bac424, 9, eax_9)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        var_44.w = 0
        int32_t var_60
        
        if (var_60 u>= 8)
            j__free(var_74)
        
        ebx.b = 0
    
    var_8_1.b = 0
    
    if (sub_6b73d0(var_84) != 0)
        var_84 = nullptr
        int64_t var_7c_3 = 0
else
    int16_t* eax_4 = sub_532b80(eax_3, arg1, &var_44, 
        &boost::detail::sp_counted_impl_p<class C_tnm_sprite>::`vftable'{for `boost::detail::sp_counted_base'}
            .vFunc_5)
    var_8_1.b = 1
    sub_684160(data_bac424, 9, eax_4)
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    ebx.b = 0
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return ebx.b
