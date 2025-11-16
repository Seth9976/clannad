// 函数: sub_6c9220
// 地址: 0x6c9220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

sub_6c8100(arg1)
int32_t eax_1 = *(arg1 + 0x38)

if (eax_1 != 0)
    j__free(eax_1)
    *(arg1 + 0x38) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0

j__free(arg1)
