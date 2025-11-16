// 函数: sub_444778
// 地址: 0x444778
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 0)
    void* edx_3
    
    if (arg2 == 0)
        edx_3 = zx.d(*(arg1 + 0x42)) * 0xb4 + *(arg1 + 0xa4)
    label_4447b9:
        int32_t edi
        int32_t var_10_2 = edi
        *arg3 = 0
        void* edi_2 = &arg3[1]
        *edi_2 = 0
        *(edi_2 + 4) = 0
        int32_t eax_3 = *(edx_3 + 0x28) + *(arg1 + 0x20)
        int32_t eax_4
        
        if (*eax_3 != 0)
            eax_4 = eax_3 + 4
        else
            eax_4 = 0
        
        *arg3 = eax_4
        arg3[1] = *(edx_3 + 0x34)
        arg3[2] = *(edx_3 + 0x2c)
        return 0
    
    int32_t var_10_1 = 1
    edx_3 = sub_4441fb(arg1, arg2)
    
    if (edx_3 != 0)
        goto label_4447b9

return 0x8876086c
