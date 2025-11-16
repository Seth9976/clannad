// 函数: sub_4c99ed
// 地址: 0x4c99ed
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x100)
int32_t edi
int32_t var_144 = edi
int32_t ebx_1 = *eax & 0xfffff
int32_t var_2c = 0
int32_t ecx
ecx.b = arg2 == 0
int32_t var_58 = 0
int32_t* var_8 = nullptr
int32_t var_24 = 0
int32_t var_54 = 1
int32_t var_50 = 2
int32_t var_4c = 3
void var_138
int32_t var_f8[0x4]

if (sub_4c73cc(arg1, eax, 0xacb938, &var_138, &var_2c, &var_f8, &var_58, ebx_1, ecx) != 0)
    var_24 = 1
    int32_t eax_2 =
        sub_4c73cc(arg1, *(arg1 + 0x100), 0xacb9b8, &var_138, &var_2c, &var_f8, &var_58, ebx_1, ecx)
    
    if (eax_2 != 0)
        return eax_2

int32_t var_c_1 = 0
void var_e8
void* var_3c_1 = &var_e8
void var_d8
void* var_40_1 = &var_d8

while (true)
    int32_t var_18_1 = 0
    void var_c8
    void* var_38_1 = &var_c8
    void var_b8
    void* var_28_1 = &var_b8
    
    while (true)
        int32_t var_10_1 = 0
        
        if (ebx_1 u> 0)
            int32_t ecx_3 = *(arg1 + 0x14)
            void* var_34_1 = var_40_1
            void* var_20_1 = var_28_1
            void* var_1c_1 = var_38_1
            void* var_30_1 = var_3c_1
            
            do
                void* edx_1 = *(ecx_3 + (var_f8[var_10_1] << 2))
                void* eax_11 = *(ecx_3 + (*var_30_1 << 2))
                void* edi_4 = *(ecx_3 + (*var_1c_1 << 2))
                
                if (*(eax_11 + 8) != 0xffffffff)
                    break
                
                if (*(edx_1 + 8) != 0xffffffff)
                    break
                
                if (*(edi_4 + 8) != 0xffffffff)
                    break
                
                int32_t edx_2 = *(arg1 + 0x10)
                
                if ((*(*(edx_2 + (*(eax_11 + 4) << 2)) + 5) & 1) == 0)
                    break
                
                if ((*(*(edx_2 + (*(edi_4 + 4) << 2)) + 5) & 1) == 0)
                    break
                
                if ((*(*(edx_2 + (*(edx_1 + 4) << 2)) + 5) & 1) == 0)
                    break
                
                long double x87_r7_4 = fabs(fconvert.t(*(edi_4 + 0x20))
                    - fconvert.t(*(eax_11 + 0x20)) - fconvert.t(*(edx_1 + 0x20)))
                long double temp1_1 = fconvert.t(9.9999997473787516e-06)
                x87_r7_4 - temp1_1
                void* eax_12
                eax_12.w = (x87_r7_4 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe
                
                if ((eax_12:1.b & 0x41) == 0)
                    break
                
                if (*var_34_1 != *var_20_1)
                    break
                
                var_10_1 += 1
                var_30_1 += 4
                var_1c_1 += 4
                var_20_1 += 4
                var_34_1 += 4
            while (var_10_1 u< ebx_1)
        
        int32_t edi_12
        
        if (var_10_1 == ebx_1)
            void* eax_15 = sub_49ec23(0x74)
            
            if (eax_15 == 0)
                var_8 = nullptr
            else
                var_8 = sub_49e789(eax_15)
            
            if (var_8 == 0)
                return 0x8007000e
            
            int32_t var_150_2
            int32_t var_14c_2
            int32_t eax_20
            
            if (var_24 == 0)
                int32_t var_148_3 = 0
                var_14c_2 = ebx_1
                var_150_2 = ebx_1 * 2
                eax_20 = (ebx_1 & 0xfffff) | 0x70b00000
            label_4c9c3f:
                edi_12 = sub_49ec6e(var_8, eax_20, var_150_2, var_14c_2, 0)
                
                if (edi_12 s>= 0)
                    edi_12 = sub_49e7bf(var_8, *(arg1 + 0x100))
                    
                    if (edi_12 s>= 0)
                        int32_t* eax_27 = var_8
                        int32_t ecx_9 = ebx_1 << 2
                        int32_t var_c_2 = ecx_9
                        int32_t esi_2
                        int32_t edi_15
                        edi_15, esi_2 =
                            __builtin_memcpy(eax_27[4], *(*(arg1 + 0x100) + 0x10), ecx_9 u>> 2 << 2)
                        __builtin_memcpy(edi_15, esi_2, ecx_9 & 3)
                        int32_t esi_3
                        int32_t edi_17
                        edi_17, esi_3 = __builtin_memcpy(eax_27[2], &var_f8, ecx_9 u>> 2 << 2)
                        __builtin_memcpy(edi_17, esi_3, ecx_9 & 3)
                        int32_t esi_6 = *(*(arg1 + 0x100) + 8)
                        int32_t esi_7
                        
                        if (var_24 == 0)
                            esi_7 = esi_6 + (ebx_1 << 3)
                        else
                            esi_7 = esi_6 + ecx_9
                        
                        int32_t esi_8
                        int32_t edi_20
                        edi_20, esi_8 = __builtin_memcpy(eax_27[2] + ecx_9, esi_7, ecx_9 u>> 2 << 2)
                        __builtin_memcpy(edi_20, esi_8, ecx_9 & 3)
                        int32_t* esi_9 = eax_27[2]
                        int32_t ecx_22 = *(arg1 + 0x14)
                        void* esi_10 = *(ecx_22 + (esi_9[ebx_1] << 2))
                        void* edi_22 = *(ecx_22 + (*esi_9 << 2))
                        void* ecx_23 = *(ecx_22 + (*eax_27[4] << 2))
                        int32_t edx_10 = *(ecx_23 + 4)
                        
                        if ((edx_10 != *(edi_22 + 4) || *(ecx_23 + 0xc) != *(edi_22 + 0xc))
                                && (edx_10 != *(esi_10 + 4) || *(ecx_23 + 0xc) != *(esi_10 + 0xc)))
                            if (arg2 == 0)
                                sub_49eecd(*(*(arg1 + 0x18) + (*(arg1 + 0xfc) << 2)), eax_27)
                            else
                                var_8 = nullptr
                                *arg2 = eax_27
                                int32_t eax_28 = var_2c
                                
                                if (eax_28 u> 0)
                                    __builtin_memcpy(arg3, &var_138, eax_28 << 2)
                                
                                *arg4 = eax_28
                            
                            edi_12 = 0
                        else
                            edi_12 = 1
            else
                if (arg2 == 0)
                    int32_t var_148_2 = 0
                    var_14c_2 = ebx_1
                    var_150_2 = ebx_1 * 2
                    eax_20 = (ebx_1 & 0xfffff) | 0x70c00000
                    goto label_4c9c3f
                
                edi_12 = 1
        else
            var_18_1 += 1
            var_28_1 -= 0x10
            var_38_1 += 0x10
            
            if (var_18_1 u< 2)
                continue
            else
                var_c_1 += 1
                var_40_1 -= 0x10
                var_3c_1 += 0x10
                
                if (var_c_1 u< 2)
                    break
            
            edi_12 = 1
        
        if (var_8 != 0)
            sub_46cb59(var_8, 1)
        
        return edi_12
