// 函数: sub_6fd250
// 地址: 0x6fd250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg1
*arg1 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

int32_t* var_48 = nullptr
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_8_1 = 0
int32_t* result = sub_6b5b30(&var_48)
int32_t* edi = var_48
int32_t* ebx

if (result.b != 0)
    int32_t* var_30
    int32_t* var_60_3 = &var_30
    int32_t var_38 = 0
    var_30 = nullptr
    int32_t* var_64_1 = &var_38
    void**** var_68_1 = nullptr
    int32_t* var_6c_1 = nullptr
    int32_t var_70_1 = 0
    int32_t* ecx = edi
    int32_t var_74 = 0
    
    if (edi == var_44)
        ecx = nullptr
    
    int32_t* eax_4
    int32_t ecx_1
    eax_4, ecx_1 =
        sub_407673(data_4ebe4b0, ecx, var_44 - edi, var_74, var_70_1, var_6c_1, var_68_1, var_64_1)
    
    if (eax_4 s>= 0)
        var_8_1.b = 4
        result = *arg1
        int32_t var_3c_1 = 0
        *arg1 = var_38
        
        if (result != 0)
            (*(*result + 8))(result)
        
        ebx.b = 1
    else
        int32_t var_60_4 = ecx_1
        int32_t* ecx_2 = var_30
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))(ecx_2)
        
        int32_t* result_1
        sub_6f6830(&result_1, ecx_2)
        var_8_1.b = 1
        int32_t* eax_6 = var_30
        int32_t var_2c
        sub_541920(&var_2c, (*(*eax_6 + 0xc))(eax_6))
        var_8_1.b = 2
        int32_t* var_4c_1 = &var_74
        sub_52e820(&var_74, u"CreateEffect")
        var_8_1.b = 3
        void var_8c
        int16_t* eax_8
        int32_t edx_4
        eax_8, edx_4 = sub_6af1e0(&var_8c)
        var_8_1.b = 2
        sub_6f1ae0(eax_8, edx_4, eax_4)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        var_8_1.b = 0
        result = result_1
        
        if (result != 0)
            (*(*result + 8))(result)
        
        ebx.b = 0
else
    ebx.b = 0

if (edi != 0)
    j__free(edi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
