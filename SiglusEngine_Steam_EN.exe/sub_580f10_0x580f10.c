// 函数: sub_580f10
// 地址: 0x580f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t ecx = zx.d(*arg3)
uint32_t esi = zx.d(arg3[1])
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(ecx)
int32_t ebx_1 = ((edx & 7) + eax_3) s>> 3
int32_t var_2c = ebx_1
int16_t** ecx_1 = ecx & 0x80000007

if (ecx_1 s< 0)
    ecx_1 = ((ecx_1 - 1) | 0xfffffff8) + 1

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(esi)
int32_t edx_5 = ((edx_2 & 7) + eax_5) s>> 3
int32_t var_28 = edx_5
void* eax_7 = esi & 0x80000007

if (eax_7 s< 0)
    eax_7 = ((eax_7 - 1) | 0xfffffff8) + 1

if (ecx_1 != 0)
    ebx_1 += 1

if (eax_7 != 0)
    edx_5 += 1

int32_t esi_2 = edx_5 * ebx_1
int32_t edx_7 = ecx_1 << 5
int32_t edx_9 = eax_7 << 5
int32_t eax_11 = (eax_7 * ecx_1) << 2
uint32_t eax_15 =
    ((esi_2 << 2) + 4) * 2 + esi_2 * 5 + edx_9 * var_2c + eax_11 + ((var_2c << 8) + edx_7) * var_28
sub_4d6960(eax_15, arg5, arg4, eax_15, "32BitChipMapData")
int16_t* eax_16 = *arg5
int32_t i = 0
eax_16[1] = edx_5.w
void* esi_5 = ((esi_2 << 2) + 4) * 2 + eax_16
*eax_16 = ebx_1.w
int32_t* ecx_10 = eax_16 + (esi_2 << 2) + 4
int32_t edi_1 = esi_2
void* ebx_2 = &eax_16[2]

if (edi_1 s> 0)
    if (edi_1 u>= 8)
        int32_t xmm1_1[0x4] = data_624960
        int32_t eax_18 = edi_1 & 0x80000007
        
        if (eax_18 s< 0)
            eax_18 = ((eax_18 - 1) | 0xfffffff8) + 1
        
        do
            int32_t eax_21 = i + 4
            uint32_t xmm0_2[0x4] = _mm_shuffle_epi32(zx.o(i), 0)
            i += 8
            *ebx_2 = _mm_add_epi32(xmm0_2, xmm1_1)
            *(ebx_2 + 0x10) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_21), 0), xmm1_1)
            ebx_2 += 0x20
        while (i s< esi_2 - eax_18)
        
        edi_1 = esi_2
    
    for (; i s< edi_1; i += 1)
        *ebx_2 = i
        ebx_2 += 4

int32_t var_14_1

if (edx_7 == 0)
    var_14_1 = 0x105
else
    var_14_1 = edx_7 + 5

int32_t var_10_1

if (edx_9 == 0)
    var_10_1 = 0x105
else
    var_10_1 = edx_9 + 5

int32_t var_18_1

if (eax_11 == 0)
    var_18_1 = 0x105
else
    var_18_1 = eax_11 + 5

int16_t** eax_26 = ecx_1
*ecx_10 = edi_1

if (eax_26 == 0)
    eax_26 = 8

void* eax_27 = eax_7

if (eax_27 == 0)
    eax_27 = 8

void* ecx_11 = &ecx_10[1]
int32_t edi_4 = 0
int32_t result = 0
int32_t result_1 = 0

if (edx_5 s> 0)
    int32_t ebx_3 = ebx_1
    
    do
        int32_t edx_17 = 0
        int32_t var_28_1 = 0
        
        if (ebx_3 s> 0)
            int32_t ebx_6 = edx_5 - 1
            int32_t var_40_1 = ebx_6
            
            do
                *ecx_11 = edi_4
                *esi_5 = 0
                int16_t** ecx_13
                void* ebx_7
                
                if (edx_17 == ebx_3 - 1)
                    ecx_13 = eax_26
                    arg5 = ecx_13
                    
                    if (result == ebx_6)
                        edi_4 += var_18_1
                        ebx_7 = eax_27
                    else
                        edi_4 += var_14_1
                        ebx_7 = 8
                else
                    ecx_13 = 8
                    arg5 = 8
                    
                    if (result == ebx_6)
                        edi_4 += var_10_1
                        ebx_7 = eax_27
                    else
                        edi_4 += 0x105
                        ebx_7 = 8
                
                int32_t var_50_1 = 0
                int32_t var_54_1 = 0xff
                int32_t var_58_1 = 0
                int32_t var_5c_1 = 0
                int32_t var_60_1 = 0
                int32_t eax_29 = edx_17 << 3
                *(esi_5 + 1) = ecx_13.w
                *(esi_5 + 3) = ebx_7.w
                sub_584980(eax_29, ecx_13, esi_5 + 5, ebx_7, &arg3[2], ecx, esi, eax_29, 
                    result << 3, 0, 0, 0, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_13, 0, 0, 
                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr)
                result = result_1
                edx_17 = var_28_1 + 1
                ecx_11 += 4
                var_28_1 = edx_17
                esi_5 = esi_5 + 5 + ((ebx_7 * arg5) << 2)
                ebx_6 = var_40_1
            while (edx_17 s< ebx_1)
            
            ebx_3 = ebx_1
        
        result += 1
        result_1 = result
    while (result s< edx_5)

return result
