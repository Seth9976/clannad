// 函数: sub_744db0
// 地址: 0x744db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int64_t var_3c = 0
void* eax
int32_t edx
eax, edx = sub_745590(edi, 0xffffffff)
void* var_24 = eax
int32_t esi = edx
void* ebx = eax
int32_t var_28 = esi

if (*(edi + 0x58) s< 2)
    return 

if (*(edi + 4) == 0)
    return 

if (arg3 s< 0 || (arg3 s<= 0 && arg2 u< 0) || arg3 s> esi || (arg3 s>= esi && arg2 u> ebx))
    return 

int32_t edx_1 = *(edi + 0x34)
int32_t edx_2 = edx_1 - 1
int32_t var_1c = edx_2

if (edx_1 - 1 s>= 0)
    int32_t* eax_5 = *(edi + 0x44) + 8 + (edx_2 << 4)
    int32_t temp10_1
    
    do
        void* temp7_1 = ebx
        ebx -= *eax_5
        esi = sbb.d(esi, eax_5[1], temp7_1 u< *eax_5)
        
        if (arg3 s> esi)
            break
        
        if (arg3 s>= esi && arg2 u>= ebx)
            break
        
        eax_5 -= 0x10
        temp10_1 = edx_2
        edx_2 -= 1
    while (temp10_1 - 1 s>= 0)
    edi = arg1
    var_28 = esi
    var_24 = ebx
    var_1c = edx_2

int32_t eax_6 = *(edi + 0x38)
int32_t var_54 = 0
int32_t var_18 = *(eax_6 + (edx_2 << 3) + 0xc)
int32_t eax_8 = *(edi + 0x3c)
int32_t var_10 = *(eax_6 + (edx_2 << 3) + 8)
int32_t ecx_7 = edx_2 * 2
int32_t esi_1 = *(eax_8 + (edx_2 << 3))
int32_t ebx_1 = *(eax_8 + (edx_2 << 3) + 4)
int32_t eax_9 = *(edi + 0x44)
int32_t var_14 = esi_1
int32_t var_c = ebx_1
int32_t edx_3 = *(eax_9 + (ecx_7 << 3))
int32_t var_50 = *(eax_9 + (ecx_7 << 3) + 4)
int32_t edi_4 = *(eax_9 + (ecx_7 << 3) + 8)
int32_t var_5c = edi_4 + edx_3
void* edi_6 = arg1
int32_t var_60 = adc.d(*(eax_9 + (ecx_7 << 3) + 0xc), var_50, edi_4 + edx_3 u< edi_4)
void* eax_13 = edx_3 - var_24
int32_t var_64 = edx_3
void* eax_14 = eax_13 + arg2
int32_t ecx_10 = adc.d(sbb.d(var_50, var_28, edx_3 u< var_24), arg3, eax_13 + arg2 u< eax_13)
int32_t var_58 = 0xffffffff
int32_t var_2c = 0xffffffff
int32_t ecx_11 = var_10
void var_74
int32_t var_8_1

if (esi_1 != ecx_11 || ebx_1 != var_18)
    var_8_1 = var_3c.d
label_744f32:
    int32_t edx_6 = var_18
    
    if (ebx_1 s> edx_6 || (ebx_1 s>= edx_6 && esi_1 u>= ecx_11))
    label_745472:
        
        if (var_54 != 0)
            int32_t eax_81 = *(edi_6 + 0x3c)
            
            if (esi_1 == *(eax_81 + (var_1c << 3)) && ebx_1 == *(eax_81 + (var_1c << 3) + 4)
                    && sub_6e47d0(&var_74) == *(*(edi_6 + 0x40) + (var_1c << 2)))
                *(edi_6 + 0x50) = var_24
                *(edi_6 + 0x54) = var_28
                
                if (var_1c == *(edi_6 + 0x60))
                    sub_99c510(edi_6 + 0x1e0)
                else
                    sub_7436f0(edi_6)
                    int32_t eax_85 = *(edi_6 + 0x40)
                    *(edi_6 + 0x60) = var_1c
                    *(edi_6 + 0x5c) = *(eax_85 + (var_1c << 2))
                    *(edi_6 + 0x58) = 3
                
                sub_6e51f0(edi_6 + 0x78, *(edi_6 + 0x5c))
                sub_6e4e20(edi_6 + 0x78, &var_74)
            label_745506:
                int32_t temp20_1 = *(edi_6 + 0x54)
                
                if (temp20_1 s<= arg3 && (temp20_1 s< arg3 || *(edi_6 + 0x50) u<= arg2))
                    void* eax_88
                    int32_t edx_30
                    eax_88, edx_30 = sub_745590(edi_6, 0xffffffff)
                    
                    if (arg3 s<= edx_30 && (arg3 s< edx_30 || arg2 u<= eax_88))
                        *(edi_6 + 0x68) = zx.o(0)
                        return 
                
                var_3c:4.d = 0xffffffff
    else
    label_744f4b:
        int32_t eax_20 = ecx_11 - esi_1
        int32_t ecx_15 = sbb.d(edx_6, ebx_1, ecx_11 u< esi_1)
        var_3c:4.d = ecx_15
        
        if (ecx_15 s> 0)
        label_744f9c:
            double xmm1_2 = sub_74c39f(eax_14 - var_64, sbb.d(ecx_10, var_50, eax_14 u< var_64))
                * sub_74c39f(eax_20, var_3c:4.d)
            double xmm0_3
            uint64_t xmm6_1[0x2]
            xmm0_3, xmm6_1 = sub_74c39f(var_5c - var_64, sbb.d(var_60, var_50, var_5c u< var_64))
            int32_t eax_21
            int32_t edx_12
            int16_t x87control
            int80_t st0_1
            st0_1, eax_21, edx_12, x87control = __dtol3(x87control, xmm1_2 / xmm0_3, xmm6_1)
            int32_t esi_3 = eax_21 + var_14
            esi_1 = esi_3 - 0x10000
            ebx_1 = sbb.d(adc.d(edx_12, var_c, eax_21 + var_14 u< eax_21), 0, esi_3 u< 0x10000)
            var_3c:4.d = var_14 + 0x10000
            int32_t eax_25 = adc.d(var_c, 0, var_14 u>= 0xffff0000)
            
            if (ebx_1 s<= eax_25 && (ebx_1 s< eax_25 || esi_1 u< var_3c:4.d))
                esi_1 = var_14
                ebx_1 = var_c
        else if (ecx_15 s>= 0 && eax_20 u>= 0x10000)
            goto label_744f9c
        
        int32_t ecx_22 = *edi_6
        int32_t eax_29
        
        if (ecx_22 == 0)
            eax_29 = 0xffffff7f
        else if (*(edi_6 + 8) != esi_1 || *(edi_6 + 0xc) != ebx_1)
            int32_t eax_26 = *(edi_6 + 0x2c4)
            int32_t eax_27
            
            if (eax_26 != 0)
                eax_27 = eax_26(ecx_22, esi_1, ebx_1, 0)
            
            if (eax_26 == 0 || eax_27 == 0xffffffff)
                eax_29 = 0xffffff80
            else
                *(edi_6 + 8) = esi_1
                *(edi_6 + 0xc) = ebx_1
                sub_6e5120(edi_6 + 0x18)
                eax_29 = 0
        else
            eax_29 = 0
        
        int32_t eax_30
        int32_t edx_14
        edx_14:eax_30 = sx.q(eax_29)
        var_8_1 = eax_30
        
        if ((eax_30 | edx_14) == 0)
            int32_t eax_32 = var_10
            
            while (true)
                int32_t eax_35
                int32_t edx_15
                eax_35, edx_15 = sub_743dc0(edi_6, &var_74, eax_32 - *(edi_6 + 8), 
                    sbb.d(var_18, *(edi_6 + 0xc), eax_32 u< *(edi_6 + 8)))
                var_3c:4.d = edx_15
                
                if (eax_35 == 0xffffff80 && edx_15 == 0xffffffff)
                    goto label_745551
                
                int32_t eax_42
                
                if (edx_15 s> 0 || (edx_15 s>= 0 && eax_35 u>= 0))
                    var_54 = 1
                    
                    if (sub_6e47d0(&var_74) != *(*(edi_6 + 0x40) + (var_1c << 2)))
                    label_745252:
                        
                        if (var_c s> var_18)
                            ebx_1 = var_c
                        else
                            eax_32 = var_10
                            
                            if (var_c s< var_18)
                                continue
                            else if (var_14 u< eax_32)
                                continue
                            
                            ebx_1 = var_c
                    else
                        int32_t eax_44
                        int32_t edx_19
                        eax_44, edx_19 = sub_6e4740(&var_74)
                        
                        if ((eax_44 & edx_19) == 0xffffffff)
                            goto label_745252
                        
                        if (edx_19 s> ecx_10 || (edx_19 s>= ecx_10 && eax_44 u>= eax_14))
                            double var_34
                            var_34:4.d = var_c
                            var_34:4.d = adc.d(var_34:4.d, 0, var_14 u>= 0xffffffff)
                            edi_6 = arg1
                            int32_t temp28_1 = var_34:4.d
                            
                            if (ebx_1 s>= temp28_1 && (ebx_1 s> temp28_1 || esi_1 u> var_14 + 1))
                                int32_t eax_51 = eax_44
                                
                                if (var_10 == *(edi_6 + 8))
                                    eax_51 = eax_44
                                
                                if (var_10 != *(edi_6 + 8) || var_18 != *(edi_6 + 0xc))
                                    ecx_11 = esi_1
                                    var_18 = ebx_1
                                    esi_1 = var_14
                                    ebx_1 = var_c
                                    var_10 = ecx_11
                                    var_5c = eax_51
                                    var_60 = edx_19
                                    goto label_7451b8
                                
                                int32_t temp34_1 = esi_1
                                esi_1 -= 0x10000
                                var_10 = eax_35
                                ebx_1 = adc.d(ebx_1, 0xffffffff, temp34_1 u>= 0x10000)
                                var_18 = var_3c:4.d
                                
                                if (ebx_1 s<= var_c && (ebx_1 s< var_c || esi_1 u<= var_14))
                                    ebx_1 = var_34:4.d
                                    esi_1 = var_14 + 1
                                
                                eax_42 = sub_744870(edi_6, esi_1, ebx_1)
                            label_745243:
                                int32_t eax_55
                                int32_t edx_20
                                edx_20:eax_55 = sx.q(eax_42)
                                var_8_1 = eax_55
                                
                                if ((eax_55 | edx_20) != 0)
                                    goto label_745551
                                
                                goto label_745252
                            
                            ebx_1 = var_c
                        else
                            esi_1 = *(edi_6 + 8)
                            ebx_1 = *(edi_6 + 0xc)
                            var_58 = eax_35
                            var_2c = var_3c:4.d
                            var_64 = eax_44
                            int32_t eax_49 = sbb.d(ecx_10, edx_19, eax_14 u< eax_44)
                            var_14 = esi_1
                            var_c = ebx_1
                            var_50 = edx_19
                            
                            if (eax_49 s<= 0 && (eax_49 s< 0 || eax_14 - eax_44 u<= 0xac44))
                                goto label_745252
                            
                            ecx_11 = var_10
                        label_7451b8:
                            edx_6 = var_18
                            
                            if (ebx_1 s< edx_6)
                                goto label_744f4b
                            
                            if (ebx_1 s<= edx_6 && esi_1 u< ecx_11)
                                goto label_744f4b
                else
                    int32_t edx_17 = adc.d(var_c, 0, var_14 u>= 0xffffffff)
                    
                    if (ebx_1 s>= edx_17 && (ebx_1 s> edx_17 || esi_1 u> var_14 + 1))
                        if ((esi_1 | ebx_1) == 0)
                            goto label_745551
                        
                        int32_t temp31_1 = esi_1
                        esi_1 -= 0x10000
                        ebx_1 = adc.d(ebx_1, 0xffffffff, temp31_1 u>= 0x10000)
                        
                        if (ebx_1 s<= var_c && (ebx_1 s< var_c || esi_1 u<= var_14))
                            esi_1 = var_14 + 1
                            ebx_1 = edx_17
                        
                        int32_t ecx_28 = *edi_6
                        
                        if (ecx_28 == 0)
                            eax_42 = 0xffffff7f
                        else if (*(edi_6 + 8) != esi_1 || *(edi_6 + 0xc) != ebx_1)
                            int32_t eax_39 = *(edi_6 + 0x2c4)
                            int32_t eax_40
                            
                            if (eax_39 != 0)
                                eax_40 = eax_39(ecx_28, esi_1, ebx_1, 0)
                            
                            if (eax_39 == 0 || eax_40 == 0xffffffff)
                                eax_42 = 0xffffff80
                            else
                                *(edi_6 + 8) = esi_1
                                *(edi_6 + 0xc) = ebx_1
                                sub_6e5120(edi_6 + 0x18)
                                eax_42 = 0
                        else
                            eax_42 = 0
                        
                        goto label_745243
                    
                    ebx_1 = var_c
                
                if ((var_58 & var_2c) == 0xffffffff)
                    esi_1 = var_14
                    break
                
                int32_t eax_61
                int32_t edx_22
                edx_22:eax_61 = sx.q(sub_744870(edi_6, var_58, var_2c))
                *(edi_6 + 0x50) = 0xffffffff
                *(edi_6 + 0x54) = 0xffffffff
                
                if ((eax_61 | edx_22) != 0)
                    goto label_745551
                
                void var_44
                int32_t eax_63
                int32_t edx_23
                eax_63, edx_23 = sub_743dc0(edi_6, &var_44, 0xffffffff, 0xffffffff)
                
                if (edx_23 s< 0)
                    goto label_745551
                
                if (edx_23 s<= 0 && eax_63 u< 0)
                    goto label_745551
                
                if (var_1c == *(edi_6 + 0x60))
                    sub_99c510(edi_6 + 0x1e0)
                else
                    sub_7436f0(edi_6)
                    int32_t eax_64 = *(edi_6 + 0x40)
                    *(edi_6 + 0x60) = var_1c
                    *(edi_6 + 0x5c) = *(eax_64 + (var_1c << 2))
                    *(edi_6 + 0x58) = 3
                
                void* ebx_6 = edi_6 + 0x78
                sub_6e51f0(ebx_6, *(edi_6 + 0x5c))
                sub_6e4e20(ebx_6, &var_44)
                
                while (true)
                    void var_94
                    int32_t eax_68
                    int32_t edx_24
                    edx_24:eax_68 = sx.q(sub_6e5370(ebx_6, &var_94))
                    int32_t esi_4 = edx_24
                    int32_t ebx_2 = eax_68
                    
                    if ((eax_68 | esi_4) == 0)
                        int32_t eax_70 = *(edi_6 + 0x3c)
                        esi_4 = var_2c
                        ebx_2 = var_58
                        int32_t temp37_1 = *(eax_70 + (var_1c << 3) + 4)
                        edi_6 = arg1
                        
                        if (esi_4 s>= temp37_1
                                && (esi_4 s> temp37_1 || var_58 u> *(eax_70 + (var_1c << 3))))
                            while (true)
                                int32_t eax_71
                                int32_t edx_26
                                eax_71, edx_26 = sub_743ee0(edi_6, ebx_2, esi_4, &var_44)
                                esi_4 = edx_26
                                ebx_2 = eax_71
                                
                                if (esi_4 s< 0)
                                    goto label_745551
                                
                                if (esi_4 s<= 0 && ebx_2 u< 0)
                                    goto label_745551
                                
                                if (sub_6e47d0(&var_44) == *(edi_6 + 0x5c))
                                    int32_t eax_73
                                    int32_t edx_27
                                    eax_73, edx_27 = sub_6e4740(&var_44)
                                    int32_t eax_74
                                    
                                    if (edx_27 s<= 0xffffffff
                                            && (edx_27 s< 0xffffffff || eax_73 u<= 0xffffffff))
                                        eax_74 = sub_6e46e0(&var_44)
                                    
                                    if (edx_27 s> 0xffffffff
                                            || (edx_27 s>= 0xffffffff && eax_73 u> 0xffffffff)
                                            || eax_74 == 0)
                                        sub_745630(edi_6, ebx_2, esi_4)
                                        return 
                                
                                int32_t eax_75 = *(edi_6 + 0x3c)
                                int32_t temp43_1 = *(eax_75 + (var_1c << 3) + 4)
                                
                                if (esi_4 s<= temp43_1)
                                    if (esi_4 s< temp43_1)
                                        break
                                    
                                    if (ebx_2 u<= *(eax_75 + (var_1c << 3)))
                                        break
                    
                    if (esi_4 s< 0 || (esi_4 s<= 0 && ebx_2 u< 0))
                        var_3c:4.d = 0xffffffff
                        goto label_745551
                    
                    int32_t var_84
                    int32_t var_80
                    
                    if ((var_84 & var_80) == 0xffffffff)
                        ebx_6 = edi_6 + 0x78
                        sub_6e5340(ebx_6, nullptr)
                        continue
                    
                    int32_t eax_78 = *(edi_6 + 0x44)
                    int32_t ecx_41 = *(edi_6 + 0x60) << 4
                    int32_t edx_29 = var_84 - *(ecx_41 + eax_78)
                    int32_t esi_6 =
                        sbb.d(var_80, *(ecx_41 + eax_78 + 4), var_84 u< *(ecx_41 + eax_78))
                    *(edi_6 + 0x50) = edx_29
                    *(edi_6 + 0x54) = esi_6
                    
                    if (esi_6 s<= 0 && (esi_6 s< 0 || edx_29 u< 0))
                        *(edi_6 + 0x50) = 0
                        *(edi_6 + 0x54) = 0
                    
                    int32_t temp42_1 = *(edi_6 + 0x50)
                    *(edi_6 + 0x50) += var_24
                    *(edi_6 + 0x54) = adc.d(*(edi_6 + 0x54), var_28, temp42_1 + var_24 u< temp42_1)
                    break
                
                goto label_745506
            
            goto label_745472
else
    int32_t eax_16
    int32_t edx_4
    edx_4:eax_16 = sx.q(sub_744870(edi_6, esi_1, ebx_1))
    int32_t ecx_13 = eax_16 | edx_4
    
    if (ecx_13 == 0)
        int32_t eax_17
        int32_t edx_5
        eax_17, edx_5 = sub_743dc0(edi_6, &var_74, 1, ecx_13)
        var_8_1 = eax_17
        
        if (edx_5 s>= 0 && (edx_5 s> 0 || eax_17 u>= 0))
            ebx_1 = var_c
            ecx_11 = var_10
            var_54 = 1
            goto label_744f32
label_745551:
*(edi_6 + 0x50) = 0xffffffff
*(edi_6 + 0x54) = 0xffffffff
sub_99c590(edi_6 + 0x1e0)
sub_99cba0(edi_6 + 0x250)
*(edi_6 + 0x58) = 2
