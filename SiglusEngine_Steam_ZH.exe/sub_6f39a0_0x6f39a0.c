// 函数: sub_6f39a0
// 地址: 0x6f39a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd6e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1
int32_t result

if (ecx != 0)
    int32_t* var_48 = nullptr
    int32_t eax_4 = (*(*ecx + 0x48))(ecx, 0, &var_48)
    void var_7c
    
    if (eax_4 s>= 0)
        int32_t* esi_2 = var_48
        int32_t* var_4c_1 = esi_2
        int32_t var_8_2 = 2
        int32_t* eax_6 = data_4ebe4b0
        result = (*(*eax_6 + 0x80))(eax_6, esi_2, arg2)
        int32_t ebx
        
        if (result s>= 0)
            ebx.b = 1
        else
            int16_t* eax_7
            int32_t edx_3
            eax_7, edx_3 = sub_52e820(&var_7c, u"GetRenderTargetData")
            sub_6f1a40(eax_7, edx_3, result, var_7c)
            ebx.b = 0
        
        int32_t var_8_3 = 0xffffffff
        
        if (esi_2 != 0)
            (*(*esi_2 + 8))(esi_2)
        
        result.b = ebx.b
    else
        int16_t* eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_52e820(&var_7c, u"GetSurfaceLevel")
        sub_6f1a40(eax_5, edx_2, eax_4, var_7c)
        result.b = 0
else
    void* var_68 = 0x25
    int32_t* var_34_1 = ecx
    wchar16 const* const var_6c = u"C_d3d_texture::get_render_target_data"
    int32_t var_30_1 = 7
    int16_t var_44 = 0
    sub_52e720(&var_44, var_6c, var_68)
    int32_t var_8_1 = 0
    void* const var_68_1 = 0x10
    int32_t var_18_1 = 7
    int32_t* var_6c_1 = &data_b06e04
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, var_6c_1, var_68_1)
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
