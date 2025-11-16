// 函数: sub_6167e0
// 地址: 0x6167e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf3f3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_28c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_60e050()
sub_683ad0(0)
struct NT3::C_window_base::VTable* dwInitParam
sub_6169d0(&dwInitParam)
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"change_resolution_warning", 0x19)
var_8_1.b = 1
HWND hWndParent = data_4ebe3ac
int32_t var_278
int32_t esi

if (var_278 == 0)
    void var_274
    sub_52e3c0(&var_274, &var_2c, 0, 0xffffffff)
    char var_224_1 = 0
    esi = DialogBoxParamW(data_4ebe3a8, 0xc4, hWndParent, sub_6bfec0, &dwInitParam)
else
    esi = 0

var_8_1.b = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (esi != 2)
    sub_683ad0(1)
else
    void* edx_1 = data_bac4a0
    int32_t* ecx_3 = data_bac4e4
    *ecx_3 = *(edx_1 + 0x78)
    ecx_3[1] = *(edx_1 + 0x7c)
    ecx_3[2] = *(edx_1 + 0x80)
    ecx_3[3] = *(edx_1 + 0x84)
    ecx_3[4] = *(edx_1 + 0x88)
    ecx_3[5] = *(edx_1 + 0x8c)
    int32_t var_284 = *(edx_1 + 0x90)
    int32_t var_280_1 = *(edx_1 + 0x94)
    int32_t eax_11
    eax_11.b = *(edx_1 + 0x98)
    ecx_3[6].b = eax_11.b
    ecx_3[8] = *(edx_1 + 0x9c)
    ecx_3[0xa] = *(edx_1 + 0xa0)
    sub_615080()
    char eax_14
    int32_t edx_2
    eax_14, edx_2 = sub_614c70(1)
    
    if (eax_14 != 0)
        int32_t eax_16 = *data_bac4e4
        
        if (eax_16 == 0)
            edx_2.b = 0
            sub_6152f0(&var_284, edx_2.b)
        else if (eax_16 == 2)
            edx_2.b = 0
            sub_615520(&var_284, edx_2.b)
        else if (eax_16 == 1)
            sub_6157c0(eax_16, edx_2, &var_284, 0)
        
        sub_614e40()
        data_bac400 -= 1
        sub_683ad0(1)

sub_616a80(&dwInitParam)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
