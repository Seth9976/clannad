// 函数: sub_9a6910
// 地址: 0x9a6910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg4
int32_t result_1 = 0
int32_t esi = *ebx
int32_t temp0 = divs.dp.d(sx.q(arg3), esi)
arg4 = temp0

if (temp0 s<= 0)
    return 0

int128_t* edi = arg2
int32_t result
int32_t i

do
    void* eax_3 = sub_9a69a0(ebx, edi)
    void* eax_4
    
    if (eax_3 s>= 0)
        eax_4 = ebx[3]
    
    int32_t ecx_2
    
    if (eax_3 s< 0 || eax_3 s>= *(eax_4 + 4))
        ecx_2 = 0
    else
        sub_742d70(arg1, *(ebx[5] + (eax_3 << 2)), sx.d(*(*(eax_4 + 8) + eax_3)))
        ecx_2 = sx.d(*(*(ebx[3] + 8) + eax_3))
    
    result = result_1 + ecx_2
    result_1 = result
    edi += esi << 2
    i = arg4
    arg4 -= 1
while (i != 1)
return result
