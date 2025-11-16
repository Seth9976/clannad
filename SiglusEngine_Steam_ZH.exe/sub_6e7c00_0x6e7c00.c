// 函数: sub_6e7c00
// 地址: 0x6e7c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ecx = arg3 + 3
int32_t i_1 = 8
uint32_t result
int32_t i

do
    uint32_t edx = zx.d(ecx[2])
    uint32_t eax = zx.d(ecx[0xfffffffc])
    uint32_t eax_1 = zx.d(ecx[0xfffffffd])
    uint32_t esi_1 = zx.d(ecx[0xfffffffe])
    uint32_t eax_2 = zx.d(ecx[0xffffffff])
    uint32_t edx_1 = zx.d(ecx[3])
    uint32_t edx_2 = zx.d(ecx[4])
    uint32_t edx_3 = zx.d(ecx[5])
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = sx.q(eax_2 - esi_1)
    uint32_t edi_1 = zx.d(*ecx)
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = sx.q(esi_1 - eax_1)
    uint32_t ebx_1 = zx.d(ecx[1])
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 = sx.q(eax_1 - eax)
    int32_t eax_17
    int32_t edx_7
    edx_7:eax_17 = sx.q(edi_1 - eax_2)
    int32_t esi_7 = (eax_4 ^ edx_4) - edx_4 + (eax_7 ^ edx_5) - edx_5 + (eax_12 ^ edx_6) - edx_6
        + (eax_17 ^ edx_7) - edx_7
    int32_t eax_22
    int32_t edx_8
    edx_8:eax_22 = sx.q(ebx_1 - edx)
    int32_t eax_27
    int32_t edx_9
    edx_9:eax_27 = sx.q(edx - edx_1)
    int32_t eax_32
    int32_t edx_10
    edx_10:eax_32 = sx.q(edx_1 - edx_2)
    int32_t eax_37
    int32_t edx_11
    edx_11:eax_37 = sx.q(edx_2 - edx_3)
    int32_t var_8_4 = (eax_22 ^ edx_8) - edx_8 + (eax_27 ^ edx_9) - edx_9 + (eax_32 ^ edx_10)
        - edx_10 + (eax_37 ^ edx_11) - edx_11
    int32_t edx_12
    edx_12.b = esi_7 s< 0xff
    *arg6 += (neg.d(edx_12) & (esi_7 - 0xff)) + 0xff
    int32_t edx_16
    edx_16.b = var_8_4 s< 0xff
    arg6[1] += (neg.d(edx_16) & (var_8_4 - 0xff)) + 0xff
    result = arg5
    
    if (esi_7 s< result && var_8_4 s< result)
        result = ebx_1 - edi_1
        
        if (result s< arg4)
            result = edi_1 - ebx_1
            
            if (result s< arg4)
                ecx[0xfffffffd] = ((eax * 3 + esi_1 + (eax_1 << 1) + 4 + eax_2 + edi_1) s>> 3).b
                ecx[0xfffffffe] =
                    ((eax_2 + ((eax + esi_1 + 2) << 1) + eax_1 + ebx_1 + edi_1) s>> 3).b
                ecx[0xffffffff] =
                    ((edx + ((eax_2 + 2) << 1) + esi_1 + eax + eax_1 + ebx_1 + edi_1) s>> 3).b
                *ecx = ((edx + 4 + (edi_1 << 1) + edx_1 + esi_1 + eax_2 + eax_1 + ebx_1) s>> 3).b
                ecx[1] = ((edx + 4 + (ebx_1 << 1) + edx_2 + edx_1 + esi_1 + eax_2 + edi_1) s>> 3).b
                ecx[2] = ((edx_2 + (edx << 1) + 4 + edx_3 + edx_1 + eax_2 + ebx_1 + edi_1) s>> 3).b
                ecx[3] = ((edx + ((edx_3 + 2 + edx_1) << 1) + edx_2 + ebx_1 + edi_1) s>> 3).b
                result = (edx_3 * 3 + edx + (edx_2 << 1) + 4 + edx_1 + ebx_1) s>> 3
                ecx[4] = result.b
    
    ecx = &ecx[arg2]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
