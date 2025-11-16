// 函数: sub_6452d0
// 地址: 0x6452d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3 + 1
int32_t var_8 = 2

if (result != arg2)
    while (true)
        int32_t edi_1 = 0
        int32_t i = 0
        
        if (var_8 != 1)
            do
                int32_t edi_2 = edi_1 << ((*(arg4 + 4)).b - 1)
                int32_t j
                
                do
                    j = sub_746b2c()
                while (j u> *(arg4 + 8))
                
                edi_1 = (edi_2 * 2) | j
                i = ((i << ((*(arg4 + 4)).b - 1)) * 2) | *(arg4 + 8)
            while (i u< var_8 - 1)
        
        int32_t edx = 0
        int32_t edx_2 = 0
        char* edx_3 = modu.dp.d(edx_2:edi_1, var_8)
        
        if (divu.dp.d(edx_2:edi_1, var_8) u>= divu.dp.d(edx:i, var_8)
                && modu.dp.d(edx:i, var_8) != var_8 - 1)
            continue
        
        uint32_t eax_7
        eax_7.b = edx_3[arg3]
        uint32_t ecx_4
        ecx_4.b = *(arg3 + var_8 - 1)
        *(arg3 + var_8 - 1) = eax_7.b
        edx_3[arg3] = ecx_4.b
        result = arg3 - 1 + var_8 + 1
        var_8 += 1
        
        if (result == arg2)
            break

return result
