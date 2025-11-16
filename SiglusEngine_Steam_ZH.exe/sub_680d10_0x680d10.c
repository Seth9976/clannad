// 函数: sub_680d10
// 地址: 0x680d10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_680d90(arg1, *(data_bac510 + 0x126fc))
int32_t edx = 0
int32_t edi = *arg1
int32_t result = arg1[1] - edi

if ((result & 0xfffffffc) s> 0)
    char var_9_1 = 0xff
    int16_t* ecx_1 = data_bac510 + 0x123fc
    
    do
        result.w = *ecx_1
        ecx_1 += 3
        int16_t var_8_1 = result.w
        result.b = *(ecx_1 - 1)
        char var_a_1 = result.b
        char var_b_1 = var_8_1:1.b
        *(edi + (edx << 2)) = var_8_1.b.d
        edx += 1
        edi = *arg1
        result = (arg1[1] - edi) s>> 2
    while (edx s< result)

return result
