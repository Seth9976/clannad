// 函数: sub_5f8650
// 地址: 0x5f8650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    int32_t esi_1 = *(arg1 + 0xa4)
    
    if (esi_1 != 0xffffffff)
        if (esi_1 s>= 0)
            void* ebx_1 = data_bac468
            int32_t ecx_4 = *(ebx_1 + 0x2f4) - *(ebx_1 + 0x2f0)
            
            if (esi_1 s< ecx_4 s/ 0x250)
                int32_t var_14_1 = ecx_4
                void* esi_3 = esi_1 * 0x250 + *(ebx_1 + 0x2f0)
                sub_6defc0(esi_3 + 0xf4, 0x64)
                *(esi_3 + 0xec) = 0
    else if (*(arg1 + 0xa0) != esi_1)
        sub_601a10(data_bac468 + 0x194, 0x64)

return sub_5f85b0(arg1)
