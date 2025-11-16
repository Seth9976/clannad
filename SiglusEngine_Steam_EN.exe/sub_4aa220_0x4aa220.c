// 函数: sub_4aa220
// 地址: 0x4aa220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_ef0a68 == 1)
    int32_t eax_1 = data_ef0a6c
    
    if (eax_1 != 0xffffffff && *(eax_1 * 0x74 + 0x13747b0) != 0)
        int32_t eax_3 = data_7030dc * data_70300c
        int32_t var_8 = 0
        int32_t var_c = 0
        int32_t eax_4 = eax_3 << 2
        BOOL eax_5
        int32_t edx_1
        eax_5, edx_1 = sub_4d6960(eax_4, &var_8, &var_c, eax_4, "simi_haikei")
        int32_t var_a0 = 0
        int32_t var_a4_1 = 1
        int32_t var_ac
        int32_t* var_a8
        void var_98
        void* ecx_2 = sub_41cc90(eax_5, edx_1, &var_98, var_ac, var_a8)
        int32_t var_a0_1 = 0
        int32_t esi_4 = var_8
        sub_425050(&var_98, data_70300c, esi_4, data_7030dc, eax_1 * 0x74 + 0x13747b0, &var_98, 
            ecx_2, 0xffffffff)
        void* eax_7 = data_7030b0
        int32_t edx_3 = data_7030ac
        int32_t var_a4_2 = data_7030b8
        int32_t var_a8_1 = data_7030b4
        void* var_ac_1 = eax_7
        int32_t var_b0_1 = edx_3
        sub_458da0(eax_7, edx_3, &data_1bfe2a4, eax_7, esi_4, data_70300c, data_7030dc)
        sub_4d6c40(&var_c, &var_8)
        return 1

return 0
