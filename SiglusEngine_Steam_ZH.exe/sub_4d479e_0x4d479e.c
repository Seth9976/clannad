// 函数: sub_4d479e
// 地址: 0x4d479e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t* ecx = *(arg1 + 0x100)
int32_t eax = *ecx

if ((eax & 0xfff00000) != 0x20400000)
    return 1

int32_t eax_2 = eax & 0xfffff
int32_t* eax_3 = ecx[2]
int32_t* ecx_3 = &eax_3[eax_2]
int32_t esi_1 = *(arg1 + 0x14)
int32_t edx_3 = *(arg1 + 0x10)
int32_t var_14_1
int32_t* var_8_1

if ((*(*(edx_3 + (*(*(esi_1 + (*ecx_3 << 2)) + 4) << 2)) + 5) & 1) != 0)
    var_14_1 = 0
    var_8_1 = eax_3
    eax_3 = ecx_3
label_4d4820:
    int32_t ebx_8 = eax_2
    *(arg1 + 0x15c) = 0
    int32_t var_10_1 = 0
    
    if (ebx_8 u> 0)
        int32_t* edx_5 = var_8_1
        void* ecx_5 = eax_3 - edx_5
        
        do
            long double x87_r7_1 = fconvert.t(-0.5)
            long double x87_r6_1 = fconvert.t(*(*(esi_1 + (*(ecx_5 + edx_5) << 2)) + 0x20))
            x87_r6_1 - x87_r7_1
            void* eax_5
            eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                return 1
            
            char* eax_7 = *(esi_1 + (*edx_5 << 2))
            
            if ((eax_7[0x3d] & 2) == 0 && (*eax_7 & 4) == 0 && (*(arg1 + 0x6e) & 4) != 0)
                *(arg1 + 0x15c) = 1
            
            var_10_1 += 1
            edx_5 = &edx_5[1]
        while (var_10_1 u< ebx_8)
    
    int32_t* ecx_6 = *(arg1 + 0x100)
    int32_t eax_11 = *(*(esi_1 + (*ecx_6[4] << 2)) + 4)
    
    if (eax_11 == *(arg1 + 0x88))
        int32_t eax_12 = sub_4d3501(arg1, 0x20000, 0, var_8_1, 0x20000, nullptr, 0)
        
        if (*(arg1 + 0x15c) == 2)
            sub_4a4195(arg1, *(*(arg1 + 0x100) + 0x3c), 0x125d, 
                "_bias opportunity missed because source was not clamped 0 to 1")
        
        return eax_12
    
    if (eax_11 == *(arg1 + 0x84))
        void var_20
        int32_t eax_1 = sub_4d134f(arg1, (ebx_8 & 0xfffff) | 0x20400000, ecx_6, &var_20, 2)
        
        if (eax_1 != 0)
            return eax_1
        
        int32_t __saved_ebp
        void* eax_18 = &(&__saved_ebp)[var_14_1 - 7]
        void* eax_19 = *eax_18
        
        if (eax_19 != 0)
            int32_t var_8_2 = 0
            
            if (ebx_8 u> 0)
                int32_t* edx_6 = *(eax_19 + 8)
                
                while (true)
                    char* eax_21 = *(esi_1 + (*edx_6 << 2))
                    
                    if ((eax_21[0x3e] & 0x1f) != 0)
                        break
                    
                    if ((*(*(*(arg1 + 0x10) + (*(eax_21 + 4) << 2)) + 4) & 0x200) != 0
                            || ((*(eax_21 + 0x3c) & 0x200) == 0 && (*eax_21 & 4) == 0))
                        ebx_8 = eax_2
                        break
                    
                    var_14_1 = 0
                    var_8_2 += 1
                    ebx_8 = eax_2
                    edx_6 = &edx_6[1]
                    
                    if (var_8_2 u>= ebx_8)
                        break
                    
                    continue
            
            int32_t eax_28
            
            if (var_8_2 == ebx_8)
                eax_28 = var_14_1
            label_4d49d1:
                int32_t var_8_4 = 0
                
                if (ebx_8 u> 0)
                    int32_t ebx_14 = eax_28 << 2
                    bool cond:1_1
                    
                    do
                        int32_t ecx_12 = *(arg1 + 0x14)
                        void* esi_3 = *(ecx_12 + (*(ebx_14 + *(*eax_18 + 8)) << 2))
                        int32_t var_40_1 = ecx_12
                        int32_t var_44_2 = ecx_12
                        var_44_2.q = fconvert.d(fconvert.t(*(esi_3 + 0x20)))
                        int32_t eax_33 = sub_49f544(arg1, *(esi_3 + 4), *(esi_3 + 0xc), 
                            *(esi_3 + 0x10), var_44_2)
                        int32_t var_30[0x4]
                        var_30[var_8_4] = eax_33
                        
                        if (eax_33 == 0xffffffff)
                            return 0x8007000e
                        
                        void* ecx_16 = *(*(arg1 + 0x14) + (eax_33 << 2))
                        void* edx_8 = *eax_18
                        *(ecx_16 + 0x38) = *(ebx_14 + *(edx_8 + 8))
                        *(ecx_16 + 0x48) = *(esi_3 + 0x48)
                        *(ecx_16 + 0x50) = *(esi_3 + 0x50)
                        *(ecx_16 + 0x54) = *(esi_3 + 0x54)
                        *(ecx_16 + 0x58) = *(esi_3 + 0x54)
                        *(ecx_16 + 0x3c) = *(esi_3 + 0x3c) | 0x20000
                        *(ebx_14 + *(edx_8 + 8)) = eax_33
                        *(*(edx_8 + 0x10) + (var_8_4 << 2)) =
                            *(*(*(arg1 + 0x100) + 0x10) + (var_8_4 << 2))
                        ebx_14 += 4
                        cond:1_1 = var_8_4 + 1 u< eax_2
                        var_8_4 += 1
                    while (cond:1_1)
                
                **(arg1 + 0x100) = 0
                return 0
            
            int32_t var_8_3 = 0
            
            if (ebx_8 u> 0)
                int32_t* ecx_11 = *(*eax_18 + 8) + (ebx_8 << 2)
                
                while (true)
                    char* eax_27 = *(esi_1 + (*ecx_11 << 2))
                    
                    if ((eax_27[0x3e] & 0x1f) != 0)
                        break
                    
                    if ((*(*(*(arg1 + 0x10) + (*(eax_27 + 4) << 2)) + 4) & 0x200) != 0
                            || ((*(eax_27 + 0x3c) & 0x200) == 0 && (*eax_27 & 4) == 0))
                        ebx_8 = eax_2
                        break
                    
                    var_8_3 += 1
                    ebx_8 = eax_2
                    ecx_11 = &ecx_11[1]
                    
                    if (var_8_3 u>= ebx_8)
                        break
                    
                    continue
            
            if (var_8_3 != ebx_8)
                eax_28 = ebx_8
                goto label_4d49d1
else if ((*(*(edx_3 + (*(*(esi_1 + (*eax_3 << 2)) + 4) << 2)) + 5) & 1) != 0)
    var_14_1 = 1
    var_8_1 = ecx_3
    goto label_4d4820
return 1
