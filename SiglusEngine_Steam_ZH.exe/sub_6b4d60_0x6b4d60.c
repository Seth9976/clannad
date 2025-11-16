// 函数: sub_6b4d60
// 地址: 0x6b4d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caedb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_244 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_238 = 0
int16_t lpszFile
DragQueryFileW(arg2, 0, &lpszFile, 0x104)
DragFinish(arg2)
int32_t var_220 = 7
int32_t var_224 = 0
int16_t var_234 = 0
int32_t ecx

if (lpszFile != 0)
    int16_t* ecx_1 = &lpszFile
    int16_t i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_21a
    ecx = (ecx_1 - &var_21a) s>> 1
else
    ecx = 0

sub_52e720(&var_234, &lpszFile, ecx)
int32_t var_8_1 = 0
sub_6b50c0(arg1, &var_234)

if (var_220 u>= 8)
    j__free(var_234.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
