// 函数: sub_5ae2e0
// 地址: 0x5ae2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[0x2e] = *(arg2 + 0xb8)
sub_5add90(arg1)
void* edx = arg2
__builtin_memcpy(&arg1[0x4b], edx + 0x12c, 0x70)
arg1[0x72].b = *(edx + 0x1c8)
*(arg1 + 0x1c9) = *(edx + 0x1c9)
*(arg1 + 0x1ca) = *(edx + 0x1ca)
*(arg1 + 0x1cb) = *(edx + 0x1cb)
arg1[0x73].b = *(edx + 0x1cc)
*(arg1 + 0x1cd) = *(edx + 0x1cd)

if (&arg1[0x74] != edx + 0x1d0)
    sub_52e3c0(&arg1[0x74], edx + 0x1d0, 0, 0xffffffff)
    edx = arg2

arg1[0x7a] = *(edx + 0x1e8)
int32_t eax_10
int32_t edx_1
edx_1:eax_10 = muls.dp.d(0x2e8ba2e9, *(edx + 0xa8) - *(edx + 0xa4))
int32_t edx_2 = edx_1 s>> 8
sub_550ad0(arg1, (edx_2 u>> 0x1f) + edx_2)
int32_t edi_1 = 0
int32_t eax_14
int32_t edx_3
edx_3:eax_14 = muls.dp.d(0x2e8ba2e9, arg1[0x2a] - arg1[0x29])
int32_t edx_4 = edx_3 s>> 8
int32_t result = (edx_4 u>> 0x1f) + edx_4

if (result s> 0)
    int32_t esi_1 = 0
    
    do
        sub_5ae420(arg1[0x29] + esi_1, *(arg2 + 0xa4) + esi_1)
        edi_1 += 1
        int32_t eax_20
        int32_t edx_5
        edx_5:eax_20 = muls.dp.d(0x2e8ba2e9, arg1[0x2a] - arg1[0x29])
        esi_1 += 0x580
        int32_t edx_6 = edx_5 s>> 8
        result = (edx_6 u>> 0x1f) + edx_6
    while (edi_1 s< result)

return result
