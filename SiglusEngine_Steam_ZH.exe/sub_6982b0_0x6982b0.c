// 函数: sub_6982b0
// 地址: 0x6982b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c90d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
void* edx_1 = arg3 * 0x54 + *(arg1 + 0x54)
int32_t* ebx = *(edx_1 + 0x14) + (arg4 << 3)
int32_t edi = *(edx_1 + 0x18) + (*ebx << 1)
int32_t eax_5 = ebx[1]
int32_t ecx_2
ecx_2.b = mulu.dp.d(eax_5, 2) u>> 0x20 != 0
int32_t var_28 = neg.d(ecx_2) | (eax_5 * 2)
void* eax_7 = sub_7431ed()
arg3 = eax_7
int32_t i = 0
int32_t var_8_1 = 0

if (ebx[1] s> 0)
    arg4 *= 0x7087
    void* eax_9 = eax_7
    
    do
        int16_t ecx_5 = *(edi - eax_7 + eax_9)
        eax_9 += 2
        i += 1
        *(eax_9 - 2) = ecx_5 ^ arg4.w
    while (i s< ebx[1])

int32_t var_28_1 = arg4
void* ecx_6 = eax_7 + (ebx[1] << 1)
arg2[5] = 7
arg2[4] = 0
*arg2 = 0
sub_5b2590(arg2, eax_7, ecx_6)
j__free(eax_7)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
