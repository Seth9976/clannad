// 函数: sub_6675b0
// 地址: 0x6675b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5cff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_104 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_b4 = 0
int32_t var_b0 = 0
int32_t var_ac = 0
int32_t var_8_1 = 0
void** esi_1 = data_bac510 + 0xa4df84
int32_t var_44
sub_52e820(&var_44, u"oauth_consumer_key")
var_8_1.b = 1
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e3c0(&var_2c, esi_1, 0, 0xffffffff)
var_8_1.b = 2
sub_669320(&var_b4, &var_44)
var_8_1.b = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

sub_52e820(&var_44, u"oauth_token")
var_8_1.b = 3
void* var_108_6 = 0xffffffff
int32_t var_10c_1 = 0
int32_t* var_110_1 = &data_b8936c
int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e3c0(&var_2c, var_110_1, var_10c_1, var_108_6)
var_8_1.b = 4
sub_669320(&var_b4, &var_44)
var_8_1.b = 0

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0

if (var_30 u>= 8)
    j__free(var_44)

sub_52e820(&var_44, u"oauth_signature_method")
var_8_1.b = 5
void* var_108_11 = 0xffffffff
int32_t var_10c_2 = 0
int16_t* var_110_2 = &data_b8930c
int32_t var_18_4 = 7
int32_t var_1c_4 = 0
var_2c = 0
sub_52e3c0(&var_2c, var_110_2, var_10c_2, var_108_11)
var_8_1.b = 6
int32_t ecx_9
int32_t edx
ecx_9, edx = sub_669320(&var_b4, &var_44)
var_8_1.b = 0

if (var_18_4 u>= 8)
    ecx_9, edx = j__free(var_2c.d)

int32_t eax_3 = 0
int32_t var_18_5 = 7
int32_t var_1c_5 = 0
var_2c = 0

if (var_30 u>= 8)
    eax_3, ecx_9, edx = j__free(var_44)

uint32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_746b5d(eax_3, edx, ecx_9, nullptr)
int32_t var_a4
int16_t* eax_5 = sub_6adb00(eax_4, edx_1, &var_a4, eax_4, edx_1)
var_8_1.b = 7
sub_52e820(&var_44, u"oauth_timestamp")
var_8_1.b = 8
void* const var_108_18 = 0xffffffff
int32_t var_10c_4 = 0
int32_t var_18_6 = 7
int32_t var_1c_6 = 0
var_2c = 0
sub_52e3c0(&var_2c, eax_5, var_10c_4, var_108_18)
var_8_1.b = 9
int32_t ecx_14 = sub_669320(&var_b4, &var_44)

if (var_18_6 u>= 8)
    ecx_14 = j__free(var_2c.d)

int32_t var_18_7 = 7
int32_t var_1c_7 = 0
var_2c = 0

if (var_30 u>= 8)
    ecx_14 = j__free(var_44)

int32_t var_30_1 = 7
var_8_1.b = 0
int32_t var_34 = 0
var_44.w = 0
int32_t var_90

if (var_90 u>= 8)
    ecx_14 = j__free(var_a4)

int32_t var_108_23 = ecx_14
sub_746b2c()
int16_t* eax_7 = sub_6ad9b0(&var_a4)
var_8_1.b = 0xa
sub_52e820(&var_44, u"oauth_nonce")
var_8_1.b = 0xb
void* var_108_25 = 0xffffffff
int32_t var_10c_5 = 0
int32_t var_18_8 = 7
int32_t var_1c_8 = 0
var_2c = 0
sub_52e3c0(&var_2c, eax_7, var_10c_5, var_108_25)
var_8_1.b = 0xc
sub_669320(&var_b4, &var_44)

if (var_18_8 u>= 8)
    j__free(var_2c.d)

int32_t var_18_9 = 7
int32_t var_1c_9 = 0
var_2c = 0

if (var_30_1 u>= 8)
    j__free(var_44)

int32_t var_30_2 = 7
var_8_1.b = 0
int32_t var_34_1 = 0
var_44.w = 0

if (var_90 u>= 8)
    j__free(var_a4)

sub_52e820(&var_44, u"oauth_version")
var_8_1.b = 0xd
void* var_108_31 = 0xffffffff
int32_t var_10c_6 = 0
int16_t* var_110_5 = &data_b89324
int32_t var_18_10 = 7
int32_t var_1c_10 = 0
var_2c = 0
sub_52e3c0(&var_2c, var_110_5, var_10c_6, var_108_31)
var_8_1.b = 0xe
sub_669320(&var_b4, &var_44)

if (var_18_10 u>= 8)
    j__free(var_2c.d)

int32_t var_18_11 = 7
int32_t var_1c_11 = 0
var_2c = 0

if (var_30_2 u>= 8)
    j__free(var_44)

int32_t var_dc = 0
int32_t var_d8 = 0
int32_t var_d4 = 0
var_8_1.b = 0xf
sub_52e820(&var_44, u"user_id")
var_8_1.b = 0x10
void* var_108_36 = 0xffffffff
int32_t var_10c_7 = 0
int32_t* var_110_6 = &data_b8939c
int32_t var_18_12 = 7
int32_t var_1c_12 = 0
var_2c = 0
sub_52e3c0(&var_2c, var_110_6, var_10c_7, var_108_36)
var_8_1.b = 0x11
sub_669320(&var_dc, &var_44)

if (var_18_12 u>= 8)
    j__free(var_2c.d)

int32_t var_18_13 = 7
int32_t var_1c_13 = 0
var_2c = 0

if (var_30_2 u>= 8)
    j__free(var_44)

char* var_d0 = nullptr
int32_t var_cc = 0
int32_t var_c8 = 0
var_8_1.b = 0x12
void* var_108_40 = nullptr
void* const var_10c_8 = &data_ad7c90
int32_t var_78 = 7
int32_t var_7c = 0
int16_t var_8c = 0
sub_52e720(&var_8c, var_10c_8, var_108_40)
var_8_1.b = 0x13
int16_t var_74
sub_52e820(&var_74, &data_af9150)
var_8_1.b = 0x14
void var_11c
char* var_c4 = &var_11c
sub_52e820(&var_11c, &data_ad7c90)
var_8_1.b = 0x15
void var_134
void* var_c0 = &var_134
sub_52e820(&var_134, u"/1.1/users/show.json")
var_8_1.b = 0x16
int32_t* var_138_1 = &var_d0
int32_t* var_13c = &data_b89384
int16_t* var_140 = &var_8c
void var_14c
void* var_e0 = &var_14c
sub_6695d0(&var_14c, &var_b4)
var_8_1.b = 0x17
var_8_1.b = 0x14
void var_158
int32_t ebx
ebx.b = sub_664d00(sub_6695d0(&var_158, &var_dc), &var_74, &data_b892c4) == 0
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74.d)

var_8_1.b = 0x12
int32_t var_60_1 = 7
int32_t var_64 = 0
var_74 = 0

if (var_78 u>= 8)
    j__free(var_8c.d)

char* edi = var_d0

if (ebx.b == 0)
    int32_t var_a8
    int32_t var_108_44 = var_a8
    int32_t var_90_1 = 0xf
    char* edx_4 = edi
    char* ecx_31 = edi
    
    if (edi == var_cc)
        edx_4 = nullptr
    
    int32_t var_94_1 = 0
    var_a4.b = 0
    
    if (edi == var_cc)
        ecx_31 = nullptr
    
    sub_66bdc0(&var_a4, ecx_31, var_cc - edi + edx_4)
    int32_t var_f4 = 0
    var_8_1.b = 0x19
    char* eax_13 = edi
    
    if (edi == var_cc)
        eax_13 = nullptr
    
    var_c4 = eax_13
    char* eax_14 = edi
    
    if (edi == var_cc)
        eax_14 = nullptr
    
    var_c0 = eax_14 - edi + var_cc
    int32_t* lpText_2
    int32_t ecx_34 = sub_66a0b0(&var_c4, &var_f4, &lpText_2, &var_c4, &var_c0)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        ecx_34 = j__free(lpText_2)
    
    int32_t var_108_47 = ecx_34
    int32_t* var_ec
    int32_t** var_bc
    sub_670700(&var_bc, var_ec)
    var_8_1.b = 0x1a
    sub_541920(&lpText_2, "name")
    ebx.b = *sub_670260(&var_bc, &var_a8, &lpText_2) != var_bc
    
    if (var_48 u>= 0x10)
        j__free(lpText_2)
    
    if (ebx.b == 0)
        sub_52e820(&lpText_2, &data_af918c)
        int32_t* lpText_1 = &lpText_2
        
        if (var_48 u>= 8)
            lpText_1 = lpText_2
        
        MessageBoxW(data_4ebe3ac, lpText_1, 0xaef64c, MB_ICONEXCLAMATION)
        sub_52e8a0(&lpText_2)
    else
        sub_541920(&var_8c, "name")
        var_8_1.b = 0x1b
        char* eax_20 = sub_66ffa0(sub_66ff20(&var_bc, &var_8c), &lpText_2)
        var_8_1.b = 0x1c
        int32_t var_60_2 = 0xf
        int32_t var_64_1 = 0
        var_74.b = 0
        sub_541b40(&var_74, eax_20, 0, 0xffffffff)
        var_8_1.b = 0x1d
        int16_t* eax_21 = sub_6af2a0(&var_2c)
        var_8_1.b = 0x1e
        
        if (eax_21 != &data_b893b4)
            sub_52e3c0(&data_b893b4, eax_21, 0, 0xffffffff)
        
        sub_52e8a0(&var_2c)
        
        if (var_60_2 u>= 0x10)
            j__free(var_74.d)
        
        int32_t var_60_3 = 0xf
        int32_t var_64_2 = 0
        var_74.b = 0
        
        if (var_48 u>= 0x10)
            j__free(lpText_2)
        
        var_8_1.b = 0x1a
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        lpText_2.b = 0
        
        if (var_78 u>= 0x10)
            j__free(var_8c.d)
        
        void** lpCaption = data_bac510 + 0x1c
        int32_t var_78_1 = 0xf
        int32_t var_7c_1 = 0
        var_8c.b = 0
        
        if (lpCaption[5] u>= 8)
            lpCaption = *lpCaption
        
        int32_t* lpText = &data_b8927c
        
        if (data_b89290 u>= 8)
            lpText = data_b8927c
        
        MessageBoxW(data_4ebe3ac, lpText, lpCaption, MB_OK)
        sub_67cac0(data_bac4d0 + 0x1dac4)
    
    var_8_1.b = 0x19
    int32_t** eax_22 = var_bc
    ebx.b = 1
    sub_670b10(&var_bc, &var_a8, *eax_22, eax_22)
    j__free(var_bc)
    sub_670c00(&var_f4)
    
    if (var_90_1 u>= 0x10)
        j__free(var_a4)
else
    ebx.b = 0

if (edi != 0)
    j__free(edi)

sub_665e80(&var_dc)
sub_665e80(&var_b4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
