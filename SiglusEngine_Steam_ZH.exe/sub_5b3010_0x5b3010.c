// 函数: sub_5b3010
// 地址: 0x5b3010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6ef9c0(arg1 + 0x324)
sub_6ef9c0(arg1 + 0x454)
__builtin_memset(arg1 + 0x2c4, 0, 0x36)
*(arg1 + 0x2fc) = 0
int32_t* edi = *(arg1 + 0x300)
*(arg1 + 0x300) = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))()
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

int32_t i = 0

if ((*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4 s> 0)
    int32_t edi_1 = 0
    
    do
        sub_5db390(*(arg1 + 0x304) + edi_1)
        i += 1
        edi_1 += 0x3b4
    while (i s< (*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4)

int32_t ebx_3 = 0
int32_t result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc

if (result s> 0)
    int32_t edi_2 = 0
    
    do
        sub_5eb310(*(arg1 + 0x144) + edi_2)
        ebx_3 += 1
        edi_2 += 0x15fc
        result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc
    while (ebx_3 s< result)

return result
