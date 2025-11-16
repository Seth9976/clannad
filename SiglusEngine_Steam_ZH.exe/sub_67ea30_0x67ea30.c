// 函数: sub_67ea30
// 地址: 0x67ea30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
int32_t var_4c = var_2c
int32_t* var_50 = arg1
sub_642980(*arg1, arg1[1])
arg1[1] = *arg1
sub_5c3760(*(arg1[3] + 4))
void* eax_5 = arg1[3]
*(eax_5 + 4) = eax_5
int32_t* eax_6 = arg1[3]
*eax_6 = eax_6
void* eax_7 = arg1[3]
*(eax_7 + 8) = eax_7
arg1[4] = 0
int32_t ecx_3 = sub_6422e0(&arg1[5])
int32_t var_4c_2 = var_2c
arg1[8] = arg1[7]
int32_t var_50_1 = ecx_3
sub_642920(arg1[0xb], arg1[0xc])
arg1[0xc] = arg1[0xb]
int32_t result_1 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
char eax_10 = sub_6b7be0(arg2, &result_1)
char eax_11

if (eax_10 != 0)
    eax_11 = sub_67eb80(arg1, &result_1)

int32_t* ebx

if (eax_10 == 0 || eax_11 == 0)
    ebx.b = 0
else
    sub_67f040(arg1)
    sub_67f160(arg1)
    int32_t var_4c_4 = var_2c
    int32_t var_50_2 = sub_67f240(arg1)
    sub_642920(arg1[0xb], arg1[0xc])
    arg1[0xc] = arg1[0xb]
    void var_28
    sub_67f2e0(arg1, &arg1[0xa], 0, &var_28, nullptr)
    ebx.b = 1

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
