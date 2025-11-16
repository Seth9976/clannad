// 函数: sub_54db40
// 地址: 0x54db40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *arg2

if (result == 4)
    sub_6b20c0(data_bac490)
else if (result == 8)
    sub_6b2220(data_bac490)
else if (result == 0)
    sub_677bb0(*data_bac490)
else if (result == 1)
    sub_677bb0(*(data_bac490 + 4))
else if (result == 2)
    sub_677bb0(*data_bac490)
else if (result == 3)
    sub_677bb0(*(data_bac490 + 4))
else if (result == 9)
    void* eax_3 = *(arg3 + 4)
    int32_t* edx = data_bac490
    int32_t esi_1 = edx[1]
    int32_t eax_4 = *(eax_3 + 0xa0)
    sub_54b080(eax_4, &(eax_3 + 0x24)[eax_4], eax_3 + 0x24, *edx)
    int32_t eax_5 = *(eax_3 + 0x204)
    sub_54b080(eax_5, &(eax_3 + 0x188)[eax_5], eax_3 + 0x188, esi_1)
else if (result == 0xa)
    void* eax_6 = *(arg3 + 4)
    void* edi_2 = data_bac4a0
    *(edi_2 + 0xc)
    int32_t var_48_3 =
        divs.dp.d(sx.q(*(edi_2 + 0x24) * *(eax_6 + 0x16c)), *(edi_2 + 0xc)) + *(edi_2 + 0x14)
    int32_t var_4c_1 =
        divs.dp.d(sx.q(*(edi_2 + 0x20) * *(eax_6 + 8)), *(edi_2 + 8)) + *(edi_2 + 0x10)
    int32_t var_34
    int32_t* eax_16 = sub_6c1d10(&var_34)
    SetCursorPos(*eax_16, eax_16[1])
else if (result == 5)
    void* eax_17 = data_bac490
    sub_677bb0(*(eax_17 + 0xfc) - *(eax_17 + 0xf8))
else if (result == 7)
    sub_54df30(&arg2[1], arg2, 1, &arg2[1])
else if (result != 6)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad87ec, 0x17)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_2c)
    sub_52e8a0(&var_2c)
else
    sub_54df30(&arg2[1], arg2, 2, &arg2[1])

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
