// 函数: sub_65ecc0
// 地址: 0x65ecc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4d53
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_bac4a8
int32_t var_1c = arg1
void** ebx = *edi
int16_t var_18 = arg2
int64_t arg_4
int64_t var_24 = arg_4
void** eax_5 = sub_5d48a0(edi, &var_24)
void** var_d8
char eax_6

if (eax_5 != ebx)
    eax_6 = sub_5cd6f0(&var_24, &eax_5[4])
    var_d8 = eax_5

if (eax_5 == ebx || eax_6 != 0)
    var_d8 = ebx

void*** result

if (var_d8 != ebx)
    void var_d4
    sub_633790(&var_d4)
    int32_t var_8_1 = 0
    sub_630a10()
    sub_64e7b0(&var_d4, *sub_651340(data_bac4a8, &arg_4))
    *(data_bac4a0 + 0x248) = 0
    sub_6304c0(0)
    sub_64e7b0(data_bac504 + 0x10, &var_d4)
    sub_6594f0()
    sub_5ce5a0()
    var_18.d = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf828c, 0x14)
    var_8_1.b = 1
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18.d u>= 8)
        j__free(var_2c.d)
    
    sub_634480(&var_d4)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
