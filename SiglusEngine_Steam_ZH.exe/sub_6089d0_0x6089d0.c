// 函数: sub_6089d0
// 地址: 0x6089d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x6bca1af3, *(arg1 + 0x76c) - *(arg1 + 0x768))
int32_t edx_3 = edx_2 s>> 8
int32_t i_4 = (edx_3 u>> 0x1f) + edx_3

if (i_4 s> 0)
    int32_t edi_1 = 0
    int32_t i
    
    do
        sub_60b570(*(arg1 + 0x768) + edi_1)
        edi_1 += 0x260
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t i_5 = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc

if (i_5 s> 0)
    int32_t edi_2 = 0
    int32_t i_1
    
    do
        if (*(*(arg1 + 0x144) + edi_2 + 0xa0) != 0)
            std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
                0, arg4, 0)
        
        edi_2 += 0x15fc
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int32_t edi_3 = 0
int32_t eax_2
int32_t edx_7
edx_7:eax_2 = muls.dp.d(0x4fba3d0b, *(arg1 + 0x43c) - *(arg1 + 0x438))
int32_t edx_8 = edx_7 s>> 0xb
int32_t eax_5 = (edx_8 u>> 0x1f) + edx_8
int32_t edx_9 = arg2
int32_t eax_6 = arg3

if (eax_5 s> 0)
    int32_t ebx_4 = 0
    
    do
        if (sub_5d69e0(*(arg1 + 0x438) + ebx_4, edx_9, eax_6) == 0)
            return 0
        
        eax_6 = arg3
        edi_3 += 1
        edx_9 = arg2
        ebx_4 += 0x19b0
    while (edi_3 s< eax_5)

sub_5aeda0(arg1 + 0x4cc, edx_9.b, eax_6.b)
int32_t eax_8
int32_t edx_10
edx_10:eax_8 = muls.dp.d(0x51eb851f, *(arg1 + 0x824) - *(arg1 + 0x820))
int32_t edx_11 = edx_10 s>> 8
int32_t i_6 = (edx_11 u>> 0x1f) + edx_11

if (i_6 s> 0)
    int32_t edi_4 = 0
    int32_t i_2
    
    do
        sub_5fb180(*(arg1 + 0x820) + edi_4)
        edi_4 += 0x320
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

int32_t i_7 = (*(arg1 + 0x8dc) - *(arg1 + 0x8d8)) s/ 0xe8

if (i_7 s> 0)
    int32_t edi_5 = 0
    int32_t i_3
    
    do
        sub_5fbf50(*(arg1 + 0x8d8) + edi_5)
        edi_5 += 0xe8
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

int32_t result
result.b = 1
return result
