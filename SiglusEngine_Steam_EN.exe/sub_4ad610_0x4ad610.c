// 函数: sub_4ad610
// 地址: 0x4ad610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_703058
int32_t esi = data_70305c

if (ecx s< 8)
    ecx = 8

if (esi s< 8)
    esi = 8

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(data_7030bc)
int32_t temp0 = divs.dp.d(edx:eax_1, ecx)
int32_t var_c = temp0
int32_t ecx_1 = temp0

if (mods.dp.d(edx:eax_1, ecx) != 0)
    ecx_1 += 1
    var_c = ecx_1

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q(data_7030c0)
int32_t i_1 = divs.dp.d(edx_2:eax_4, esi)

if (mods.dp.d(edx_2:eax_4, esi) != 0)
    i_1 += 1

int32_t result = i_1 * ecx_1
data_1bfe300:0xc = result

if (result s> 0)
    int32_t eax_8 = result * 0x28
    int32_t edx_4 = sub_4d6960(eax_8, &data_1bfe300:8, &data_1bfe300:4, eax_8, "WAIP_CELL_PAR")
    uint32_t ecx_2 = data_703054
    int32_t edi
    
    if (ecx_2 u> 0x18)
        int32_t ecx_7 = data_70309c
        int32_t edx_8 = data_7030b0
        void* var_10_1 = data_1bfe300:8
        int32_t var_14_1 = ecx_7
        int32_t var_20_1 = edx_8
        int32_t var_18_1 = ecx_7 - 1 + esi
        int32_t var_1c_1 = edx_8 - 1 + esi
        
        if (i_1 s> 0)
            int32_t eax_17 = var_c
            int32_t ecx_9 = eax_17 * 0x28
            int32_t ecx_10 = var_14_1
            int32_t i
            
            do
                sub_4ac440(eax_17, eax_17, var_10_1, ecx, ecx_10, var_18_1, edx_8, var_1c_1, 0)
                ecx_10 = var_14_1 + esi
                edx_8 = var_20_1 + esi
                var_10_1 += ecx_9
                var_18_1 += esi
                var_1c_1 += esi
                eax_17 = var_c
                var_14_1 = ecx_10
                var_20_1 = edx_8
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        edi = ecx
    else
        uint32_t eax_9 = zx.d(lookup_table_4ad7c0[ecx_2])
        
        switch (eax_9)
            case 0
                sub_4ac590(eax_9, i_1, var_c, ecx, esi, ecx_2)
                edi = ecx
            case 1
                sub_4ac760(ecx_2 - 8, i_1, var_c, ecx, esi, ecx_2 - 8)
                edi = ecx
            case 2
                sub_4acb00(ecx_2 - 0x10, i_1, var_c, ecx, esi, ecx_2 - 0x10)
                edi = ecx
            case 3
                edi = ecx
                sub_4acd30(eax_9, edx_4, var_c, edi, esi)
    
    result = sub_4ace40(data_703068)
    
    if (data_1bfe300:8 != 0)
        return sub_4acfc0(result, esi, edi, data_703064)

return result
