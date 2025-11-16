// 函数: sub_66e300
// 地址: 0x66e300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6718
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_5c
int16_t* ebx = arg1
int16_t* var_48 = ebx
int32_t var_8_1 = 0
var_8_1.b = 2
int16_t* edi = arg6
int16_t* esi = arg4
int16_t* var_34 = arg5
int16_t* eax_4 = arg3
int32_t var_38 = 0
int32_t result_1
int32_t ebx_1

while (true)
    char edx
    
    if (result_1 == 0 || arg7 != 0)
        edx = 1
    else
        edx = 0
    
    ebx_1 = arg8
    
    if (ebx_1 == 0 || arg13 != 0)
        arg1.b = 1
    else
        arg1.b = 0
    
    bool eax_6
    
    if (edx != 0 || arg1.b != 0)
        eax_6 = edx == arg1.b
    else if ((((esi - eax_4) ^ (arg10 - arg9)) & 0xfffffffe) != 0)
    label_66e3ca:
        ebx_1 = arg8
        eax_6 = false
    else
        if (eax_4 != esi)
            void* ebx_3 = arg9 - eax_4
            
            do
                int32_t ecx_1
                ecx_1.w = *eax_4
                
                if (ecx_1.w != *(eax_4 + ebx_3))
                    goto label_66e3ca
                
                eax_4 = &eax_4[1]
            while (eax_4 != esi)
        
        if (var_34 != arg11 || edi != arg12)
            goto label_66e3ca
        
        ebx_1 = arg8
        eax_6 = true
    
    if (eax_6 != 0)
        break
    
    int32_t var_30
    int16_t* eax_7 = sub_66ead0(&result_1, &var_30)
    var_8_1.b = 3
    int32_t* eax_8 = sub_66f300(arg2, *(arg2 + 4), eax_7)
    int32_t eax_9 = *(ebx + 4)
    
    if (0x7fffffe - eax_9 u< 1)
        sub_743191("list<T> too long")
        noreturn
    
    *(ebx + 4) = eax_9 + 1
    *(arg2 + 4) = eax_8
    var_8_1.b = 2
    *eax_8[1] = eax_8
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    int16_t* var_40
    int16_t* var_3c
    
    if (result_1 == 0)
        edi = arg6
        arg1 = edi
        esi = edi
        var_34 = arg1
        var_40 = esi
        var_3c = arg1
    label_66e497:
        char eax_13 = arg7
        
        if (arg4 == edi)
            eax_13 = 1
        
        arg7 = eax_13
    else
        int16_t* var_60_4 = arg6
        sub_6064f0(&result_1, &var_40, arg5)
        esi = var_40
        edi = arg6
        arg1 = var_3c
        var_34 = arg1
        
        if (esi == edi)
            if (arg1 == edi)
                goto label_66e497
            
            eax_4 = arg5
            var_38 += 1
            arg3 = eax_4
            arg4 = esi
            arg5 = arg1
            continue
    eax_4 = arg5
    var_38 += 1
    arg3 = eax_4
    arg4 = esi
    arg5 = arg1

int32_t var_8_2 = 0
int32_t result = result_1

if (result != 0)
    if ((result.b & 1) == 0)
        result = *(result & 0xfffffffe)
        
        if (result != 0)
            void arg_14
            result = result(&arg_14, &arg_14, 2)
            ebx_1 = arg8
    
    result_1 = 0

int32_t var_8_3 = 0xffffffff

if (ebx_1 != 0 && (ebx_1.b & 1) == 0)
    result = *(ebx_1 & 0xfffffffe)
    void arg_54
    
    if (result != 0)
        result = result(&arg_54, &arg_54, 2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
