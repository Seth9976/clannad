// 函数: sub_6de530
// 地址: 0x6de530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_6de780(arg1)
void* eax_2 = *(arg1 + 0x120)
int32_t ebx_1 = *(eax_2 + 4)
int32_t esi = *(eax_2 + 0xc)
int32_t edi = *(eax_2 + 8)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(edi)
int16_t var_24 = ebx_1.w
int32_t edx_3 = ((edx & 7) + eax_4) s>> 3
*(arg1 + 0x10) = 2
int128_t var_1c
__builtin_memset(&var_1c, 0, 0x12)
var_1c:4.d = esi
int128_t var_38 = zx.o(0)
var_1c:0xe.w = edi.w
int32_t ecx_2 = edx_3 * esi * ebx_1
var_38.d = 0x14
var_38:4.d = 0x180e0
var_1c:8.d = ecx_2
int32_t ebx_2 = ecx_2 << 3
*(arg1 + 8) = ebx_2
*(arg1 + 0xc) = ebx_2 u>> 1
int32_t* ecx_3 = data_4ebe48c
var_1c:2.w = var_24
var_38:8.d = ecx_2 << 3
var_1c.w = 1
int32_t var_28 = 0
int16_t var_c = 0
var_1c:0xc.w = edx_3.w * var_24
int128_t* var_28_1 = &var_1c

if ((*(*ecx_3 + 0xc))(ecx_3, &var_38, arg1 + 4, 0) s< 0)
    int32_t eax_10
    eax_10.b = 0
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_10

void* eax_11 = *(arg1 + 0x120)
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = *(eax_11 + 0x10)
int32_t* eax_13 = *(arg1 + 4)
*(arg1 + 0x34) = 0
(*(*eax_13 + 0x34))(eax_13, 0)
*(arg1 + 0x14) = 0
sub_6de960(arg1)
sub_6df510(arg1)
sub_6df670(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** eax_14
eax_14.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_14
