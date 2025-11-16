// 函数: sub_42ab39
// 地址: 0x42ab39
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_42a41c(arg1, arg2, &arg2)

if (result s>= 0)
    if (arg3 != 0xff)
        uint32_t edx_4 = arg2
        
        if (arg3 != 0x10)
            int32_t edi
            int32_t var_c_1 = edi
            uint32_t edx_5 = edx_4 << 2
            int32_t* edi_2 = *(arg1 + 0x1c) + edx_5
            *edi_2 &= 0xfffffff0
            int32_t* edx_6 = edx_5 + *(arg1 + 0x1c)
            *edx_6 |= arg3 & 0xf
        else
            int32_t* ecx_5 = *(arg1 + 0x1c) + (edx_4 << 2)
            *ecx_5 |= 0x10
    else
        uint32_t ecx_2 = arg2 << 2
        int32_t* edx_2 = *(arg1 + 0x1c) + ecx_2
        *edx_2 &= 0x20
        int32_t* ecx_3 = ecx_2 + *(arg1 + 0x1c)
        *ecx_3 |= 1

return result
