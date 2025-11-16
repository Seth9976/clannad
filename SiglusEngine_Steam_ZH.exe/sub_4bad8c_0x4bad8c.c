// 函数: sub_4bad8c
// 地址: 0x4bad8c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t* ebx = nullptr
int32_t edi
int32_t var_40 = edi
int32_t var_14 = 0

if (arg3 u> 0)
    int32_t var_18
    
    do
        int32_t* eax_1 = *(arg2 + (eax << 2))
        
        if (eax_1 != 0)
            int32_t ecx_1 = *eax_1
            
            if ((ecx_1 & 0xfff00000) != 0 && (ecx_1 & 0xfffff) != 0)
                int32_t ecx_2 = eax_1[3]
                
                if (ecx_2 != 0)
                    int32_t* ecx_3 = eax_1[4]
                    int32_t esi_1 = *(arg1 + 0x14)
                    void* edx_3 = *(esi_1 + (*ecx_3 << 2))
                    
                    if (*(edx_3 + 0xc) == arg4 && *(edx_3 + 4) == *(arg1 + 0x88))
                        ebx = eax_1
                        var_18 = var_14
                        int32_t eax_3 = 0
                        
                        if (ecx_2 u> 0)
                            do
                                if (*(*(esi_1 + (*ecx_3 << 2)) + 0x10) == 2)
                                    return 0
                                
                                eax_3 += 1
                                ecx_3 = &ecx_3[1]
                            while (eax_3 u< ecx_2)
        
        eax = var_14 + 1
        var_14 = eax
    while (eax u< arg3)
    
    if (ebx != 0)
        int32_t eax_6 = *ebx
        int32_t esi_3 = eax_6 & 0xfffff
        int32_t var_2c_1 = esi_3
        int32_t result
        int32_t* var_44_3
        int32_t* var_20_2
        
        if ((eax_6 & 0xfff00000) != 0x50000000)
            void* eax_21 = sub_49ec23(0x74)
            
            if (eax_21 == 0)
                arg3 = nullptr
            else
                arg3 = sub_49e789(eax_21)
            
            if (arg3 == 0)
                return 0x8007000e
            
            int32_t ecx_21 = ebx[1]
            uint32_t temp0_1 = divu.dp.d(0:ecx_21, esi_3)
            result = sub_49ec6e(arg3, (((esi_3 + 1) ^ *ebx) & 0xfffff) ^ *ebx, ecx_21 + temp0_1, 
                ebx[3] + 1, 0)
            
            if (result s>= 0)
                int32_t* eax_31 = arg2 + (var_18 << 2)
                var_20_2 = eax_31
                result = sub_49e7bf(arg3, *eax_31)
                
                if (result s>= 0)
                    int32_t var_1c_1 = 0
                    
                    if (temp0_1 u<= 0)
                    label_4bb135:
                        var_44_3 = arg3
                    label_4bb13d:
                        sub_49eecd(*var_20_2, var_44_3)
                        sub_46cb59(arg3, 1)
                        arg3 = nullptr
                        result = 0
                    else
                        int32_t eax_34 = esi_3 << 2
                        int32_t* var_10_1 = nullptr
                        int32_t* var_c_1 = nullptr
                        int32_t var_14_1 = eax_34
                        
                        while (true)
                            int32_t var_28_1 = 1
                            
                            if (esi_3 u> 1)
                                int32_t* eax_36 = ebx[2] + var_c_1
                                int32_t ecx_29 = *(arg1 + 0x14)
                                void* eax_37 = &eax_36[1]
                                int32_t i_1 = esi_3 - 1
                                int32_t i
                                
                                do
                                    if (*(*(ecx_29 + (*eax_37 << 2)) + 0x10)
                                            != *(*(ecx_29 + (*eax_36 << 2)) + 0x10))
                                        var_28_1 = 0
                                    
                                    eax_37 += 4
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                            
                            int32_t esi_10 = esi_3 << 2
                            int32_t esi_13
                            int32_t edi_12
                            edi_12, esi_13 = __builtin_memcpy(arg3[2] + var_10_1, ebx[2] + var_c_1, 
                                esi_10 u>> 2 << 2)
                            __builtin_memcpy(edi_12, esi_13, esi_10 & 3)
                            void* edi_13 = arg1
                            int32_t eax_39 = arg3[2]
                            int32_t ecx_35
                            
                            if (var_28_1 == 0)
                                int32_t ecx_37 = *(edi_13 + 0x14)
                                void* esi_14 = *(ecx_37 + (*(var_10_1 + eax_39) << 2))
                                int32_t eax_41 = *(esi_14 + 0xc)
                                int32_t var_44_5 = ecx_37
                                int32_t var_48_4 = ecx_37
                                var_48_4.q = fconvert.d(float.t(0))
                                int32_t eax_42 =
                                    sub_49f544(edi_13, *(esi_14 + 4), eax_41, 2, var_48_4)
                                
                                if (eax_42 == 0xffffffff)
                                    goto label_4baeed
                                
                                ecx_35 = arg3[2]
                                *(var_14_1 + ecx_35) = eax_42
                                
                                if (*(esi_14 + 4) == *(edi_13 + 0x88))
                                    int32_t result_1
                                    result_1, ecx_35 = sub_4bad8c(arg2, var_18, eax_41)
                                    result = result_1
                                    
                                    if (result s< 0)
                                        break
                                    
                                    edi_13 = arg1
                            else
                                ecx_35 = *(var_c_1 + ebx[2])
                                *(var_14_1 + eax_39) = ecx_35
                            
                            int32_t var_44_7 = ecx_35
                            int32_t var_48_6 = ecx_35
                            var_48_6.q = fconvert.d(float.t(0))
                            int32_t eax_44 = sub_49f544(edi_13, *(edi_13 + 0x88), arg4, 2, var_48_6)
                            
                            if (eax_44 == 0xffffffff)
                                goto label_4baeed
                            
                            int32_t ecx_43 = ebx[3] << 2
                            int32_t esi_16
                            int32_t edi_15
                            edi_15, esi_16 = __builtin_memcpy(arg3[4], ebx[4], ecx_43 u>> 2 << 2)
                            var_1c_1 += 1
                            __builtin_memcpy(edi_15, esi_16, ecx_43 & 3)
                            *(arg3[4] + (ebx[3] << 2)) = eax_44
                            var_c_1 = &var_c_1[var_2c_1]
                            var_10_1 += eax_34 + 4
                            var_14_1 += eax_34 + 4
                            
                            if (var_1c_1 u>= temp0_1)
                                goto label_4bb135
                            
                            esi_3 = var_2c_1
        else
            void* eax_8 = sub_49ec23(0x74)
            
            if (eax_8 == 0)
                arg3 = nullptr
            else
                arg3 = sub_49e789(eax_8)
            
            if (arg3 == 0)
                return 0x8007000e
            
            result = sub_49ec6e(arg3, *ebx, ebx[1], ebx[3] + 1, 0)
            
            if (result s>= 0)
                int32_t* eax_14 = arg2 + (var_18 << 2)
                var_20_2 = eax_14
                result = sub_49e7bf(arg3, *eax_14)
                
                if (result s>= 0)
                    int32_t* var_44_2 = arg3
                    int32_t* var_48_2 = arg3
                    var_48_2.q = fconvert.d(float.t(0))
                    int32_t eax_16 = sub_49f544(arg1, *(arg1 + 0x88), arg4, 2, var_48_2)
                    
                    if (eax_16 != 0xffffffff)
                        int32_t ecx_10 = arg3[1] << 2
                        int32_t esi_6
                        int32_t edi_4
                        edi_4, esi_6 = __builtin_memcpy(arg3[2], ebx[2], ecx_10 u>> 2 << 2)
                        __builtin_memcpy(edi_4, esi_6, ecx_10 & 3)
                        int32_t ecx_15 = ebx[3] << 2
                        int32_t esi_8
                        int32_t edi_6
                        edi_6, esi_8 = __builtin_memcpy(arg3[4], ebx[4], ecx_15 u>> 2 << 2)
                        __builtin_memcpy(edi_6, esi_8, ecx_15 & 3)
                        *(arg3[4] + (ebx[3] << 2)) = eax_16
                        var_44_3 = arg3
                        goto label_4bb13d
                    
                label_4baeed:
                    result = 0x8007000e
        
        if (arg3 != 0)
            sub_46cb59(arg3, 1)
        
        return result

sub_4a4100(arg1, nullptr, 0x12d7, "internal error: uppropagation failed")
return 0x80004005
