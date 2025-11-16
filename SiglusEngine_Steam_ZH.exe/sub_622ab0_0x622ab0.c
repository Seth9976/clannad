// 函数: sub_622ab0
// 地址: 0x622ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_681670(*(arg1 + 0x4b030))
sub_5cafb0(arg1 + 0x62538)
sub_676f90(0)
sub_675f90(0)
int32_t ebx

if (*(arg1 + 0x4af94) == 0)
    ebx.b = *(arg1 + 0x4a65c)
else
    ebx.b = 0

if (*(data_bac4a0 + 0xa5) != ebx.b && sub_614c70(0) != 0)
    int32_t eax_2 = 0x80000000
    
    if (ebx.b != 0)
        eax_2 = 1
    
    data_4ebe63c = eax_2
    data_4ebe674 = eax_2
    sub_614e40()
    void* eax_3 = data_bac4a0
    data_bac400 -= 1
    *(eax_3 + 0xa5) = ebx.b

sub_624b40(arg1)
int32_t* ecx_6 = data_4ebe4b0
int32_t esi = data_4ebe5fc
int32_t eax_4 = (*(*ecx_6 + 0x10))(ecx_6)
*(arg1 + 0x4a7d8) = eax_4
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(esi - eax_4)
int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q((eax_6 + (edx_1 & 0x3ff)) s>> 0xa)
int32_t eax_11 = (eax_9 + (edx_3 & 0x3ff)) s>> 0xa
*(arg1 + 0x4a7dc) = eax_11

if (eax_11 s> *(arg1 + 0x4a7e0))
    *(arg1 + 0x4a7e0) = eax_11

int32_t eax_12 = data_4ecd1ac

if ((eax_12.b & 1) == 0)
    data_4ecd1ac = eax_12 | 1
    data_4ecd1b0 = timeGetTime()

uint32_t eax_15 = timeGetTime()
int32_t ebx_1 = data_4ecd1b0
uint32_t esi_3 = (eax_15 - ebx_1) u/ 0x64

if (esi_3 s<= 0)
    data_4ecd0a0 += 1
    int32_t result
    result.b = 1
    return result

*(arg1 + (*(arg1 + 0x4a690) << 2) + 0x4a694) = divu.dp.d(0:data_4ecd0a0, esi_3)
*(arg1 + 0x4a690) += 1

if (*(arg1 + 0x4a690) s>= 0xa)
    *(arg1 + 0x4a690) = 0

*(arg1 + 0x4a68c) = 0
int32_t ecx_10 = *(arg1 + 0x4a694)
*(arg1 + 0x4a68c) = ecx_10
int32_t ecx_11 = ecx_10 + *(arg1 + 0x4a698)
*(arg1 + 0x4a68c) = ecx_11
int32_t ecx_12 = ecx_11 + *(arg1 + 0x4a69c)
*(arg1 + 0x4a68c) = ecx_12
int32_t ecx_13 = ecx_12 + *(arg1 + 0x4a6a0)
*(arg1 + 0x4a68c) = ecx_13
int32_t ecx_14 = ecx_13 + *(arg1 + 0x4a6a4)
*(arg1 + 0x4a68c) = ecx_14
int32_t ecx_15 = ecx_14 + *(arg1 + 0x4a6a8)
*(arg1 + 0x4a68c) = ecx_15
int32_t ecx_16 = ecx_15 + *(arg1 + 0x4a6ac)
*(arg1 + 0x4a68c) = ecx_16
int32_t ecx_17 = ecx_16 + *(arg1 + 0x4a6b0)
*(arg1 + 0x4a68c) = ecx_17
int32_t ecx_18 = ecx_17 + *(arg1 + 0x4a6b4)
*(arg1 + 0x4a68c) = ecx_18
*(arg1 + 0x4a68c) = *(arg1 + 0x4a6b8) + ecx_18
data_4ecd1b0 = ebx_1 + esi_3 * 0x64
data_4ecd0a0 = 1
int32_t eax_21
eax_21.b = 1
return 1
