// 函数: sub_5cb350
// 地址: 0x5cb350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbadb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_23c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0xa0)
int32_t result

if (eax_3 == 0)
    int16_t lpstrReturnString = eax_3.w
    char var_212[0x1fe]
    _memset(&var_212, eax_3.b, 0x1fe)
    mciSendStringW(u"status SiglusMCIMovie mode wait", &lpstrReturnString, 0x100, nullptr)
    int32_t var_218_1 = 7
    int32_t var_21c_1 = 0
    int16_t var_22c = 0
    int32_t ecx
    
    if (lpstrReturnString != 0)
        int16_t* ecx_1 = &lpstrReturnString
        int16_t i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        ecx = (ecx_1 - &var_212) s>> 1
    else
        ecx = 0
    
    sub_52e720(&var_22c, &lpstrReturnString, ecx)
    int32_t var_8_1 = 0
    int32_t result_1 = sub_5cb4a0(arg1, &var_22c)
    
    if (var_218_1 u>= 8)
        j__free(var_22c.d)
    
    result = result_1
else if (eax_3 != 1)
    result = 1
else
    int32_t* eax_4 = data_4ebe290
    int32_t var_230
    
    if (eax_4 == 0)
        result = 1
    else if ((*(*eax_4 + 0x2c))(eax_4, &var_230) s< 0)
        result = 1
    else
        result = sub_5cb600(arg1, var_230)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
