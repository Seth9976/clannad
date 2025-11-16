// 函数: sub_405fa0
// 地址: 0x405fa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1[0xa]
int32_t ebx = *arg1
int32_t eax_1
eax_1.b = ((edi << 2) + 3).b & 0xfc
__chkstk(eax_1)
long double x87_r7_1 = fconvert.t(arg5) + fconvert.t(*(arg1[1] + 4))
int32_t i = 0
int32_t __saved_edi

if (edi s> 0)
    int32_t* ecx_1 = &__saved_edi
    
    do
        *ecx_1 = 0xc61c3c00
        i += 1
        ecx_1 = &ecx_1[1]
    while (i s< arg1[0xa])

void* ecx_2 = arg1[1]
long double temp0 = fconvert.t(*(ecx_2 + 8))
x87_r7_1 - temp0
i.w = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800

if ((i:1.b & 1) != 0)
    x87_r7_1 = fconvert.t(*(ecx_2 + 8))

int32_t eax_3 = 0

if (ebx s> 0)
    do
        eax_3 += 1
        *(arg3 + (eax_3 << 2) - 4) =
            fconvert.s(x87_r7_1 + fconvert.t(*(arg1[4] + (eax_3 << 2) - 4)))
    while (eax_3 s< ebx)

int80_t result = sub_406040(arg1, arg1[2], arg2, arg3, &__saved_edi, arg4)
sub_4061f0(arg1, &__saved_edi, arg3)
return result
