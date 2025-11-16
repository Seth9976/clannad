// 函数: sub_55fc90
// 地址: 0x55fc90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    sub_55fb30(arg1)
    return 0

if (arg2 == 5)
    uint32_t esi = zx.d(arg4.w)
    uint32_t edi_1 = arg4 u>> 0x10
    sub_4c0f50(sub_4c0f50(arg4, edi_1, esi, 0x1b8b2e0), edi_1, esi, 0x20c54c8)
    return 0

if (arg2 == 0x4e)
    if (*(arg4 + 8) == 0xffffff65 && (*(arg4 + 0xe) & 0x4000) == 0)
        uint32_t eax_2 = zx.d(*(arg4 + 0xc))
        
        if (eax_2 == 0x50)
            sub_55f860()
            return 0
        
        if (eax_2 == 0x4f)
            sub_55f9e0()
    
    return 0

if (arg2 == 0x111)
    if (arg3 == 0x4eeb)
        sub_54e9f0()
    
    return 0

int32_t var_10 = 0xb
int32_t eax
int32_t ecx
return sub_55a820(eax, arg2, ecx, arg3.d, arg4)
