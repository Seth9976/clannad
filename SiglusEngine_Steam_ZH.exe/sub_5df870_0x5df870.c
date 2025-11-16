// 函数: sub_5df870
// 地址: 0x5df870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
sub_5df4f0(arg1)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x4c) = *(arg2 + 0x4c)

if (&arg1[0x18] != &arg2[0x18])
    sub_52e3c0(&arg1[0x18], &arg2[0x18], 0, 0xffffffff)

*(arg1 + 0x78) = *(arg2 + 0x78)
sub_5b48f0(&arg1[0x22], (arg2[0x23] - arg2[0x22]) s/ 0x3b4)
int32_t ebx_1 = 0
int32_t result = (arg1[0x23] - arg1[0x22]) s/ 0x3b4

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        sub_5b0fe0(arg1[0x22] + esi_1, arg2[0x22] + esi_1)
        ebx_1 += 1
        esi_1 += 0x3b4
        result = (arg1[0x23] - arg1[0x22]) s/ 0x3b4
    while (ebx_1 s< result)

return result
