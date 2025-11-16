// 函数: sub_6ae800
// 地址: 0x6ae800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_18 = arg1
int32_t var_14 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
int32_t* esi

if (arg2[5] u< 8)
    esi = arg2
else
    esi = *arg2

while (true)
    int32_t* ecx
    
    if (arg2[5] u< 8)
        ecx = arg2
    else
        ecx = *arg2
    
    if (esi == ecx + (arg2[4] << 1))
        break
    
    uint32_t eax_5 = zx.d(*esi)
    
    if (eax_5 != 0x20)
        sub_55d330(arg1, 1, eax_5.w)
    
    esi += 2

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
