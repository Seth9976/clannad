// 函数: sub_4ce990
// 地址: 0x4ce990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) != 0)
    uint32_t eax_1 = *(arg1 + 0x14)
    
    if (eax_1 != 0)
        void* var_8 = nullptr
        int32_t var_c = 0
        sub_4d6960(eax_1, &var_8, &var_c, eax_1, "RateChage")
        uint32_t eax_3 = zx.d(*(arg1 + 0x2c))
        void* result = sub_4ce870(eax_3, *(arg1 + 0x10), var_8, *(arg1 + 0x14), *(arg1 + 0x30), 
            eax_3, zx.d(*(arg1 + 0x2e)), arg2)
        sub_4d6ae0(result, &var_8, &var_c, result)
        void* ebx = var_8
        *(arg1 + 0x10) = ebx
        sub_4d6c40(arg1 + 8, arg1 + 0xc)
        uint32_t ecx_4 = zx.d(*(arg1 + 0x2e))
        *(arg1 + 8) = var_c
        *(arg1 + 0xc) = ebx
        int32_t temp0 = divs.dp.d(sx.q(result), ecx_4 u>> 3)
        *(arg1 + 0x14) = result
        *(arg1 + 0x18) = temp0
        *(arg1 + 0x48) = temp0
        *(arg1 + 0x40) = result
        return result

return 0
