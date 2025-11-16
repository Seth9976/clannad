// 函数: sub_6af510
// 地址: 0x6af510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg3
int16_t* esi = edx
uint32_t edi_1

if (esi != arg4)
    edi_1 = zx.d(*esi)
    int32_t var_34_1 = 0x61

int32_t* result

if (esi == arg4 || ((0x61 u> edi_1.w || edi_1 u> 0x7a) && edi_1.w - 0x41 u> 0x19 && edi_1 != 0x5f))
    result.b = 0
else
    void* i
    
    for (i = &esi[1]; i != arg4; i += 2)
        uint32_t edi_2 = zx.d(*i)
        
        if ((0x61 u> edi_2.w || edi_2 u> 0x7a) && edi_2.w - 0x41 u> 0x19 && edi_2.w - 0x30 u> 9
                && edi_2 != 0x5f)
            break
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    
    if (edx != i)
        sub_52e720(&var_30, edx, (i - edx) s>> 1)
    
    int32_t var_8_1 = 0
    
    if (arg2 != &var_30)
        sub_52e3c0(arg2, &var_30, 0, 0xffffffff)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    *arg3 = i
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
