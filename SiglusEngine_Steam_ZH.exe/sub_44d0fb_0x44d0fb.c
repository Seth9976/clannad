// 函数: sub_44d0fb
// 地址: 0x44d0fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_28 = edi
void* edi_1 = arg1
int32_t eax_1 = *(edi_1 + 0x1c) + *(edi_1 + 0x20)
int32_t* ebx = *arg2
void* var_14 = edi_1

if (&ebx[5] u> eax_1)
    return 0x80004005

int32_t eax_2 = *ebx
int32_t esi_1 = ebx[4]
int32_t var_10_1 = esi_1
int32_t result = sub_443896(edi_1, ebx[2])

if (result s>= 0)
    result = sub_44383a(edi_1, ebx[3])
    
    if (result s>= 0)
        if (esi_1 == 0)
            var_10_1 = 1
            esi_1 = 1
        
        int32_t eax_3 = ebx[1]
        
        if (eax_3 s< 0)
            return 0x80004005
        
        if (eax_3 s<= 3)
            if (eax_2 s<= 0 || (eax_2 s> 2 && eax_2 != 3))
                return 0x80004005
            
            result = sbb.d(&ebx[7], &ebx[7], eax_1 u< &ebx[7]) & 0x80004005
            
            if (result s>= 0)
                result =
                    sbb.d(&ebx[5], &ebx[5], eax_1 u< &ebx[ebx[6] * ebx[5] * esi_1]) & 0x80004005
                
                if (result s>= 0)
                    *arg3 += (ebx[6] * ebx[5] * esi_1) << 2
                    *arg2 += 0x1c
        else if (eax_3 == 4)
            int32_t edx_5 = eax_2
            result = 0
            
            if (edx_5 s< 4)
                return 0x80004005
            
            if (edx_5 s<= 9)
            label_44d438:
                int32_t* ecx_20 = arg3
                int32_t eax_49 = *ecx_20 + (esi_1 << 2)
                result = sbb.d(eax_49, eax_49, eax_1 u< eax_49) & 0x80004005
                
                if (result s>= 0)
                    int32_t var_8_3 = 0
                    
                    if (esi_1 u> 0)
                        do
                            int32_t ecx_22 = **ecx_20
                            
                            if (ecx_22 u>= *(edi_1 + 0x14))
                                return 0x80004005
                            
                            if (ecx_22 == 0)
                                return 0x80004005
                            
                            int32_t ecx_24 = ecx_22 * 0x18
                            int32_t* ebx_7 = *(edi_1 + 0x18) + ecx_24
                            
                            if (*ebx_7 != 0x7fffffff)
                                return 0x80004005
                            
                            *ebx_7 = edx_5
                            int32_t* ebx_9 = ecx_24 + *(edi_1 + 0x18) + 0x14
                            *ebx_9 |= 1
                            
                            if (edx_5 == 0x10 || edx_5 == 0xf)
                                void* esi_3 = *(*(edi_1 + 0xb0) + (arg4 << 2))
                                int32_t eax_51
                                eax_51.w = *(edi_1 + 0x30)
                                
                                if (*(edi_1 + 0x34) u<= zx.d(eax_51.w))
                                    return 0x80004005
                                
                                *(ecx_24 + *(edi_1 + 0x18) + 0x10) = eax_51.w
                                *(esi_3 + 0x46) += 1
                                *(edi_1 + 0x30) += 1
                                int32_t ebx_12 = zx.d(*(esi_3 + 0x44)) + zx.d(*(esi_3 + 0x46)) - 1
                                void* ebx_14 = ebx_12 * 0x64 + *(edi_1 + 0x2c)
                                bool cond:7_1 = *(ebx_14 + 0x38) u> 0
                                *(ebx_14 + 0x3e) = arg4.w
                                
                                if (cond:7_1)
                                    return 0x80004005
                                
                                result = sub_44cc21(ebx_14, 1)
                                
                                if (result s< 0)
                                    return result
                                
                                void* eax_53 = *(ebx_14 + 4)
                                
                                if (eax_2 != 0x10)
                                    *(ebx_14 + 0x1a) = 0
                                    *(eax_53 + 0x52) = 0x93
                                    *(*(ebx_14 + 4) + 0x58) = 0xb000000
                                else
                                    *(ebx_14 + 0x18) = 0
                                    *(eax_53 + 0x52) = 0x92
                                    *(*(ebx_14 + 4) + 0x58) = 0xa000000
                                
                                *(*(ebx_14 + 4) + 0x54) = 0xffff
                                *(*(ebx_14 + 4) + 0x56) = 1
                                **(ebx_14 + 4) = 1
                                void* eax_59 = *(ebx_14 + 4)
                                *(eax_59 + 0x30) |= 1
                                *(*(ebx_14 + 4) + 0x3c) = 0
                                __builtin_memcpy(*(ebx_14 + 4) + 8, esi_3, 0x28)
                                *(*(ebx_14 + 4) + 0x28) = 0
                                *(*(ebx_14 + 4) + 0x2c) = 0
                                int32_t eax_63 = var_8_3
                                *(*(ebx_14 + 4) + 0x24) = eax_63 << 2
                                
                                if (*(*arg2 + 0x10) == 0)
                                    eax_63 = 0xffffffff
                                
                                *(*(ebx_14 + 4) + 0x10) = eax_63
                                *(*(ebx_14 + 4) + 0x14) = 4
                                int32_t* eax_65 = sub_745f3f(0x24)
                                void* edi_5
                                
                                if (eax_65 == 0)
                                    edi_5 = nullptr
                                else
                                    edi_5 = &eax_65[1]
                                    *eax_65 = 1
                                    sub_61cdd0(edi_5, 0x20, 1, sub_44325c)
                                
                                *(*(ebx_14 + 4) + 0x34) = edi_5
                                
                                if (edi_5 == 0)
                                    return 0x8007000e
                                
                                *(*(ebx_14 + 4) + 0x50) = 1
                                void* ebx_15 = *(ebx_14 + 4)
                                void* eax_67
                                eax_67.w = *(ebx_15 + 0x50)
                                *(ebx_15 + 0x4e) = eax_67.w
                                result = sub_4438fa(var_14, ebx_12, 0, 0, esi_3, 0)
                                edi_1 = var_14
                                esi_1 = var_10_1
                                edx_5 = eax_2
                            
                            ecx_20 = arg3
                            var_8_3 += 1
                            *ecx_20 += 4
                        while (var_8_3 u< esi_1)
                    
                    *arg2 += 0x14
            else
                if (edx_5 s> 0xe)
                    if (edx_5 s<= 0x10)
                        goto label_44d438
                    
                    return 0x80004005
                
                void* ecx_8 = *(*(edi_1 + 0xb0) + (arg4 << 2))
                int32_t edx_6
                edx_6.w = *(ecx_8 + 0x46)
                void* var_20_1 = ecx_8
                
                if (edx_6.w u> 0)
                    return 0x80004005
                
                int32_t var_8_2 = 0
                *(ecx_8 + 0x46) = edx_6.w + esi_1.w
                *(edi_1 + 0x30) += esi_1.w
                
                if (esi_1 u> 0)
                    int32_t* esi_2 = arg3
                    
                    while (true)
                        result.w = arg4.w
                        void* ebx_5 = (zx.d(*(ecx_8 + 0x44)) + var_8_2) * 0x64 + *(edi_1 + 0x2c)
                        *(ebx_5 + 0x3e) = result.w
                        int32_t eax_6 = *(edi_1 + 0x1c) + *(edi_1 + 0x20)
                        int32_t** ecx_9 = *esi_2
                        result = sbb.d(eax_6, eax_6, eax_6 u< &ecx_9[1]) & 0x80004005
                        
                        if (result s< 0)
                            return result
                        
                        int32_t* ecx_10 = *ecx_9
                        *esi_2 = &ecx_9[1]
                        
                        if (sub_44cc21(ebx_5, ecx_10.w) s< 0)
                            return 0x8007000e
                        
                        int32_t eax_11 = (ecx_10 << 4) + *esi_2
                        result = sbb.d(eax_11, eax_11, *(edi_1 + 0x1c) + *(edi_1 + 0x20) u< eax_11)
                            & 0x80004005
                        
                        if (result s< 0)
                            return result
                        
                        int32_t i = 0
                        
                        if (*(ebx_5 + 0x36) u> 0)
                            arg3 = nullptr
                            
                            do
                                void* ecx_15 = *(ebx_5 + 4) + arg3
                                *(ecx_15 + 0x30) &= 0xfffffffd
                                *ecx_15 = 1
                                int16_t* eax_13
                                eax_13.w = **esi_2
                                *(ecx_15 + 0x52) = eax_13.w
                                *esi_2 += 4
                                *(ecx_15 + 0x58) = *(zx.d(*(ecx_15 + 0x52)) * 0x1c + 0xac1bc4)
                                int16_t* eax_17
                                eax_17.w = **esi_2
                                *(ecx_15 + 0x54) = eax_17.w
                                *esi_2 += 4
                                *(ecx_15 + 0x54) = 0xffff
                                *(ecx_15 + 0x20) = **esi_2
                                *esi_2 += 4
                                *(ecx_15 + 0x24) = **esi_2
                                *esi_2 += 4
                                *(ecx_15 + 0x1c) = 0
                                *(ecx_15 + 0xc) = *(ecx_15 + 0x20) + *(edi_1 + 0x20)
                                int32_t* eax_24 = *(ecx_15 + 0x24)
                                *(ecx_15 + 8) = *(edi_1 + 0x20) + eax_24
                                int16_t edx_11 = *(ecx_15 + 0x52)
                                
                                if (edx_11 u>= 0xb6)
                                    return 0x80004005
                                
                                int32_t edx_12 = *(ecx_15 + 0x58)
                                
                                if (edx_12 != 0x9000000)
                                    if ((edx_12 & 0xff000000) != &data_3000000)
                                        return 0x80004005
                                    
                                    void* edx_17 = zx.d(edx_11) * 0x1c
                                    int32_t eax_27 = *(edx_17 + 0xac1bb4)
                                    
                                    if (eax_27 != 1 && eax_27 != 2 && eax_27 != 3
                                            && eax_27 != 0xf20000)
                                        return 0x80004005
                                    
                                    int32_t eax_34 =
                                        (*(edx_17 + 0xac1bbc) * *(edx_17 + 0xac1bb8)) << 2
                                    int32_t eax_35 = *(ebx_5 + 0xc)
                                    int32_t eax_37 = (eax_35 & 3) + (eax_35 u>> 2 << 2)
                                    int32_t eax_39 = (eax_37 & 1) + (eax_37 u>> 1 << 1)
                                    int32_t eax_41 = (eax_39 & 3) + (eax_39 u>> 2 << 2)
                                    int32_t eax_43 = (eax_41 & 3) + (eax_41 u>> 2 << 2)
                                    int32_t eax_45 = (eax_43 & 3) + (eax_43 u>> 2 << 2)
                                    *(ebx_5 + 0xc) = eax_45
                                    *(ecx_15 + 0x48) = eax_45
                                    *(ebx_5 + 0xc) += eax_34
                                    *(ecx_15 + 0x30) &= 0xfffffffd
                                    *ecx_15 = 1
                                else
                                    *(*(edi_1 + 0x18) + *(eax_24 + *(edi_1 + 0x20)) * 0x18) =
                                        *(zx.d(edx_11) * 0x1c + 0xac1bb4)
                                
                                i += 1
                                arg3 = &arg3[0x19]
                            while (i u< zx.d(*(ebx_5 + 0x36)))
                        
                        var_8_2 += 1
                        
                        if (var_8_2 u>= var_10_1)
                            break
                        
                        ecx_8 = var_20_1
                
                *arg2 += 0x14
        else
            if (eax_3 != 5 || eax_2 != 0)
                return 0x80004005
            
            result = sbb.d(eax_3, eax_3, eax_1 u< &ebx[6]) & 0x80004005
            
            if (result s>= 0)
                int32_t edx_2 = ebx[5]
                *arg2 = &ebx[6]
                int32_t var_8_1 = 0
                
                if (esi_1 u> 0)
                    do
                        *arg2 = &ebx[6]
                        int32_t var_10_2 = 0
                        
                        if (edx_2 u> 0)
                            do
                                result = sub_44d0fb(arg2, arg3, arg4)
                                
                                if (result s< 0)
                                    return result
                                
                                var_10_2 += 1
                            while (var_10_2 u< edx_2)
                        
                        var_8_1 += 1
                    while (var_8_1 u< esi_1)

return result
