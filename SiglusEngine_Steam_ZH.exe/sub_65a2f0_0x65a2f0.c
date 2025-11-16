// 函数: sub_65a2f0
// 地址: 0x65a2f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac504
void* ebx_1 = *(esi + 0x62848) + *(esi + 0x6285c) * 0x30c
int16_t var_2c
int16_t* eax_3 = sub_698170(esi + 0x4af9c, &var_2c, *(esi + 0x4b000))
int32_t var_8_1 = 0

if (ebx_1 - 0x2c != eax_3)
    sub_52e3c0(ebx_1 - 0x2c, eax_3, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
var_2c = 0
*(ebx_1 - 0x14) = *(esi + 0x4b004)
int32_t var_1c = 0
*(ebx_1 - 0x10) = *(esi + 0x4affc) - *(*(esi + 0x4b000) * 0x54 + *(esi + 0x4aff0) + 8)
sub_5b5950(esi + 0x627a4)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
