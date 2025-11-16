// 函数: sub_6f6480
// 地址: 0x6f6480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0x1a48) != *(arg1 + 0x1a4c))
    int32_t* ecx = data_4ebe4b0
    
    if (ecx != 0)
        int32_t ebx
        ebx.b = 0
        int32_t eax_5 = (*(*ecx + 0xa4))(ecx)
        
        if (eax_5 s>= 0)
            ebx = 0
            
            if ((*(*(arg1 + 0x19cc) + 8))(arg1 + 0x1a48) != 0)
                ebx = 1
            
            int32_t* ecx_8 = data_4ebe4b0
            (*(*ecx_8 + 0xa8))(ecx_8)
        else
            void var_74
            int16_t* eax_6
            int32_t edx_2
            eax_6, edx_2 = sub_52e820(&var_74, u"BeginScene")
            sub_6f1a40(eax_6, edx_2, eax_5, var_74)
        
        result.b = ebx.b
    else
        void* var_60_1 = 6
        int32_t* var_34_1 = ecx
        wchar16 const* const var_64_1 = u"render"
        int32_t var_30_1 = 7
        int16_t var_44 = 0
        sub_52e720(&var_44, var_64_1, var_60_1)
        int32_t var_8_1 = 0
        void* const var_60_2 = 0x18
        int32_t var_18_1 = 7
        int32_t* var_64_2 = u"Direct3D"
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, var_64_2, var_60_2)
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
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
