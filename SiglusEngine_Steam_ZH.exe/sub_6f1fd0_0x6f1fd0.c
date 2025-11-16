// 函数: sub_6f1fd0
// 地址: 0x6f1fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd56a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
int32_t var_8_1 = 0
int16_t var_44
int32_t var_30
int16_t var_2c
int32_t var_18

if ((arg2 & 0x400) != 0)
    var_18 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_AUTOGENMIPMAP", 0x16)
    var_8_1.b = 1
    int32_t* eax_4 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 2
    
    if (&var_5c != eax_4)
        sub_52e3c0(&var_5c, eax_4, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2.b & 2) != 0)
    var_18 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_DEPTHSTENCIL", 0x15)
    var_8_1.b = 3
    int32_t* eax_6 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 4
    
    if (&var_5c != eax_6)
        sub_52e3c0(&var_5c, eax_6, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2 & 0x4000) != 0)
    var_18 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_DMAP", 0xd)
    var_8_1.b = 5
    int32_t* eax_8 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 6
    
    if (&var_5c != eax_8)
        sub_52e3c0(&var_5c, eax_8, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_3 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2.b & 0x20) != 0)
    var_18 = 7
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_DONOTCLIP", 0x12)
    var_8_1.b = 7
    int32_t* eax_10 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 8
    
    if (&var_5c != eax_10)
        sub_52e3c0(&var_5c, eax_10, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_4 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2 & 0x200) != 0)
    var_18 = 7
    int32_t var_1c_5 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_DYNAMIC", 0x10)
    var_8_1.b = 9
    int32_t* eax_12 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0xa
    
    if (&var_5c != eax_12)
        sub_52e3c0(&var_5c, eax_12, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_5 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2 & 0x100) != 0)
    var_18 = 7
    int32_t var_1c_6 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_NPATCHES", 0x11)
    var_8_1.b = 0xb
    int32_t* eax_14 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0xc
    
    if (&var_5c != eax_14)
        sub_52e3c0(&var_5c, eax_14, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_6 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2.b & 0x40) != 0)
    var_18 = 7
    int32_t var_1c_7 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"D3DUSAGE_POINTS", 0xf)
    var_8_1.b = 0xd
    int32_t* eax_16 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0xe
    
    if (&var_5c != eax_16)
        sub_52e3c0(&var_5c, eax_16, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_7 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2.b & 1) != 0)
    sub_52e820(&var_2c, u"D3DUSAGE_RENDERTARGET")
    var_8_1.b = 0xf
    int32_t* eax_18 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0x10
    
    if (&var_5c != eax_18)
        sub_52e3c0(&var_5c, eax_18, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_8 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if (arg2.b s< 0)
    sub_52e820(&var_2c, u"D3DUSAGE_RTPATCHES")
    var_8_1.b = 0x11
    int32_t* eax_20 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0x12
    
    if (&var_5c != eax_20)
        sub_52e3c0(&var_5c, eax_20, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_9 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2.b & 0x10) != 0)
    sub_52e820(&var_2c, u"D3DUSAGE_SOFTWAREPROCESSING")
    var_8_1.b = 0x13
    int32_t* eax_22 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0x14
    
    if (&var_5c != eax_22)
        sub_52e3c0(&var_5c, eax_22, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_10 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

if ((arg2.b & 8) != 0)
    sub_52e820(&var_2c, u"D3DUSAGE_WRITEONLY")
    var_8_1.b = 0x15
    int32_t* eax_24 = sub_6f1bd0(&var_2c, &var_5c, &var_44, &var_2c)
    var_8_1.b = 0x16
    
    if (&var_5c != eax_24)
        sub_52e3c0(&var_5c, eax_24, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    var_30 = 7
    var_8_1.b = 0
    int32_t var_34_11 = 0
    var_44 = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

int16_t* eax_25
int32_t ebx_1

if (var_4c != 0)
    var_18 = 7
    var_2c = 0
    int32_t var_1c_8 = 0
    sub_52e3c0(&var_2c, &var_5c, 0, 0xffffffff)
    eax_25 = &var_2c
    int32_t var_8_2 = 0x18
    ebx_1 = 2
else
    sub_52e820(&var_44, &data_ad93bc)
    eax_25 = &var_44
    var_8_1.b = 0x17
    ebx_1 = 1

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
int32_t var_60_1 = ebx_1
sub_52e3c0(arg1, eax_25, 0, 0xffffffff)
int32_t ebx_2 = ebx_1 | 4

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_9 = 0
    var_2c = 0

if ((ebx_2.b & 1) != 0)
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_12 = 0
    var_44 = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
