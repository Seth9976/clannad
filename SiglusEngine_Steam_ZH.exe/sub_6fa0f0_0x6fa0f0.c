// 函数: sub_6fa0f0
// 地址: 0x6fa0f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cdf00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg1 != 0)
    int32_t eax_5 = (*(*arg1 + 0x110))(arg1)
    void var_5c
    void var_44
    
    if (eax_5 s< 0)
        void* var_20 = &var_44
        sub_52e820(&var_44, u"EndPass")
        int32_t var_c_1 = 0
        int16_t* eax_6
        int32_t edx
        eax_6, edx = sub_52e820(&var_5c, 0xb07ed4)
        int32_t var_c_2 = 0xffffffff
        sub_6f1ae0(eax_6, edx, eax_5)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    eax_3 = (*(*arg1 + 0x114))(arg1)
    
    if (eax_3 s< 0)
        void* var_1c = &var_44
        sub_52e820(&var_44, &data_b07f30)
        int32_t var_c_3 = 1
        int16_t* eax_9
        int32_t edx_1
        eax_9, edx_1 = sub_52e820(&var_5c, 0xb07f0c)
        int32_t var_c_4 = 0xffffffff
        sub_6f1ae0(eax_9, edx_1, eax_3)
        int32_t eax_10
        eax_10.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10

eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
