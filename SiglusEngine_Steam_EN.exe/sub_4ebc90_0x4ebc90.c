// 函数: sub_4ebc90
// 地址: 0x4ebc90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (sub_57ce10() != 0)
    sub_57e2b0(*(arg1 + 0x13b3c), 0x3f)
    return 1

char* edx = *(arg2 + 0x20)
char eax_2 = *edx

if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
    uint32_t esi_3 = zx.d(eax_2) << 8 | zx.d(edx[1])
    
    if (esi_3 == 0x8196 || esi_3 == 0x8193)
        uint32_t eax_3
        eax_3.b = edx[2]
        
        if (eax_3.b u>= 0x80 && (eax_3.b u< 0xa0 || eax_3.b u> 0xdf) && eax_3.b u< 0xfe
                && (zx.d(edx[3]) | zx.d(eax_3.b) << 8) - 0x8260 u<= 0x19)
            sub_4d6c40(arg2 + 0x28, arg2 + 0x2c)
            char* ecx_4 = *(arg2 + 0x20)
            *(arg2 + 0x30) = 0
            char* var_10
            int32_t var_c
            void* var_8
            sub_4ec270(&var_8, arg2 + 0x20, ecx_4, &var_8, &var_c, &var_10)
            int32_t edx_3 = var_c
            
            if (edx_3 == 0xfffffffe)
                *(arg2 + 0x30) = 0
                return edx_3 + 3
            
            void* ecx_7 = var_8 * 0x21
            void* eax_9
            void* ecx_8
            
            if (esi_3 != 0x8196)
                eax_9 = ecx_7 + &data_710418
                ecx_8 = ecx_7 + &data_710418
            else
                eax_9 = ecx_7 + &data_132a150
                ecx_8 = ecx_7 + &data_132a150
            
            var_8 = ecx_8 + edx_3
            
            if (edx_3 == 0xffffffff)
                sub_4cfe90(eax_9, arg2 + 0x2c, arg2 + 0x28, eax_9, "AVG_FORMAT_STR")
                *(arg2 + 0x30) = *(arg2 + 0x2c)
                return 1
            
            char* esi_4 = var_10
            sub_4cfdc0(
                sub_4d6960(&esi_4[1], arg2 + 0x2c, arg2 + 0x28, &esi_4[1], "AVG_FORMAT_STR_"), 
                var_8, *(arg2 + 0x2c), esi_4)
            esi_4[*(arg2 + 0x2c)] = 0
            *(arg2 + 0x30) = *(arg2 + 0x2c)
            return 1

return 0
