// 函数: sub_6f4750
// 地址: 0x6f4750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
int32_t result_1 = result

if (arg5 != 0)
    int32_t result_2 = arg6
    
    if (result_2 s> 0)
        int32_t edx = arg7
        
        if (edx s> 0 && result != 0 && arg2 s> 0)
            result = arg4
            
            if (result s> 0)
                if (data_bac4f6 == 0)
                    sub_6f44d0()
                    edx = arg7
                    result = arg4
                
                int32_t ebx_1 = arg8
                
                if (ebx_1 s< arg2)
                    int32_t ecx = arg9
                    
                    if (ecx s< result)
                        int32_t var_24_1
                        
                        if (ebx_1 s>= 0)
                            var_24_1 = 0
                        else
                            result_2 += ebx_1
                            int32_t eax_1 = neg.d(ebx_1)
                            ebx_1 = 0
                            var_24_1 = eax_1
                            arg8 = 0
                        
                        result = arg2 - ebx_1
                        
                        if (result s< result_2)
                            result_2 = result
                        
                        if (result_2 s> 0)
                            int32_t ebx_3
                            
                            if (ecx s>= 0)
                                ebx_3 = 0
                            else
                                edx += ecx
                                ebx_3 = neg.d(ecx)
                                ecx = 0
                            
                            result = arg4 - ecx
                            
                            if (result s< edx)
                                edx = result
                            
                            arg7 = edx
                            
                            if (edx s> 0)
                                void* ebx_6 = arg5 + ((ebx_3 * arg6 + var_24_1) << 2)
                                arg5 = ebx_6
                                char* ecx_3 = result_1 + ((ecx * arg2 + arg8) << 2)
                                int32_t esi_3 = result_2
                                result = (arg6 - esi_3) << 2
                                int32_t edi_2 = (arg2 - esi_3) << 2
                                arg6 = result
                                int32_t var_24_2 = edi_2
                                uint32_t var_10
                                uint32_t var_c
                                
                                if (arg10 != 1)
                                    if (arg10 != 3)
                                        if (edx s> 0)
                                            int32_t i
                                            
                                            do
                                                if (esi_3 s> 0)
                                                    int32_t j_5 = esi_3
                                                    int32_t j_8 = esi_3
                                                    int32_t j
                                                    
                                                    do
                                                        uint32_t edi_11 = zx.d(*(ebx_6 + 3))
                                                        
                                                        if (edi_11 != 0)
                                                            if (edi_11 != 0xff)
                                                                uint32_t eax_104 = zx.d(ecx_3[3])
                                                                
                                                                if (eax_104 != 0)
                                                                    void** esi_25 = eax_104 << 2
                                                                    void* eax_107 = *(esi_25
                                                                        + *((edi_11 << 2) + &data_4ced980))
                                                                    
                                                                    if (eax_107 != 0)
                                                                        int32_t edi_12 =
                                                                            *((edi_11 << 2) + &data_4ced580)
                                                                        int32_t esi_26 = *(esi_25
                                                                            + *((edi_11 << 2) + &data_4cedd80))
                                                                        uint32_t edx_78 = zx.d(ecx_3[1])
                                                                        *ecx_3 = (divs.dp.d(
                                                                            sx.q((*(edi_12 + (zx.d(*ebx_6) << 2))
                                                                                + zx.d(*ecx_3) * esi_26) s>> 8), 
                                                                            eax_107)).b
                                                                        uint32_t edx_81 = zx.d(ecx_3[2])
                                                                        ecx_3[1] = (divs.dp.d(
                                                                            sx.q((
                                                                                *(edi_12 + (zx.d(*(ebx_6 + 1)) << 2))
                                                                                + edx_78 * esi_26) s>> 8), 
                                                                            eax_107)).b
                                                                        j_5 = j_8
                                                                        ecx_3[2] = (divs.dp.d(
                                                                            sx.q((
                                                                                *(edi_12 + (zx.d(*(ebx_6 + 2)) << 2))
                                                                                + edx_81 * esi_26) s>> 8), 
                                                                            eax_107)).b
                                                                        ecx_3[3] = eax_107.b
                                                                else
                                                                    *ecx_3 = *ebx_6
                                                            else
                                                                *ecx_3 = *ebx_6
                                                        
                                                        ecx_3 = &ecx_3[4]
                                                        ebx_6 += 4
                                                        j = j_5
                                                        j_5 -= 1
                                                        j_8 = j_5
                                                    while (j != 1)
                                                    edx = arg7
                                                    esi_3 = result_2
                                                    edi_2 = var_24_2
                                                    result = arg6
                                                
                                                ecx_3 = &ecx_3[edi_2]
                                                ebx_6 += result
                                                i = edx
                                                edx -= 1
                                                arg7 = edx
                                            while (i != 1)
                                    else if (edx s> 0)
                                        int32_t edi_6 = edi_2
                                        int32_t i_1
                                        
                                        do
                                            if (esi_3 s> 0)
                                                int32_t j_4 = esi_3
                                                int32_t j_7 = esi_3
                                                int32_t j_1
                                                
                                                do
                                                    uint32_t esi_13 = zx.d(*(ebx_6 + 3))
                                                    
                                                    if (esi_13 != 0)
                                                        uint32_t eax_53 = zx.d(ecx_3[3])
                                                        var_10 = 0xff - eax_53
                                                        uint32_t ebx_10 = zx.d(*ebx_6)
                                                        uint32_t edi_7 = zx.d(*ecx_3)
                                                        var_c = 0xff - (0xff - esi_13)
                                                            * (0xff - eax_53) s/ 0xff
                                                        uint32_t edi_8 = zx.d(ecx_3[1])
                                                        *ecx_3 = (divs.dp.d(
                                                            sx.q((ebx_10 * edi_7 s/ 0xff * esi_13
                                                                + (0xff - esi_13) * edi_7) * eax_53
                                                                + var_10 * ebx_10 * esi_13), 
                                                            var_c) s/ 0xff).b
                                                        uint32_t ebx_11 = zx.d(*(arg5 + 1))
                                                        uint32_t edi_9 = zx.d(ecx_3[2])
                                                        ecx_3[1] = (divs.dp.d(
                                                            sx.q((ebx_11 * edi_8 s/ 0xff * esi_13
                                                                + (0xff - esi_13) * edi_8) * eax_53
                                                                + var_10 * ebx_11 * esi_13), 
                                                            var_c) s/ 0xff).b
                                                        uint32_t ebx_12 = zx.d(*(arg5 + 2))
                                                        uint32_t ebx_13 = var_c
                                                        ecx_3[2] = (divs.dp.d(
                                                            sx.q((ebx_12 * edi_9 s/ 0xff * esi_13
                                                                + (0xff - esi_13) * edi_9) * eax_53
                                                                + var_10 * ebx_12 * esi_13), 
                                                            ebx_13) s/ 0xff).b
                                                        j_4 = j_7
                                                        ecx_3[3] = ebx_13.b
                                                        ebx_6 = arg5
                                                    
                                                    ebx_6 += 4
                                                    ecx_3 = &ecx_3[4]
                                                    j_1 = j_4
                                                    j_4 -= 1
                                                    arg5 = ebx_6
                                                    j_7 = j_4
                                                while (j_1 != 1)
                                                edx = arg7
                                                esi_3 = result_2
                                                edi_6 = var_24_2
                                                result = arg6
                                            
                                            ebx_6 += result
                                            ecx_3 = &ecx_3[edi_6]
                                            i_1 = edx
                                            edx -= 1
                                            arg5 = ebx_6
                                            arg7 = edx
                                        while (i_1 != 1)
                                else if (edx s> 0)
                                    int32_t i_2
                                    
                                    do
                                        if (esi_3 s> 0)
                                            int32_t j_3 = esi_3
                                            int32_t j_6 = esi_3
                                            int32_t j_2
                                            
                                            do
                                                uint32_t esi_4 = zx.d(*(ebx_6 + 3))
                                                
                                                if (esi_4 != 0)
                                                    uint32_t eax_6 = zx.d(ecx_3[3])
                                                    var_c = 0xff
                                                    int32_t esi_6 = (0xff - esi_4) * (0xff - eax_6)
                                                    uint32_t esi_7 = zx.d(*ecx_3)
                                                    int32_t* edx_6 = &var_c
                                                    uint32_t edi_3 = zx.d(*arg5)
                                                    var_10 = edi_3 + esi_7
                                                    
                                                    if (edi_3 + esi_7 s<= 0xff)
                                                        edx_6 = &var_10
                                                    
                                                    int32_t eax_15 = *edx_6 * esi_4
                                                    var_c = 0xff
                                                    uint32_t esi_9 = zx.d(ecx_3[1])
                                                    uint32_t* edx_16 = &var_c
                                                    *ecx_3 = (divs.dp.d(
                                                        sx.q((eax_15 + (0xff - esi_4) * esi_7)
                                                            * eax_6 + (0xff - eax_6) * edi_3 * esi_4), 
                                                        0xff - esi_6 s/ 0xff) s/ 0xff).b
                                                    uint32_t edi_4 = zx.d(*(arg5 + 1))
                                                    var_10 = edi_4 + esi_9
                                                    
                                                    if (edi_4 + esi_9 s<= 0xff)
                                                        edx_16 = &var_10
                                                    
                                                    uint32_t esi_11 = zx.d(ecx_3[2])
                                                    ecx_3[1] = (divs.dp.d(
                                                        sx.q((*edx_16 * esi_4
                                                            + (0xff - esi_4) * esi_9) * eax_6
                                                            + (0xff - eax_6) * edi_4 * esi_4), 
                                                        0xff - esi_6 s/ 0xff) s/ 0xff).b
                                                    uint32_t* edx_26 = &var_c
                                                    var_c = 0xff
                                                    uint32_t edi_5 = zx.d(*(arg5 + 2))
                                                    var_10 = edi_5 + esi_11
                                                    
                                                    if (edi_5 + esi_11 s<= 0xff)
                                                        edx_26 = &var_10
                                                    
                                                    ecx_3[2] = (divs.dp.d(
                                                        sx.q((*edx_26 * esi_4
                                                            + (0xff - esi_4) * esi_11) * eax_6
                                                            + (0xff - eax_6) * edi_5 * esi_4), 
                                                        0xff - esi_6 s/ 0xff) s/ 0xff).b
                                                    j_3 = j_6
                                                    ecx_3[3] = (0xff - esi_6 s/ 0xff).b
                                                    ebx_6 = arg5
                                                
                                                ebx_6 += 4
                                                ecx_3 = &ecx_3[4]
                                                j_2 = j_3
                                                j_3 -= 1
                                                arg5 = ebx_6
                                                j_6 = j_3
                                            while (j_2 != 1)
                                            edx = arg7
                                            esi_3 = result_2
                                            edi_2 = var_24_2
                                            result = arg6
                                        
                                        ebx_6 += result
                                        ecx_3 = &ecx_3[edi_2]
                                        i_2 = edx
                                        edx -= 1
                                        arg5 = ebx_6
                                        arg7 = edx
                                    while (i_2 != 1)

return result
