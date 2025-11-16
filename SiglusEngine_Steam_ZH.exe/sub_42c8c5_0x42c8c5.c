// 函数: sub_42c8c5
// 地址: 0x42c8c5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
int32_t edi
int32_t var_44_1 = edi
int32_t result

if (*(arg1 + 0x278) != 1)
label_42cbb5:
    int32_t eax_10 = *(arg1 + 0x278)
    
    if (eax_10 != 0xc && eax_10 != 0xd)
        sub_42a6ee(*(arg1 + 0x26c))
else
    void* esi_1 = arg1 + 0x280
    wchar32 const* const edi_1 = &(*U")(;:")[1]
    int32_t i = 2
    bool cond:2_1 = false
    
    while (i != 0)
        char temp0_1 = *esi_1
        char temp1_1 = *edi_1
        cond:2_1 = temp0_1 != temp1_1
        esi_1 += 1
        edi_1 += 1
        i -= 1
        
        if (temp0_1 != temp1_1)
            break
    
    if (cond:2_1)
        goto label_42cbb5
    
    sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    
    if (*(arg1 + 0x278) != 9)
        goto label_42cbb5
    
    void* esi_3 = arg1 + 0x280
    int32_t eax = *esi_3
    sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    
    if (*(arg1 + 0x278) != 1)
        goto label_42cbb5
    
    void* const edi_3 = &data_af33a0
    int32_t i_1 = 2
    bool cond:4_1 = false
    
    while (i_1 != 0)
        char temp2_1 = *esi_3
        char temp3_1 = *edi_3
        cond:4_1 = temp2_1 != temp3_1
        esi_3 += 1
        edi_3 += 1
        i_1 -= 1
        
        if (temp2_1 != temp3_1)
            break
    
    if (cond:4_1)
        goto label_42cbb5
    
    sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
    
    if (*(arg1 + 0x278) != 9)
        goto label_42cbb5
    
    int32_t eax_1 = *(arg1 + 0x280)
    int32_t var_8_1 = 0
    
    while (true)
        int32_t var_c_1 = 0
        sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
        
        if (*(arg1 + 0x278) != 1)
            goto label_42cbb5
        
        void* const edi_4 = &data_af33a0
        void* esi_6 = arg1 + 0x280
        int32_t i_2 = 2
        bool cond:6_1 = false
        
        while (i_2 != 0)
            char temp4_1 = *esi_6
            char temp5_1 = *edi_4
            cond:6_1 = temp4_1 != temp5_1
            esi_6 += 1
            edi_4 += 1
            i_2 -= 1
            
            if (temp4_1 != temp5_1)
                break
        
        if (cond:6_1)
            goto label_42cbb5
        
        sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
        
        if (*(arg1 + 0x278) == 1)
            void* const edi_5 = &data_ab232c
            void* esi_8 = arg1 + 0x280
            int32_t i_3 = 2
            bool cond:8_1 = false
            
            while (i_3 != 0)
                char temp6_1 = *esi_8
                char temp7_1 = *edi_5
                cond:8_1 = temp6_1 != temp7_1
                esi_8 += 1
                edi_5 += 1
                i_3 -= 1
                
                if (temp6_1 != temp7_1)
                    break
            
            if (not(cond:8_1))
                var_c_1 = 1
                sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
        
        int32_t eax_3 = *(arg1 + 0x278)
        void* eax_5
        long double x87_r7_1
        int32_t __saved_ebp
        
        if (eax_3 == 2)
        label_42caa3:
            x87_r7_1 = float.t(*(arg1 + 0x280))
            eax_5 = &(&__saved_ebp)[var_8_1 * 2 - 0xd]
            
            if (*(arg1 + 0x280) s< 0)
                x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
        else if (eax_3 == 3)
            x87_r7_1 = float.t(*(arg1 + 0x280))
            eax_5 = &(&__saved_ebp)[var_8_1 * 2 - 0xd]
        else
            if (eax_3 == 4)
                goto label_42caa3
            
            if (eax_3 s<= 4)
                goto label_42cbb5
            
            if (eax_3 s> 8)
                goto label_42cbb5
            
            x87_r7_1 = fconvert.t(*(arg1 + 0x280))
            eax_5 = &(&__saved_ebp)[var_8_1 * 2 - 0xd]
        *eax_5 = fconvert.d(x87_r7_1)
        
        if (var_c_1 != 0)
            *eax_5 = fconvert.d(fneg(fconvert.t(*eax_5)))
        
        var_8_1 += 1
        
        if (var_8_1 u>= 4)
            sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
            
            if (*(arg1 + 0x278) != 1)
                goto label_42cbb5
            
            wchar32 const* const edi_6 = U")(;:"
            void* esi_10 = arg1 + 0x280
            int32_t i_4 = 2
            bool cond:13_1 = false
            
            while (i_4 != 0)
                char temp8_1 = *esi_10
                char temp9_1 = *edi_6
                cond:13_1 = temp8_1 != temp9_1
                esi_10 += 1
                edi_6 += 1
                i_4 -= 1
                
                if (temp8_1 != temp9_1)
                    break
            
            if (cond:13_1)
                goto label_42cbb5
            
            sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg1 + 0x278)
            int32_t esi_12 = *(arg1 + 0x278)
            
            if (esi_12 != 0xc && esi_12 != 0xd)
                goto label_42cbb5
            
            int32_t* eax_8 = sub_745f3f(0x30)
            int32_t* var_8_2
            
            if (eax_8 == 0)
                var_8_2 = nullptr
                eax_8 = nullptr
            else
                eax_8[0xa] = 0
                var_8_2 = eax_8
            
            if (eax_8 == 0)
                result = 0x8007000e
                goto label_42cbd4
            
            *eax_8 = eax
            eax_8[1] = eax_1
            void var_38
            __builtin_memcpy(&eax_8[2], &var_38, 0x20)
            void* esi_13 = arg1 + 0x3c
            void* ecx_13 = *esi_13
            
            if (ecx_13 != 0)
                while (__stricmp(*(ecx_13 + 4), eax_8[1]) s< 0)
                    esi_13 = *esi_13 + 0x28
                    ecx_13 = *esi_13
                    
                    if (ecx_13 == 0)
                        break
                    
                    eax_8 = var_8_2
                
                eax_8 = var_8_2
            
            eax_8[0xa] = *esi_13
            *esi_13 = eax_8
            break

result = 0
label_42cbd4:
*(arg1 + 0x40) = 1
return result
