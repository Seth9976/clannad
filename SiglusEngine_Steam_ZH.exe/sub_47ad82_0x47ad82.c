// 函数: sub_47ad82
// 地址: 0x47ad82
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
int32_t edi
int32_t var_2c = edi

if (esi != 0 && arg1[0x14] == 0 && arg1[0x15] == 0)
    int32_t i_3 = *(arg1[2] + 0xc)
    int32_t eax_2 = *(esi + 4)
    int32_t result
    
    if (eax_2 != 6)
        if (eax_2 != 0xc)
            if (eax_2 != 1)
                sub_46e3d1(arg1, nullptr, 0, "internal error: unrecognized statement")
                return 0x80004005
            
            while (arg1[0x14] == 0)
                if (arg1[0x15] != 0)
                    break
                
                result = sub_47ad82(*(esi + 8), 0)
                
                if (result s< 0)
                    return result
                
                esi = *(esi + 0xc)
                
                if (esi == 0)
                    break
            
            goto label_47b0e4
        
        int32_t eax_16 = *(esi + 0x10)
        
        if (eax_16 s< 0)
            goto label_47b0e4
        
        if (eax_16 s<= 1)
            int32_t i_1 = i_3
            result = sub_47bd3b(*(esi + 0x14), 0, 0)
            
            if (result s< 0)
                return result
            
            void* eax_19 = arg1[2]
            int32_t ecx_26 = *(eax_19 + 0xc)
            void* var_18_2 = nullptr
            int32_t var_1c_2 = 0
            
            if (i_1 u< ecx_26)
                arg2 = *(eax_19 + 0x18) + (i_1 << 2)
                int32_t i_2 = *(arg1[2] + 0xc) - i_1
                int32_t i
                
                do
                    void* ecx_28 = *arg2
                    
                    if (*(ecx_28 + 0x38) == arg1[0xe])
                        void* ecx_29 = *(ecx_28 + 0x3c)
                        
                        if (ecx_29 != 0 && *(ecx_29 + 4) == 0xd)
                            int32_t edx_9 = *(ecx_29 + 0x44)
                            
                            if (edx_9 u>= var_1c_2)
                                var_18_2 = ecx_29
                                var_1c_2 = edx_9
                    
                    arg2 += 4
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            if (i_1 u< ecx_26)
                do
                    void* eax_26 = *(*(arg1[2] + 0x18) + (i_1 << 2))
                    
                    if (*(eax_26 + 0x38) == arg1[0xe])
                        *(eax_26 + 0x3c) = var_18_2
                    
                    i_1 += 1
                while (i_1 u< *(arg1[2] + 0xc))
            
            int32_t eax_28
            eax_28.b = *(esi + 0x10) == 1
            arg1[0x14] = eax_28
            goto label_47b0e4
        
        if (eax_16 == 2)
            arg2 = 0xffffffff
            result = sub_47bd3b(*(esi + 0x18), &arg2, 0)
            
            if (result s< 0)
                return result
            
            int32_t var_30_6 = *(esi + 0x20)
            int80_t st0_2
            st0_2, result = sub_471c8d(arg1, 0, *(esi + 0x18), arg2, *(esi + 0x1c))
        label_47af4c:
            
            if (result s>= 0)
                goto label_47b0e4
            
            return result
        
        void* var_38_4
        void* var_34_5
        double* var_30_5
        
        if (eax_16 == 3)
            var_30_5 = *(esi + 0x1c)
            var_34_5 = *(esi + 0x18)
            var_38_4 = *(esi + 0x14)
        label_47afd5:
            int80_t st0_1
            st0_1, result = sub_47ac54(arg1, esi, var_38_4, var_34_5, var_30_5)
            goto label_47af4c
        
        if (eax_16 == 4)
            var_30_5 = *(esi + 0x1c)
            var_34_5 = *(esi + 0x18)
            var_38_4 = nullptr
            goto label_47afd5
        
        if (eax_16 == 5)
            double* eax_18 = *(esi + 0x1c)
            var_30_5 = eax_18
            var_34_5 = *(esi + 0x18)
            var_38_4 = eax_18
            goto label_47afd5
        
        if (eax_16 != 6)
            goto label_47b0e4
        
        result = sub_47133f(arg1, 1, *(esi + 0x18), &arg1[0xa], 1)
        
        if (result s< 0)
            return result
        
        arg1[0x15] = 1
        goto label_47b0e4
    
    int32_t eax_3 = *(esi + 0x10)
    void* var_1c_1
    int32_t* var_18_1
    int32_t var_14_1
    int32_t var_10_1
    int32_t var_c_1
    int32_t edx_2
    void* edi_3
    
    if (eax_3 == 1)
        void* eax_4 = *(esi + 0x18)
        arg2 = *(eax_4 + 0x10)
        var_10_1 = *(eax_4 + 0x14)
        int32_t ecx_2 = *(eax_4 + 0x18)
        
        if (ecx_2 == 0)
            var_c_1 = 1
        
        if (ecx_2 != 0 || (*(eax_4 + 0x1c) & 0x40) == 0)
            var_c_1 = 0
        
        if (ecx_2 != 0)
            var_14_1 = 1
        
        if (ecx_2 == 0 || (*(eax_4 + 0x1c) & 2) == 0)
            var_14_1 = 0
        
        int32_t ecx_3 = *(eax_4 + 0x1c)
        var_18_1 = *(eax_4 + 0x20)
        edx_2 = ecx_3 & 0x80
        var_1c_1 = *(eax_4 + 0x30)
        edi_3 = arg2
        *(eax_4 + 0x1c) = ecx_3 & 0xfffff3ff
        goto label_47ae53
    
    if (eax_3 == 2)
        void* eax_5 = *(esi + 0x18)
        edi_3 = *(eax_5 + 0x10)
        var_10_1 = *(eax_5 + 0x14)
        int32_t* ecx_6 = *(eax_5 + 0x20)
        edx_2 = 0
        *(eax_5 + 0x19) &= 0xf3
        var_18_1 = ecx_6
        var_c_1 = 0
        var_14_1 = 0
        var_1c_1 = *(eax_5 + 0x34)
    label_47ae53:
        
        if (edx_2 == 0)
            arg2 = nullptr
            
            if (var_10_1 u> 0)
                int32_t var_8_1 = edi_3 << 2
                
                do
                    if (var_14_1 == 0 || *(var_8_1 + arg1[6]) == 0xffffffff)
                        void* ecx_12 = arg1[2]
                        int32_t eax_9
                        
                        if (var_c_1 == 0)
                            eax_9 = *(ecx_12 + 0x74)
                        else
                            eax_9 = *(ecx_12 + 0x7c)
                        
                        void* var_30_1 = ecx_12
                        void* var_34_2 = ecx_12
                        var_34_2.q = fconvert.d(float.t(0))
                        int32_t eax_10 = sub_49f544(ecx_12, eax_9, 0, 0, var_34_2)
                        void* ecx_13 = arg1[2]
                        void* const ecx_15
                        
                        if (eax_10 u>= *(ecx_13 + 8))
                            ecx_15 = nullptr
                        else
                            ecx_15 = *(*(ecx_13 + 0x14) + (eax_10 << 2))
                        
                        if (ecx_15 != 0)
                            *(ecx_15 + 0x30) = arg2 + edi_3
                            void* edx_6 = arg2
                            *(ecx_15 + 0x60) = esi
                            *(ecx_15 + 0x64) = edx_6
                        
                        *(var_8_1 + arg1[6]) = eax_10
                    
                    arg2 += 1
                    var_8_1 += 4
                while (arg2 u< var_10_1)
            
            if (var_c_1 == 0)
                goto label_47b0e4
            
            int32_t edi_4 = edi_3 << 2
            result = sub_46f26e(arg1, var_18_1, arg1[6] + edi_4, var_10_1)
            
            if (result s< 0)
                return result
            
            result = sub_4716f6(arg1, var_18_1, arg1[6] + edi_4, *(arg1[2] + 0x7c), 1, nullptr, 
                nullptr, var_1c_1)
            
            if (result s< 0)
                return result
            
            result = sub_46ce14(arg1, *(esi + 0x18))
            goto label_47af4c
        
        sub_47bd3b(*(*(esi + 0x18) + 0x28), arg1[6] + (edi_3 << 2), 0)
    label_47b0e4:
        
        if (arg1[0x15] != 0 && arg3 != 0)
            int32_t i_4 = i_3
            arg2 = nullptr
            void* eax_35
            
            while (true)
                eax_35 = arg1[2]
                
                if (i_4 u>= *(eax_35 + 0xc))
                    break
                
                int32_t* ecx_33 = *(*(eax_35 + 0x18) + (i_4 << 2))
                
                if ((*ecx_33 & 0xfff00000) == 0x11000000)
                    arg2 = ecx_33[0xf]
                
                sub_46cb59(ecx_33, 1)
                *(*(arg1[2] + 0x18) + (i_4 << 2)) = 0
                i_4 += 1
            
            *(eax_35 + 0xc) = i_3
            int32_t ecx_36 = *(arg1[1] + 0x18) << 2
            int32_t esi_2
            int32_t edi_6
            edi_6, esi_2 = __builtin_memcpy(arg1[6], arg3, ecx_36 u>> 2 << 2)
            result =
                sub_47133f(arg1, __builtin_memcpy(edi_6, esi_2, ecx_36 & 3), arg2, &arg1[0xa], 1)
            
            if (result s< 0)
                return result

return 0
