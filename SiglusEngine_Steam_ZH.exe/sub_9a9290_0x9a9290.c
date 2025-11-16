// 函数: sub_9a9290
// 地址: 0x9a9290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg5
int32_t ebx_1 = arg4 - arg2
int32_t edi_1 = arg6 - esi
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi_1)
int32_t temp0 = divs.dp.d(sx.q(edi_1), ebx_1)
int32_t ecx = temp0 - 1

if (edi_1 s>= 0)
    ecx = temp0 + 1

int32_t edi_2 = arg3
int32_t ecx_1 = 0
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(temp0 * ebx_1)

if (edi_2 s> arg4)
    edi_2 = arg4

if (arg2 s< edi_2)
    *(arg7 + (arg2 << 2)) = esi

int32_t result = arg2 + 1

if (result s< edi_2)
    int32_t edx_5 = temp0
    
    do
        ecx_1 += (eax_2 ^ edx) - edx - ((eax_9 ^ edx_3) - edx_3)
        
        if (ecx_1 s< ebx_1)
            esi += edx_5
        else
            ecx_1 -= ebx_1
            esi += ecx
        
        *(arg7 + (result << 2)) = esi
        result += 1
        edx_5 = temp0
    while (result s< edi_2)

return result
