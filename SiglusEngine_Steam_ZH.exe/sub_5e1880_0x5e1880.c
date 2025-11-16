// 函数: sub_5e1880
// 地址: 0x5e1880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memset(arg1 + 0x40, 0, 0x36)
*(arg1 + 0x78) = 0
int32_t* edi = *(arg1 + 0x7c)
*(arg1 + 0x7c) = 0

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

int32_t ebx_3 = 0
int32_t result = (*(arg1 + 0x84) - *(arg1 + 0x80)) s/ 0x3b4

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        sub_5db390(*(arg1 + 0x80) + edi_1)
        ebx_3 += 1
        edi_1 += 0x3b4
        result = (*(arg1 + 0x84) - *(arg1 + 0x80)) s/ 0x3b4
    while (ebx_3 s< result)

return result
