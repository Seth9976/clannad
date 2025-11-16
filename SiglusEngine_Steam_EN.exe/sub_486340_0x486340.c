// 函数: sub_486340
// 地址: 0x486340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_7037e4 != 0 && (data_70374a != 0 || data_70374b != 0 || data_70374c != 0))
    int32_t eax_1 = data_1320e70
    int32_t edx
    edx.b = 0
    int32_t ecx_1 = data_12a2980
    char var_a_1 = 0
    
    if (eax_1 == 2 || eax_1 == 3 || eax_1 == 4)
        edx.b = 1
        var_a_1 = 1
    label_4863eb:
        
        if (ecx_1 != 0)
            if (data_13701b8 s> 0)
            label_486416:
                int32_t eax_4 = data_703660
                data_1372c1c = eax_4
                data_1372c18 = eax_4
                sub_486440(eax_4, edx.b, ecx_1, var_a_1)
                return 1
        else if (data_1af4e94 s> ecx_1)
            goto label_486416
        
        sub_445260()
    else
        int32_t eax_2 = data_1320e7c
        
        if (eax_2 == 2 || eax_2 == 3 || eax_2 == 4)
            var_a_1 = 1
            goto label_4863eb
        
        edx = data_1370334
        eax_2.b = data_1370332
        
        if (edx != 0 || eax_2.b != 0 || data_1370108 != 0)
            eax_2:1.b = 1
        else
            eax_2:1.b = 0
        
        if (data_702fc0 != 0 && (edx != 0 || eax_2.b != 0))
            ecx_1 = 0
        
        if (eax_2:1.b != 0)
            edx.b = 0
            goto label_4863eb

return 0
