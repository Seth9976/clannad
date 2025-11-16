// 函数: sub_6664a0
// 地址: 0x6664a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5a55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = data_b89380 u>= 8
int32_t* eax_3 = &data_b8936c
data_b8937c = 0

if (cond:0)
    eax_3 = data_b8936c

*eax_3 = 0
int32_t* eax_4 = &data_b89384
bool cond:1 = data_b89398 u>= 8
data_b89394 = 0

if (cond:1)
    eax_4 = data_b89384

*eax_4 = 0
int32_t* eax_5 = &data_b8939c
bool cond:2 = data_b893b0 u>= 8
data_b893ac = 0

if (cond:2)
    eax_5 = data_b8939c

*eax_5 = 0
int32_t* eax_6 = &data_b893b4
bool cond:3 = data_b893c8 u>= 8
data_b893c4 = 0

if (cond:3)
    eax_6 = data_b893b4

*eax_6 = 0
int32_t* eax_7 = &data_b893cc
bool cond:4 = data_b893e0 u>= 8
data_b893dc = 0

if (cond:4)
    eax_7 = data_b893cc

*eax_7 = 0
sub_67cac0(data_bac4d0 + 0x1dac4)
int32_t var_b4 = 0
int32_t var_b0 = 0
int32_t var_ac = 0
int32_t var_8_1 = 0
void** esi_1 = data_bac510 + 0xa4dfb4
int16_t var_74
sub_52e820(&var_74, u"oauth_callback")
var_8_1.b = 1
void* var_e8_1 = 0xffffffff
int32_t var_ec = 0
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e3c0(&var_5c, esi_1, var_ec, var_e8_1)
var_8_1.b = 2
sub_669320(&var_b4, &var_74)
var_8_1.b = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c_1 = 0
var_5c = 0
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
int16_t* var_e8_5 = u"oauth_consumer_key"
int32_t var_64 = 0
void** esi_3 = data_bac510 + 0xa4df84
var_74 = 0
int32_t var_44
sub_52e820(&var_44, var_e8_5)
var_8_1.b = 3
void* var_e8_6 = 0xffffffff
int32_t var_ec_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e3c0(&var_2c, esi_3, var_ec_1, var_e8_6)
var_8_1.b = 4
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

sub_52e820(&var_74, u"oauth_signature_method")
var_8_1.b = 5
void* var_e8_11 = 0xffffffff
int32_t var_ec_2 = 0
int16_t* var_f0_2 = &data_b8930c
int32_t var_48_2 = 7
int32_t var_4c_2 = 0
var_5c = 0
sub_52e3c0(&var_5c, var_f0_2, var_ec_2, var_e8_11)
var_8_1.b = 6
int32_t ecx_11
int32_t edx
ecx_11, edx = sub_669320(&var_b4, &var_74)
var_8_1.b = 0

if (var_48_2 u>= 8)
    ecx_11, edx = j__free(var_5c.d)

int32_t eax_8 = 0
int32_t var_48_3 = 7
int32_t var_4c_3 = 0
var_5c = 0

if (var_60_1 u>= 8)
    eax_8, ecx_11, edx = j__free(var_74.d)

uint32_t eax_9
int32_t edx_1
eax_9, edx_1 = sub_746b5d(eax_8, edx, ecx_11, nullptr)
int16_t* eax_10 = sub_6adb00(eax_9, edx_1, &var_5c, eax_9, edx_1)
var_8_1.b = 7
sub_52e820(&var_44, u"oauth_timestamp")
var_8_1.b = 8
void* const var_e8_18 = 0xffffffff
int32_t var_ec_4 = 0
int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e3c0(&var_2c, eax_10, var_ec_4, var_e8_18)
var_8_1.b = 9
int32_t ecx_16 = sub_669320(&var_b4, &var_44)

if (var_18_2 u>= 8)
    ecx_16 = j__free(var_2c.d)

int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0

if (var_30 u>= 8)
    ecx_16 = j__free(var_44)

int32_t var_30_1 = 7
var_8_1.b = 0
int32_t var_34 = 0
var_44.w = 0

if (var_48_3 u>= 8)
    ecx_16 = j__free(var_5c.d)

int32_t var_e8_23 = ecx_16
sub_746b2c()
int16_t* eax_12 = sub_6ad9b0(&var_5c)
var_8_1.b = 0xa
sub_52e820(&var_44, u"oauth_nonce")
var_8_1.b = 0xb
void* var_e8_25 = 0xffffffff
int32_t var_ec_5 = 0
int32_t var_18_4 = 7
int32_t var_1c_4 = 0
var_2c = 0
sub_52e3c0(&var_2c, eax_12, var_ec_5, var_e8_25)
var_8_1.b = 0xc
sub_669320(&var_b4, &var_44)

if (var_18_4 u>= 8)
    j__free(var_2c.d)

int32_t var_18_5 = 7
int32_t var_1c_5 = 0
var_2c = 0

if (var_30_1 u>= 8)
    j__free(var_44)

int32_t var_30_2 = 7
var_8_1.b = 0
int32_t var_34_1 = 0
var_44.w = 0

if (var_48_3 u>= 8)
    j__free(var_5c.d)

sub_52e820(&var_74, u"oauth_version")
var_8_1.b = 0xd
void* var_e8_31 = 0xffffffff
int32_t var_ec_6 = 0
int16_t* var_f0_5 = &data_b89324
int32_t var_48_4 = 7
int32_t var_4c_4 = 0
var_5c = 0
sub_52e3c0(&var_5c, var_f0_5, var_ec_6, var_e8_31)
var_8_1.b = 0xe
sub_669320(&var_b4, &var_74)

if (var_48_4 u>= 8)
    j__free(var_5c.d)

int32_t var_48_5 = 7
int32_t var_4c_5 = 0
var_5c = 0

if (var_60_1 u>= 8)
    j__free(var_74.d)

char* var_c8 = nullptr
int32_t var_c4 = 0
int32_t var_c0 = 0
var_8_1.b = 0xf
void* var_e8_35 = nullptr
void* const var_ec_7 = &data_ad7c90
int32_t var_48_6 = 7
int32_t var_4c_6 = 0
var_5c = 0
sub_52e720(&var_5c, var_ec_7, var_e8_35)
var_8_1.b = 0x10
void* var_e8_36 = nullptr
void* const var_ec_8 = &data_ad7c90
int32_t var_18_6 = 7
int32_t var_1c_6 = 0
var_2c = 0
sub_52e720(&var_2c, var_ec_8, var_e8_36)
var_8_1.b = 0x11
void* const var_e8_37 = 4
int32_t var_78 = 7
int32_t* var_ec_9 = u"POST"
int32_t var_7c = 0
int16_t var_8c = 0
sub_52e720(&var_8c, var_ec_9, var_e8_37)
var_8_1.b = 0x12
void var_fc
void* var_cc = &var_fc
sub_52e820(&var_fc, &data_ad7c90)
var_8_1.b = 0x13
void var_114
void* var_d0 = &var_114
sub_52e820(&var_114, u"/oauth/request_token")
var_8_1.b = 0x14
int32_t* var_118_1 = &var_c8
int16_t* var_11c = &var_5c
int16_t* var_120 = &var_2c
void var_12c
sub_6695d0(&var_12c, &var_b4)
int32_t var_138 = 0
var_8_1.b = 0x12
int32_t ebx
ebx.b = sub_664d00(&var_138, &var_8c, &data_b892c4, var_138, 0, 0) == 0

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_78_1 = 7
int32_t var_7c_1 = 0
var_8c = 0

if (var_18_6 u>= 8)
    j__free(var_2c.d)

var_8_1.b = 0xf
int32_t var_18_7 = 7
int32_t var_1c_7 = 0
var_2c = 0

if (var_48_6 u>= 8)
    j__free(var_5c.d)

char* edi = var_c8

if (ebx.b == 0)
    int32_t var_a8
    int32_t var_e8_41 = var_a8
    int32_t var_18_8 = 0xf
    char* esi_6 = edi
    
    if (edi == var_c4)
        esi_6 = nullptr
    
    char* ecx_30 = edi
    int32_t var_1c_8 = 0
    var_2c.b = 0
    
    if (edi == var_c4)
        ecx_30 = nullptr
    
    sub_66bdc0(&var_2c, ecx_30, esi_6 + var_c4 - edi)
    var_8_1.b = 0x15
    int16_t var_a4
    sub_6af1e0(&var_a4)
    var_8_1.b = 0x17
    
    if (var_18_8 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_9 = 0xf
    int32_t var_1c_9 = 0
    var_2c.b = 0
    int32_t** var_bc
    sub_664410(&var_bc, &var_a4)
    var_8_1.b = 0x18
    sub_52e820(&var_5c, u"oauth_token")
    var_8_1.b = 0x19
    void* eax_17 = sub_668e40(&var_bc, &var_5c)
    
    if (eax_17 != &data_b8933c)
        sub_52e3c0(&data_b8933c, eax_17, 0, 0xffffffff)
    
    var_8_1.b = 0x18
    
    if (var_48_6 u>= 8)
        j__free(var_5c.d)
    
    sub_52e820(&var_5c, u"oauth_token_secret")
    var_8_1.b = 0x1a
    void* eax_18
    int32_t edx_7
    eax_18, edx_7 = sub_668e40(&var_bc, &var_5c)
    
    if (eax_18 != &data_b89354)
        eax_18, edx_7 = sub_52e3c0(&data_b89354, eax_18, 0, 0xffffffff)
    
    var_8_1.b = 0x18
    
    if (var_48_6 u>= 8)
        eax_18, edx_7 = j__free(var_5c.d)
    
    sub_669a10(eax_18, edx_7, data_4ebe3a8, data_4ebe3ac)
    int32_t** eax_19 = var_bc
    ebx.b = 1
    sub_641d30(&var_bc, &var_a8, *eax_19, eax_19)
    j__free(var_bc)
    int32_t var_90
    
    if (var_90 u>= 8)
        j__free(var_a4.d)
    
    int32_t var_90_1 = 7
    int32_t var_94_1 = 0
    var_a4 = 0
else
    ebx.b = 0

if (edi != 0)
    j__free(edi)

sub_665e80(&var_b4)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
