// 函数: sub_5f1b77
// 地址: 0x5f1b77
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

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
    
    if (edx_1 != data_63c50c && (eax[0x1c] & data_63c5c8) == 0)
        *arg1 = sub_5f7286()
    
    if (arg1[1] != data_63c2ac && (*(arg1[2] + 0x70) & data_63c5c8) == 0)
        arg1[1] = sub_5f7608()
    
    void* ecx_3 = arg1[2]
    int32_t eax_6 = *(ecx_3 + 0x70)
    
    if ((eax_6.b & 2) == 0)
        *(ecx_3 + 0x70) = eax_6 | 2
        arg1[3].b = 1

return arg1
