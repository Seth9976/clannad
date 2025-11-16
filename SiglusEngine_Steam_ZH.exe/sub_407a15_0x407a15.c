// 函数: sub_407a15
// 地址: 0x407a15
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

j__free(*arg1)
int32_t i = 0

if (arg1[1] u> 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_1 = 0
    
    do
        j__free(*(arg1[2] + edi_1))
        j__free(*(arg1[2] + edi_1 + 0xc))
        i += 1
        edi_1 += 0x10
    while (i u< arg1[1])

return j__free(arg1[2])
