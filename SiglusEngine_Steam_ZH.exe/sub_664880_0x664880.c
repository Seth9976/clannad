// 函数: sub_664880
// 地址: 0x664880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c55b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_esi
int32_t var_74 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_68 = 0
void* var_4c
sub_52e820(&var_4c, *(arg1 + 8))
int32_t var_c_1 = 0
void* const result = *(data_bac510 + 0xa4dfc4)
int16_t var_64
int32_t ebx

if (result == 0)
    ebx.b = 0
else
    int16_t* eax_7 = sub_53d730(&var_4c, &var_64, 0, result)
    var_c_1.b = 1
    var_68 = 1
    void** ecx_3 = data_bac510 + 0xa4dfb4
    int32_t edx_1 = ecx_3[4]
    
    if (ecx_3[5] u>= 8)
        ecx_3 = *ecx_3
    
    int32_t var_78_2 = edx_1
    result = sub_536340(eax_7, ecx_3, *(eax_7 + 0x10), ecx_3)
    
    if (result != 0)
        ebx.b = 0
    else
        ebx.b = 1

int32_t var_c_2 = 0

if ((var_68.b & 1) != 0)
    int32_t var_50
    
    if (var_50 u>= 8)
        j__free(var_64.d)
    
    result = nullptr
    int32_t var_50_1 = 7
    int32_t var_54_1 = 0
    var_64 = 0

if (ebx.b != 0)
    HWND hWnd = data_bac4f8
    *arg2 = 1
    SendMessageW(hWnd, 0x10, 0, 0)
    int32_t var_34
    int16_t* eax_11 = sub_53d730(&var_4c, &var_34, *(data_bac510 + 0xa4dfc4) + 1, 0xffffffff)
    var_c_2.b = 2
    var_64 = 0
    int32_t var_50_2 = 7
    int32_t var_54_2 = 0
    sub_52e3c0(&var_64, eax_11, 0, 0xffffffff)
    var_c_2.b = 3
    sub_666ca0(&var_64)
    
    if (var_50_2 u>= 8)
        j__free(var_64.d)
    
    result = nullptr
    int32_t var_50_3 = 7
    int32_t var_54_3 = 0
    var_64 = 0
    int32_t var_20
    
    if (var_20 u>= 8)
        result = j__free(var_34)

int32_t var_38

if (var_38 u>= 8)
    result = j__free(var_4c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_68)
return result
