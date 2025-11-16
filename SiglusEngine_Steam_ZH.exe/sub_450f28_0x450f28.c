// 函数: sub_450f28
// 地址: 0x450f28
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = 0
int32_t edi
int32_t var_1a8 = edi
uint32_t edi_1 = zx.d(arg2)
void* ebx = arg1
int32_t* edi_3 = edi_1 * 0x64 + *(ebx + 0x2c)
int32_t* eax_2 = zx.d(arg3) * 0x64 + edi_3[1]
void* var_c = eax_2

if (arg4 == 0xffff)
    arg1.w = eax_2[0x15].w
    arg4 = arg1.w

int32_t* esi_1 = eax_2[0x12] + *edi_3
bool cond:1 = *eax_2 == 0
int32_t ecx = eax_2[0x16]
int32_t var_24 = ecx

if (not(cond:1))
    uint32_t ecx_1 = ecx u>> 0x18
    *eax_2 = eax_2[1]
    
    if (ecx_1 u> 0xd)
        uint32_t eax_57
        
        if (ecx_1 u< 0xe)
        label_4514f0:
            int80_t st0_2
            st0_2, eax_57 = sub_44c68f(ebx, edi_1, zx.d(arg3))
        label_4514f7:
            var_8 = eax_57
            
            if (eax_57 s< 0)
                return var_8
        else
            if (ecx_1 u> 0xf)
                if (ecx_1 != 0x10 && ecx_1 != 0x11)
                    goto label_4514f0
                
                eax_57 = sub_44b7f5(ebx, edi_1, zx.d(arg3))
                goto label_4514f7
            
            if (eax_2[0xe] != 0)
                int16_t x87control_1 = sub_44b676(ebx, edi_1, zx.d(arg3))
                var_8 = 0
                int32_t* eax_60 = *(var_c + 0x38)
                int32_t eax_63 = __ftol(x87control_1, 
                    fconvert.t(*(*((*(*eax_60 + 0xc))(eax_60) + 0xc) + *edi_3)) + fconvert.t(0.001))
                int32_t ecx_65
                ecx_65.w = *(esi_1 + 2)
                arg3.d = eax_63
                
                if (ecx_65.w != eax_63.w)
                    uint32_t eax_64 = zx.d(eax_63.w)
                    arg2.d = eax_64
                    
                    if (*(*(var_c + 0xc) + 0x10) u<= eax_64)
                        return 0x80004005
                    
                    eax_64.w = *(ebx + 0x42)
                    int32_t eax_67
                    
                    if (eax_64.w != *(ebx + 0x40))
                        eax_67 = 0
                    else
                        eax_67 = neg.d(zx.d(*(var_c + 0x56)))
                    
                    int32_t eax_69
                    eax_69.w = neg.w(*(var_c + 0x56))
                    sub_442a01(ebx, zx.d(ecx_65.w) + zx.d(*esi_1) - 1, eax_69, eax_67)
                    var_8 = 0
                    *(esi_1 + 2) = arg3
                    uint32_t eax_74
                    
                    if (*(ebx + 0x42) != *(ebx + 0x40))
                        eax_74 = 0
                    else
                        eax_74 = zx.d(*(var_c + 0x56))
                    
                    eax_57 =
                        sub_442a01(ebx, zx.d(*esi_1) + arg2.d - 1, sx.d(*(var_c + 0x56)), eax_74)
                    goto label_4514f7
                
                if ((*(ebx + 0x118) & 4) != 0)
                    return var_8
    else if (ecx_1 u>= 0xc)
        arg2.d = 0xffffffff
        void* var_2c_1 = nullptr
        uint32_t* var_28_1 = nullptr
        
        if (eax_2[0xe] == 0)
            void* ecx_52 = eax_2[0xf]
            
            if (ecx_52 != 0)
                var_2c_1 = ecx_52
                var_28_1 = *(eax_2[0xd] + 0x10)
                arg2.d = *(*(*(ebx + 0xb0) + (eax_2[7] << 2)) + 0x4c)
        else
            sub_44b676(ebx, edi_1, zx.d(arg3))
            var_8 = 0
            uint32_t eax_52 = sub_448662(ebx, edi_1, zx.d(arg3))
            var_8 = eax_52
            
            if (eax_52 s< 0)
                return var_8
            
            eax_2 = var_c
        
        int32_t var_1ac_13
        int32_t var_1ac_14
        
        switch (var_24)
            case 0xc000000
                var_1ac_14 = arg2.d
                sub_44a01e(&eax_2[2], esi_1, zx.d(*(eax_2 + 0x56)), var_2c_1, var_28_1, &arg3)
            case 0xc010000
                var_1ac_13 = arg2.d
                sub_44a7df(&eax_2[2], esi_1, zx.d(*(eax_2 + 0x56)), var_2c_1, var_28_1, &arg3)
            case 0xc020000
            label_451332:
                int32_t var_1ac_12 = arg2.d
                int16_t* var_1b0_7 = &arg3
                sub_44a3d9(&eax_2[2], esi_1, zx.d(*(eax_2 + 0x56)), var_2c_1, var_28_1)
            case 0xd000000
                var_1ac_14 = arg2.d
                sub_44a01e(&eax_2[2], esi_1, zx.d(*(eax_2 + 0x56)), var_2c_1, var_28_1, &arg3)
            case 0xd010000
                var_1ac_13 = arg2.d
                sub_44a7df(&eax_2[2], esi_1, zx.d(*(eax_2 + 0x56)), var_2c_1, var_28_1, &arg3)
            case 0xd020000
                goto label_451332
    else if (ecx_1 == 3)
        uint32_t eax_36
        int80_t st0_1
        st0_1, eax_36 = sub_44c68f(ebx, edi_1, zx.d(arg3))
        var_8 = eax_36
        
        if (eax_36 s< 0)
            return var_8
        
        if (*(ebx + 0x3c) == 4 && arg4 == 0xffff)
            void* eax_39 = *(*(*(ebx + 0xb0) + (zx.d(*(edi_3 + 0x3e)) << 2)) + 0x34)
            
            if (eax_39 != 0)
                void* eax_40 = *(eax_39 + 0x18)
                
                do
                    void* eax_41 = *(eax_40 + 0x1c)
                    arg2.d = eax_41
                    void* ecx_37 = zx.d(*(eax_41 + 0x14)) * 0x64 + *(ebx + 0x2c)
                    void* eax_44 = zx.d(*(eax_41 + 0x16)) * 0x64 + *(ecx_37 + 4)
                    int16_t* edx_12 = *(eax_44 + 0x48) + *ecx_37
                    
                    if (*(ecx_37 + 0x3c) != 0)
                        uint32_t ecx_38 = zx.d(edx_12[1])
                        uint32_t edx_13 = zx.d(*edx_12)
                        arg4.d = ecx_38
                        arg3.d = edx_13
                        
                        if (edx_13 + ecx_38 - 1 s<= edi_1
                                && edi_1 s< zx.d(*(eax_44 + 0x56)) + edx_13 + arg4.d - 1)
                            uint32_t eax_49 = (*(**(ebx + 8) + 0x114))(*(ebx + 8), 
                                zx.d(*(eax_44 + 0x54)) - arg3.d - arg4.d + edi_1 + 1, 
                                var_24 & 0xffffff, *esi_1)
                            var_8 = eax_49
                            
                            if (eax_49 s< 0)
                                break
                    
                    eax_40 = arg2.d
                while (*(eax_40 + 0x1c)
                    != *(*(*(ebx + 0xb0) + (zx.d(*(edi_3 + 0x3e)) << 2)) + 0x34))
            
            return var_8
    else if (ecx_1 == 9)
        if (*(ebx + 0x3c) == 4 && arg4 == 0xffff)
            void* eax_15 = *(*(*(ebx + 0xb0) + (zx.d(*(edi_3 + 0x3e)) << 2)) + 0x34)
            
            if (eax_15 != 0)
                void* edx_4 = *(eax_15 + 0x18)
                
                do
                    edx_4 = *(edx_4 + 0x1c)
                    void* eax_18 = zx.d(*(edx_4 + 0x14)) * 0x64 + *(ebx + 0x2c)
                    void* ecx_29 = zx.d(*(edx_4 + 0x16)) * 0x64 + *(eax_18 + 4)
                    arg2.d = edx_4
                    int16_t* esi_3 = *(ecx_29 + 0x48) + *eax_18
                    
                    if (*(eax_18 + 0x3c) != 0)
                        uint32_t eax_19 = zx.d(esi_3[1])
                        uint32_t esi_4 = zx.d(*esi_3)
                        arg4.d = eax_19
                        arg3.d = esi_4
                        
                        if (esi_4 + eax_19 - 1 s<= edi_1
                                && edi_1 s< zx.d(*(ecx_29 + 0x56)) + esi_4 + arg4.d - 1)
                            void* edx_7 = *(*(*(ebx + 0xb0) + (*(var_c + 0x1c) << 2)) + 0x40)
                            int32_t eax_26 = **(var_c + 8)
                            
                            if (edx_7 != 0)
                                eax_26 = *(*(edx_7 + 8) + (eax_26 << 2))
                            
                            uint32_t eax_32 = (*(**(ebx + 8) + 0x104))(*(ebx + 8), 
                                zx.d(*(ecx_29 + 0x54)) - arg3.d - arg4.d + edi_1 + 1, 
                                *(*(ebx + 0x18) + eax_26 * 0x18 + 4))
                            var_8 = eax_32
                            
                            if (eax_32 s< 0)
                                break
                            
                            edx_4 = arg2.d
                while (*(edx_4 + 0x1c) != *(*(*(ebx + 0xb0) + (zx.d(*(edi_3 + 0x3e)) << 2)) + 0x34))
            
            return var_8
    else
        uint32_t eax_6
        
        if (ecx_1 == 0xa)
            void* ecx_19 = *(*(*(ebx + 0xb0) + (eax_2[7] << 2)) + 0x40)
            int32_t eax_11 = *eax_2[2]
            
            if (ecx_19 != 0)
                eax_11 = *(*(ecx_19 + 8) + (eax_11 << 2))
            
            if (*(*(ebx + 0x18) + eax_11 * 0x18 + 4) != 0)
                int32_t eax_12
                eax_12.w = *(ebx + 0x42)
                int32_t ecx_22
                ecx_22.b = eax_12.w != *(ebx + 0x40)
                sub_442a01(ebx, edi_1, 0xffffffff, ecx_22 - 1)
                var_8 = 0
                eax_6 = sub_44ea67(ebx, edi_1)
            label_451015:
                
                if (eax_6 s< 0)
                    return eax_6
                
                eax_6.w = *(ebx + 0x42)
                eax_6.w -= *(ebx + 0x40)
                int16_t temp22_1 = eax_6.w
                eax_6.w = neg.w(eax_6.w)
                sub_442a01(ebx, edi_1, 1, sbb.d(eax_6, eax_6, temp22_1 != 0) + 1)
                var_8 = 0
                return sub_450e43(ebx, arg2, -1)
        else
            if (ecx_1 != 0xb)
                goto label_4514f0
            
            void* ecx_8 = *(*(*(ebx + 0xb0) + (eax_2[7] << 2)) + 0x40)
            int32_t eax_4 = *eax_2[2]
            
            if (ecx_8 != 0)
                eax_4 = *(*(ecx_8 + 8) + (eax_4 << 2))
            
            if (*(*(ebx + 0x18) + eax_4 * 0x18 + 4) != 0)
                int32_t eax_5
                eax_5.w = *(ebx + 0x42)
                int32_t ecx_11
                ecx_11.b = eax_5.w != *(ebx + 0x40)
                sub_442a01(ebx, edi_1, 0xffffffff, ecx_11 - 1)
                var_8 = 0
                eax_6 = sub_44f9da(ebx, edi_1)
                goto label_451015

int32_t ecx_71 = var_24

if ((ecx_71 u>> 0x18) - 1 u> 0x10)
    return var_8

float var_20
float var_1c
float var_18
int32_t eax_82

switch (ecx_71 u>> 0x18)
    case 1
        int32_t* ebx_1 = *(ebx + 8)
        return (*(*ebx_1 + 0xe4))(ebx_1, var_24 & 0xffffff, *esi_1)
    case 2
        int32_t* ebx_2 = *(ebx + 8)
        return (*(*ebx_2 + 0x10c))(ebx_2, zx.d(arg4), var_24 & 0xffffff, *esi_1)
    case 3
        if (*(ebx + 0x3c) == 1)
            return var_8
        
        int32_t* ebx_3 = *(ebx + 8)
        return (*(*ebx_3 + 0x114))(ebx_3, zx.d(arg4), var_24 & 0xffffff, *esi_1)
    case 4
        int32_t* ebx_4 = *(ebx + 8)
        unimplemented  {fld st0, dword [esi]}
        int32_t var_1ac_24 = ecx_71
        float var_1ac_25 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        return (*(*ebx_4 + 0x13c))(ebx_4, var_1ac_25)
    case 5
        int32_t esi_8
        
        if (*(ebx + 0x3c) != 1)
            esi_8 = *esi_1
        else
            esi_8 = 2
        
        int32_t* ebx_5 = *(ebx + 8)
        return (*(*ebx_5 + 0x164))(ebx_5, esi_8)
    case 6
        void var_6c
        j_sub_4023fb(&var_6c, esi_1)
        int32_t eax_93 = var_24
        int32_t* ebx_6
        
        if (eax_93 == 0x6000000)
            ebx_6 = *(ebx + 8)
            return (*(*ebx_6 + 0xb0))(ebx_6, 3, &var_6c)
        
        if (eax_93 == 0x6000001)
            ebx_6 = *(ebx + 8)
            return (*(*ebx_6 + 0xb0))(ebx_6, 2, &var_6c)
        
        void* var_1ac_28
        int32_t ecx_76
        
        if (eax_93 == 0x6000002)
            var_1ac_28 = &var_6c
            ecx_76 = zx.d(arg4) + 0x100
        label_4515f3:
            ebx_6 = *(ebx + 8)
            return (*(*ebx_6 + 0xb0))(ebx_6, ecx_76, var_1ac_28)
        
        if (eax_93 != 0x6000003)
            return var_8
        
        var_1ac_28 = &var_6c
        ecx_76 = zx.d(arg4) + 0x10
        goto label_4515f3
    case 7
        void* eax_101 = zx.d(*(ebx + 0x42)) * 0xb4 + *(ebx + 0xa4) + 0x44
        void* edi_4
        
        if (ecx_71 == 0x7000000)
            edi_4 = eax_101
        label_451657:
            var_20 = *esi_1
            var_1c = esi_1[1]
            var_18 = esi_1[2]
            int32_t var_14_1 = esi_1[3]
            *edi_4 = var_20
            void* edi_5 = edi_4 + 4
            void* esi_9 = &var_1c
            *edi_5 = *esi_9
            void* edi_6 = edi_5 + 4
            void* esi_10 = esi_9 + 4
            *edi_6 = *esi_10
            *(edi_6 + 4) = *(esi_10 + 4)
        else
            if (ecx_71 == 0x7000001)
                edi_4 = eax_101 + 0x10
                goto label_451657
            
            if (ecx_71 == 0x7000002)
                edi_4 = eax_101 + 0x20
                goto label_451657
            
            if (ecx_71 == 0x7000003)
                edi_4 = eax_101 + 0x30
                goto label_451657
            
            if (ecx_71 == 0x7000004)
                *(eax_101 + 0x40) = *esi_1
        
        if ((*(var_c + 0x30) & 1) == 0 && (*(ebx + 0x118) & 4) == 0)
            return var_8
        
        int32_t* ebx_7 = *(ebx + 8)
        return (*(*ebx_7 + 0xc4))(ebx_7, eax_101)
    case 8
        if (ecx_71 == 0x800000d)
            int32_t* ebx_9 = *(ebx + 8)
            return (*(*ebx_9 + 0xd4))(ebx_9, zx.d(arg4), *esi_1)
        
        int32_t* eax_105 =
            zx.d(*(var_c + 0x4c)) * 0x68 + *(zx.d(*(ebx + 0x42)) * 0xb4 + *(ebx + 0xa4) + 0x40)
        int32_t* esi_13
        float* edi_10
        void* edi_11
        
        if (ecx_71 - 0x8000000 u<= 0xc)
            switch (ecx_71)
                case 0x8000000
                    *eax_105 = *esi_1
                case 0x8000001
                    edi_10 = &eax_105[1]
                label_4516e6:
                    var_20 = *esi_1
                    var_1c = esi_1[1]
                    var_18 = esi_1[2]
                    int32_t var_14_2 = esi_1[3]
                    *edi_10 = var_20
                    edi_11 = &edi_10[1]
                    esi_13 = &var_1c
                    goto label_451727
                case 0x8000002
                    edi_10 = &eax_105[5]
                    goto label_4516e6
                case 0x8000003
                    edi_10 = &eax_105[9]
                    goto label_4516e6
                case 0x8000004
                    edi_11 = &eax_105[0xd]
                label_451715:
                    var_1c = *esi_1
                    var_18 = esi_1[1]
                    int32_t var_14_3 = esi_1[2]
                    esi_13 = &var_1c
                label_451727:
                    *edi_11 = *esi_13
                    void* edi_12 = edi_11 + 4
                    void* esi_14 = &esi_13[1]
                    *edi_12 = *esi_14
                    *(edi_12 + 4) = *(esi_14 + 4)
                case 0x8000005
                    edi_11 = &eax_105[0x10]
                    goto label_451715
                case 0x8000006
                    eax_105[0x13] = *esi_1
                case 0x8000007
                    eax_105[0x14] = *esi_1
                case 0x8000008
                    eax_105[0x15] = *esi_1
                case 0x8000009
                    eax_105[0x16] = *esi_1
                case 0x800000a
                    eax_105[0x17] = *esi_1
                case 0x800000b
                    eax_105[0x18] = *esi_1
                case 0x800000c
                    eax_105[0x19] = *esi_1
        
        if ((*(var_c + 0x30) & 1) == 0 && (*(ebx + 0x118) & 4) == 0)
            return var_8
        
        if (*(ebx + 0x3c) == 1)
            unimplemented  {fldz }
            var_1c = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
            unimplemented  {fstp dword [ebp-0x18], st0}
            unimplemented  {fldz }
            *eax_105 = 3
            var_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
            unimplemented  {fstp dword [ebp-0x14], st0}
            unimplemented  {fld1 }
            float var_14_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
            unimplemented  {fstp dword [ebp-0x10], st0}
            eax_105[0x10] = var_1c
            void* edi_16 = &eax_105[0x11]
            float* esi_17 = &var_18
            *edi_16 = *esi_17
            *(edi_16 + 4) = esi_17[1]
        
        int32_t* ebx_8 = *(ebx + 8)
        return (*(*ebx_8 + 0xcc))(ebx_8, zx.d(arg4), eax_105)
    case 9
        void* eax_110
        
        if (*(ebx + 0x3c) != 2)
            eax_110 = var_c
        else
            int32_t* eax_108 = *(ebx + 0xc)
            void var_19c
            uint32_t eax_109 = (*(*eax_108 + 0x1c))(eax_108, &var_19c)
            
            if (eax_109 s< 0)
                return eax_109
            
            eax_110 = var_c
            int32_t ecx_111 = **(eax_110 + 0xc)
            char var_15f
            bool cond:28_1
            
            if (ecx_111 == 8)
                cond:28_1 = (var_15f & 0x20) != 0
            label_451805:
                
                if (not(cond:28_1))
                    return 0x80004005
            else if (ecx_111 == 9)
                cond:28_1 = (var_15f & 8) != 0
                goto label_451805
        
        void* ecx_116 = *(*(*(ebx + 0xb0) + (*(eax_110 + 0x1c) << 2)) + 0x40)
        int32_t eax_112 = **(eax_110 + 8)
        
        if (ecx_116 != 0)
            eax_112 = *(*(ecx_116 + 8) + (eax_112 << 2))
        
        int32_t* ecx_118 = *(ebx + 8)
        return (*(*ecx_118 + 0x104))(ecx_118, zx.d(arg4), *(*(ebx + 0x18) + eax_112 * 0x18 + 4))
    case 0xa
        int32_t eax_115 = *(ebx + 0x3c)
        
        if (eax_115 == 1)
            return var_8
        
        if (eax_115 == 2)
            void* ecx_121 = *(*(*(ebx + 0xb0) + (*(var_c + 0x1c) << 2)) + 0x40)
            int32_t eax_118 = **(var_c + 8)
            int32_t edx_29
            
            if (ecx_121 != 0)
                edx_29 = *(*(ecx_121 + 8) + (eax_118 << 2))
            else
                edx_29 = eax_118
            
            int32_t esi_21 = *(ebx + 0x18)
            
            if ((*(esi_21 + edx_29 * 0x18 + 0x14) & 2) == 0)
                return 0x80004005
            
            int32_t edx_32
            
            if (ecx_121 != 0)
                edx_32 = *(*(ecx_121 + 8) + (eax_118 << 2))
            else
                edx_32 = eax_118
            
            int32_t edx_35
            
            if (*(esi_21 + edx_32 * 0x18 + 4) != 0)
                if (ecx_121 != 0)
                    edx_35 = *(*(ecx_121 + 8) + (eax_118 << 2))
                else
                    edx_35 = eax_118
            
            int32_t* eax_121
            
            if (*(esi_21 + edx_32 * 0x18 + 4) == 0 || *(esi_21 + edx_35 * 0x18 + 8) == 0)
                eax_121 = nullptr
            else
                if (ecx_121 != 0)
                    eax_118 = *(*(ecx_121 + 8) + (eax_118 << 2))
                
                int32_t* eax_120 = *(*(ebx + 0x18) + eax_118 * 0x18 + 8)
                eax_121 = (*(*eax_120 + 0xc))(eax_120)
            
            uint32_t eax_122 = sub_442aed(ebx, eax_121)
            
            if (eax_122 s< 0)
                return eax_122
        
        void* eax_125 = *(*(*(ebx + 0xb0) + (*(var_c + 0x1c) << 2)) + 0x40)
        int32_t eax_127
        
        if (eax_125 != 0)
            eax_127 = *(*(eax_125 + 8) + (**(var_c + 8) << 2))
        else
            eax_127 = **(var_c + 8)
        
        int32_t* ecx_129 = *(ebx + 8)
        return (*(*ecx_129 + 0x170))(ecx_129, *(*(ebx + 0x18) + eax_127 * 0x18 + 4))
    case 0xb
        int32_t eax_130 = *(ebx + 0x3c)
        
        if (eax_130 == 1)
            return var_8
        
        int32_t ecx_134
        
        if (eax_130 == 2)
            void* ecx_132 = *(*(*(ebx + 0xb0) + (*(var_c + 0x1c) << 2)) + 0x40)
            
            if (ecx_132 != 0)
                ecx_134 = *(*(ecx_132 + 8) + (**(var_c + 8) << 2))
            else
                ecx_134 = **(var_c + 8)
        
        if (eax_130 == 2 && (*(*(ebx + 0x18) + ecx_134 * 0x18 + 0x14) & 2) == 0)
            return 0x80004005
        
        void* ecx_139 = *(*(*(ebx + 0xb0) + (*(var_c + 0x1c) << 2)) + 0x40)
        int32_t eax_133 = **(var_c + 8)
        
        if (ecx_139 != 0)
            eax_133 = *(*(ecx_139 + 8) + (eax_133 << 2))
        
        int32_t* ecx_141 = *(ebx + 8)
        return (*(*ecx_141 + 0x1ac))(ecx_141, *(*(ebx + 0x18) + eax_133 * 0x18 + 4))
    case 0xc
        if (*(ebx + 0x3c) != 1)
            int32_t eax_137 = *(ebx + 0x118) << 0x1d s>> 0x1f
            
            if (eax_137 != 0 || (*(var_c + 0x30) & 1) != 0)
                if (ecx_71 == 0xc000000)
                    uint32_t var_1b4_20
                    void* var_1b0_31
                    uint32_t var_1ac_40
                    void* eax_148
                    
                    if (edi_3[0xb].b == 0 || eax_137 != 0)
                        eax_148 = var_c
                    label_451abf:
                        var_1ac_40 = zx.d(*(eax_148 + 0x56))
                        var_1b0_31 = esi_1
                        var_1b4_20 = zx.d(arg4)
                    else
                        eax_148 = var_c
                        
                        if ((*(eax_148 + 0x30) & 1) == 0)
                            goto label_451abf
                        
                        var_1ac_40 = zx.d(edi_3[7].w)
                        var_1b0_31 = esi_1 - (zx.d(*(eax_148 + 0x54)) << 4)
                        var_1b4_20 = 0
                    int32_t* ebx_11 = *(ebx + 8)
                    return (*(*ebx_11 + 0x178))(ebx_11, var_1b4_20, var_1b0_31, var_1ac_40)
                
                if (ecx_71 == 0xc010000)
                    uint32_t var_1b4_19
                    int32_t* var_1b0_30
                    uint32_t var_1ac_39
                    void* eax_143
                    
                    if (*(edi_3 + 0x2d) == 0 || eax_137 != 0)
                        eax_143 = var_c
                    label_451a7e:
                        var_1ac_39 = zx.d(*(eax_143 + 0x56))
                        var_1b0_30 = esi_1
                        var_1b4_19 = zx.d(arg4)
                    else
                        eax_143 = var_c
                        
                        if ((*(eax_143 + 0x30) & 1) == 0)
                            goto label_451a7e
                        
                        var_1ac_39 = zx.d(*(edi_3 + 0x1e))
                        var_1b0_30 = esi_1 - (zx.d(*(eax_143 + 0x54)) << 2)
                        var_1b4_19 = 0
                    return sub_442639(*(ebx + 8), var_1b4_19, var_1b0_30, var_1ac_39)
                
                if (ecx_71 == 0xc020000)
                    uint32_t var_1b4_18
                    void* var_1b0_29
                    uint32_t var_1ac_38
                    void* eax_138
                    
                    if (*(edi_3 + 0x2e) == 0 || eax_137 != 0)
                        eax_138 = var_c
                    label_451a39:
                        var_1ac_38 = zx.d(*(eax_138 + 0x56))
                        var_1b0_29 = esi_1
                        var_1b4_18 = zx.d(arg4)
                    else
                        eax_138 = var_c
                        
                        if ((*(eax_138 + 0x30) & 1) == 0)
                            goto label_451a39
                        
                        var_1ac_38 = zx.d(edi_3[8].w)
                        var_1b0_29 = esi_1 - (zx.d(*(eax_138 + 0x54)) << 4)
                        var_1b4_18 = 0
                    int32_t* ebx_10 = *(ebx + 8)
                    return (*(*ebx_10 + 0x180))(ebx_10, var_1b4_18, var_1b0_29, var_1ac_38)
        
        return var_8
    case 0xd
        if (*(ebx + 0x3c) != 1)
            int32_t eax_155 = *(ebx + 0x118) << 0x1d s>> 0x1f
            
            if (eax_155 != 0 || (*(var_c + 0x30) & 1) != 0)
                if (ecx_71 == 0xd000000)
                    uint32_t var_1b4_23
                    void* var_1b0_34
                    uint32_t var_1ac_43
                    void* eax_166
                    
                    if (edi_3[0xc].b == 0 || eax_155 != 0)
                        eax_166 = var_c
                    label_451bd3:
                        var_1ac_43 = zx.d(*(eax_166 + 0x56))
                        var_1b0_34 = esi_1
                        var_1b4_23 = zx.d(arg4)
                    else
                        eax_166 = var_c
                        
                        if ((*(eax_166 + 0x30) & 1) == 0)
                            goto label_451bd3
                        
                        var_1ac_43 = zx.d(edi_3[9].w)
                        var_1b0_34 = esi_1 - (zx.d(*(eax_166 + 0x54)) << 4)
                        var_1b4_23 = 0
                    int32_t* ebx_14 = *(ebx + 8)
                    return (*(*ebx_14 + 0x1b4))(ebx_14, var_1b4_23, var_1b0_34, var_1ac_43)
                
                if (ecx_71 == 0xd010000)
                    uint32_t var_1b4_22
                    void* var_1b0_33
                    uint32_t var_1ac_42
                    void* eax_161
                    
                    if (*(edi_3 + 0x31) == 0 || eax_155 != 0)
                        eax_161 = var_c
                    label_451b8e:
                        var_1ac_42 = zx.d(*(eax_161 + 0x56))
                        var_1b0_33 = esi_1
                        var_1b4_22 = zx.d(arg4)
                    else
                        eax_161 = var_c
                        
                        if ((*(eax_161 + 0x30) & 1) == 0)
                            goto label_451b8e
                        
                        var_1ac_42 = zx.d(*(edi_3 + 0x26))
                        var_1b0_33 = esi_1 - (zx.d(*(eax_161 + 0x54)) << 2)
                        var_1b4_22 = 0
                    int32_t* ebx_13 = *(ebx + 8)
                    return (*(*ebx_13 + 0x1c4))(ebx_13, var_1b4_22, var_1b0_33, var_1ac_42)
                
                if (ecx_71 == 0xd020000)
                    uint32_t var_1b4_21
                    void* var_1b0_32
                    uint32_t var_1ac_41
                    void* eax_156
                    
                    if (*(edi_3 + 0x32) == 0 || eax_155 != 0)
                        eax_156 = var_c
                    label_451b49:
                        var_1ac_41 = zx.d(*(eax_156 + 0x56))
                        var_1b0_32 = esi_1
                        var_1b4_21 = zx.d(arg4)
                    else
                        eax_156 = var_c
                        
                        if ((*(eax_156 + 0x30) & 1) == 0)
                            goto label_451b49
                        
                        var_1ac_41 = zx.d(edi_3[0xa].w)
                        var_1b0_32 = esi_1 - (zx.d(*(eax_156 + 0x54)) << 4)
                        var_1b4_21 = 0
                    int32_t* ebx_12 = *(ebx + 8)
                    return (*(*ebx_12 + 0x1bc))(ebx_12, var_1b4_21, var_1b0_32, var_1ac_41)
        
        return var_8
    case 0xe
        eax_82.w = *esi_1
        
        if (eax_82.w != 0)
            if (*(ebx + 0x3c) != 4)
                int32_t edi_19 = 0
                
                do
                    uint32_t eax_177 = sub_450e43(ebx, *(esi_1 + 2) + edi_19.w + *esi_1 - 1, 0xffff)
                    var_8 = eax_177
                    
                    if (eax_177 s< 0 && *(ebx + 0x3c) != 1)
                        break
                    
                    edi_19 += 1
                while (edi_19.w u< 1)
            else
                int32_t ecx_149 = zx.d(*(esi_1 + 2)) + zx.d(eax_82.w) - 1
                int32_t eax_174 = ecx_149 * 0x64 + *(ebx + 0x2c)
                
                if ((*(eax_174 + 8) & 1) == 0)
                    sub_450e43(ebx, ecx_149.w, 0xffff)
                else
                    sub_450a9f(ebx, eax_174)
        
        return var_8
    case 0xf
        eax_82.w = *esi_1
        
        if (eax_82.w == 0)
            return var_8
        
        if (*(ebx + 0x3c) == 4)
            return sub_450962(ebx, edi_3, var_c, var_c + 0x64)
        
        return sub_450e43(ebx, *(esi_1 + 2) + eax_82.w - 1, arg4)
    case 0x10
        int32_t* eax_204 = *(var_c + 0x38)
        void* eax_205 = (*(*eax_204 + 0xc))(eax_204)
        
        if (*(eax_205 + 0x4c) != 0)
            arg2.d = *(eax_205 + 0x28) + *edi_3
            void* eax_209 = *(eax_205 + 0x5c) + eax_205
            int32_t ecx_166 = *eax_209
            arg3.d = eax_209 + 4
            
            if (ecx_166 u> 0)
                arg4.d = ecx_166
                int32_t i
                
                do
                    int32_t* ecx_167 = arg3.d
                    uint32_t eax_213 = (*(**(ebx + 8) + 0x178))(*(ebx + 8), *ecx_167, 
                        (*ecx_167 << 4) + arg2.d, ecx_167[1])
                    arg3.d += 8
                    i = arg4.d
                    arg4.d -= 1
                    var_8 = eax_213
                while (i != 1)
        
        if (*(eax_205 + 0x50) != 0)
            arg2.d = *(eax_205 + 0x2c) + *edi_3
            void* eax_217 = *(eax_205 + 0x60) + eax_205
            int32_t ecx_168 = *eax_217
            arg3.d = eax_217 + 4
            
            if (ecx_168 u> 0)
                arg4.d = ecx_168
                int32_t i_1
                
                do
                    int32_t* edx_62 = arg3.d
                    uint32_t eax_221 = (*(**(ebx + 8) + 0x188))(*(ebx + 8), *arg3.d, 
                        arg2.d + (*edx_62 << 2), edx_62[1])
                    arg3.d += 8
                    i_1 = arg4.d
                    arg4.d -= 1
                    var_8 = eax_221
                while (i_1 != 1)
        
        if (*(eax_205 + 0x54) != 0)
            void* edi_24 = *(eax_205 + 0x64) + eax_205
            arg4.d = *(eax_205 + 0x30) + *edi_3
            int32_t eax_224 = *edi_24
            void* edi_25 = edi_24 + 4
            
            if (eax_224 u> 0)
                arg3.d = eax_224
                
                do
                    int32_t ecx_172 = *edi_25
                    int32_t* eax_225 = *(ebx + 8)
                    uint32_t eax_226 = (*(*eax_225 + 0x1bc))(eax_225, ecx_172, 
                        (ecx_172 << 4) + arg4.d, *(edi_25 + 4))
                    edi_25 += 8
                    arg3.d -= 1
                    var_8 = eax_226
                while (arg3.d != 1)
        
        return var_8
    case 0x11
        int32_t* eax_180 = *(var_c + 0x38)
        void* eax_181 = (*(*eax_180 + 0xc))(eax_180)
        
        if (*(eax_181 + 0x4c) != 0)
            arg2.d = *(eax_181 + 0x28) + *edi_3
            void* eax_185 = *(eax_181 + 0x5c) + eax_181
            int32_t ecx_158 = *eax_185
            arg3.d = eax_185 + 4
            
            if (ecx_158 u> 0)
                arg4.d = ecx_158
                int32_t i_2
                
                do
                    int32_t* ecx_159 = arg3.d
                    uint32_t eax_189 = (*(**(ebx + 8) + 0x1b4))(*(ebx + 8), *ecx_159, 
                        (*ecx_159 << 4) + arg2.d, ecx_159[1])
                    arg3.d += 8
                    i_2 = arg4.d
                    arg4.d -= 1
                    var_8 = eax_189
                while (i_2 != 1)
        
        if (*(eax_181 + 0x50) != 0)
            arg2.d = *(eax_181 + 0x2c) + *edi_3
            void* eax_193 = *(eax_181 + 0x60) + eax_181
            int32_t ecx_160 = *eax_193
            arg3.d = eax_193 + 4
            
            if (ecx_160 u> 0)
                arg4.d = ecx_160
                int32_t i_3
                
                do
                    int32_t* edx_56 = arg3.d
                    uint32_t eax_197 = (*(**(ebx + 8) + 0x1c4))(*(ebx + 8), *arg3.d, 
                        arg2.d + (*edx_56 << 2), edx_56[1])
                    arg3.d += 8
                    i_3 = arg4.d
                    arg4.d -= 1
                    var_8 = eax_197
                while (i_3 != 1)
        
        if (*(eax_181 + 0x54) != 0)
            void* edi_21 = *(eax_181 + 0x64) + eax_181
            arg4.d = *(eax_181 + 0x30) + *edi_3
            int32_t eax_200 = *edi_21
            void* edi_22 = edi_21 + 4
            
            if (eax_200 u> 0)
                arg3.d = eax_200
                
                do
                    int32_t ecx_164 = *edi_22
                    int32_t* eax_201 = *(ebx + 8)
                    uint32_t eax_202 = (*(*eax_201 + 0x1bc))(eax_201, ecx_164, 
                        (ecx_164 << 4) + arg4.d, *(edi_22 + 4))
                    edi_22 += 8
                    arg3.d -= 1
                    var_8 = eax_202
                while (arg3.d != 1)
        
        return var_8
