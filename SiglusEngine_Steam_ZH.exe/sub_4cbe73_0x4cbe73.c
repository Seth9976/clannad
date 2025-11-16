// 函数: sub_4cbe73
// 地址: 0x4cbe73
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_120 = edi
int32_t var_10 = 0
int32_t var_24 = 0
void* esi = arg1
int32_t* eax = *(esi + 0x100)
int32_t ebx_1 = *eax & 0xfffff
void* var_14 = esi
int32_t var_20 = 1
int32_t var_1c = 2
int32_t var_18 = 3
int32_t var_12c_1
int32_t var_128_1
void var_114
int32_t var_d4[0x4]
int32_t var_c4[0x4]
int32_t* var_c_1
int32_t var_8_1
int32_t eax_7
int32_t eax_17
int32_t* ebx_2
int32_t (* esi_7)[0x4]
int32_t* edi_1

if (sub_4c73cc(esi, eax, 0xacbe58, &var_114, &var_10, &var_d4, &var_24, ebx_1, 1) == 0)
    void* eax_2 = sub_49ec23(0x74)
    
    if (eax_2 == 0)
        var_c_1 = nullptr
        edi_1 = nullptr
    else
        edi_1 = sub_49e789(eax_2)
        var_c_1 = edi_1
    
    if (edi_1 != 0)
        int32_t var_124_1 = 0
        var_128_1 = ebx_1
        var_12c_1 = ebx_1 * 2
        eax_7 = (ebx_1 & 0xfffff) | 0x73600000
    label_4cbf86:
        int32_t eax_14 = sub_49ec6e(edi_1, eax_7, var_12c_1, var_128_1, 0)
        var_8_1 = eax_14
        
        if (eax_14 s< 0)
            sub_46cb59(edi_1, 1)
        else
            int32_t eax_15 = sub_49e7bf(edi_1, *(esi + 0x100))
            var_8_1 = eax_15
            
            if (eax_15 s>= 0)
                ebx_2 = var_c_1
                eax_17 = ebx_1 << 2
                int32_t esi_2
                int32_t edi_3
                edi_3, esi_2 =
                    __builtin_memcpy(edi_1[4], *(*(esi + 0x100) + 0x10), eax_17 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_2, eax_17 & 3)
                int32_t esi_3
                int32_t edi_5
                edi_5, esi_3 = __builtin_memcpy(ebx_2[2], &var_d4, eax_17 u>> 2 << 2)
                __builtin_memcpy(edi_5, esi_3, eax_17 & 3)
                esi_7 = &var_c4
                goto label_4cc236
            
            sub_46cb59(edi_1, 1)
    
    return 

if (sub_4c73cc(esi, *(esi + 0x100), 0xacbeb8, &var_114, &var_10, &var_d4, &var_24, ebx_1, 1) == 0)
    void* eax_9 = sub_49ec23(0x74)
    
    if (eax_9 == 0)
        var_c_1 = nullptr
        edi_1 = nullptr
    else
        edi_1 = sub_49e789(eax_9)
        var_c_1 = edi_1
    
    if (edi_1 != 0)
        int32_t var_124_2 = 0
        var_128_1 = ebx_1
        var_12c_1 = ebx_1 * 2
        eax_7 = (ebx_1 & 0xfffff) | 0x73500000
        goto label_4cbf86
    
    return 

if (sub_4c73cc(esi, *(esi + 0x100), 0xacbf18, &var_114, &var_10, &var_d4, &var_24, ebx_1, 1) != 0)
    return 

int32_t edx_3 = *(esi + 0x14)
int32_t var_b4[0x4]
int32_t var_a4[0x1c]
int32_t var_34[0x4]

if (*(*(edx_3 + (var_b4[0] << 2)) + 0x3c) == 0x80000)
    int32_t eax_20 = 0
    
    if (ebx_1 u<= 0)
        goto label_4cc0a8
    
    __builtin_memcpy(&var_24, &var_a4, ebx_1 << 2)
    
    do
        var_34[eax_20] = *(*(edx_3 + (var_b4[eax_20] << 2)) + 0x38)
        eax_20 += 1
    while (eax_20 u< ebx_1)
    
label_4cc0a2:
    esi = var_14
label_4cc0a8:
    int32_t var_c_2 = 0
    var_10 = 1
    int32_t var_8_2 = 1
    
    if (ebx_1 u> 0)
        long double x87_r7_1 = fconvert.t(0.0)
        int32_t edi_6 = *(esi + 0x10)
        long double x87_r6_1 = fconvert.t(1.0)
        
        do
            void* ecx_26 = *(edx_3 + (var_d4[var_c_2] << 2))
            
            if ((*(*(edi_6 + (*(ecx_26 + 4) << 2)) + 5) & 1) == 0)
                var_8_2 = 0
                var_10 = 0
            
            long double x87_r4_1 = fconvert.t(*(ecx_26 + 0x20))
            x87_r4_1 - x87_r7_1
            void* eax_25
            eax_25.w = (x87_r4_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                var_8_2 = 0
            
            long double x87_r4_2 = fconvert.t(*(ecx_26 + 0x20))
            x87_r4_2 - x87_r6_1
            eax_25.w = (x87_r4_2 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_2, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r4_2 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                var_10 = 0
            
            void* ecx_27 = *(edx_3 + (var_c4[var_c_2] << 2))
            
            if ((*(*(edi_6 + (*(ecx_27 + 4) << 2)) + 5) & 1) == 0)
                var_8_2 = 0
                var_10 = 0
            
            long double x87_r4_3 = fconvert.t(*(ecx_27 + 0x20))
            x87_r4_3 - x87_r6_1
            void* eax_29
            eax_29.w = (x87_r4_3 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_3, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r4_3 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (p_3)
                var_8_2 = 0
            
            long double x87_r4_4 = fconvert.t(*(ecx_27 + 0x20))
            x87_r4_4 - x87_r7_1
            eax_29.w = (x87_r4_4 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_4, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r4_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (p_4)
                var_10 = 0
            
            var_c_2 += 1
        while (var_c_2 u< ebx_1)
    
    if (ebx_1 u<= 0 || var_8_2 != 0 || var_10 != 0)
        void* eax_31 = sub_49ec23(0x74)
        int32_t* var_c_3
        
        if (eax_31 == 0)
            var_c_3 = nullptr
            edi_1 = nullptr
        else
            edi_1 = sub_49e789(eax_31)
            var_c_3 = edi_1
        
        if (edi_1 != 0)
            int32_t eax_35 = ebx_1 & 0xfffff
            int32_t eax_36
            
            if (var_8_2 == 0)
                eax_36 = eax_35 | 0x73500000
            else
                eax_36 = eax_35 | 0x73600000
            
            int32_t eax_37 = sub_49ec6e(edi_1, eax_36, ebx_1 * 2, ebx_1, 0)
            var_8_1 = eax_37
            
            if (eax_37 s< 0)
                sub_46cb59(edi_1, 1)
            else
                int32_t eax_38 = sub_49e7bf(edi_1, *(esi + 0x100))
                var_8_1 = eax_38
                
                if (eax_38 s>= 0)
                    ebx_2 = var_c_3
                    eax_17 = ebx_1 << 2
                    int32_t esi_5
                    int32_t edi_8
                    edi_8, esi_5 =
                        __builtin_memcpy(edi_1[4], *(*(esi + 0x100) + 0x10), eax_17 u>> 2 << 2)
                    __builtin_memcpy(edi_8, esi_5, eax_17 & 3)
                    int32_t esi_6
                    int32_t edi_10
                    edi_10, esi_6 = __builtin_memcpy(ebx_2[2], &var_24, eax_17 u>> 2 << 2)
                    __builtin_memcpy(edi_10, esi_6, eax_17 & 3)
                    esi_7 = &var_34
                label_4cc236:
                    int32_t esi_8
                    int32_t edi_13
                    edi_13, esi_8 = __builtin_memcpy(ebx_2[2] + eax_17, esi_7, eax_17 u>> 2 << 2)
                    __builtin_memcpy(edi_13, esi_8, eax_17 & 3)
                    sub_49eecd(*(var_14 + 0x100), ebx_2)
                    sub_46cb59(ebx_2, 1)
                else
                    sub_46cb59(edi_1, 1)
else if (*(*(edx_3 + (var_a4[0] << 2)) + 0x3c) == 0x80000)
    int32_t eax_21 = 0
    
    if (ebx_1 u<= 0)
        goto label_4cc0a8
    
    __builtin_memcpy(&var_24, &var_b4, ebx_1 << 2)
    
    do
        var_34[eax_21] = *(*(edx_3 + (var_a4[eax_21] << 2)) + 0x38)
        eax_21 += 1
    while (eax_21 u< ebx_1)
    
    goto label_4cc0a2
