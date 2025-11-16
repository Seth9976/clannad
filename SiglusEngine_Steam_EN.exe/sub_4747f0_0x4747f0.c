// 函数: sub_4747f0
// 地址: 0x4747f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
sub_473470()
uint32_t eax = *(arg2 + 4)

if (eax != 0)
    if (eax != 1)
        int32_t eax_6 = data_1cd6410
        *(arg3 + 0x24) = eax_6
        *(arg3 + 0x3c) = eax_6
        *(arg2 + 4) = 0
        return eax_6
    
    void* esi_1 = data_1cd6408
    *(arg2 + 4) = 2
    void* edi_1 = data_1cd6404
    int32_t eax_1
    eax_1.b = *(esi_1 + 0x14) != 0xffffffff
    *(esi_1 + 0x234) = eax_1 - 1
    
    if (*(esi_1 + 0x18) == 0xffffffff)
        *(esi_1 + 0x244) = 0xffffffff
    else
        *(esi_1 + 0x244) = 0
        int32_t eax_3 = sub_481a60(*(edi_1 + 0x270))
        *(esi_1 + 0x254) = eax_3
        esi_1 = data_1cd6408
        *(edi_1 + 0x270) = eax_3
        *(edi_1 + 0x274) = 0
        edi_1 = data_1cd6404
    
    if (*(esi_1 + 0x1c) == 0xffffffff)
        *(esi_1 + 0x25c) = 0xffffffff
        *(arg4 + 0x74) += 1
        return arg4
    
    *(esi_1 + 0x25c) = 0
    *(esi_1 + 0x26c) = 0x50
    *(edi_1 + 0x278) = 0xffffffff
    *(arg4 + 0x74) += 1
    return arg4

if (data_703840 == 0 && *(arg2 + 0xc) == 0)
    if (data_12dc610 == 0 && data_1392700 != 0)
        void* edx = data_1cd6408
        void* ecx_4 = data_1cd6404
        int32_t eax_7
        eax_7.b = *(edx + 0x14) != 0xffffffff
        *(edx + 0x234) = eax_7 - 1
        sub_418410(eax_7 - 1, edx, ecx_4, 1)
        void* eax_9 = data_1cd6408
        
        if (*(eax_9 + 0x1c) == 0xffffffff)
            *(eax_9 + 0x25c) = 0xffffffff
            int32_t eax_12 = data_1cd6410
            *(arg3 + 0x24) = eax_12
            *(arg3 + 0x3c) = eax_12
            return eax_12
        
        *(eax_9 + 0x25c) = 0
        *(eax_9 + 0x26c) = 0x50
        *(data_1cd6404 + 0x278) = 0xffffffff
        int32_t eax_11 = data_1cd6410
        *(arg3 + 0x24) = eax_11
        *(arg3 + 0x3c) = eax_11
        return eax_11
    
    int32_t ecx_7 = data_1cd6410
    
    if (ecx_7 - *(arg3 + 0x24) u>= *(arg3 + 0x20))
        *(arg3 + 0x24) = ecx_7
        sub_4184c0(1)
        ecx_7 = data_1cd6410
    
    eax = ecx_7 - *(arg3 + 0x3c)
    
    if (eax u>= *(arg3 + 0x38))
        *(arg3 + 0x3c) = ecx_7
        return sub_4184c0(2)

return eax
