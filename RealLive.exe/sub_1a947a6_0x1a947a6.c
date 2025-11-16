// 函数: sub_1a947a6
// 地址: 0x1a947a6
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

CPINFO cPInfo
void* i

if (GetCPInfo(data_1c09058, &cPInfo) != 1)
    for (i = nullptr; i u< 0x100; i += 1)
        if (i u>= 0x41 && i u<= 0x5a)
            *(i + 0x1c091e1) |= 0x10
            *(i + 0x1c090e0) = i.b + 0x20
        else if (i u< 0x61 || i u> 0x7a)
            *(i + 0x1c090e0) = 0
        else
            *(i + 0x1c091e1) |= 0x20
            *(i + 0x1c090e0) = i.b - 0x20
else
    uint8_t var_118[0x100]
    uint32_t i_1
    
    for (i_1 = 0; i_1 u< 0x100; i_1 += 1)
        var_118[i_1] = i_1.b
    
    i_1.b = cPInfo.LeadByte[0]
    var_118[0] = 0x20
    
    if (i_1.b != 0)
        var_11
        void* edx_1 = &var_11
        
        do
            uint32_t ecx_2 = zx.d(*edx_1)
            i_1 = zx.d(i_1.b)
            
            if (i_1 u<= ecx_2)
                int32_t ecx_4 = ecx_2 - i_1 + 1
                int32_t __saved_ebp
                __builtin_memset(
                    __builtin_memset(&__saved_ebp + i_1 - 0x114, 0x20202020, ecx_4 u>> 2 << 2), 
                    0x20, ecx_4 & 3)
            
            edx_1 += 2
            i_1.b = *(edx_1 - 1)
        while (i_1.b != 0)
    
    uint16_t var_518[0x100]
    sub_1a9a17e(1, &var_118, 0x100, &var_518, data_1c09058, data_1c092e4, 0)
    char var_218[0x100]
    sub_1a99e7a(data_1c092e4, 0x100, &var_118, 0x100, &var_218, 0x100, data_1c09058, 0)
    char var_318[0x100]
    sub_1a99e7a(data_1c092e4, 0x200, &var_118, 0x100, &var_318, 0x100, data_1c09058, 0)
    i = nullptr
    uint16_t (* ecx_8)[0x100] = &var_518
    
    do
        uint8_t edx_3 = (*ecx_8).b
        
        if ((edx_3 & 1) != 0)
            *(i + 0x1c091e1) |= 0x10
            *(i + 0x1c090e0) = *(&var_218 + i)
        else if ((edx_3 & 2) == 0)
            *(i + 0x1c090e0) = 0
        else
            *(i + 0x1c091e1) |= 0x20
            *(i + 0x1c090e0) = *(&var_318 + i)
        
        i += 1
        ecx_8 = &(*ecx_8)[1]
    while (i u< 0x100)

return i
