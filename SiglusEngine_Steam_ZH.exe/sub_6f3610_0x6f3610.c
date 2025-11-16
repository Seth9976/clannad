// 函数: sub_6f3610
// 地址: 0x6f3610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6f35b0(arg1)
arg1[1] = arg2
arg1[2] = arg3
arg1[5] = arg2
arg1[6] = arg3
int32_t var_48

if (data_4ebe683 != 0 || (data_4ebe508 & 2) != 0)
    arg1[3] = 2
    
    if (arg2 s> 2)
        int32_t eax_7 = 2
        
        do
            eax_7 *= 2
        while (eax_7 s< arg2)
        
        arg1[3] = eax_7
    
    arg1[4] = 2
    
    if (arg3 s> 2)
        int32_t eax_6 = 2
        
        do
            eax_6 *= 2
        while (eax_6 s< arg3)
        
        arg1[4] = eax_6
else
    var_48 = 2
    int32_t* eax_3 = &var_48
    
    if (arg2 s>= 2)
        eax_3 = &arg1[1]
    
    arg1[3] = *eax_3
    int32_t* eax_5 = &var_48
    
    if (arg3 s>= 2)
        eax_5 = &arg1[2]
    
    var_48 = 2
    arg1[4] = *eax_5

int32_t edx_1

if (arg1[3] s<= 0x800)
    edx_1 = arg1[4]

int32_t* result
int16_t var_44
int32_t var_30_1
int16_t var_2c
int32_t var_18_1

if (arg1[3] s> 0x800 || edx_1 s> 0x800)
    void* var_60_6 = 0x15
    var_30_1 = 7
    wchar16 const* const var_64_5 = u"C_d3d_texture::create"
    int32_t var_34_3 = 0
    var_44 = 0
    sub_52e720(&var_44, var_64_5, var_60_6)
    int32_t var_8_4 = 0
    void* const var_60_7 = 0x1b
    var_18_1 = 7
    int32_t* var_64_6 = u"2048"
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_52e720(&var_2c, var_64_6, var_60_7)
    var_8_4.b = 1
label_6f38ae:
    sub_6b9da0(&var_2c, &var_44)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_4 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0
else
    int32_t eax_8 = arg5
    
    if ((eax_8 & 0x400) != 0)
        if (arg7 != 2)
            if (data_4ebe682 == 0 || (data_4ebe4d8 & 0x40000000) == 0 || data_4ebe684 s< 0
                    || data_4ebe688 s< 0)
                eax_8 &= 0xfffffbff
            
            goto label_6f377f
        
        void* var_60 = 0x15
        var_30_1 = 7
        wchar16 const* const var_64 = u"C_d3d_texture::create"
        int32_t var_34_1 = 0
        var_44 = 0
        sub_52e720(&var_44, var_64, var_60)
        int32_t var_8_1 = 2
        void* const var_60_1 = 0x38
        var_18_1 = 7
        int32_t* var_64_1 = u"D3DUSAGE_AUTOGENMIPMAP"
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_64_1, var_60_1)
        var_8_1.b = 3
        goto label_6f38ae
    
label_6f377f:
    int32_t edi_3 = eax_8 & 0x200
    
    if (edi_3 != 0 && arg7 == 1)
        void* var_60_2 = 0x11
        var_30_1 = 7
        wchar16 const* const var_64_2 = u"D3DXCreateTexture"
        int32_t var_34_2 = 0
        var_44 = 0
        sub_52e720(&var_44, var_64_2, var_60_2)
        int32_t var_8_2 = 4
        void* const var_60_3 = 0x30
        var_18_1 = 7
        int32_t* var_64_3 = u"D3DUSAGE_DYNAMIC"
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_64_3, var_60_3)
        var_8_2.b = 5
        goto label_6f38ae
    
    int32_t var_4c = 0
    int32_t* var_60_4 = &var_4c
    int32_t ebx_1 = arg1[3]
    int32_t var_64_4 = arg7
    int32_t var_68_1 = arg6
    int32_t var_6c_1 = eax_8
    int32_t var_74 = edx_1
    int32_t eax_9 = sub_40664b(data_4ebe4b0, ebx_1, var_74, arg4)
    
    if (eax_9 s>= 0)
        if (edi_3 == 0)
            *(arg1 + 0x25) = 1
        
        int32_t var_8_3 = 6
        result = *arg1
        int32_t ecx_8 = var_4c
        var_48 = 0
        *arg1 = ecx_8
        
        if (result != 0)
            (*(*result + 8))(result)
        
        result.b = 1
    else
        int16_t* eax_10
        int32_t edx_2
        eax_10, edx_2 = sub_52e820(&var_74, u"CreateTexture")
        sub_6f1a40(eax_10, edx_2, eax_9, var_74)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
