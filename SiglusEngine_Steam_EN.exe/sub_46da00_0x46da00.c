// 函数: sub_46da00
// 地址: 0x46da00
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

int32_t ebx_1 = (arg4 + (esi << 1)) * 0x650
int32_t i

do
    if (esi s>= 0 && esi s< ecx)
        int32_t eax_2 = arg5 * 7
        sub_4662e0(eax_2, arg6, (eax_2 << 2) + &data_72d998 + ebx_1, arg7, arg8, arg9, arg10, 
            arg11, arg12)
        ecx = data_7031bc
    
    esi += 1
    ebx_1 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
