// 函数: sub_6fbde0
// 地址: 0x6fbde0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb508
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *arg4
int32_t* esi = *(edx + (arg5 << 3) + 4)
void* edi = *(edx + (arg5 << 3))
void* var_18 = edi
int32_t* var_14 = esi

if (esi != 0)
    esi[1]
    esi[1] += 1

int32_t var_8_1 = 0
*(edi + 4)
int32_t* ebx

if (arg6 * 0x50 == neg.d(*(edi + 4)))
    ebx.b = 0
else if ((*(*arg1 + 0x3c))(arg2, arg3, edi, arg6) == 0)
    ebx.b = 0
else
    ebx.b = 1

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
