// 函数: sub_452ca1
// 地址: 0x452ca1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(arg1 + 0xa0) * *(arg1 + 0xac)
*(arg1 + 0x119) |= 8
int32_t esi = 0
int32_t edi
int32_t var_3c = edi
int32_t result = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t var_2c = 0
int32_t var_28 = 0
*(arg1 + 0xb4) = sub_745f3f(eax_1 << 2)
int32_t eax_7 = sub_745f3f((*(arg1 + 0xa0) * *(arg1 + 0xac)) << 2)
uint32_t var_48 = *(arg1 + 0xac)
*(arg1 + 0xc0) = eax_7
int32_t eax_8 = sub_745f3f(var_48)
bool cond:0 = *(arg1 + 0xb4) == 0
*(arg1 + 0xbc) = eax_8

if (cond:0 || *(arg1 + 0xc0) == 0 || eax_8 == 0)
    result = 0x8007000e
else
    int32_t ecx = *(arg1 + 0xac)
    __builtin_memset(__builtin_memset(eax_8, 0, ecx u>> 2 << 2), 0, ecx & 3)
    bool cond:1_1 = *(arg1 + 0xa0) u<= 0
    *(arg1 + 0x40) = 0
    
    if (not(cond:1_1))
        while (true)
            uint32_t ecx_4 = zx.d(*(arg1 + 0x40))
            int32_t eax_11 = (*(arg1 + 0xac) * ecx_4) << 2
            *(arg1 + 0xb8) = *(arg1 + 0xb4) + eax_11
            int32_t edx_5 = *(arg1 + 0xc0) + eax_11
            int32_t i = 0
            
            if (*(ecx_4 * 0xb4 + *(arg1 + 0xa4) + 0x34) u> 0)
                int32_t var_1c_1 = 0
                
                do
                    void* edi_4 = *(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x38) + var_1c_1
                    sub_442a01(arg1, zx.d(*(edi_4 + 0x34)), 0, 1)
                    sub_4526ea(arg1, zx.d(*(edi_4 + 0x34)), 0)
                    i += 1
                    var_1c_1 += 0x38
                while (i u< *(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x34))
            
            int32_t var_18_1 = 0
            
            if (*(arg1 + 0xac) u> 0)
                while (true)
                    void* eax_21 = *(*(*(arg1 + 0xb0) + (esi << 2)) + 0x34)
                    int32_t edi_5 = 0
                    int32_t var_1c_2 = 0
                    int32_t var_8_1 = 0
                    
                    if (eax_21 != 0)
                        void* eax_22 = *(eax_21 + 0x18)
                        
                        while (true)
                            void* eax_27 = *(eax_22 + 0x1c)
                            void* ecx_12 = zx.d(*(eax_27 + 0x14)) * 0x64 + *(arg1 + 0x2c)
                            void* var_20_1 = eax_27
                            
                            if (*(ecx_12 + 0x3a) u> 0)
                                if ((*(ecx_12 + 8) & 8) == 0)
                                    if (edi_5 u>= var_2c)
                                        int32_t eax_28 = var_2c * 2 + 1
                                        var_2c = eax_28
                                        int32_t eax_30 = sub_745f3f(eax_28 << 2)
                                        
                                        if (eax_30 == 0)
                                            goto label_45305b
                                        
                                        if (edi_5 u> 0)
                                            __builtin_memcpy(eax_30, var_c, edi_5 << 2)
                                            esi = var_18_1
                                            edi_5 = var_1c_2
                                        
                                        j__free(var_c)
                                        var_c = eax_30
                                        eax_27 = var_20_1
                                    
                                    *(var_c + (edi_5 << 2)) = eax_27
                                    edi_5 += 1
                                    var_1c_2 = edi_5
                                else
                                    if (var_8_1 u>= var_28)
                                        int32_t eax_23 = var_28 * 2 + 1
                                        var_28 = eax_23
                                        int32_t eax_25 = sub_745f3f(eax_23 << 2)
                                        
                                        if (eax_25 == 0)
                                            goto label_45305b
                                        
                                        if (var_8_1 u> 0)
                                            __builtin_memcpy(eax_25, var_10, var_8_1 << 2)
                                            esi = var_18_1
                                            edi_5 = var_1c_2
                                        
                                        j__free(var_10)
                                        var_10 = eax_25
                                        eax_27 = var_20_1
                                    
                                    int32_t edx_8 = var_8_1
                                    var_8_1 += 1
                                    *(var_10 + (edx_8 << 2)) = eax_27
                            
                            if (*(eax_27 + 0x1c) == *(*(*(arg1 + 0xb0) + (esi << 2)) + 0x34))
                                break
                            
                            eax_22 = var_20_1
                    
                    if (var_8_1 != neg.d(edi_5))
                        *(*(arg1 + 0xb8) + (esi << 2)) = sub_745f3f(((var_8_1 + edi_5) << 2) + 4)
                        int32_t eax_38 = *(*(arg1 + 0xb8) + (esi << 2))
                        
                        if (eax_38 == 0)
                        label_45305b:
                            int32_t esi_7 = 0
                            int32_t i_1 = 0
                            result = 0x8007000e
                            
                            if (*(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x34) u> 0)
                                do
                                    sub_442a01(arg1, 
                                        zx.d(*(
                                            *(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x38)
                                            + esi_7 + 0x34)), 
                                        0, 0xffffffff)
                                    i_1 += 1
                                    esi_7 += 0x38
                                while (i_1
                                    u< *(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x34))
                            
                            break
                        
                        if (edi_5 u> 0)
                            __builtin_memcpy(eax_38, var_c, edi_5 << 2)
                            esi = var_18_1
                            edi_5 = var_1c_2
                        
                        int32_t eax_40 = var_8_1 << 2
                        __builtin_memset(
                            __builtin_memset(*(*(arg1 + 0xb8) + (esi << 2)) + (edi_5 << 2), 0, 
                                (eax_40 + 4) u>> 2 << 2), 
                            0, (eax_40 + 4) & 3)
                        
                        if (var_8_1 u<= 0)
                            goto label_452fc8
                        
                        int32_t eax_42 = sub_745f3f(eax_40 + 4)
                        int32_t* edx_12 = edx_5 + (esi << 2)
                        *edx_12 = eax_42
                        
                        if (eax_42 == 0)
                            goto label_45305b
                        
                        int32_t esi_5
                        int32_t edi_13
                        edi_13, esi_5 = __builtin_memcpy(eax_42, var_10, eax_40 u>> 2 << 2)
                        __builtin_memcpy(edi_13, esi_5, eax_40 & 3)
                        esi = var_18_1
                        *(*edx_12 + eax_40) = 0
                        goto label_452fcc
                    
                    *(*(arg1 + 0xb8) + (esi << 2)) = 0
                label_452fc8:
                    *(edx_5 + (esi << 2)) = 0
                label_452fcc:
                    esi += 1
                    var_18_1 = esi
                    
                    if (esi u>= *(arg1 + 0xac))
                        goto label_452fec
                
                break
            
        label_452fec:
            int32_t esi_6 = 0
            int32_t i_2 = 0
            
            if (*(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x34) u> 0)
                do
                    sub_442a01(arg1, 
                        zx.d(*(*(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x38) + esi_6
                            + 0x34)), 
                        0, 0xffffffff)
                    i_2 += 1
                    esi_6 += 0x38
                while (i_2 u< *(zx.d(*(arg1 + 0x40)) * 0xb4 + *(arg1 + 0xa4) + 0x34))
            
            *(arg1 + 0x40) += 1
            
            if (zx.d(*(arg1 + 0x40)) u>= *(arg1 + 0xa0))
                break
            
            esi = 0
    
    *(arg1 + 0x40) = 0xffff

j__free(var_c)
j__free(var_10)
*(arg1 + 0x119) &= 0xf7
return result
