// 函数: sub_5f5d84
// 地址: 0x5f5d84
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_6410f8 = 0
data_63be74 |= 1

if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE) != 0)
    data_6410f8 = 1
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    int32_t ebx_1
    eax_1, ebx_1, ecx_1, edx_1 = __cpuid(0, 0)
    int32_t esi_2 = data_63be74 | 2
    data_63be74 = esi_2
    int32_t ecx_5 = (edx_1 ^ 0x49656e69) | (ecx_1 ^ 0x6c65746e) | (ebx_1 ^ 0x756e6547)
    char ecx_6 = (neg.d(ecx_5)).b
    bool cond:0_1 = sbb.b(ecx_6, ecx_6, ecx_5 != 0) == 0xff
    int32_t eax_7
    int32_t ecx_7
    int32_t edx_2
    int32_t ebx_2
    eax_7, ebx_2, ecx_7, edx_2 = __cpuid(1, 0)
    int32_t var_1c_2 = ebx_2
    int32_t var_14_2 = edx_2
    int32_t eax_9
    
    if (not(cond:0_1))
        eax_9 = eax_7 & 0xfff3ff0
    
    int32_t edi_2
    
    if (not(cond:0_1) && (eax_9 == 0x106c0 || eax_9 == 0x20660 || eax_9 == 0x20670
            || eax_9 == 0x30650 || eax_9 == 0x30660 || eax_9 == 0x30670))
        edi_2 = data_6410fc | 1
        data_6410fc = edi_2
    else
        edi_2 = data_6410fc
    
    int32_t eax_11
    
    if (eax_1 s< 7)
        eax_11 = 0
    else
        int32_t eax_10
        int32_t ecx_9
        int32_t edx_3
        int32_t ebx_3
        eax_10, ebx_3, ecx_9, edx_3 = __cpuid(7, 0)
        int32_t var_20_3 = eax_10
        esi_2 = data_63be74
        int32_t var_18_3 = ecx_9
        int32_t var_14_3 = edx_3
        eax_11 = ebx_3
        
        if ((eax_11 & 0x200) != 0)
            data_6410fc = edi_2 | 2
    
    if ((ecx_7 & 0x100000) != 0)
        int32_t esi_3 = esi_2 | 4
        data_6410f8 = 2
        data_63be74 = esi_3
        
        if ((ecx_7 & 0x8000000) != 0 && (ecx_7 & 0x10000000) != 0)
            int32_t esi_4 = esi_3 | 8
            data_6410f8 = 3
            data_63be74 = esi_4
            
            if ((eax_11.b & 0x20) != 0)
                data_6410f8 = 5
                data_63be74 = esi_4 | 0x20

return 0
