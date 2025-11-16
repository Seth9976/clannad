// 函数: sub_573430
// 地址: 0x573430
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 != 0 && data_1af174c == 0 && data_1af0a8c != 0 && data_1c054fc != 0)
    int32_t eax_2 = data_1b8c468
    int32_t ecx = data_1af09e4
    
    if ((eax_2 != 0 || data_13191a4 != 0 || ecx != 0) && data_20f022c == 0)
        int32_t edi_1 = data_20f0230
        int32_t ebx_1 = data_719b6c
        int32_t esi_1 = data_20f0234
        
        if (edi_1 != ebx_1 || esi_1 != data_72d6ac || data_20f0238 != 0 || data_20f0254 != 1
                || ecx != 0)
            data_1af09e4 = 0
            
            if (arg1 == 0 && eax_2 != 0)
                data_1af09ec = 1
                sub_55aa40()
                edi_1 = data_20f0230
                ebx_1 = data_719b6c
                esi_1 = data_20f0234
            
            int32_t var_1c
            int32_t var_18
            int32_t var_14
            int32_t var_10
            int32_t var_c
            int32_t var_8
            int32_t eax_4 =
                sub_570f70(&var_18, &var_1c, ebx_1, &var_18, &var_14, &var_10, &var_c, &var_8)
            
            if (eax_4 == 2 || eax_4 == 3)
                data_20f02b8 = edi_1
                data_20f02bc = esi_1
            
            int32_t edi_2 = var_18
            WPARAM eax_5 = data_72d6ac
            int32_t esi_2 = var_1c
            int32_t var_34_1 = var_8
            data_20f0230 = ebx_1
            int32_t var_38_1 = var_c
            data_20f0234 = eax_5
            sub_572570(eax_5, ebx_1, 0, eax_5, esi_2, edi_2, var_14, var_10, var_38_1, var_34_1, 1)
            sub_571060()
            data_20f02a0 = data_20f0230
            data_20f02a4 = data_20f0240
            data_20f02a8 = esi_2
            data_20f02ac = edi_2
            data_20f02b8 = 0xffffffff
            data_20f02bc = 0xffffffff
            sub_570e30()
            return 1

return 0
