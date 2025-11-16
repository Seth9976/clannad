// 函数: sub_469120
// 地址: 0x469120
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

void* ebx_2 = (arg4 + (esi << 1)) * 0x650 + &data_72d7fc
int32_t i

do
    if (esi s>= 0 && esi s< ecx)
        if (arg5 u<= 7)
            int32_t eax_2 = *(ebx_2 + (arg5 << 2) + 0x90) - arg6
            sub_466780(eax_2, arg7, ebx_2 + 0x3cc, arg8, arg9, 0x65, arg5.b, eax_2, 0, 0, 0)
            *(ebx_2 + (arg5 << 2) + 0x90) = arg6
        
        ecx = data_7031bc
    
    esi += 1
    ebx_2 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
