// 函数: sub_6c80d0
// 地址: 0x6c80d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6c8100(arg1)
int32_t result = *(arg1 + 0x38)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0

return result
