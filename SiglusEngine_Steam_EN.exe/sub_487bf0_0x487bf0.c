// 函数: sub_487bf0
// 地址: 0x487bf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax

if (data_1b8a6d4 == 0)
    if (data_1b8a590 == 0)
        int32_t esi_1 = data_1b8a594 * 0x184
        int32_t edx_1 = data_1b8a598
        int32_t edi_1 = *(esi_1 + &data_12c41b4)
        
        if (edx_1 s>= edi_1)
            data_1332b3c = 0
            data_1332b38 = 0
            return sub_42d590() __tailcall
        
        int32_t ebx = data_131310c
        
        if (ebx - data_1b8a59c u> *(esi_1 + edx_1 * 0xc + 0x12c41c0))
            edx_1 += 1
            data_1b8a59c = ebx
            data_1b8a598 = edx_1
        
        if (edx_1 s>= edi_1)
            data_1332b3c = 0
            data_1332b38 = 0
            return sub_42d590() __tailcall
        
        void* ecx_4 = esi_1 + edx_1 * 0xc
        data_1332b3c = *(ecx_4 + 0x12c41b8)
        int32_t eax_7 = *(ecx_4 + 0x12c41bc)
        data_1332b38 = eax_7
        return eax_7
    
    int32_t edx_4 = data_1b8a594 * 0x104
    int32_t ecx_5 = data_1b8a598
    int32_t esi_2 = *(edx_4 + &data_12c7234)
    
    if (ecx_5 s>= esi_2)
        data_1332b30 = 0
        data_1321ecc = 0
        data_1332b34 = 0
        return sub_42d590() __tailcall
    
    int32_t edi_2 = data_131310c
    
    if (edi_2 - data_1b8a59c u> *(edx_4 + (ecx_5 << 3) + 0x12c723c))
        ecx_5 += 1
        data_1b8a59c = edi_2
        data_1b8a598 = ecx_5
    
    if (ecx_5 s>= esi_2)
        data_1332b30 = 0
        data_1321ecc = 0
        data_1332b34 = 0
        return sub_42d590() __tailcall
    
    data_1332b30 = data_70300c s>> 1
    data_1321ecc = data_7030dc s>> 1
    eax = *(edx_4 + (ecx_5 << 3) + 0x12c7238)
    data_1332b34 = eax
else
    bool cond:1_1 = data_1af1768 == 0
    data_1332b3c = 0
    data_1332b38 = 0
    data_1332b30 = 0
    data_1321ecc = 0
    data_1332b34 = 0
    
    if (not(cond:1_1))
        data_1af177c = 1
        data_1af1768 = 0
    
    eax = sub_48d140()
    
    if (data_71929c == 0x11)
        data_1af1788 = 1

return eax
