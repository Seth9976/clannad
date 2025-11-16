// 函数: sub_5fd130
// 地址: 0x5fd130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1[0x2d].b == 0)
    int32_t var_8_1 = 0
    int32_t result_1
    int16_t var_30
    int32_t eax_7 = sub_60abc0(arg2, &arg1[0x29], sub_5483b0(&arg1[1], &var_30), &result_1)
    int32_t var_8_2 = 0xffffffff
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    var_30 = 0
    int32_t var_20_1 = 0
    (*(*arg1 + 0xc))(arg2, 0, eax_7)
    result = result_1
    arg2[3] = result
else
    arg2[3] += 4
    int32_t esi = *arg2
    
    if (esi == arg2[1])
        esi = 0
    
    int32_t esi_1 = *(arg2[3] + esi - 4)
    sub_54a6f0(arg1, esi_1)
    result = (*(*arg1 + 0xc))(arg2, 0, esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
