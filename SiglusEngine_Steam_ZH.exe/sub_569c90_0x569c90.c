// 函数: sub_569c90
// 地址: 0x569c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3676
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0xffffffff

for (int32_t* i = *(arg1 + 8); i u< *(arg1 + 0xc); i = &i[0x59])
    if (*i == 0)
        esi = i[2]

int32_t var_16c
sub_54aed0(&var_16c)
int32_t var_8_1 = 0
var_16c = 0x23

if (esi == 0)
    char var_2c = 0
else if (esi != 1)
    void* eax_3
    eax_3.b = *(data_bac4e4 + 0x196)
    char var_2c_2 = eax_3.b
else
    char var_2c_1 = 1

char var_2a = 1
void* var_2c4
int32_t var_2d0_1 = sub_54cf80(&var_2c4, &var_16c)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_8 = sub_62f9b0(data_bac458, &var_2c4)

if (*(var_2c4 + 0xad9a68) != 0)
    int32_t var_2d0_3 = ecx_8
    sub_696dc0()

void var_238
sub_54ae40(&var_238)
void var_e0
sub_54ae40(&var_e0)
int32_t eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 1
