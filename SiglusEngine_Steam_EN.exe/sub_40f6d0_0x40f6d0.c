// 函数: sub_40f6d0
// 地址: 0x40f6d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg1
int32_t esi_1 = arg4 - arg3
int32_t ecx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_1)
int32_t edi_1 = ecx - ebx
int32_t temp0 = divs.dp.d(sx.q(esi_1), edi_1)

if (esi_1 s>= 0)
    arg1 = temp0 + 1
else
    arg1 = temp0 - 1

int32_t eax_10
int32_t edx_4
edx_4:eax_10 = sx.q(temp0 * edi_1)
arg2 = 0
void* edx_7 = (arg3 << 2) + &data_63b020
int32_t result = ebx + 1
*(arg5 + (ebx << 2)) =
    fconvert.s(fconvert.t(*((arg3 << 2) + &data_63b020)) * fconvert.t(*(arg5 + (ebx << 2))))

if (result s< ecx)
    float* esi_3 = arg5 + (result << 2)
    int32_t i_1 = ecx - result
    int32_t i
    
    do
        result = arg2 + (eax_1 ^ edx) - edx - ((eax_10 ^ edx_4) - edx_4)
        arg2 = result
        
        if (result s< edi_1)
            edx_7 += temp0 << 2
        else
            result -= edi_1
            edx_7 += arg1 << 2
            arg2 = result
        
        long double x87_r7_3 = fconvert.t(*edx_7) * fconvert.t(*esi_3)
        esi_3 = &esi_3[1]
        i = i_1
        i_1 -= 1
        esi_3[-1] = fconvert.s(x87_r7_3)
    while (i != 1)

return result
