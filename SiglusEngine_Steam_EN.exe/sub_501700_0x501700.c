// 函数: sub_501700
// 地址: 0x501700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char** eax = data_1af4e84

switch (eax)
    case nullptr
        eax = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        int32_t ecx_3 = data_1b8a720
        
        if (ecx_3 s>= 0 && ecx_3 s< data_7031bc)
            int32_t ecx_4 = data_1b8a734
            eax = (arg3 + (ecx_3 << 1)) * 0x650 + &data_72d6b0
            
            if (ecx_4 != 0)
                ecx_4 = 1
            
            if (eax[0x5e] != ecx_4)
                eax[0x5e] = ecx_4
                eax[0xb1] = 0
                eax[0xb2] = 0
    case 1
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
        int32_t eax_4 = data_1b8a770
        
        if (eax_4 u> 0xff)
            return sub_46b4c0(eax_4, arg3, data_1b8a720, data_1b8a734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0)
        
        int32_t ecx_7 = eax_4 * 3
        int32_t eax_8 = sx.d(*((ecx_7 << 3) + &data_12b7a0c))
        int32_t eax_12 = sx.d(*((ecx_7 << 3) + &data_12b7a08))
        uint32_t eax_22 = zx.d(*((ecx_7 << 3) + &data_12b79fc))
        int32_t eax_23 = sub_46b4c0(eax_22, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
            data_1b8a75c, eax_22, *((ecx_7 << 3) + &data_12b79fd), *((ecx_7 << 3) + &data_12b79fe), 
            *((ecx_7 << 3) + &data_12b7a00), *((ecx_7 << 3) + &data_12b7a02), 
            *((ecx_7 << 3) + &data_12b7a04), *((ecx_7 << 3) + &data_12b7a05), 
            *((ecx_7 << 3) + &data_12b7a06), (eax_12.w + (eax_12 << 2).w) * 2, 
            *((ecx_7 << 3) + &data_12b7a0a), (eax_8.w + (eax_8 << 2).w) * 2, 
            *((ecx_7 << 3) + &data_12b7a0e), *((ecx_7 << 3) + &data_12b7a10), 
            zx.d(*((ecx_7 << 3) + &data_12b7a12)))
        return eax_23
    case 2
        return sub_46b4c0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720), 
            arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770, 
            (data_1b8a784).b, (data_1b8a798).b, (data_1b8a7ac).w, (data_1b8a7c0).w, 0, 0, 0, 0, 0, 
            0, 0, 0, 0)
    case 3
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$$$", &data_1b8a720)
        int32_t eax_26 = data_1b8a838
        char** eax_25 = data_1b8a810 * 0xa
        return sub_46b4c0(eax_25, arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b, (data_1b8a798).b, (data_1b8a7ac).w, (data_1b8a7c0).w, 
            (data_1b8a7d4).b, (data_1b8a7e8).b, (data_1b8a7fc).b, eax_25.w, (data_1b8a824).b, 
            (eax_26.w + (eax_26 << 2).w) * 2, (data_1b8a84c).b, (data_1b8a860).w, data_1b8a874)

return eax
