// 函数: sub_4cf996
// 地址: 0x4cf996
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg4
int32_t edi
int32_t var_24 = edi

if (*(ebx + 0x30) != 0xffffffff)
    *arg5 = *(ebx + 0x30)
    return 0

int32_t* edi_1 = *(*(arg1 + 0x10) + (*(ebx + 4) << 2))
int32_t eax_2 = edi_1[1]
int32_t ecx_1

if ((eax_2:1.b & 8) == 0)
    ecx_1 = arg2
else
    ecx_1 = *edi_1

int32_t eax_5
int32_t ecx_3
eax_5, ecx_3 = sub_49f4eb(arg1, ecx_1, eax_2 | arg3 | 0x40, 0xffffffff, 4)

if (eax_5 != 0xffffffff)
    if ((*(edi_1 + 5) & 1) == 0)
        int32_t eax_8 = *(arg1 + 8)
        int32_t var_c_1 = 0
        arg2 = 0
        
        if (eax_8 u> 0)
            do
                void* edi_2 = *(*(arg1 + 0x14) + (arg2 << 2))
                int32_t eax_11
                
                if (*(edi_2 + 4) == *(ebx + 4))
                    eax_11 = *(edi_2 + 0x60)
                
                if (*(edi_2 + 4) != *(ebx + 4) || eax_11 != *(ebx + 0x60) || eax_11 == 0)
                    if (ebx == edi_2)
                    label_4cfa63:
                        int32_t var_28_3 = arg2
                        int32_t var_2c_2 = arg2
                        var_2c_2.q = fconvert.d(fconvert.t(*(edi_2 + 0x20)))
                        int32_t eax_12 = sub_49f544(arg1, eax_5, *(edi_2 + 0x64), 0, var_2c_2)
                        *(edi_2 + 0x30) = eax_12
                        
                        if (eax_12 == 0xffffffff)
                            return 0x8007000e
                        
                        void* eax_13 = *(*(arg1 + 0x14) + (eax_12 << 2))
                        sub_49f12c(eax_13, edi_2)
                        *(eax_13 + 0x70) = *(eax_13 + 0x64) << 2
                        
                        if (*(edi_2 + 0x44) != 0xffffffff)
                            var_c_1 = 1
                else if (*(edi_2 + 8) == 0xffffffff || ebx == edi_2)
                    goto label_4cfa63
                
                arg2 += 1
            while (arg2 u< eax_8)
        
        void* eax_16 = *(arg1 + 0xe0)
        
        if (eax_16 == 0 || var_c_1 == 0)
            *arg5 = *(ebx + 0x30)
            return 0
        
        int32_t eax_17
        
        if ((arg3:1.b & 0x20) == 0)
            eax_17 = *(eax_16 + 0xb8)
        else
            eax_17 = *(eax_16 + 0xb4)
        
        if (eax_17 != 0xffffffff)
            int32_t eax_18 = 0
            int32_t var_c_2 = 0
            
            if (eax_8 u> 0)
                do
                    int32_t ecx_14 = *(arg1 + 0x14)
                    void* edi_3 = *(ecx_14 + (eax_18 << 2))
                    int32_t eax_20
                    
                    if (*(edi_3 + 4) == *(ebx + 4))
                        eax_20 = *(edi_3 + 0x60)
                    
                    if (*(edi_3 + 4) != *(ebx + 4) || eax_20 != *(ebx + 0x60) || eax_20 == 0)
                        if (ebx == edi_3)
                        label_4cfb29:
                            int32_t var_28_5 = ecx_14
                            int32_t var_2c_3 = ecx_14
                            var_2c_3.q = fconvert.d(fconvert.t(*(edi_3 + 0x20)))
                            int32_t eax_21 =
                                sub_49f544(*(arg1 + 0xe0), eax_17, *(edi_3 + 0x64), 0, var_2c_3)
                            
                            if (eax_21 == 0xffffffff)
                                return 0x8007000e
                            
                            int32_t eax_22 = *(edi_3 + 0x44)
                            
                            if (eax_22 != 0xffffffff)
                                void* ecx_16 = *(arg1 + 0xe0)
                                int32_t eax_24 = *(*(*(ecx_16 + 0x14) + (eax_22 << 2)) + 0x48)
                                
                                if (eax_24 != 0xffffffff)
                                    int32_t* eax_25 = *(*(ecx_16 + 0x18) + (eax_24 << 2))
                                    
                                    if ((*eax_25 & 0xfff00000) == 0x10000000)
                                        arg3 = 0
                                        
                                        if (eax_25[3] u> 0)
                                            int32_t* edx_5 = eax_25[4]
                                            
                                            while (*edx_5 != *(edi_3 + 0x44))
                                                arg3 += 1
                                                
                                                if (arg3 u>= eax_25[3])
                                                    break
                                                
                                                edx_5 = &edx_5[1]
                                        
                                        int32_t eax_27 = *(eax_25[2] + (arg3 << 2))
                                        int32_t eax_28 = sub_49f5a4(ecx_16, 0x10000001, 1, 1)
                                        
                                        if (eax_28 == 0xffffffff)
                                            return 0x8007000e
                                        
                                        void* ebx_2 = *(*(*(arg1 + 0xe0) + 0x18) + (eax_28 << 2))
                                        sub_49e7bf(ebx_2, eax_25)
                                        **(ebx_2 + 0x10) = eax_21
                                        ebx = arg4
                                        **(ebx_2 + 8) = eax_27
                                        *(*(*(arg1 + 0x14) + (*(edi_3 + 0x30) << 2)) + 0x44) =
                                            eax_21
                    else if (*(edi_3 + 8) == 0xffffffff || ebx == edi_3)
                        goto label_4cfb29
                    
                    eax_18 = var_c_2 + 1
                    var_c_2 = eax_18
                while (eax_18 u< eax_8)
            
            *arg5 = *(ebx + 0x30)
            return 0
    else
        int32_t var_28_1 = ecx_3
        int32_t var_2c_1 = ecx_3
        var_2c_1.q = fconvert.d(fconvert.t(*(ebx + 0x20)))
        int32_t eax_6 = sub_49f544(arg1, eax_5, *(ebx + 0x64), 0, var_2c_1)
        *(ebx + 0x30) = eax_6
        
        if (eax_6 != 0xffffffff)
            *arg5 = eax_6
            sub_49f12c(*(*(arg1 + 0x14) + (*(ebx + 0x30) << 2)), ebx)
            return 0

return 0x8007000e
