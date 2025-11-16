// 函数: sub_4dfde0
// 地址: 0x4dfde0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_60580b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 0

if ((*(arg1 + 0x14) & 2) != 0)
    for (int32_t* i = *(arg1 + 8); i != *(arg1 + 0xc); i = &i[1])
        int32_t* ecx = *i
        
        if (ecx != 0)
            (*(*ecx + 8))(ecx)
    
    result = j__free(*(arg1 + 8))

int32_t var_8_2 = 0xffffffff
int32_t* ecx_1 = *(arg1 + 4)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 8))(ecx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
