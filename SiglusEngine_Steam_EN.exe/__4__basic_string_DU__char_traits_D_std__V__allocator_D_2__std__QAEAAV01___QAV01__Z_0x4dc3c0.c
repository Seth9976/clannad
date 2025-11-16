// 函数: ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@$$QAV01@@Z
// 地址: 0x4dc3c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605518
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg1[0x18]
int32_t result = 0
int32_t* ecx = nullptr
var_14 = nullptr

if (edx != 0)
    int32_t eax_4 = (**edx)(edx, 0x61d330, &var_14)
    ecx = var_14
    
    if (eax_4 s< 0)
        ecx = nullptr
    
    var_14 = ecx

int32_t var_8_1 = 0

if (ecx != 0)
    int32_t result_1 = (*(*ecx + 0x14))(ecx, arg2)
    ecx = var_14
    result = result_1

int32_t var_8_2 = 0xffffffff

if (ecx != 0)
    (*(*ecx + 8))(ecx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
