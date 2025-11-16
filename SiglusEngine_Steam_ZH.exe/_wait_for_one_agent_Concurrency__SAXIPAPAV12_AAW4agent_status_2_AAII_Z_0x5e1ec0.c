// 函数: ?wait_for_one@agent@Concurrency@@SAXIPAPAV12@AAW4agent_status@2@AAII@Z
// 地址: 0x5e1ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc8ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1e8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg1
int32_t* var_d4 = edx
void* edi = &edx[1]
*edx = 0xffffffff
void arg_8
__builtin_memcpy(edi, &arg_8, 0x80)
void* esi = &edx[0x21]
edx[0x27] = 0

if (esi != arg2)
    sub_52e3c0(esi, arg2, 0, 0xffffffff)
    edx = var_d4

__builtin_memset(&edx[0x34], 0, 0x16)
*(edx + 0xe8) = *(edx + 0xd0)
*(edx + 0xf8) = *(edx + 0xe0)
edx[0x40] = 0xffffffff
edx[0x41].b = 0
edx[0x42] = 0
edx[0x45].b = 0
edx[0x46] = 0
int32_t var_30
int16_t* eax_5 = sub_532b80(sub_5daca0(&edx[0x40]), esi, &var_30, u".button")
int32_t var_8_1 = 0
int32_t var_34 = 1
void var_b0
__builtin_memcpy(&var_b0, edi, 0x80)
int32_t var_dc = 0
int32_t var_15c = 0
*(&var_b0 + (var_34 << 2)) = 0x20
int32_t var_34_1 = var_34 + 1
char eax_8 = (*(data_bac510 + 0xa2eb88)).b
void var_158
__builtin_memcpy(&var_d4[0xc6], &var_158, 0x80)
var_d4[0xc5].w = 0
*(var_d4 + 0x316) = 0
void var_1d8
__builtin_memcpy(&var_d4[0xe6], &var_1d8, 0x80)
int32_t var_26c = 0
void var_268
int32_t eax_9 =
    sub_5f16c0(&var_d4[0x97], __builtin_memcpy(&var_268, &var_b0, 0x80), eax_5, eax_8, 0)
int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    eax_9 = j__free(var_30)

int16_t* eax_10 = sub_532b80(eax_9, esi, &var_30, u".face")
int32_t var_8_3 = 1
int32_t var_34_2 = 1
__builtin_memcpy(&var_b0, edi, 0x80)
int32_t var_15c_1 = 0
int32_t var_dc_1 = 0
*(&var_b0 + (var_34_2 << 2)) = 0x35
int32_t var_34_3 = var_34_2 + 1
char eax_13 = (*(data_bac510 + 0xa2eb8c)).b
__builtin_memcpy(&var_d4[0x135], &var_1d8, 0x80)
var_d4[0x134].w = 0
*(var_d4 + 0x4d2) = 0
__builtin_memcpy(&var_d4[0x155], &var_158, 0x80)
int32_t var_26c_1 = 0
int32_t eax_14 =
    sub_5f16c0(&var_d4[0x106], __builtin_memcpy(&var_268, &var_b0, 0x80), eax_10, eax_13, 0)
int32_t var_8_4 = 0xffffffff

if (var_1c u>= 8)
    eax_14 = j__free(var_30)

int32_t var_c8
int16_t* eax_15 = sub_532b80(eax_14, esi, &var_c8, u".object")
int32_t var_8_5 = 2
int32_t var_34_4 = 1
__builtin_memcpy(&var_b0, edi, 0x80)
int32_t var_15c_2 = 0
int32_t var_dc_2 = 0
*(&var_b0 + (var_34_4 << 2)) = 0x1e
int32_t var_34_5 = var_34_4 + 1
char eax_18 = (*(data_bac510 + sub_a2eb90)).b
__builtin_memcpy(&var_d4[0x1a4], &var_1d8, 0x80)
var_d4[0x1a3].w = 0
*(var_d4 + 0x68e) = 0
__builtin_memcpy(&var_d4[0x1c4], &var_158, 0x80)
int32_t var_26c_2 = 0
int32_t result =
    sub_5f16c0(&var_d4[0x175], __builtin_memcpy(&var_268, &var_b0, 0x80), eax_15, eax_18, 0)
int32_t var_b4

if (var_b4 u>= 8)
    result = j__free(var_c8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
