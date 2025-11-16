// 函数: sub_425ed0
// 地址: 0x425ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg13.b == 0 || arg3 u> 0x1ff)
    return 

sub_425430(arg3, 1)

if (*(arg3 * 0x74 + 0x13747b0) == 0)
    return 

arg1 = *(arg3 * 0x74 + 0x13747c4)

if (arg1 == 0 || arg1 == 1)
    if (arg14 == 0)
        int32_t var_1c_3 = arg13
        int32_t var_20_3 = arg12
        int32_t var_24_3 = arg11
        int32_t var_28_3 = arg10
        sub_584e80(arg1, arg5, arg4, arg6, *(arg3 * 0x74 + 0x13747b4), *(arg3 * 0x74 + 0x13747bc), 
            *(arg3 * 0x74 + 0x13747c0), 0, 0, arg1, arg7, arg8, arg9.b)
else if (arg1 == 2)
    arg1 = sub_4d25b0(*(arg3 * 0x74 + 0x13747b4), arg2)
    
    if (arg1 != 0)
        uint32_t i_1 = zx.d(*(arg1 + 2))
        void* esi_2 = arg1 + 0x74
        
        if (i_1 s> 0)
            uint32_t i
            
            do
                uint32_t edx_1 = zx.d(*(esi_2 + 6))
                int32_t edi_1 = zx.d(*(esi_2 + 8))
                
                if (arg14 == 0)
                    int32_t var_1c_1 = arg13
                    int32_t var_20_1 = arg12
                    int32_t var_24_1 = arg11
                    int32_t var_28_1 = arg10
                    uint32_t eax_4 = zx.d(*(esi_2 + 4))
                    sub_584e80(eax_4, arg5, arg4, arg6, esi_2 + 0x5c, edx_1, edi_1, 0, 0, eax_4, 
                        zx.d(*esi_2) + arg7, zx.d(*(esi_2 + 2)) + arg8, arg9.b)
                
                esi_2 = esi_2 + 0x5c + ((edi_1 * edx_1) << 2)
                i = i_1
                i_1 -= 1
            while (i != 1)
else if (arg1 == 3)
    int16_t* edx_3 = *(arg3 * 0x74 + 0x13747b4)
    void* esi_4 = &edx_3[1 + zx.d(*edx_3) * 2]
    
    if (esi_4 != 0)
        int32_t var_1c_2 = arg12
        uint32_t eax_5 = zx.d(arg13.b)
        int32_t var_20_2 = arg11
        int32_t var_24_2 = arg10
        int32_t var_28_2 = arg9
        sub_58d2d0(eax_5, arg5, arg4, arg6, esi_4, *(arg3 * 0x74 + 0x13747bc), 
            *(arg3 * 0x74 + 0x13747c0), 0, 0, &edx_3[1], arg7, arg8, eax_5)
