// 函数: sub_611d30
// 地址: 0x611d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bed98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_68 = arg1
int32_t* result_1
sub_6f3910(*(arg1 + 0x1be8), &result_1)
int32_t var_8_1 = 0
int32_t* result = result_1
int32_t ebx

if (result == 0)
    ebx.b = 0
else
    sub_6f5d30(result)
    sub_6f5e50(**(arg1 + 0x1be0))
    void* eax_4 = *(arg1 + 0x1be8)
    int32_t var_1c_1 = data_4ebe6a8
    int32_t xmm0_2 = data_4ebe6ac
    int32_t ecx_1 = *(eax_4 + 0x10)
    int32_t var_24_1 = *(eax_4 + 0xc)
    int32_t* eax_6 = data_4ebe4b0
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_20_1 = ecx_1
    int32_t var_18_1 = xmm0_2
    int32_t eax_7 = (*(*eax_6 + 0xbc))(eax_6, &var_2c)
    
    if (eax_7 s< 0)
        void var_7c
        int16_t* eax_8
        int32_t edx_1
        eax_8, edx_1 = sub_52e820(&var_7c, u"SetViewport")
        sub_6f1a40(eax_8, edx_1, eax_7, var_7c)
    
    if (sub_6f60f0(0) == 0)
        result = result_1
        ebx.b = 0
    else
        void* eax_10 = data_bac4a0
        ebx.b = 1
        int32_t var_38_1 = 0
        int32_t var_34_1 = *(eax_10 + 8)
        result = result_1
        int32_t var_30_1 = *(eax_10 + 0xc)
        *(arg1 + 0x1a60) = 0.o

int32_t var_8_2 = 0xffffffff

if (result != 0)
    (*(*result + 8))(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
