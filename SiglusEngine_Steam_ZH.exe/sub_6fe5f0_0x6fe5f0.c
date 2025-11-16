// 函数: sub_6fe5f0
// 地址: 0x6fe5f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce5d3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg1
*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0
int32_t var_8_1 = 0
_memset(arg1, 0, 0x44)
*(arg1 + 0x4c) = 1
var_8_1.b = 1
*(arg1 + 0x44) = 0
int32_t* edi = *(arg1 + 0x48)
int32_t var_18 = 0
int32_t var_1c = 0
*(arg1 + 0x48) = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
