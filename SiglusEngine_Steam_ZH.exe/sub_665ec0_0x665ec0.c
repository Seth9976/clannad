// 函数: sub_665ec0
// 地址: 0x665ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c58c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
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
void** eax_9 = data_bac510 + 0x1c
int32_t var_44
sub_548cb0(eax_9, u"SOFTWARE\VisualArts\SiglusEngine\", &var_44, eax_9)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"oauth_access_token", 0x12)
var_8_1.b = 1
sub_6b46c0(&var_2c, &var_44, 0x80000001, &var_2c, &data_b8936c)
var_8_1.b = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
sub_52e720(&var_2c, u"oauth_access_token_secret", 0x19)
var_8_1.b = 2
sub_6b46c0(&var_2c, &var_44, 0x80000001, &var_2c, &data_b89384)
var_8_1.b = 0

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, u"twitter_user_id", 0xf)
var_8_1.b = 3
sub_6b46c0(&var_2c, &var_44, 0x80000001, &var_2c, &data_b8939c)
var_8_1.b = 0

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0
sub_52e720(&var_2c, u"twitter_user_name", 0x11)
var_8_1.b = 4
sub_6b46c0(&var_2c, &var_44, 0x80000001, &var_2c, &data_b893b4)
var_8_1.b = 0

if (var_18_3 u>= 8)
    j__free(var_2c.d)

int32_t var_18_4 = 7
int32_t var_1c_4 = 0
var_2c = 0
sub_52e720(&var_2c, u"twitter_screen_name", 0x13)
var_8_1.b = 5
sub_6b46c0(&var_2c, &var_44, 0x80000001, &var_2c, &data_b893cc)

if (var_18_4 u>= 8)
    j__free(var_2c.d)

int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
