// 函数: sub_49a08a
// 地址: 0x49a08a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
int32_t edi
int32_t var_10 = edi

for (int32_t edi_1 = arg1[0x28]; i u> edi_1; i -= edi_1)
    sub_4997a6(arg1, arg1[0x27], arg1[0x28])

if (i != 0)
    sub_4997a6(arg1, arg1[0x27], i)

if (sub_4997bf(arg1) == 0)
    return 0

int32_t eax
eax.b = arg1[0x43].b
eax.b &= 0x20

if ((eax.b == 0 || (*(arg1 + 0x5d) & 2) != 0) && (eax.b != 0 || (*(arg1 + 0x5d) & 4) == 0))
    sub_466959(arg1, "CRC error")
    noreturn

sub_466985(arg1, "CRC error")
return 1
