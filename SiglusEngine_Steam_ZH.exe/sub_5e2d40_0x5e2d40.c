// 函数: sub_5e2d40
// 地址: 0x5e2d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6ef9c0(arg1 + 0x7a4)
sub_6ef9c0(arg1 + 0x8d4)
sub_6efe60(arg1 + 0x12c)
*(arg1 + 0x24c) = 0
*(arg1 + 0x250) = 0
*(arg1 + 0x254) = 0
*(arg1 + 0x258) = 0
sub_6efdb0(arg1 + 0x12c)
int32_t i_3 = (*(arg1 + 0x304) - *(arg1 + 0x300)) s/ 0x15fc

if (i_3 s> 0)
    int32_t edi_1 = 0
    int32_t i
    
    do
        sub_5eb310(*(arg1 + 0x300) + edi_1)
        edi_1 += 0x15fc
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t i_4 = (*(arg1 + 0x4c0) - *(arg1 + 0x4bc)) s/ 0x15fc

if (i_4 s> 0)
    int32_t edi_2 = 0
    int32_t i_1
    
    do
        sub_5eb310(*(arg1 + 0x4bc) + edi_2)
        *(*(arg1 + 0x4bc) + edi_2 + 0x35c) = 0
        edi_2 += 0x15fc
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t ecx_13 = *(arg1 + 0x67c) - *(arg1 + 0x678)
int32_t result
int32_t edx_6
edx_6:result = muls.dp.d(0xba506bb7, ecx_13)
int32_t i_5 = ecx_13 s/ 0x15fc

if (i_5 s> 0)
    int32_t edi_3 = 0
    int32_t i_2
    
    do
        result = sub_5eb310(*(arg1 + 0x678) + edi_3)
        edi_3 += 0x15fc
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
