// 函数: sub_4acd30
// 地址: 0x4acd30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_2 = data_1bfe300:0xc
int32_t esi = arg3
int32_t var_c = 0
int32_t var_18 = esi
int32_t var_14 = 0
sub_4d6960(arg1, &var_c, &var_14, i_2, "WAIP_CELL_RANDAM")
int32_t* var_8 = data_1bfe300:8

if (i_2 s> 0)
    int32_t ebx_1 = var_c
    uint32_t i_1 = i_2
    uint32_t i
    
    do
        uint32_t edx_2 = modu.dp.d(0:(sub_4d18c0(2)), i_2)
        
        if (*(edx_2 + ebx_1) != 0)
            int32_t eax_3 = 0
            
            while (*(edx_2 + ebx_1) != 0)
                edx_2 += 1
                
                if (edx_2 s>= i_2)
                    edx_2 = 0
                
                eax_3 += 1
                
                if (eax_3 s>= i_2)
                    break
        
        *(edx_2 + ebx_1) = 1
        int32_t eax_5
        int32_t edx_3
        edx_3:eax_5 = sx.q(edx_2)
        int32_t edx_5 = mods.dp.d(edx_3:eax_5, esi) * arg4
        int32_t esi_2 = divs.dp.d(edx_3:eax_5, esi) * arg5
        *var_8 = data_703098 + edx_5
        var_8[1] = data_70309c + esi_2
        var_8[4] = data_7030ac + edx_5
        var_8[5] = data_7030b0 + esi_2
        var_8[2] = *var_8 - 1 + arg4
        var_8[3] = var_8[1] - 1 + arg5
        esi = var_18
        var_8[6] = var_8[4] + arg4 - 1
        var_8[7] = var_8[5] - 1 + arg5
        i = i_1
        i_1 -= 1
        var_8 = &var_8[0xa]
    while (i != 1)

return sub_4d6c40(&var_14, &var_c)
