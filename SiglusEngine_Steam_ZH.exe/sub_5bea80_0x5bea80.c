// 函数: sub_5bea80
// 地址: 0x5bea80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ba918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1[0x2d].b == 0)
    int32_t var_c_1 = 0
    int32_t result_1
    int16_t var_34
    int32_t eax_9 = sub_5bf040(arg2, &arg1[0x29], sub_5483b0(&arg1[1], &var_34), &result_1)
    int32_t var_c_2 = 0xffffffff
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34.d)
    
    int32_t var_20_1 = 7
    var_34 = 0
    int32_t var_24_1 = 0
    (*(*arg1 + 0xc))(arg2, 0, eax_9)
    result = result_1
    arg2[3] = result
else
    arg2[3] += 4
    int32_t esi = *arg2
    
    if (esi == arg2[1])
        esi = 0
    
    int32_t esi_1 = *(arg2[3] + esi - 4)
    sub_5beec0(arg1, esi_1)
    result = (*(*arg1 + 0xc))(arg2, 0, esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_3c)
return result
