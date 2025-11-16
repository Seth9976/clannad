// 函数: sub_46a610
// 地址: 0x46a610
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

int32_t* ebx_2 = (arg4 + (esi << 1)) * 0x650 + 0x72d818
int32_t i

do
    if (esi s>= 0 && esi s< ecx)
        int32_t eax_6 = ebx_2[-1] - arg5
        sub_466780(eax_6, arg8, &ebx_2[0xec], arg9, arg10, 0x69, 0, eax_6, *ebx_2 - arg6, 
            ebx_2[1] - arg7, 0)
        ecx = data_7031bc
        ebx_2[-1] = arg5
        *ebx_2 = arg6
        ebx_2[1] = arg7
    
    esi += 1
    ebx_2 = &ebx_2[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
