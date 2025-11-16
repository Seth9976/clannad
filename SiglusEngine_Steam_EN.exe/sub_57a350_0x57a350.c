// 函数: sub_57a350
// 地址: 0x57a350
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg3 + 0x88) != 0xffffffff)
    if (*(arg2 + 0x2c68) != 0 && data_12a2988 s< 1)
        int32_t ecx_1 = *(arg2 + 0x2c5c)
        int32_t edx = *(arg2 + 0x2c58)
        int32_t __saved_edi = 0
        int32_t var_100 = *(arg2 + 0x1e4) + ecx_1
        return sub_5918b0(ecx_1, *(arg2 + 0x1d8) + edx, *(arg2 + 0x1dc) + ecx_1, 
            *(arg2 + 0x1e0) + edx)
    
    if (*(arg3 + 0x74) != 0xffffffff)
        int32_t ecx_2 = *(arg4 + 0xc)
        
        if (ecx_2 s>= 0 && ecx_2 s< 8)
            void var_94
            sub_4d1c30(arg3, arg2 + 0x174, &var_94, 0x8c)
            void* eax_10 = *(arg3 + 0x74)
            int32_t edx_3 = *(arg2 + 0x2c58) + *(arg2 + 0x484)
            int32_t* ecx_5 = *(arg2 + 0x2c5c) + *(arg2 + 0x488)
            void* eax_13 = (*(arg4 + 0xc) + (eax_10 << 3)) * 0x374 + 0x1b1bd90
            
            if (*(arg4 + 8) == 5)
                return sub_579d20(eax_13, &var_94, eax_13 + 8, edx_3, ecx_5)
            
            int32_t var_a4_2 = *(arg2 + 0x480)
            int32_t var_a8_2 = *(arg2 + 0x47c)
            return sub_57a190(arg2 + 0x4ac, eax_13 + 0x164, eax_13 + 8, arg2 + 0x4ac, ecx_5, 
                eax_10, *(arg4 + 0xc), &var_94, edx_3, ecx_5, *(arg2 + 0x48c), ecx_5)

return arg3
