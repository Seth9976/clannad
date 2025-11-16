// 函数: sub_688af0
// 地址: 0x688af0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c82cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_dc = nullptr
int32_t var_d8 = 0
int32_t var_d4 = 0
int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
int64_t var_cc = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 
    &boost::detail::sp_counted_impl_p<class C_gan_data>::`vftable'{for `boost::detail::sp_counted_base'}
        .vFunc_5, 
    3)
var_8_1.b = 1
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
var_8_1.b = 2
int16_t* var_f4 = &var_2c
sub_6b5cd0(&var_dc, sub_52e720(&var_44, 0xafa254, 1), &var_44)

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
var_8_1.b = 0
int32_t var_34_1 = 0
var_44 = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

void* ecx_5 = var_d8 - var_dc
var_2c = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
int32_t eax_6 = ecx_5 s/ 0x28

if (eax_6 s> 0)
    int16_t var_74
    int16_t* eax_7 = sub_532b80(eax_6, data_bac4d8, &var_74, &data_ad900c)
    var_8_1.b = 3
    int16_t var_5c
    int16_t* name = sub_5327a0(eax_7, eax_7, &var_5c, var_dc)
    
    if (*(name + 0x14) u>= 8)
        name = *name
    
    *arg1 = LoadImageW(nullptr, name, IMAGE_ICON, 0x20, 0x20, LR_LOADFROMFILE)
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    var_8_1.b = 0
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    void** edx_4 = data_bac4d8
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    void** eax_9 = sub_532b80(0, edx_4, &var_44, &data_ad900c)
    var_8_1.b = 4
    int16_t* name_1 = sub_5327a0(eax_9, eax_9, &var_2c, var_dc)
    
    if (*(name_1 + 0x14) u>= 8)
        name_1 = *name_1
    
    arg1[1] = LoadImageW(nullptr, name_1, IMAGE_ICON, 0x10, 0x10, LR_LOADFROMFILE)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)

int32_t result = sub_688de0(&var_dc)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
