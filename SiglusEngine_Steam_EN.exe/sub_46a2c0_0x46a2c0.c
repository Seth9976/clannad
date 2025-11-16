// 函数: sub_46a2c0
// 地址: 0x46a2c0
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

int32_t* ebx_2 = (arg4 + (esi << 1)) * 0x650 + 0x72d880
int32_t i

do
    if (esi s>= 0 && esi s< ecx)
        int32_t eax_2 = *ebx_2 - arg5
        sub_466780(eax_2, arg6, &ebx_2[0xd2], arg7, arg8, 0x67, 0, eax_2, 0, 0, 0)
        ecx = data_7031bc
        *ebx_2 = arg5
    
    esi += 1
    ebx_2 = &ebx_2[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
