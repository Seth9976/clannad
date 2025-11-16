// 函数: sub_5e0550
// 地址: 0x5e0550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
sub_5e01d0(arg1)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
arg1[0x1d] = arg2[0x1d]
int32_t eax_1
eax_1.b = arg2[0x1e].b
arg1[0x1e].b = eax_1.b
sub_5e1060(&arg1[0x1f], (arg2[0x20] - arg2[0x1f]) s/ 0x8c)
int32_t ebx_1 = 0
int32_t result = (arg1[0x20] - arg1[0x1f]) s/ 0x8c

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        sub_5e17b0(arg1[0x1f] + esi_1, arg2[0x1f] + esi_1)
        ebx_1 += 1
        esi_1 += 0x8c
        result = (arg1[0x20] - arg1[0x1f]) s/ 0x8c
    while (ebx_1 s< result)

return result
