// 函数: sub_5dae40
// 地址: 0x5dae40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char ebx = 0
int32_t var_8 = 0
int32_t* result = *arg1

if (result s>= 0)
    void* esi_1 = data_bac510
    
    if (*(esi_1 + 0xa2eb84) s> result && arg1[1].b != 0)
        if (arg1[5].b == 0)
            arg1[5].b = 1
            arg1[6] = arg2
        
        result *= 0xa0e4
        int32_t ecx
        
        if (arg1[2] != 0)
            ecx = *(result + esi_1 + 0x207d4)
        else
            ecx = *(result + esi_1 + 0x207d0)
        
        if (ecx s>= 0 && *(esi_1 + 0x9988) s> ecx)
            result = *((ecx << 5) + esi_1 + 0x79a4)
            int32_t ecx_3 = *(((ecx + 0x3cd) << 5) + esi_1)
            
            if (result != 0 && ecx_3 != 0)
                int32_t temp1_1 = mods.dp.d(sx.q(divs.dp.d(sx.q(arg2 - arg1[6]), result)), ecx_3)
                
                if (arg1[2] != 0)
                    result = arg1[9]
                else
                    result = arg1[7]
                
                int32_t* result_1 = result
                int32_t* var_104
                void var_14
                
                if (result == 0)
                    arg2:3.b = 0
                else
                    var_104 = &var_14
                    result = sub_54d980(result, var_104, temp1_1)
                    esi_1 = data_bac510
                    ebx = 1
                    arg2:3.b = 1
                    
                    if (*result == 0)
                        arg2:3.b = 0
                
                if ((ebx & 1) != 0)
                    result = sub_54b010(&var_14)
                    esi_1 = data_bac510
                
                if (arg2:3.b != 0)
                    int32_t eax_7 = *arg1 * 0xa0e4
                    int32_t ebx_1 = 0
                    arg2 = nullptr
                    int32_t ecx_7 = *(eax_7 + esi_1 + 0x207d8)
                    void var_1c
                    
                    if (ecx_7 == 0)
                        switch (*(eax_7 + esi_1 + 0x207dc))
                            case 0
                                ebx_1 = *(eax_7 + esi_1 + 0x207e0) + arg4
                                arg2 = *(eax_7 + esi_1 + 0x207e4) + arg5
                            case 1
                                var_104 = &var_14
                                int32_t* eax_9 = sub_54d980(result_1, var_104, temp1_1)
                                ebx_1 = arg6 - *(*arg1 * 0xa0e4 + data_bac510 + 0x207e0)
                                    - *(*eax_9 + 0x14)
                                sub_54b010(&var_14)
                                esi_1 = data_bac510
                                arg2 = *(*arg1 * 0xa0e4 + esi_1 + 0x207e4) + arg5
                            case 2
                                ebx_1 = *(eax_7 + esi_1 + 0x207e0) + arg4
                                void var_24
                                var_104 = &var_24
                                void** eax_12 = sub_54d980(result_1, var_104, temp1_1)
                                arg2 = arg7 - *(*arg1 * 0xa0e4 + data_bac510 + 0x207e4)
                                    - *(*eax_12 + 0x18)
                                sub_54b010(&var_24)
                                esi_1 = data_bac510
                            case 3
                                void var_2c
                                var_104 = &var_2c
                                int32_t* eax_14 = sub_54d980(result_1, var_104, temp1_1)
                                ebx_1 = arg6 - *(*arg1 * 0xa0e4 + data_bac510 + 0x207e0)
                                    - *(*eax_14 + 0x14)
                                sub_54b010(&var_2c)
                                var_104 = &var_1c
                                int32_t* eax_16 = sub_54d980(result_1, var_104, temp1_1)
                                arg2 = arg7 - *(*arg1 * 0xa0e4 + data_bac510 + 0x207e4)
                                    - *(*eax_16 + 0x18)
                                sub_54b010(&var_1c)
                                esi_1 = data_bac510
                    else if (ecx_7 == 1)
                        if (*(esi_1 + 0x10bd8) != ecx_7)
                            ebx_1 = arg1[3] + arg4
                            arg2 = arg1[4] + arg5
                        else
                            var_104 = &var_1c
                            ebx_1 =
                                arg6 - *(*sub_54d980(result_1, var_104, temp1_1) + 0x14) - arg1[3]
                            sub_54b010(&var_1c)
                            esi_1 = data_bac510
                            arg2 = arg1[4] + arg5
                    int32_t var_ec
                    sub_553440(&var_ec)
                    int32_t eax_21 = *(esi_1 + 0xa2eba4)
                    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(ebx_1))
                    var_ec = 1
                    int32_t var_e4_1 = 0
                    int32_t var_e0_1 = eax_21
                    int32_t var_d8_1 = xmm0_2
                    int32_t var_d4_1 = _mm_cvtepi32_ps(zx.o(arg2))
                    sub_6289b0(&var_ec, arg3)
                    arg1[0xb] = 2
                    sub_628eb0(&arg1[0xc], &arg1[0x53], &var_ec, &arg1[0xc])
                    var_104 = &var_ec
                    *(arg1 + 0x31) = 1
                    arg1[0x11] = 0
                    sub_54d950(&var_104, &data_4ebe2bc)
                    operator new(&arg1[0xb], var_104)
                    sub_54d950(&var_104, &data_4ebe2ec)
                    operator new[](&arg1[0xb])
                    sub_54d980(result_1, &var_104, temp1_1)
                    return sub_6f1260(&arg1[0xb], nullptr)

return result
