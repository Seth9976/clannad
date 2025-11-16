// 函数: sub_5d94f0
// 地址: 0x5d94f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5d89e0(arg1)
sub_5d8a40(arg1)
sub_5d8aa0(arg1)
*(arg1 + 0x1f8) = 0xffffffff
*(arg1 + 0x1fc) = 0
int32_t i = 0

if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
    int32_t edi_1 = 0
    
    do
        edi_1 += 0x1c0
        i += 1
        *(edi_1 + *(arg1 + 0x228) - 0x18) = 0
    while (i s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)

int32_t ebx = 0
int32_t result = (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0

if (result s> 0)
    int32_t edi_2 = 0
    
    do
        edi_2 += 0x1c0
        ebx += 1
        *(edi_2 + *(arg1 + 0x228) - 0x1c) = 0
        result = (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0
    while (ebx s< result)

return result
