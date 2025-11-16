// 函数: sub_6f5f70
// 地址: 0x6f5f70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1820
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_4ebe4b0
int32_t var_54 = 0
int32_t var_64_5
int32_t ecx_4

if (ecx != 0)
    int32_t* var_50 = nullptr
    int32_t eax_4
    eax_4, ecx_4 = (*(*ecx + 0xa0))(ecx, &var_50)
    
    if (eax_4 s>= 0)
        var_64_5 = ecx_4
        sub_6f65e0(arg1, var_50)
    else
        void var_78
        int16_t* eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_52e820(&var_78, u"GetDepthStencilSurface")
        sub_6f1a40(eax_5, edx_2, eax_4, var_78)
        __builtin_memset(arg1, 0, 0x14)
else
    void* var_64 = 0xf
    int32_t* var_20_1 = ecx
    wchar16 const* const var_68 = u"get_dpst_buffer"
    int32_t var_1c_1 = 7
    int16_t var_30 = 0
    sub_52e720(&var_30, var_68, var_64)
    int32_t var_8_1 = 0
    void* const var_64_1 = 0xf
    int32_t var_34_1 = 7
    int32_t* var_68_1 = &data_b06f24
    int32_t var_38_1 = 0
    int16_t var_48 = 0
    sub_52e720(&var_48, var_68_1, var_64_1)
    var_8_1.b = 1
    ecx_4 = sub_6b9da0(&var_48, &var_30)
    
    if (var_34_1 u>= 8)
        ecx_4 = j__free(var_48.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_34_2 = 7
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 8)
        ecx_4 = j__free(var_30.d)
    
    int32_t var_1c_2 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    var_64_5 = ecx_4
    sub_6f65e0(arg1, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
