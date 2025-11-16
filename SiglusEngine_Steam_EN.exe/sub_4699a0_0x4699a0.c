// 函数: sub_4699a0
// 地址: 0x4699a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t esi = arg3

if (esi s> edi)
    arg1 = esi
    esi = edi
    edi = arg1

if (esi s< 0)
    return 

int32_t ecx = data_7031bc

if (edi s>= ecx)
    return 

int32_t i_1 = edi - esi + 1

if (i_1 s<= 0)
    return 

int32_t* ebx_2 = (arg4 + (esi << 1)) * 0x650 + 0x72d87c
int32_t i

do
    if (esi s>= 0 && esi s< ecx)
        int32_t eax_4 = ebx_2[-1] - arg5
        sub_466780(eax_4, arg7, &ebx_2[0xd3], arg8, arg9, 0x72, 0, eax_4, *ebx_2 - arg6, 0, 0)
        ecx = data_7031bc
        ebx_2[-1] = arg5
        *ebx_2 = arg6
    
    esi += 1
    ebx_2 = &ebx_2[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
