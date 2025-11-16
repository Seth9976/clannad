// 函数: sub_614160
// 地址: 0x614160
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg2
int32_t* var_14 = eax_3
int32_t* edi = arg5
int32_t* esi = arg6

if (arg3 != eax_3 && arg4 != edi)
    int32_t* ebx_1 = &esi[1]
    void* ecx = &edi[1]
    int32_t* edx = &eax_3[1]
    
    while (true)
        int32_t* var_18_1 = ecx - 0x10
        var_14 = eax_3 - 0x10
        int32_t var_48
        int32_t* var_24_1 = &var_48
        int32_t* var_4c_1 = edx - 0x10
        edi -= 0x10
        var_48 = *(eax_3 - 0x10)
        int32_t* var_1c_1 = edx - 0x10
        void var_44
        sub_5b5160(&var_44, var_4c_1)
        int32_t var_8_1 = 0
        int32_t eax_6 = *edi
        void var_54
        sub_5b5160(&var_54, var_18_1)
        int32_t var_8_2 = 0xffffffff
        ebx_1 -= 0x10
        esi -= 0x10
        
        if (arg7(eax_6) == 0)
            *esi = *edi
            sub_6143d0(ebx_1, var_18_1)
            eax_3 = &var_14[4]
            ecx = var_18_1
            edx = &var_1c_1[4]
            var_14 = eax_3
            
            if (arg4 == edi)
                break
        else
            *esi = *var_14
            sub_6143d0(ebx_1, var_1c_1)
            edi = &edi[4]
            eax_3 = var_14
            ecx = &var_18_1[4]
            
            if (arg3 == eax_3)
                break
            
            edx = var_1c_1

int32_t* eax_11 = sub_614520(eax_3, edi, arg4, esi)
int32_t* result = sub_614520(eax_11, var_14, arg3, eax_11)
fsbase->NtTib.ExceptionList = ExceptionList
return result
