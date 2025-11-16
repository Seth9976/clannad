// 函数: sub_62f7d0
// 地址: 0x62f7d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c108b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1fc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_200 = arg1
int32_t var_8_1 = 0
void var_16c
sub_62f9b0(arg1, sub_629a10(&var_16c))
int32_t var_8_2 = 0xffffffff
void var_e0
sub_54ae40(&var_e0)
int32_t edi = arg1[0x57]

for (void* i = arg1[0x56]; i != edi; i += 0x158)
    sub_54ae40(i + 0x8c)

void* edx = data_bac510
arg1[0x57] = arg1[0x56]
int32_t var_170 = 4
int32_t var_1ec = 0x26
int32_t var_1e0 = *(edx + 0xa2eb94)
int32_t var_1e8 = 3
int32_t var_1e4 = 0xffffffff
__builtin_memcpy(&arg1[0x59], &var_1ec, 0x80)
int32_t var_1e0_1 = *(edx + 0xa2eb98)
int32_t var_170_1 = 4
void* eax_7 = &arg1[0xb9]
var_1ec = 0x26
int32_t var_1e8_1 = 3
int32_t var_1e4_1 = 0xffffffff
__builtin_memcpy(&arg1[0x79], &var_1ec, 0x80)
arg1[0xb8] = 0
bool cond:0 = *(eax_7 + 0x14) u< 8
*(eax_7 + 0x10) = 0

if (not(cond:0))
    eax_7 = *eax_7

*eax_7 = 0
void* eax_8 = &arg1[0xbf]
bool cond:1 = *(eax_8 + 0x14) u< 8
*(eax_8 + 0x10) = 0

if (not(cond:1))
    eax_8 = *eax_8

*eax_8 = 0
sub_60ce30(&arg1[0xc5], *(edx + 0xa2eb88))
void* edx_1 = data_bac510
char* i_1 = nullptr

if (*(edx_1 + 0xa2eb88) s> 0)
    do
        i_1[arg1[0xc5]] = 0
        i_1 = &i_1[1]
    while (i_1 s< *(edx_1 + 0xa2eb88))

bool cond:2 = arg1[0xcd] u< 8
void* eax_9 = &arg1[0xc8]
*(eax_9 + 0x10) = 0

if (not(cond:2))
    eax_9 = *eax_9

*eax_9 = 0
sub_62f700(&arg1[0xce])
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
