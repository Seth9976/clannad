// 函数: sub_6e7340
// 地址: 0x6e7340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg2 + (arg4 << 2) + 0xb78)
void* esi_2 = (arg4 << 5) + arg3
int32_t eax_1 = *(arg2 + (arg4 << 2) + 0xb84)
int32_t i_3 = *(esi_2 + 0x70)
int32_t edx_1 = *(arg3 + 0xd0)
int32_t i_2 = i_3
int32_t eax_4 = arg2 + ((arg4 + ((arg4 + 0x172) << 1)) << 2)
int32_t eax_5 = eax
int32_t edi = 0
int32_t var_8 = edx_1
int32_t var_1c = 0
int32_t var_20 = eax_5
int32_t ebx_3 = i_2 * eax_5 + *(esi_2 + 0x78)
int32_t esi_3 = eax_1

while (eax_5 s< esi_3)
    if (eax_5 != 0)
        int32_t var_28_1 = 0xffffffff
        int32_t var_34_1 = 0xffffffff
        int32_t* esi_4 = edx_1 - (i_2 << 2) + (ebx_3 << 2)
        int32_t ecx_8 = *esi_4
        int32_t var_14_1
        
        if ((ecx_8.b & 1) == 0)
            var_14_1 = 0xffffffff
        else
            var_14_1 = 0x10011121 s>> ((ecx_8 u>> 8 & 7) << 2).b & 0xf
        
        i_2 = i_3
        int32_t eax_13 = 0
        
        if (i_2 s> 0)
            void* edx_3 = &esi_4[1]
            int32_t esi_7 = var_8
            void* var_c_1 = edx_3
            
            do
                eax_13 += 1
                int32_t ecx_12
                
                if (eax_13 s< i_2)
                    ecx_12 = *edx_3
                
                int32_t edi_2
                
                if (eax_13 s>= i_2 || (ecx_12.b & 1) == 0)
                    edi_2 = 0xffffffff
                else
                    edi_2 = 0x10011121 s>> ((ecx_12 u>> 8 & 7) << 2).b & 0xf
                
                int32_t ecx_16 = *(esi_7 + (ebx_3 << 2))
                
                if ((ecx_16.b & 1) == 0)
                    var_28_1 = 0xffffffff
                else
                    int32_t esi_9 = 0x10011121 s>> ((ecx_16 u>> 8 & 7) << 2).b & 0xf
                    int32_t ecx_20
                    ecx_20.b = edi_2 == esi_9
                    int32_t eax_14
                    eax_14.b = var_14_1 == esi_9
                    int32_t eax_15
                    eax_15.b = var_34_1 == esi_9
                    int32_t ecx_24 = (((ecx_20 * 2) | eax_14) * 2) | eax_15
                    int32_t eax_16
                    eax_16.b = var_28_1 == esi_9
                    int32_t ecx_29
                    int32_t eax_18
                    int32_t ecx_30
                    
                    if (((ecx_24 * 2) | eax_16) - 1 u> 0xe)
                        ecx_29 = *(eax_4 + (esi_9 << 2))
                    else
                        switch ((ecx_24 * 2) | eax_16)
                            case 1, 3
                                ecx_29 = sx.d(*(var_8 + (ebx_3 << 2) - 2))
                            case 2
                                ecx_29 = sx.d(*(edx_3 - 6))
                            case 4, 6, 0xc
                                ecx_29 = sx.d(*(edx_3 - 2))
                            case 5
                                ecx_30 = sx.d(*(var_8 + (ebx_3 << 2) - 2))
                                eax_18 = sx.d(*(edx_3 - 2))
                            label_6e750e:
                                int32_t eax_20
                                int32_t edx_4
                                edx_4:eax_20 = sx.q(eax_18 + ecx_30)
                                ecx_29 = (eax_20 - edx_4) s>> 1
                                edx_3 = var_c_1
                            case 7, 0xf
                                int32_t ecx_42 = sx.d(*(edx_3 - 6))
                                int32_t edx_9 = sx.d(*(edx_3 - 2))
                                int32_t eax_35 = sx.d(*(var_8 + (ebx_3 << 2) - 2))
                                int32_t eax_39
                                int32_t edx_10
                                edx_10:eax_39 = sx.q((eax_35 + edx_9) * 0x1d - ecx_42 * 0x1a)
                                ecx_29 = ((edx_10 & 0x1f) + eax_39) s>> 5
                                int32_t eax_42
                                int32_t edx_12
                                edx_12:eax_42 = sx.q(ecx_29 - edx_9)
                                
                                if ((eax_42 ^ edx_12) - edx_12 s<= 0x80)
                                    int32_t eax_47
                                    int32_t edx_13
                                    edx_13:eax_47 = sx.q(ecx_29 - eax_35)
                                    
                                    if ((eax_47 ^ edx_13) - edx_13 s<= 0x80)
                                        int32_t eax_52
                                        int32_t edx_14
                                        edx_14:eax_52 = sx.q(ecx_29 - ecx_42)
                                        
                                        if ((eax_52 ^ edx_14) - edx_14 s> 0x80)
                                            ecx_29 = ecx_42
                                    else
                                        ecx_29 = eax_35
                                else
                                    ecx_29 = edx_9
                                
                                edx_3 = var_c_1
                            case 8
                                ecx_29 = sx.d(*(edx_3 + 2))
                            case 9, 0xb, 0xd
                                int32_t eax_28
                                int32_t edx_5
                                edx_5:eax_28 = sx.q(sx.d(*(var_8 + (ebx_3 << 2) - 2)) * 0x4b
                                    + sx.d(*(edx_3 + 2)) * 0x35)
                                ecx_29 = ((edx_5 & 0x7f) + eax_28) s>> 7
                                edx_3 = var_c_1
                            case 0xa
                                eax_18 = sx.d(*(edx_3 - 6))
                                ecx_30 = sx.d(*(edx_3 + 2))
                                goto label_6e750e
                            case 0xe
                                int32_t eax_33
                                int32_t edx_7
                                edx_7:eax_33 = sx.q((sx.d(*(edx_3 - 6)) + sx.d(*(edx_3 + 2))) * 3
                                    + sx.d(*(edx_3 - 2)) * 0xa)
                                ecx_29 = ((edx_7 & 0xf) + eax_33) s>> 4
                                edx_3 = var_c_1
                    var_28_1 = esi_9
                    int32_t ecx_33 = (ecx_29 << 0x10) + *(var_8 + (ebx_3 << 2))
                    *(var_8 + (ebx_3 << 2)) = ecx_33
                    var_1c += 1
                    *(eax_4 + (esi_9 << 2)) = ecx_33 s>> 0x10
                    esi_7 = var_8
                
                edx_3 += 4
                var_34_1 = var_14_1
                ebx_3 += 1
                i_2 = i_3
                var_14_1 = edi_2
                var_c_1 = edx_3
            while (eax_13 s< i_2)
            
            edi = var_1c
            edx_1 = var_8
        
        eax_5 = var_20
        esi_3 = eax_1
    else if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            int32_t edx_2 = *(edx_1 + (ebx_3 << 2))
            
            if ((edx_2.b & 1) == 0)
                edx_1 = var_8
            else
                int32_t* ecx_5 = eax_4 + ((0x10011121 s>> ((edx_2 u>> 8 & 7) << 2).b & 0xf) << 2)
                int32_t eax_10 = (*ecx_5 << 0x10) + edx_2
                edx_1 = var_8
                *(edx_1 + (ebx_3 << 2)) = eax_10
                edi += 1
                *ecx_5 = eax_10 s>> 0x10
            
            ebx_3 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_2 = i_3
        var_1c = edi
        eax_5 = var_20
        esi_3 = eax_1
    
    eax_5 += 1
    var_20 = eax_5

*(arg2 + (arg4 << 2) + 0xb18) = edi
int32_t result = (eax_1 - eax) * i_2 - edi
*(arg2 + (arg4 << 2) + 0xb24) = result
return result
