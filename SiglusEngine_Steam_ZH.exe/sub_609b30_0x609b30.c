// 函数: sub_609b30
// 地址: 0x609b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
void* edx = arg1
void* var_c = edx

if (result s< arg4)
    int32_t ecx = result * 0x8ec
    int32_t i_1 = arg4 - result
    int32_t var_10_1 = ecx
    int32_t i
    
    do
        void* edi_2 = *(edx + 0xa4) + ecx
        sub_60a000(edi_2 + 0x25c, arg2)
        sub_5e4720(edi_2 + 0xa0, arg2)
        sub_60a250(edi_2 + 0x394, arg2)
        sub_5ae140(edi_2 + 0x4cc, arg2)
        sub_609db0(edi_2 + 0x6c4, arg2)
        sub_5fd130(edi_2 + 0x77c, arg2)
        result = sub_5fce70(edi_2 + 0x834, arg2)
        edx = var_c
        ecx = var_10_1 + 0x8ec
        var_10_1 = ecx
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
