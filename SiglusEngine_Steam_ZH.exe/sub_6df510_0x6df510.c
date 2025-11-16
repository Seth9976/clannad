// 函数: sub_6df510
// 地址: 0x6df510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x120) == 0)
    result.b = 0
else
    int32_t* ecx = *(arg1 + 4)
    struct _EXCEPTION_REGISTRATION_RECORD** var_48
    
    if (ecx == 0)
        result.b = 0
    else if ((*(*ecx + 0x10))(ecx, &var_48, 0) s>= 0)
        int32_t eax_8 = *(arg1 + 0x30)
        int32_t ebx_2 =
            modu.dp.d(0:(*(arg1 + 8) - *(arg1 + 0x18) + var_48), *(arg1 + 8)) + *(arg1 + 0x1c)
        
        if (ebx_2 s<= eax_8)
            goto label_6df666
        
        if (*(arg1 + 0x28) == 0)
            sub_6de780(arg1)
            sub_6de730(arg1)
        label_6df666:
            *(arg1 + 0x18) = var_48
            result.b = 1
            *(arg1 + 0x1c) = ebx_2
        else
            int32_t temp1_2 = mods.dp.d(sx.q(ebx_2 - eax_8), eax_8 - *(arg1 + 0x34))
            *(arg1 + 0x18) = var_48
            result.b = 1
            *(arg1 + 0x1c) = temp1_2 + *(arg1 + 0x34)
    else
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        int16_t var_44 = 0
        sub_52e720(&var_44, u"GetCurrentPosition", 0x12)
        int32_t var_8_1 = 0
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, 
            &boost::detail::sp_counted_impl_p<class NT3::C_omv_player_impl>::`vftable'{for `boost::detail::sp_counted_base'}
                .__offset(0x14), 
            0x1b)
        var_8_1.b = 1
        sub_6b9da0(&var_2c, &var_44)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
