// 函数: sub_6646a0
// 地址: 0x6646a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg2

if (*(arg1 + 0x30) != ecx)
    int32_t* edi_1 = ecx
    
    if (ecx != 0)
        (*(*ecx + 4))(ecx)
        ecx = arg2
    
    int32_t* eax_4 = *(arg1 + 0x30)
    *(arg1 + 0x30) = edi_1
    
    if (eax_4 != 0)
        (*(*eax_4 + 8))(eax_4)
        ecx = arg2

sub_663e00(ecx, arg1 + 4, arg1 + 0x14, arg1 + 0x24, arg1 + 0x26)
int32_t eax_8
eax_8.b = *(arg1 + 0x28) == 0xfefefefe

if (eax_8 == 0)
    sub_5c4990(0x80004005)
    noreturn

int32_t result = sub_5c4e50(arg2, arg1, &data_aac1b0, arg1 + 0x28)
int32_t var_8_2 = 0xffffffff

if (arg2 != 0)
    (*(*arg2 + 8))(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
