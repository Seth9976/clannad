// 函数: ??2@YAPAXIABUnothrow_t@std@@@Z
// 地址: 0x6e1b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba878
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* edi = arg3
int32_t* ebx = edi

if (edi != 0)
    edi[1]
    edi[1] += 1
    edi = arg3

arg1[5] = arg2
int32_t* esi_1 = arg1[6]
arg1[6] = ebx

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))(eax_2)
        bool cond:2_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi_1 + 8))()
    
    edi = arg3

int32_t* eax_9 = arg1[5]
int32_t esi_2 = eax_9[3]
int32_t edx_2 = eax_9[2]
int32_t ecx_4 = eax_9[1]
arg1[1] = *eax_9
int32_t* result = arg1
int32_t var_8_2 = 0xffffffff
result[2] = ecx_4
result[3] = edx_2
result[4] = esi_2

if (edi != 0)
    result = &edi[1]
    bool cond:1_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        result = &edi[2]
        int32_t ebx_2 = *result
        *result -= 1
        
        if (ebx_2 == 1)
            result = (*(*edi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
