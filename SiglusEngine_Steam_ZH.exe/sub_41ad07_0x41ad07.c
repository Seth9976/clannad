// 函数: sub_41ad07
// 地址: 0x41ad07
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[2].b != 2)
    return 0x80004005

int32_t edi
int32_t var_40_1 = edi
int32_t edi_1 = *(*arg1 + 0x68)
int32_t eax_3 = sub_745f3f(edi_1 << 4)
int32_t var_8_1

if (eax_3 == 0)
    var_8_1 = 0
else
    sub_61cdd0(eax_3, 0x10, edi_1, sub_52e900)
    var_8_1 = eax_3

int32_t result

if (var_8_1 != 0)
    int32_t edi_2 = *(arg1[1] + 0x68)
    int32_t* eax_8 = sub_745f3f(edi_2 << 4)
    int32_t* var_c_1
    
    if (eax_8 == 0)
        var_c_1 = nullptr
    else
        sub_61cdd0(eax_8, 0x10, edi_2, sub_52e900)
        var_c_1 = eax_8
    
    if (var_c_1 != 0)
        void* eax_10 = arg1[1]
        
        if (*(eax_10 + 0x10) != 0 && *(*arg1 + 0x10) != 0)
            *(eax_10 + 0x10) = 0
            *(*arg1 + 0x10) = 0
        
        void* ecx_1 = *arg1
        void* esi_1 = arg1[1]
        uint32_t temp0_1 = divu.dp.d(0:(*(ecx_1 + 0x68) << 0x10), *(esi_1 + 0x68))
        int32_t var_20_1 = 0
        int32_t i = 0
        uint32_t temp0_2 = divu.dp.d(0:(*(ecx_1 + 0x6c) << 0x10), *(esi_1 + 0x6c))
        int32_t eax_19 = *(ecx_1 + 0x70) << 0x10
        int32_t temp2_3 = *(esi_1 + 0x70)
        void* eax_21 = esi_1
        
        if (*(eax_21 + 0x70) u> 0)
            do
                int32_t var_24_1 = 0xffffffff
                int32_t esi_2 = 0
                int32_t var_28_3 = 0
                int32_t j = 0
                
                if (*(eax_21 + 0x6c) u> 0)
                    do
                        int32_t var_18_1 = 0
                        int32_t k = 0
                        
                        if (((var_24_1 ^ esi_2) & 0xffff0000) != 0)
                            (*(**arg1 + 4))(esi_2 u>> 0x10, var_20_1 u>> 0x10, var_8_1)
                            var_24_1 = esi_2
                        
                        if (*(arg1[1] + 0x68) u> 0)
                            int32_t* eax_26 = var_c_1
                            
                            do
                                int32_t esi_3 = var_18_1
                                var_18_1 += temp0_1
                                int32_t* esi_6 = (esi_3 u>> 0x10 << 4) + var_8_1
                                k += 1
                                *eax_26 = *esi_6
                                void* edi_4 = &eax_26[1]
                                void* esi_7 = &esi_6[1]
                                *edi_4 = *esi_7
                                void* edi_5 = edi_4 + 4
                                void* esi_8 = esi_7 + 4
                                *edi_5 = *esi_8
                                *(edi_5 + 4) = *(esi_8 + 4)
                                eax_26 = &eax_26[4]
                            while (k u< *(arg1[1] + 0x68))
                        
                        (*(*arg1[1] + 8))(j, i, var_c_1)
                        esi_2 = var_28_3 + temp0_2
                        j += 1
                        var_28_3 = esi_2
                    while (j u< *(arg1[1] + 0x6c))
                
                var_20_1 += divu.dp.d(0:eax_19, temp2_3)
                i += 1
                eax_21 = arg1[1]
            while (i u< *(eax_21 + 0x70))
        
        j__free(var_8_1)
        j__free(var_c_1)
        result = 0
    else
        j__free(var_8_1)
        result = 0x8007000e
else
    result = 0x8007000e

return result
