// 函数: sub_7470a1
// 地址: 0x7470a1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[3].b = 0

if (arg2 != 0)
    *arg1 = *arg2
    arg1[1] = arg2[1]
else
    uint32_t* eax = __getptd()
    arg1[2] = eax
    int32_t edx_1 = eax[0x1b]
    *arg1 = edx_1
    arg1[1] = eax[0x1a]
    
    if (edx_1 != data_b4cb2c && (eax[0x1c] & data_b4cbf0) == 0)
        *arg1 = sub_74e284()
    
    if (arg1[1] != data_b4c8cc && (*(arg1[2] + 0x70) & data_b4cbf0) == 0)
        arg1[1] = sub_74e606()
    
    void* ecx_3 = arg1[2]
    int32_t eax_6 = *(ecx_3 + 0x70)
    
    if ((eax_6.b & 2) == 0)
        *(ecx_3 + 0x70) = eax_6 | 2
        arg1[3].b = 1

return arg1
