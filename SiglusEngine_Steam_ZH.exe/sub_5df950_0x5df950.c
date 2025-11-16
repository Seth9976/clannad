// 函数: sub_5df950
// 地址: 0x5df950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6ef9c0(arg1 + 0x98)
sub_6ef9c0(arg1 + 0x1c8)
int32_t ebx = 0
int32_t result = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        sub_5db390(*(arg1 + 0x88) + edi_1)
        ebx += 1
        edi_1 += 0x3b4
        result = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4
    while (ebx s< result)

return result
