// 函数: sub_666170
// 地址: 0x666170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5948
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_4 = data_bac510 + 0x1c
int32_t var_5c
sub_548cb0(eax_4, u"SOFTWARE\VisualArts\SiglusEngine\", &var_5c, eax_4)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
var_8_1.b = 1
int32_t* var_68_1 = &data_b8936c
var_8_1.b = 0
int32_t ebx
ebx.b = sub_6b4940(&var_2c, &var_5c, sub_52e720(&var_2c, u"oauth_access_token", 0x12), &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_44
int16_t* eax_7

if (ebx.b == 0)
    var_18 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    var_8_1.b = 3
    int32_t* var_68_3 = &data_b89384
    var_8_1.b = 0
    ebx.b =
        sub_6b4940(&var_2c, &var_5c, sub_52e720(&var_2c, oauth_access_token_secret", 0x19), &var_2c)
        == 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    if (ebx.b != 0)
        eax_7 = sub_6b9ed0(&var_44)
        var_8_1.b = 4
        goto label_6662fc
    
    var_18 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    var_8_1.b = 5
    int32_t* var_68_5 = &data_b8939c
    var_8_1.b = 0
    ebx.b = sub_6b4940(&var_2c, &var_5c, sub_52e720(&var_2c, u"twitter_user_id", 0xf), &var_2c) == 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    if (ebx.b != 0)
        eax_7 = sub_6b9ed0(&var_44)
        var_8_1.b = 6
        goto label_6662fc
    
    int32_t var_18_2 = 7
    int32_t var_1c_4 = 0
    var_2c = 0
    var_8_1.b = 7
    int32_t* var_68_10 = &data_b893b4
    var_8_1.b = 0
    ebx.b = sub_6b4940(&var_2c, &var_5c, sub_52e720(&var_2c, twitter_user_name", 0x11), &var_2c)
        == 0
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int16_t* ecx_14 = &var_2c
    int16_t* eax_14
    
    if (ebx.b == 0)
        int32_t var_18_3 = 7
        int32_t var_1c_5 = 0
        var_2c = 0
        var_8_1.b = 9
        int32_t* var_68_12 = &data_b893cc
        var_8_1.b = 0
        ebx.b =
            sub_6b4940(&var_2c, &var_5c, sub_52e720(ecx_14, twitter_screen_name", 0x13), &var_2c)
            == 0
        sub_52e8a0(&var_2c)
        
        if (ebx.b != 0)
            eax_14 = sub_6b9ed0(&var_2c)
            var_8_1.b = 0xa
            goto label_666437
        
        ebx.b = 1
    else
        eax_14 = sub_6b9ed0(ecx_14)
        var_8_1.b = 8
    label_666437:
        int16_t* eax_17 = sub_548cb0(eax_14, 0xaf8f54, &var_44, eax_14)
        sub_6b2a80(eax_17, data_bac510 + 0x1c, eax_17, MB_ICONEXCLAMATION)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_2c)
        ebx.b = 0
else
    eax_7 = sub_6b9ed0(&var_44)
    var_8_1.b = 2
label_6662fc:
    int16_t* lpText = sub_548cb0(eax_7, 0xaf8f54, &var_2c, eax_7)
    PWSTR lpCaption = data_bac510 + 0x1c
    
    if (*(lpCaption + 0x14) u>= 8)
        lpCaption = *lpCaption
    
    if (*(lpText + 0x14) u>= 8)
        lpText = *lpText
    
    MessageBoxW(data_4ebe3ac, lpText, lpCaption, MB_ICONEXCLAMATION)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u< 8)
        ebx.b = 0
    else
        j__free(var_44)
        ebx.b = 0
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
