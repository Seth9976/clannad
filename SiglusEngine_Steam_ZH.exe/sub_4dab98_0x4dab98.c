// 函数: sub_4dab98
// 地址: 0x4dab98
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x20) = arg6
*(arg1 + 0x24) = arg7
*(arg1 + 0x14) = arg8
*(arg1 + 0x18) = arg9
*(arg1 + 4) = arg4
*(arg1 + 0x10) = arg5
int32_t edi
int32_t var_10 = edi
*(arg1 + 0xc) = 0
*(arg1 + 0x1c) = arg2
*(arg1 + 0x2c) = arg3
*(arg1 + 0x30) = 0

if (arg10 == 0)
    __builtin_memcpy(arg2 + 0x8000, arg2, 0x8000)

*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
sub_4da65d()
*(arg1 + 0x28) = 0
*(arg1 + 0x44) = 0x8000
*(arg1 + 0x3c) = 0x8000

if (arg10 == 0)
    int16_t* eax_5 = nullptr
    int32_t i_1 = 0x100
    int32_t i
    
    do
        *(eax_5 + *(arg1 + 0x20)) = 0
        eax_5 = &eax_5[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    sub_4da486(arg1)

sub_4d984c(arg1, 0x43, 8)
uint32_t ecx_2
int32_t edx_2
ecx_2, edx_2 = sub_4d984c(arg1, 0x4b, 8)
*arg11 = zx.d(sub_4da988(arg1, edx_2, ecx_2) + 2)

if (arg10 != 0)
    int32_t edi_3 = *(arg1 + 0x1c)
    __builtin_memcpy(edi_3, edi_3 + 0x8000, 0x8000)

int32_t eax_12 = *(arg1 + 0x30)
int32_t eax_13 = neg.d(eax_12)
return sbb.d(eax_13, eax_13, eax_12 != 0) & 3
