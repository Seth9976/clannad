// 函数: sub_6df2c0
// 地址: 0x6df2c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cca08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE ebx = *arg1
HANDLE var_18 = ebx

if (ebx != 0)
    result = WaitForSingleObject(ebx, 0xffffffff)

int32_t var_8_1 = 0
void* edi = arg1[0x48]

if (edi != 0 && arg1[1] != 0)
    int32_t esi_1 = arg3
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(edi + 8))
    int32_t temp0_1 = divs.dp.d(sx.q(*(edi + 0x10)), (((edx_1 & 7) + eax_4) s>> 3) * *(edi + 4))
    
    if (esi_1 == 0xffffffff)
        esi_1 = temp0_1
    else if (esi_1 s< 0)
        esi_1 = 0
    else if (esi_1 s> temp0_1)
        esi_1 = temp0_1
    
    int32_t ecx_3 = arg2
    
    if (ecx_3 s< 0)
        ecx_3 = 0
    else if (ecx_3 s> esi_1)
        ecx_3 = esi_1
    
    int32_t eax_8 = arg4
    
    if (eax_8 s>= 0)
        if (eax_8 s> esi_1)
            eax_8 = esi_1
        
        arg4 = eax_8
    else
        arg4 = 0
    
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(*(edi + 8) * *(edi + 4) * ecx_3)
    int32_t ecx_5 = ((edx_5 & 7) + eax_12) s>> 3
    arg1[0xb] = ecx_5
    int32_t eax_17
    int32_t edx_7
    edx_7:eax_17 = sx.q(*(edi + 8) * *(edi + 4) * esi_1)
    arg1[0xc] = (eax_17 + (edx_7 & 7)) s>> 3
    int32_t eax_23
    int32_t edx_9
    edx_9:eax_23 = sx.q(*(edi + 8) * *(edi + 4) * arg4)
    arg1[0xd] = (eax_23 + (edx_9 & 7)) s>> 3
    result = sub_6df0b0(arg1, ecx_5)

if (ebx != 0)
    result = ReleaseSemaphore(ebx, 1, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
return result
