// 函数: sub_5cb970
// 地址: 0x5cb970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbb7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac4a0
void* edi = data_bac404
int32_t var_48 = 7
int32_t var_4c = 0
int32_t ecx = *(eax_3 + 0x14)
int32_t ebx = *(eax_3 + 0x10)
int32_t ecx_1 = *(eax_3 + 0x20)
int32_t eax_4 = *(eax_3 + 0x24)
int16_t var_5c = 0
sub_52e720(&var_5c, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"siglus_engine_movie_wnd", 0x17)
var_8_1.b = 1
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"siglus_engine_movie_wnd", 0x17)
var_8_1.b = 2
HWND eax_6 = *(data_bac454 + 4)

if (edi + 0x78 != &var_2c)
    sub_52e3c0(edi + 0x78, &var_2c, 0, 0xffffffff)

PWSTR lpClassName

if (*(edi + 0x8c) u< 8)
    lpClassName = edi + 0x78
else
    lpClassName = *(edi + 0x78)

bool eax_8 =
    sub_6bfba0(UnregisterClassW(lpClassName, data_4ebe3a8), 0xffff, edi + 0x78, 0xffff, WHITE_BRUSH)

if (eax_8 != 0)
    eax_8 = sub_6bfcd0(edi, &var_44, edi + 0x78, &var_5c, ebx, ecx, ecx_1, eax_4, 0, 0x46000000, 
        WS_EX_LEFT, 0, 0, eax_6) != 0

ebx.b = eax_8 == 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_8_2 = 0xffffffff
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t result

if (ebx.b == 0)
    result.b = 1
else
    int32_t var_8c
    int16_t* eax_9 = sub_6b9ed0(&var_8c)
    int32_t var_8_3 = 3
    int16_t var_74
    int16_t* eax_10 = sub_548cb0(eax_9, 0xaf2dec, &var_74, eax_9)
    var_8_3.b = 4
    sub_684160(data_bac424, 2, eax_10)
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
