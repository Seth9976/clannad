// 函数: sub_4e5332
// 地址: 0x4e5332
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
sub_4e4d83(arg1, arg1 + 0x50, arg1 + 0x4c)
int32_t i = 0

if (*(arg1 + 0x38) u> 0)
    do
        *(*(arg1 + 0x30) + (i << 2)) = i
        *(*(arg1 + 0x40) + (i << 2)) = *(*(arg1 + 0x3c) + (i << 2))
        i += 1
    while (i u< *(arg1 + 0x38))

sub_458e55(sub_4e4cdc, *(arg1 + 0x30), *(arg1 + 0x38), arg1)
int32_t i_1 = 0

if (*(arg1 + 0x38) u> 0)
    do
        int32_t result = sub_4e4ea0(arg1, *(*(arg1 + 0x30) + (i_1 << 2)))
        
        if (result s< 0)
            return result
        
        if (result == 0)
            return 0
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0x38))

return 1
