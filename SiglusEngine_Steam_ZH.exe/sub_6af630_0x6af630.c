// 函数: sub_6af630
// 地址: 0x6af630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *arg3
int16_t* result_1

if (result != arg4)
    result_1 = result + 2

if (result == arg4 || *result != 0x22)
    result.b = 0
else
    int32_t edi_1 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    int32_t var_8_1 = 0
    int32_t* ebx
    
    while (true)
        if (result_1 == arg4)
            ebx.b = 0
            break
        
        uint32_t ecx = zx.d(*result_1)
        result = &result_1[1]
        result_1 = result
        
        if (edi_1 != 0)
            if (edi_1 == 1)
                sub_55d330(&var_2c, edi_1, ecx.w)
                edi_1 = 0
        else if (ecx != 0x5c)
            if (ecx == 0x22)
                *arg3 = result
                
                if (arg2 != &var_2c)
                    sub_52e3c0(arg2, &var_2c, 0, 0xffffffff)
                
                ebx.b = 1
                break
            
            sub_55d330(&var_2c, 1, ecx.w)
        else
            edi_1 = ecx - 0x5b
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
