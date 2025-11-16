// 函数: sub_486f1f
// 地址: 0x486f1f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
uint32_t eax = 0xffffffff
void* edx = &data_b98280
int32_t edi
int32_t var_2c = edi
data_b9a5d8 = 0
data_b9a5d4 = 0
data_b9a5d0 = 0xffffffff
data_b9a5cc = &data_b9a1c0
data_b9a5c8 = &data_b98280
data_b9a1c0 = 0

while (true)
    int32_t ecx_7 = sx.d(*((ebx << 1) + &data_b55888))
    
    if (ecx_7 != 0)
        goto label_487052
    
    if (eax s< 0)
        eax = sub_486e85()
        edx = data_b9a5c8
        data_b9a5d0 = eax
        
        if (eax s< 0)
            eax = 0
            data_b9a5d0 = 0
    
    int32_t ecx_1 = sx.d(*((ebx << 1) + &data_b559e0))
    
    if (ecx_1 == 0)
    label_48701a:
        int32_t ecx_4 = sx.d(*((ebx << 1) + &data_b55ae0))
        int16_t* eax_81
        int32_t* esi_37
        
        if (ecx_4 == 0)
        label_4879aa:
            int32_t ecx_73 = data_b9a5d4
            
            if (ecx_73 == 0)
                data_b9a5d8 += 1
            
            if (ecx_73 s>= 3)
                if (eax == 0)
                    break
                
                eax = 0xffffffff
                data_b9a5d0 = 0xffffffff
                continue
            else
                data_b9a5d4 = 3
                int16_t* esi_38 = data_b9a5cc
                int32_t eax_83
                
                while (true)
                    eax_83 = sx.d(*((sx.d(*esi_38) << 1) + &data_b559e0))
                    
                    if (eax_83 != 0 && eax_83 + 0x100 s>= 0 && eax_83 + 0x100 s<= 0x18e
                            && *(((eax_83 + 0x100) << 1) + &data_b55f58) == 0x100)
                        break
                    
                    if (esi_38 u<= &data_b9a1c0)
                        return 1
                    
                    esi_38 -= 2
                    edx -= 0x10
                    data_b9a5cc = esi_38
                    data_b9a5c8 = edx
                
                if (esi_38 u>= 0xb9a5a6)
                    break
                
                ebx = sx.d(*(((eax_83 + 0x100) << 1) + &data_b55c38))
                data_b9a5cc += 2
                eax_81 = data_b9a5cc
                esi_37 = &data_b9a5a8
            
            goto label_487a33
        
        int32_t ecx_5 = ecx_4 + eax
        
        if (ecx_4 + eax s< 0 || ecx_5 s> 0x18e)
            goto label_4879aa
        
        int32_t ecx_6 = ecx_5 * 2
        
        if (sx.d(*(ecx_6 + &data_b55f58)) != eax)
            goto label_4879aa
        
        ecx_7 = sx.d(*(ecx_6 + &data_b55c38))
    label_487052:
        int32_t eax_2 = ecx_7 * 2
        int32_t eax_3 = sx.d(*(eax_2 + 0xb557d8))
        int32_t eax_4 = eax_3 << 4
        data_b9a5b8 = *(edx - eax_4 + 0x10)
        void* edi_6 = &data_b9a5bc
        void* esi_10 = edx - eax_4 + 0x14
        *edi_6 = *esi_10
        void* edi_7 = edi_6 + 4
        void* esi_11 = esi_10 + 4
        *edi_7 = *esi_11
        int32_t* i_2 = ecx_7 - 5
        *(edi_7 + 4) = *(esi_11 + 4)
        int32_t* var_30_15
        int32_t* var_30_21
        int32_t* var_30_26
        float* var_30_28
        int32_t* var_30_29
        int32_t* eax_30
        void*** eax_76
        void*** eax_78
        void*** eax_79
        int32_t* ecx_27
        int32_t* ecx_43
        int32_t* ecx_44
        int32_t* ecx_51
        void* esi_32
        bool cond:28_1
        
        switch (i_2)
            case nullptr
                void* var_c
                bool cond:3_1 = sub_4863d2(data_b9a5e0, *(edx - 0x50), &var_c) != 0
                void* eax_6 = data_b9a5c8
                
                if (cond:3_1)
                    void*** eax_8 = sub_484c3a(data_b9a5e0, var_c, *(eax_6 - 0x40), eax_6 - 0x20, 
                        *(eax_6 - 0x10))
                    int32_t* eax_9
                    
                    if (eax_8 != 0)
                        void*** var_30_3 = eax_8
                        eax_9 = sub_486ed5(data_b9a5e0)
                    
                    if (eax_8 == 0 || eax_9 == 0)
                        data_b9a5ec = 1
                else
                    int32_t* ecx_9 = *(eax_6 - 0x10)
                    
                    if (ecx_9 != 0)
                        sub_48491c(ecx_9, 1)
                    
                    *(data_b9a5c8 - 0x10) = 0
                
                _free(*(data_b9a5c8 - 0x50))
                _free(*(data_b9a5c8 - 0x40))
                data_b9a5e4 = 1
                edx = data_b9a5c8
            case 1
                char* edx_2 = *(edx - 0x40)
                int32_t ebx_1 = 0
                
                if (edx_2 == 0)
                label_4871ff:
                    void*** eax_23 = sub_745f3f(0x34)
                    void*** esi_22
                    
                    if (eax_23 == 0)
                        esi_22 = nullptr
                    else
                        void* edx_4 = data_b9a5c8
                        esi_22 = sub_4825e8(eax_23, ebx_1, edx_4 - 0x20, *(edx_4 - 0x10))
                    
                    if (esi_22 != 0)
                        if (sub_482843(data_b9a5e0 + 0x10, esi_22) == 0)
                            data_b9a5ec = 1
                        
                        sub_46051a(esi_22)
                    else
                        data_b9a5ec = 1
                        
                        if (ebx_1 != 0)
                            _free(ebx_1)
                else
                    char* eax_18 = edx_2
                    void* edx_3 = &eax_18[1]
                    
                    do
                        i_2.b = *eax_18
                        eax_18 = &eax_18[1]
                    while (i_2.b != 0)
                    
                    ebx_1 = _malloc(eax_18 - edx_3 + 1)
                    
                    if (ebx_1 != 0)
                        int32_t esi_21
                        int32_t edi_16
                        edi_16, esi_21 = __builtin_memcpy(ebx_1, *(data_b9a5c8 - 0x40), 
                            (eax_18 - edx_3 + 1) u>> 2 << 2)
                        __builtin_memcpy(edi_16, esi_21, (eax_18 - edx_3 + 1) & 3)
                        goto label_4871ff
                    
                    data_b9a5ec = 1
                
                _free(*(data_b9a5c8 - 0x50))
                _free(*(data_b9a5c8 - 0x40))
                j__free(*(data_b9a5c8 - 0x10))
                edx = data_b9a5c8
            case 2, 0xd, 0x14, 0x36
                data_b9a5b8 = 0
            case 3
                int32_t* eax_29 = sub_745f3f(0x10)
                
                if (eax_29 == 0)
                    eax_29 = nullptr
                else
                    *eax_29 = 0
                    eax_29[1] = 0
                    eax_29[2] = 0xa
                    eax_29[3] = 0
                
                edx = data_b9a5c8
                data_b9a5b8 = eax_29
                
                if (eax_29 == 0)
                    data_b9a5ec = 1
                else if (*edx != 0)
                    ecx_27 = eax_29
                label_4872e4:
                    eax_30 = sub_48647e(ecx_27, edx)
                    goto label_48792c
            case 4
                ecx_27 = *(edx - 0x10)
                data_b9a5b8 = ecx_27
                
                if (*edx != 0)
                    goto label_4872e4
            case 5
                int32_t eax_31 = *edx
                
                if (eax_31 == 0)
                    data_b9a5b8 = 0
                else
                    data_b9a5b8 = eax_31 + 4
            case 6
                void* var_10
                bool cond:4_1 = sub_4863d2(data_b9a5e0, *(edx - 0x50), &var_10) != 0
                void* eax_34 = data_b9a5c8
                
                if (cond:4_1)
                    void*** eax_36 = sub_484c3a(data_b9a5e0, var_10, *(eax_34 - 0x40), 
                        eax_34 - 0x20, *(eax_34 - 0x10))
                    int32_t ecx_32 = neg.d(eax_36)
                    void* ecx_34 = sbb.d(ecx_32, ecx_32, eax_36 != 0) & &eax_36[1]
                    data_b9a5b8 = ecx_34
                    
                    if (ecx_34 == 0)
                        data_b9a5ec = 1
                else
                    int32_t* ecx_29 = *(eax_34 - 0x10)
                    
                    if (ecx_29 != 0)
                        sub_48491c(ecx_29, 1)
                    
                    *(data_b9a5c8 - 0x10) = 0
                    data_b9a5b8 = 0
                
                _free(*(data_b9a5c8 - 0x50))
                _free(*(data_b9a5c8 - 0x40))
                edx = data_b9a5c8
            case 7, 8, 9, 0xe, 0x11, 0x12, 0x13, 0x15, 0x1b, 0x1c, 0x1d, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x33, 0x34, 0x35, 0x37, 
                    0x38, 0x39
                data_b9a5b8 = *edx
            case 0xa
                data_b9a5b8 = 0
                int32_t var_30_13 = *(edx - 0x40)
                data_b9a5ec = 1
                _free(var_30_13)
                _free(*(data_b9a5c8 - 0x30))
                edx = data_b9a5c8
            case 0xb
                eax_30 = sub_745f3f(0xc)
                
                if (eax_30 == 0)
                label_4873f7:
                    eax_30 = nullptr
                    goto label_4873f9
                
                void* edx_6 = data_b9a5c8
                int32_t esi_23 = *(edx_6 - 0x10)
                int32_t ecx_37 = neg.d(esi_23)
                *eax_30 = *(edx_6 - 0x30)
                eax_30[1] = esi_23
                eax_30[2] = sbb.d(ecx_37, ecx_37, esi_23 != 0) & 2
            label_4873f9:
                data_b9a5b8 = eax_30
                goto label_48792c
            case 0xc
                eax_30 = sub_745f3f(0xc)
                
                if (eax_30 == 0)
                    goto label_4873f7
                
                int32_t ecx_42 = *data_b9a5c8
                eax_30[1] = 0
                *eax_30 = ecx_42
                eax_30[2] = 1
                goto label_4873f9
            case 0xf
                int32_t* eax_41 = sub_745f3f(0x10)
                
                if (eax_41 == 0)
                    eax_41 = nullptr
                else
                    *eax_41 = 0
                    eax_41[1] = 0
                    eax_41[2] = 0xa
                    eax_41[3] = 0
                
                edx = data_b9a5c8
                data_b9a5b8 = eax_41
                
                if (eax_41 == 0)
                    data_b9a5ec = 1
                else if (*edx != 0)
                    ecx_43 = eax_41
                label_487464:
                    eax_30 = sub_48647e(ecx_43, edx)
                    goto label_48792c
            case 0x10
                ecx_43 = *(edx - 0x10)
                data_b9a5b8 = ecx_43
                
                if (*edx != 0)
                    goto label_487464
            case 0x16
                int32_t* eax_42 = sub_745f3f(0x10)
                
                if (eax_42 == 0)
                    eax_42 = nullptr
                else
                    *eax_42 = 0
                    eax_42[1] = 0
                    eax_42[2] = 5
                    eax_42[3] = 0
                
                data_b9a5b8 = eax_42
                
                if (eax_42 != 0)
                    var_30_15 = data_b9a5c8
                    ecx_44 = eax_42
                    goto label_4874b7
                
                data_b9a5ec = 1
                edx = data_b9a5c8
            case 0x17
                ecx_44 = *(edx - 0x10)
                data_b9a5b8 = ecx_44
                var_30_15 = edx
            label_4874b7:
                eax_30 = sub_48647e(ecx_44, var_30_15)
            label_48792c:
                cond:28_1 = eax_30 != 0
            label_48792e:
                
                if (cond:28_1)
                    edx = data_b9a5c8
                else
                    data_b9a5ec = 1
                    edx = data_b9a5c8
            case 0x18
                void* var_8 = nullptr
                
                if (*(edx - 0x20) == 0)
                    goto label_487536
                
                int32_t i = 4
                int128_t* const edi_17 = &data_aac190
                void* esi_24 = edx - 0x10
                bool cond:15_1 = true
                
                while (i != 0)
                    int32_t temp7_1 = *esi_24
                    int32_t temp8_1 = *edi_17
                    cond:15_1 = temp7_1 == temp8_1
                    esi_24 += 4
                    edi_17 += 4
                    i -= 1
                    
                    if (temp7_1 != temp8_1)
                        break
                
                int32_t esi_25
                
                if (cond:15_1)
                    esi_25 = 1
                else
                    int32_t eax_44 = sub_486407(data_b9a5e0, edx - 0x10, &var_8)
                    edx = data_b9a5c8
                    esi_25 = eax_44
                
                if (esi_25 == 0)
                    goto label_487536
                
                void* const var_30_18
                
                if ((esi_25 & sub_4863d2(data_b9a5e0, *(edx - 0x20), &var_8)) != 0)
                    var_30_18 = var_8
                    goto label_48755c
                
                edx = data_b9a5c8
            label_487536:
                char* lpString1 = *(edx - 0x20)
                
                if (lpString1 == 0)
                    data_b9a5b8 = 0
                    data_b9a5ec = 1
                else if (2 != CompareStringA(0x409, 1, lpString1, 0xffffffff, "BINARY", 0xffffffff))
                    edx = data_b9a5c8
                    data_b9a5b8 = 0
                    data_b9a5ec = 1
                else
                    var_30_18 = nullptr
                label_48755c:
                    int32_t* eax_47 = sub_482331(var_30_18)
                    data_b9a5b8 = eax_47
                    
                    if (eax_47 == 0)
                        data_b9a5ec = 1
                    
                    edx = data_b9a5c8
                
                _free(*(edx - 0x20))
                edx = data_b9a5c8
            case 0x19
                int32_t* eax_48 = sub_482331(nullptr)
                data_b9a5b8 = eax_48
                
                if (eax_48 == 0)
                    data_b9a5ec = 1
                
                _free(*(data_b9a5c8 - 0x10))
                edx = data_b9a5c8
            case 0x1a
                void* eax_50 = data_b9a5e0
                int32_t* eax_52 = sub_482491(*(edx - 0x30), *(edx - 0x20), eax_50 + 0x10, 
                    *(eax_50 + 8) + 8, *(edx - 0x10))
                data_b9a5b8 = eax_52
                
                if (eax_52 == 0)
                    void* eax_53 = data_b9a5c8
                    char* esi_27 = *(eax_53 - 0x30)
                    char const* const edi_18 = "indexColor"
                    int32_t i_1 = 0xb
                    bool cond:17_1 = true
                    
                    while (i_1 != 0)
                        char temp9_1 = *esi_27
                        char const temp10_1 = *edi_18
                        cond:17_1 = temp9_1 == temp10_1
                        esi_27 = &esi_27[1]
                        edi_18 = &edi_18[1]
                        i_1 -= 1
                        
                        if (temp9_1 != temp10_1)
                            break
                    
                    if (not(cond:17_1))
                        data_b9a5ec = 1
                    
                    int32_t* ecx_50 = *(eax_53 - 0x10)
                    
                    if (ecx_50 != 0)
                        sub_46294a(ecx_50, 1)
                
                _free(*(data_b9a5c8 - 0x40))
                _free(*(data_b9a5c8 - 0x30))
                _free(*(data_b9a5c8 - 0x20))
                edx = data_b9a5c8
            case 0x1e
                int32_t* eax_57 = sub_745f3f(0x10)
                
                if (eax_57 == 0)
                    eax_57 = nullptr
                else
                    *eax_57 = 0
                    eax_57[1] = 0
                    eax_57[2] = 2
                    eax_57[3] = 0
                
                data_b9a5b8 = eax_57
                
                if (eax_57 != 0)
                    var_30_21 = data_b9a5c8
                    ecx_51 = eax_57
                    goto label_487675
                
                data_b9a5ec = 1
                edx = data_b9a5c8
            case 0x1f
                ecx_51 = *(edx - 0x10)
                data_b9a5b8 = ecx_51
                var_30_21 = edx
            label_487675:
                eax_30 = sub_48647e(ecx_51, var_30_21)
                goto label_48792c
            case 0x20
                data_b9a5b8 = *(edx - 0x10)
            case 0x21
                int32_t* eax_58 = sub_745f3f(8)
                
                if (eax_58 == 0)
                    data_b9a5b8 = 0
                else
                    *eax_58 = *data_b9a5c8
                    eax_58[1] = 0
                    data_b9a5b8 = eax_58
                
                cond:28_1 = data_b9a5b8 != 0
                goto label_48792e
            case 0x22
                char* edx_10 = *edx
                int32_t ebx_2 = 0
                
                if (edx_10 == 0)
                label_487713:
                    int32_t* eax_64 = sub_745f3f(8)
                    
                    if (eax_64 == 0)
                        eax_64 = nullptr
                    else
                        *eax_64 = 0
                        eax_64[1] = ebx_2
                    
                    data_b9a5b8 = eax_64
                    
                    if (eax_64 == 0)
                        data_b9a5ec = 1
                        
                        if (ebx_2 != 0)
                            _free(ebx_2)
                else
                    char* eax_59 = edx_10
                    void* edx_11 = &eax_59[1]
                    
                    do
                        i_2.b = *eax_59
                        eax_59 = &eax_59[1]
                    while (i_2.b != 0)
                    
                    ebx_2 = _malloc(eax_59 - edx_11 + 1)
                    
                    if (ebx_2 != 0)
                        int32_t esi_30
                        int32_t edi_20
                        edi_20, esi_30 =
                            __builtin_memcpy(ebx_2, *data_b9a5c8, (eax_59 - edx_11 + 1) u>> 2 << 2)
                        __builtin_memcpy(edi_20, esi_30, (eax_59 - edx_11 + 1) & 3)
                        goto label_487713
                    
                    data_b9a5ec = 1
                
                _free(*data_b9a5c8)
                edx = data_b9a5c8
            case 0x23, 0x32
                void* eax_70 = data_b9a5e0
                int32_t* eax_72 = sub_482491(*(edx - 0x20), *(edx - 0x10), eax_70 + 0x10, 
                    *(eax_70 + 8) + 8, nullptr)
                data_b9a5b8 = eax_72
                
                if (eax_72 == 0)
                    data_b9a5ec = 1
                
                _free(*(data_b9a5c8 - 0x20))
                _free(*(data_b9a5c8 - 0x10))
                edx = data_b9a5c8
            case 0x31
                bool cond:20_1
                
                if (*(edx - 0x30) == 0)
                    i_2 = 4
                    int128_t* const edi_21 = &data_aac190
                    void* esi_31 = edx - 0x20
                    cond:20_1 = true
                    
                    while (i_2 != 0)
                        int32_t temp11_1 = *esi_31
                        int32_t temp12_1 = *edi_21
                        cond:20_1 = temp11_1 == temp12_1
                        esi_31 += 4
                        edi_21 += 4
                        i_2 -= 1
                        
                        if (temp11_1 != temp12_1)
                            break
                
                if (*(edx - 0x30) == 0 && cond:20_1)
                    data_b9a5ec = 1
                else
                    int32_t var_14
                    
                    if (sub_4849f8(i_2, *(edx - 0x30), edx - 0x20, data_b9a5e0, &var_14) s>= 0)
                        data_b9a5b8 = var_14
                    else
                        data_b9a5b8 = 0
                        data_b9a5ec = 1
                    
                    _free(*(data_b9a5c8 - 0x30))
                    edx = data_b9a5c8
            case 0x3c
                void*** eax_75 = sub_745f3f(0x14)
                
                if (eax_75 == 0)
                    goto label_4873f7
                
                eax_30 = sub_486dfe(eax_75, data_b9a5c8)
                goto label_4873f9
            case 0x3d
                eax_76 = sub_745f3f(0x14)
                
                if (eax_76 == 0)
                    eax_76 = nullptr
                else
                    eax_76[1] = 0
                    eax_76[2] = 0
                    eax_76[3] = 0xa
                    eax_76[4] = 0
                    *eax_76 = &data_ac7ca4
                
                data_b9a5b8 = eax_76
                
                if (eax_76 != 0)
                    var_30_26 = data_b9a5c8
                    goto label_48785f
                
                data_b9a5ec = 1
                edx = data_b9a5c8
            case 0x3e
                eax_76 = *(edx - 0x20)
                data_b9a5b8 = eax_76
                var_30_26 = edx
            label_48785f:
                eax_30 = sub_48647e(&eax_76[1], var_30_26)
                goto label_48792c
            case 0x41
                void*** eax_77 = sub_745f3f(0x14)
                
                if (eax_77 == 0)
                    goto label_4873f7
                
                eax_30 = sub_486e40(eax_77, data_b9a5c8)
                goto label_4873f9
            case 0x42
                eax_78 = sub_745f3f(0x14)
                
                if (eax_78 == 0)
                    eax_78 = nullptr
                else
                    eax_78[1] = 0
                    eax_78[2] = 0
                    eax_78[3] = 0xfa
                    eax_78[4] = 0
                    *eax_78 = &data_ac7ca4
                
                data_b9a5b8 = eax_78
                
                if (eax_78 != 0)
                    var_30_28 = data_b9a5c8
                    goto label_4878d0
                
                data_b9a5ec = 1
                edx = data_b9a5c8
            case 0x43
                eax_78 = *(edx - 0x20)
                data_b9a5b8 = eax_78
                var_30_28 = edx
            label_4878d0:
                eax_30 = sub_4822e8(&eax_78[1], var_30_28)
                goto label_48792c
            case 0x45
                eax_79 = sub_745f3f(0x14)
                
                if (eax_79 == 0)
                    eax_79 = nullptr
                else
                    eax_79[1] = 0
                    eax_79[2] = 0
                    eax_79[3] = 0xa
                    eax_79[4] = 0
                    *eax_79 = &data_ac7cb0
                
                data_b9a5b8 = eax_79
                
                if (eax_79 != 0)
                    var_30_29 = data_b9a5c8
                    goto label_487927
                
                data_b9a5ec = 1
                edx = data_b9a5c8
            case 0x46
                eax_79 = *(edx - 0x20)
                data_b9a5b8 = eax_79
                var_30_29 = edx
            label_487927:
                eax_30 = sub_48647e(&eax_79[1], var_30_29)
                goto label_48792c
            case 0x47
                esi_32 = &data_aac190
            label_48794a:
                data_b9a5b8 = *esi_32
                void* edi_22 = &data_b9a5bc
                void* esi_33 = esi_32 + 4
                *edi_22 = *esi_33
                void* edi_23 = edi_22 + 4
                void* esi_34 = esi_33 + 4
                *edi_23 = *esi_34
                *(edi_23 + 4) = *(esi_34 + 4)
            case 0x48, 0x49
                esi_32 = edx
                goto label_48794a
        
        int16_t* eax_14 = data_b9a5cc + (neg.d(eax_3) << 1)
        int32_t ecx_15 = sx.d(*(eax_2 + 0xb55728))
        data_b9a5cc = eax_14
        int32_t esi_14 = sx.d(*eax_14)
        data_b9a5c8 = edx - eax_4
        
        if (esi_14 != 0 || ecx_15 != 0)
            int32_t edx_12 = ecx_15 * 2
            int32_t ecx_70 = sx.d(*(edx_12 + 0xb55be0))
            
            if (ecx_70 == 0)
                ebx = sx.d(*(edx_12 + 0xb55988))
            else
                int32_t ecx_71 = ecx_70 + esi_14
                
                if (ecx_70 + esi_14 s< 0 || ecx_71 s> 0x18e)
                    ebx = sx.d(*(edx_12 + 0xb55988))
                else
                    int32_t ecx_72 = ecx_71 * 2
                    
                    if (sx.d(*(ecx_72 + &data_b55f58)) != esi_14)
                        ebx = sx.d(*(edx_12 + 0xb55988))
                    else
                        ebx = sx.d(*(ecx_72 + &data_b55c38))
            
            if (eax_14 u>= 0xb9a5a6)
                break
            
            eax_81 = &eax_14[1]
            data_b9a5cc = eax_81
            esi_37 = &data_b9a5b8
        label_487a33:
            *eax_81 = ebx.w
            data_b9a5c8 += 0x10
            int32_t* edi_27 = data_b9a5c8
            *edi_27 = *esi_37
            int32_t* edi_28 = &edi_27[1]
            void* esi_40 = &esi_37[1]
            *edi_28 = *esi_40
            int32_t* edi_29 = &edi_28[1]
            void* esi_41 = esi_40 + 4
            *edi_29 = *esi_41
            edi_29[1] = *(esi_41 + 4)
            eax = data_b9a5d0
        else
            data_b9a5cc = &eax_14[1]
            ebx = 0x10
            eax_14[1] = 0x10
            data_b9a5c8 += 0x10
            int32_t* edi_10 = data_b9a5c8
            *edi_10 = data_b9a5b8
            void* edi_11 = &edi_10[1]
            void* esi_15 = &data_b9a5bc
            *edi_11 = *esi_15
            void* edi_12 = edi_11 + 4
            void* esi_16 = esi_15 + 4
            *edi_12 = *esi_16
            *(edi_12 + 4) = *(esi_16 + 4)
            eax = data_b9a5d0
            bool cond:21_1 = eax != 0
            
            if (eax s< 0)
                eax = sub_486e85()
                cond:21_1 = eax != 0
                data_b9a5d0 = eax
                
                if (eax s< 0)
                    eax = 0
                    data_b9a5d0 = 0
                    cond:21_1 = false
            
            if (not(cond:21_1))
                return 0
    else
        int32_t ecx_2 = ecx_1 + eax
        
        if (ecx_1 + eax s< 0 || ecx_2 s> 0x18e)
            goto label_48701a
        
        int32_t ecx_3 = ecx_2 * 2
        
        if (sx.d(*(ecx_3 + &data_b55f58)) != eax)
            goto label_48701a
        
        if (data_b9a5cc u>= 0xb9a5a6)
            break
        
        data_b9a5cc += 2
        ebx = sx.d(*(ecx_3 + &data_b55c38))
        *data_b9a5cc = ebx.w
        data_b9a5c8 += 0x10
        int32_t* edi_1 = data_b9a5c8
        *edi_1 = data_b9a5a8
        void* edi_2 = &edi_1[1]
        int16_t* esi_2 = &data_b9a5ac
        *edi_2 = *esi_2
        void* edi_3 = edi_2 + 4
        void* esi_3 = &esi_2[2]
        *edi_3 = *esi_3
        *(edi_3 + 4) = *(esi_3 + 4)
        eax = 0xffffffff
        bool cond:36_1 = data_b9a5d4 s<= 0
        data_b9a5d0 = 0xffffffff
        
        if (not(cond:36_1))
            data_b9a5d4 -= 1
    
    edx = data_b9a5c8

return 1
