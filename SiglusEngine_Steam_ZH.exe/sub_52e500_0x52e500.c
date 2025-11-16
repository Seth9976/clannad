// 函数: sub_52e500
// 地址: 0x52e500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??_U@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* esi = arg1
int32_t* var_1c = esi
int32_t edi_1 = arg2 | 7

if (edi_1 u<= 0x7ffffffe)
    int32_t ebx_1 = esi[5]
    uint32_t ecx_1 = ebx_1 u>> 1
    
    if (ecx_1 u> edi_1 u/ 3)
        edi_1 = ecx_1 + ebx_1
        
        if (ebx_1 u> 0x7ffffffe - ecx_1)
            edi_1 = 0x7ffffffe
else
    edi_1 = arg2

int32_t var_8_1 = 0
int32_t* ecx_2 = nullptr
int32_t* var_18 = nullptr

if (edi_1 != 0xffffffff)
    if (edi_1 + 1 u<= 0x7fffffff)
        ecx_2 = sub_745f3f((edi_1 + 1) * 2)
        var_18 = ecx_2
    
    if (edi_1 + 1 u> 0x7fffffff || ecx_2 == 0)
        sub_743132()
        noreturn

if (arg3 != 0)
    int32_t* edx_3
    
    if (esi[5] u< 8)
        edx_3 = esi
    else
        edx_3 = *esi
    
    if (arg3 != 0)
        sub_748840(ecx_2, edx_3, arg3 * 2)

if (esi[5] u>= 8)
    j__free(*esi)

*esi = var_18
esi[5] = edi_1
esi[4] = arg3

if (edi_1 u>= 8)
    esi = var_18

*(esi + (arg3 << 1)) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
