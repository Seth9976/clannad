// 函数: sub_6d63b0
// 地址: 0x6d63b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4

if (ebx s> zx.d(*(arg3 + 0x140)))
    return sub_6d4470(arg3, "Invalid number of histogram entries specified")

int32_t eax_2 = ebx * 2
sub_6d4aa0(eax_2, 0x68495354, arg3, eax_2)
int32_t edi = 0

if (ebx s> 0)
    do
        uint32_t ecx = zx.d(*(arg2 + (edi << 1)))
        char var_7_1 = ecx.b
        uint8_t var_8 = (ecx u>> 8).b
        int32_t eax_6 = *(arg3 + 0x58)
        
        if (eax_6 == 0)
            goto label_6d6475
        
        sub_6caa70(eax_6(arg3, &var_8, 2), &var_8, arg3, 2)
        edi += 1
    while (edi s< ebx)

int32_t ecx_2 = *(arg3 + 0x138)
arg4.b = (ecx_2 u>> 0x18).b
arg4:1.b = (ecx_2 u>> 0x10).b
arg4:2.b = (ecx_2 u>> 8).b
int32_t eax_14 = *(arg3 + 0x58)
*(arg3 + 0x2a4) = 0x82
arg4:3.b = ecx_2.b

if (eax_14 != 0)
    return eax_14(arg3, &arg4, 4)

label_6d6475:
sub_6d42e0(arg3, "Call to NULL write function")
noreturn
