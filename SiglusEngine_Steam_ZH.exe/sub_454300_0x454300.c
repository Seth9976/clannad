// 函数: sub_454300
// 地址: 0x454300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* ebx_2 = arg3 * 0x64 + *(eax_2 + 4)
int32_t edi
int32_t var_28 = edi
int32_t* edi_1 = arg4
int32_t var_c
int32_t* esi

if (edi_1 == 0)
    esi = arg5
else
    int32_t eax_4 = (*(*edi_1 + 0x10))(edi_1)
    esi = arg5
    
    if (*esi + 1 u<= eax_4)
        var_c = *((*(*edi_1 + 0xc))(edi_1) + (*esi << 2))

*esi += 1
uint32_t var_8

if (edi_1 != 0)
    int32_t eax_9 = (*(*edi_1 + 0x10))(edi_1)
    
    if (*esi + 1 u<= eax_9)
        var_8 = *((*(*edi_1 + 0xc))(edi_1) + (*esi << 2))

*esi += 1

if (edi_1 != 0 && (*(*edi_1 + 0x10))(edi_1) u>= *esi && var_8 u>= 2)
    char* eax_15 = sub_745f3f(var_8)
    int32_t result
    
    if (eax_15 != 0)
        if (var_8 != 0)
            int32_t eax_17 = var_8 & 3
            char temp1_1 = eax_17.b
            eax_17.b = neg.b(eax_17.b)
            int32_t eax_20 = neg.d(sbb.d(eax_17, eax_17, temp1_1 != 0)) + (var_8 u>> 2)
            int32_t eax_22 = (*(*edi_1 + 0x10))(edi_1)
            
            if (*esi + eax_20 u<= eax_22)
                int32_t esi_2
                int32_t edi_3
                edi_3, esi_2 = __builtin_memcpy(eax_15, (*(*edi_1 + 0xc))(edi_1) + (*esi << 2), 
                    var_8 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_2, var_8 & 3)
                esi = arg5
                edi_1 = arg4
            
            *esi += eax_20
        
        if ((*(*edi_1 + 0x10))(edi_1) u< *esi || eax_15[var_8 - 1] != 0)
            result = 0x80004005
        else
            int32_t eax_30 = sub_4538a9(arg1, eax_15, 2, 0)
            
            if (eax_30 == 0)
                result = 0x80004005
            else
                __builtin_memcpy(&ebx_2[2], eax_30, 0x28)
                ebx_2[0xa] = 0
                ebx_2[0xb] = 0
                ebx_2[0x15].w = 0xffff
                ebx_2[0xc] &= 0xfffffffd
                *(ebx_2 + 0x56) = 1
                *ebx_2 = 1
                int32_t var_c_1 = var_c + 0xfffffffc - var_8
                void* var_2c_10 = &ebx_2[0xe]
                *(ebx_2 + 0x52) = 0xb3
                ebx_2[0x16] = 0xe000000
                *(eax_2 + 0x34) += 1
                int32_t var_30_1 = var_c_1 + 0x20
                int32_t result_1 = sub_458de2()
                result = result_1
                
                if (result_1 s>= 0)
                    int32_t* eax_34 = ebx_2[0xe]
                    int32_t* edi_6 = (*(*eax_34 + 0xc))(eax_34)
                    edi_6[2] = 0
                    *edi_6 = 1
                    edi_6[1] = 3
                    int32_t eax_36 = *(eax_2 + 0xc)
                    int32_t eax_38 = (eax_36 & 7) + (eax_36 u>> 3 << 3)
                    *(eax_2 + 0xc) = eax_38
                    edi_6[3] = eax_38
                    int32_t eax_40 = *(eax_2 + 0xc) + 0x20
                    int32_t eax_42 = (eax_40 & 3) + (eax_40 u>> 2 << 2)
                    *(eax_2 + 0xc) = eax_42
                    ebx_2[0x12] = eax_42
                    *(eax_2 + 0xc) += 4
                    
                    if (var_c_1 != 0)
                        int32_t eax_44 = var_c_1 & 3
                        char temp2_1 = eax_44.b
                        eax_44.b = neg.b(eax_44.b)
                        int32_t eax_47 =
                            neg.d(sbb.d(eax_44, eax_44, temp2_1 != 0)) + (var_c_1 u>> 2)
                        int32_t eax_49 = (*(*arg4 + 0x10))(arg4)
                        int32_t* esi_5 = arg5
                        
                        if (*esi_5 + eax_47 u<= eax_49)
                            int32_t esi_7
                            int32_t edi_8
                            edi_8, esi_7 = __builtin_memcpy(&edi_6[8], 
                                (*(*arg4 + 0xc))(arg4) + (*esi_5 << 2), var_c_1 u>> 2 << 2)
                            __builtin_memcpy(edi_8, esi_7, var_c_1 & 3)
                            esi_5 = arg5
                        
                        *esi_5 += eax_47
                        int32_t result_2 = sub_4288c5(&edi_6[8], &ebx_2[0x10], &ebx_2[0x11])
                        result = result_2
                        
                        if (result_2 s>= 0)
                            if ((*(*arg4 + 0x10))(arg4) u>= *esi_5)
                                int32_t result_3 = sub_4288c5(&edi_6[8], &ebx_2[0x10], &ebx_2[0x11])
                                result = result_3
                                
                                if (result_3 s>= 0)
                                    result = sub_44896e(arg1, arg2, arg3, edi_6)
                            else
                                result = 0x80004005
    else
        result = 0x8007000e
    
    if (eax_15 != 0)
        j__free(eax_15)
    
    return result

return 0x80004005
