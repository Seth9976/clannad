// 函数: sub_6bfba0
// 地址: 0x6bfba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbf48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t param0
_memset(&param0, 0, 0x30)
HINSTANCE hInstance = data_4ebe3a8
param0 = 0x30
int32_t var_58 = 0x23
LRESULT (__stdcall* var_54)(int32_t arg1, uint32_t arg2, WPARAM arg3, int32_t* arg4) = sub_6bfec0
int32_t var_50 = 0
int32_t var_4c = 0
HINSTANCE hInstance_1 = hInstance
HICON var_44 = LoadIconW(hInstance, zx.d(arg2))
int32_t var_40 = 0
HGDIOBJ var_3c = GetStockObject(arg5)

if (ebx[5] u>= 8)
    ebx = *ebx

uint32_t var_38 = zx.d(arg4)
int32_t* var_34 = ebx
int32_t var_30 = 0
uint16_t result

if (RegisterClassExW(&param0) != 0)
    result.b = 1
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, u"RegisterClassEx", 0xf)
    int32_t var_8_1 = 0
    enum WIN32_ERROR eax_8 = GetLastError()
    sub_6b9c90(eax_8, eax_8, 2, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
