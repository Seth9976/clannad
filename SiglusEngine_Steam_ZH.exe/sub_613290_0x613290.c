// 函数: sub_613290
// 地址: 0x613290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bef20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
void* const ebx

if (sub_626410(arg2, &result_1) != 0)
    int32_t* ecx_1 = nullptr
    int32_t edx_1 = 0
    *(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
    int32_t var_20 = 0
    int32_t* var_1c_1 = nullptr
    int32_t var_18_1 = 0
    var_8_1.b = 1
    ebx = nullptr
    int32_t* result_2 = result_1
    int32_t* result_3 = result_2
    
    if (result_2 == var_28)
    label_61339e:
        int32_t* var_44_4 = &var_20
        
        if (sub_6131c0(arg1, ecx_1) != 0)
            ebx.b = 1
        else
            ebx.b = 0
    else
        while (true)
            void* edi_1 = *(*result_3 + 0x128)
            
            if (edi_1 != ebx)
                int32_t* var_44_1 = &var_20
                
                if (sub_6131c0(arg1, ecx_1) == 0)
                    break
                
                ecx_1 = var_1c_1
                edx_1 = var_20
            
            ebx = edi_1
            
            if (result_3 u>= ecx_1 || edx_1 u> result_3)
                if (ecx_1 == var_18_1)
                    int32_t* var_44_3 = ecx_1
                    sub_530c10(&var_20)
                    ecx_1 = var_1c_1
                    edx_1 = var_20
                
                if (ecx_1 != 0)
                    *ecx_1 = *result_3
            else
                int32_t edi_4 = (result_3 - edx_1) s>> 2
                
                if (ecx_1 == var_18_1)
                    int32_t* var_44_2 = ecx_1
                    sub_530c10(&var_20)
                    ecx_1 = var_1c_1
                    edx_1 = var_20
                
                if (ecx_1 != 0)
                    *ecx_1 = *(edx_1 + (edi_4 << 2))
            
            ecx_1 = &ecx_1[1]
            result_3 = &result_3[1]
            var_1c_1 = ecx_1
            
            if (result_3 == var_28)
                goto label_61339e
        
        ebx.b = 0
    
    int32_t eax_9 = var_20
    
    if (eax_9 != 0)
        j__free(eax_9)
else
    ebx.b = 0

int32_t* result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
