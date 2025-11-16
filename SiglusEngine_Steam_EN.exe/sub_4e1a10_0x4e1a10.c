// 函数: sub_4e1a10
// 地址: 0x4e1a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6059f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = nullptr
int32_t var_18 = 0
int32_t var_8_1 = 0
void* eax_7
int32_t* lpMultiByteStr

if (sub_4d9150(0x12) == 0)
    int32_t* i_3 = _malloc(0x1a)
    
    if (i_3 != 0)
        i = i_3
        *i_3 = 0
        int32_t* i_2 = i
        lpMultiByteStr = &i_3[2]
        goto label_4e1a7c
    
    eax_7 = nullptr
else
    __chkstk(0x14)
    lpMultiByteStr = &var_2c
label_4e1a7c:
    
    if (lpMultiByteStr == 0)
        eax_7 = nullptr
    else
        *lpMultiByteStr = 0
        int32_t eax_4 =
            WideCharToMultiByte(3, 0, REGISTRY", 0xffffffff, lpMultiByteStr, 0x12, nullptr, nullptr)
        int32_t eax_5 = neg.d(eax_4)
        eax_7 = sbb.d(eax_5, eax_5, eax_4 != 0) & lpMultiByteStr
enum WIN32_ERROR result

if (eax_7 != 0)
    result = sub_4e14b0(arg2, zx.d(arg3), eax_7, 0)
else
    result = 0x8007000e

while (i != 0)
    int32_t* i_1 = i
    i = *i
    _free(i_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
