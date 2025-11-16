// 函数: sub_6d0610
// 地址: 0x6d0610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
uint32_t ebx = arg1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t esi = 0
uint32_t var_4c = ebx
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t ecx = *(ebx + 0x2bc)
double var_48

if (ecx == 0)
    int32_t ecx_1 = *(ebx + 0x184)
    
    if (ecx_1 == 0)
        *(ebx + 0x2bc) = 0x186a0
        *(ebx + 0x184) = 0x186a0
    else
        *(ebx + 0x2bc) = sub_6cd500(ecx_1)
else
    int32_t eax_1 = *(ebx + 0x184)
    
    if (eax_1 == 0)
        *(ebx + 0x184) = sub_6cd500(ecx)
    else
        int32_t mxcsr
        int16_t x87control
        var_48 = fconvert.d(sub_74c3d0(mxcsr, x87control, 
            fconvert.d(fconvert.t(
                _mm_cvtepi32_pd(zx.q(ecx)) * _mm_cvtepi32_pd(zx.q(eax_1)) / 100000.0 + 0.5))))
        
        if (0x41dfffffffc00000 f< var_48 || var_48 < -2147483648.0
                || int.d(var_48) - 0x17318 u> 0x2710)
            esi = 1

*(ebx + 0x306) |= 1

if (esi == 0)
    *(ebx + 0x7c) &= 0xffffdfff
else
    *(ebx + 0x7c) |= 0x2000

int32_t eax_6 = *(ebx + 0x7c)

if ((eax_6 & 0x40000) != 0 && eax_6.b s>= 0)
    *(ebx + 0x78) &= 0xffffdfff
    *(ebx + 0x7c) = eax_6 & 0xfd7ffeff
    *(ebx + 0x148) = 0

if (*(ebx + 0x184) - 0x17318 u<= 0x2710)
    *(ebx + 0x7c) &= 0xff7fffff
    *(ebx + 0x78) &= 0xffffdfff

if ((*(ebx + 0x7c) & 0x600000) != 0)
    sub_6ccf30(ebx)

int32_t eax_10 = *(ebx + 0x7c)

if ((eax_10 & 0x100) == 0)
    if (eax_10.b s< 0 && (eax_10 & 0x4000) != 0)
        int16_t eax_11 = *(ebx + 0x162)
        
        if (eax_11 == *(ebx + 0x164) && eax_11 == *(ebx + 0x166))
            *(ebx + 0x168) = eax_11
            *(ebx + 0x74) |= 0x800
else if ((*(ebx + 0x14f) & 2) == 0)
    *(ebx + 0x74) |= 0x800

if (*(ebx + 0x14f) != 3)
    sub_6d0540(ebx)
else
    sub_6d0400(ebx)

int32_t edx_3 = *(ebx + 0x7c)

if ((edx_3 & 0x200) != 0 && edx_3.b s< 0 && (edx_3 & 0x100) == 0 && *(ebx + 0x150) != 0x10)
    *(ebx + 0x162) = (((zx.d(*(ebx + 0x162)) + 0x81) * 0xff) u>> 0x10).w
    *(ebx + 0x164) = (((zx.d(*(ebx + 0x164)) + 0x81) * 0xff) u>> 0x10).w
    *(ebx + 0x166) = (((zx.d(*(ebx + 0x166)) + 0x81) * 0xff) u>> 0x10).w
    *(ebx + 0x168) = (((zx.d(*(ebx + 0x168)) + 0x81) * 0xff) u>> 0x10).w

if ((edx_3 & 0x4000400) != 0 && edx_3.b s< 0 && (edx_3 & 0x100) == 0 && *(ebx + 0x150) == 0x10)
    *(ebx + 0x162) *= 0x101
    *(ebx + 0x164) *= 0x101
    int16_t ecx_4 = 0x101 * *(ebx + 0x168)
    *(ebx + 0x166) *= 0x101
    *(ebx + 0x168) = ecx_4

uint16_t eax_12 = *(ebx + 0x168)
*(ebx + 0x16a) = *(ebx + 0x160)
*(ebx + 0x172) = eax_12
int32_t ecx_6

if ((edx_3 & 0x2000) == 0 && ((edx_3 & 0x600000) == 0
        || (*(ebx + 0x2bc) - 0x17318 u<= 0x2710 && *(ebx + 0x184) - 0x17318 u<= 0x2710)))
    ecx_6 = edx_3 & 0x80

if ((edx_3 & 0x2000) != 0 || ((edx_3 & 0x600000) != 0
        && (*(ebx + 0x2bc) - 0x17318 u> 0x2710 || *(ebx + 0x184) - 0x17318 u> 0x2710)) || (ecx_6 != 0 && (
        *(ebx + 0x2bc) - 0x17318 u> 0x2710 || *(ebx + 0x184) - 0x17318 u> 0x2710
        || (*(ebx + 0x15a) == 3 && *(ebx + 0x15c) - 0x17318 u> 0x2710)))
        || ((edx_3 & 0x800000) != 0 && *(ebx + 0x184) - 0x17318 u> 0x2710))
    int32_t ecx_22 = sub_6cdeb0(ebx, zx.d(*(ebx + 0x150)))
    int32_t* eax_50 = *(ebx + 0x7c)
    var_48.d = eax_50
    
    if (eax_50.b s< 0)
        if ((eax_50 & 0x600000) != 0)
            eax_50, ecx_22 = sub_6d4470(ebx, "libpng does not support gamma+background+rgb_to_gray")
        
        if (*(ebx + 0x14f) != 3)
            uint32_t eax_80 = zx.d(*(ebx + 0x15a))
            int32_t esi_11 = 0x186a0
            int32_t edi_4
            
            if (eax_80 == 1)
                edi_4 = *(ebx + 0x184)
            else
                int32_t esi_12
                
                if (eax_80 == 2)
                    esi_12 = *(ebx + 0x2bc)
                else
                    if (eax_80 != 3)
                        sub_6d42e0(ebx, "invalid background gamma type")
                        noreturn
                    
                    esi_12 = *(ebx + 0x15c)
                
                edi_4 = sub_6cd500(esi_12)
                int32_t eax_85
                eax_85, ecx_22 = sub_6cd5e0(esi_12, *(ebx + 0x184))
                esi_11 = eax_85
            
            int32_t ecx_54 = neg.d(sbb.d(ecx_22, ecx_22, 0x2710 u< edi_4 - 0x17318))
            int32_t eax_89 =
                neg.d(sbb.d(esi_11 - 0x17318, esi_11 - 0x17318, 0x2710 u< esi_11 - 0x17318))
            var_48.d = eax_89
            double var_88
            
            if (ecx_54 != 0)
                var_88:4.d = edi_4
                *(ebx + 0x172) = sub_6cd750(eax_89, zx.d(*(ebx + 0x168)), ebx)
                eax_89 = var_48.d
            
            if (eax_89 != 0)
                var_88:4.d = esi_11
                *(ebx + 0x168) = sub_6cd750(eax_89, zx.d(*(ebx + 0x168)), ebx)
            
            uint32_t eax_96 = zx.d(*(ebx + 0x162))
            int16_t ecx_58
            
            if (eax_96.w == *(ebx + 0x164) && eax_96.w == *(ebx + 0x166))
                ecx_58 = *(ebx + 0x168)
            
            if (eax_96.w != *(ebx + 0x164) || eax_96.w != *(ebx + 0x166) || eax_96.w != ecx_58)
                if (ecx_54 != 0)
                    var_88:4.d = edi_4
                    int32_t eax_93 = sub_6cd750(eax_96, eax_96, ebx)
                    uint32_t edx_23 = zx.d(*(ebx + 0x164))
                    *(ebx + 0x16c) = eax_93.w
                    var_88:4.d = edi_4
                    int32_t eax_94 = sub_6cd750(eax_93, edx_23, ebx)
                    uint32_t edx_24 = zx.d(*(ebx + 0x166))
                    *(ebx + 0x16e) = eax_94.w
                    var_88:4.d = edi_4
                    *(ebx + 0x170) = sub_6cd750(eax_94, edx_24, ebx)
                    eax_96 = zx.d(*(ebx + 0x162))
                
                if (var_48.d != 0)
                    var_88:4.d = esi_11
                    int32_t eax_97 = sub_6cd750(eax_96, zx.d(eax_96.w), ebx)
                    uint32_t edx_26 = zx.d(*(ebx + 0x164))
                    *(ebx + 0x162) = eax_97.w
                    var_88:4.d = esi_11
                    int32_t eax_98 = sub_6cd750(eax_97, edx_26, ebx)
                    uint32_t edx_27 = zx.d(*(ebx + 0x166))
                    *(ebx + 0x164) = eax_98.w
                    var_88:4.d = esi_11
                    *(ebx + 0x166) = sub_6cd750(eax_98, edx_27, ebx)
                
                *(ebx + 0x15a) = 1
            else
                int16_t eax_92 = *(ebx + 0x172)
                *(ebx + 0x170) = eax_92
                *(ebx + 0x16e) = eax_92
                *(ebx + 0x16c) = eax_92
                *(ebx + 0x166) = ecx_58
                *(ebx + 0x164) = ecx_58
                *(ebx + 0x162) = ecx_58
                *(ebx + 0x15a) = 1
        else
            eax_50.b = *(ebx + 0x15a)
            char var_5c_1
            char var_5b_2
            char var_5a_2
            char var_59_2
            char var_58_2
            
            if (eax_50.b != 2)
                uint32_t eax_52 = zx.d(eax_50.b)
                int32_t eax_53
                int32_t edi_2
                
                if (eax_52 == 1)
                    edi_2 = *(ebx + 0x184)
                label_6d0bf9:
                    eax_53.b = *(ebx + 0x162)
                    var_58_2 = eax_53.b
                    eax_53.b = *(ebx + 0x164)
                    char var_57_4 = eax_53.b
                    eax_53.b = *(ebx + 0x166)
                else
                    int32_t esi_4
                    
                    if (eax_52 == 2)
                        esi_4 = *(ebx + 0x2bc)
                    else
                        if (eax_52 != 3)
                            edi_2 = 0x186a0
                            goto label_6d0bf9
                        
                        esi_4 = *(ebx + 0x15c)
                    
                    edi_2 = sub_6cd500(esi_4)
                    eax_53 = sub_6cd5e0(esi_4, *(ebx + 0x184))
                    
                    if (eax_53 s>= 0x17318 && eax_53 s<= 0x19a28)
                        goto label_6d0bf9
                    
                    var_58_2 = sub_6cd660(zx.d(*(ebx + 0x162)), eax_53)
                    char var_57_3 = sub_6cd660(zx.d(*(ebx + 0x164)), eax_53)
                    eax_53 = sub_6cd660(zx.d(*(ebx + 0x166)), eax_53)
                
                var_5c_1 = eax_53.b
                int32_t eax_58
                
                if (edi_2 - 0x17318 u<= 0x2710)
                    eax_58.b = *(ebx + 0x162)
                    var_5b_2 = eax_58.b
                    eax_58.b = *(ebx + 0x164)
                    var_5a_2 = eax_58.b
                    eax_58.b = *(ebx + 0x166)
                else
                    var_5b_2 = sub_6cd660(zx.d(*(ebx + 0x162)), edi_2)
                    var_5a_2 = sub_6cd660(zx.d(*(ebx + 0x164)), edi_2)
                    eax_58 = sub_6cd660(zx.d(*(ebx + 0x166)), edi_2)
                
                var_59_2 = eax_58.b
            else
                char* edx_6 = *(ebx + 0x188)
                uint32_t edi_1 = zx.d(*(ebx + 0x162))
                uint32_t esi_3 = zx.d(*(ebx + 0x164))
                uint32_t ecx_24 = zx.d(*(ebx + 0x166))
                eax_50.b = edx_6[edi_1]
                var_58_2 = eax_50.b
                eax_50.b = edx_6[esi_3]
                char var_57_2 = eax_50.b
                eax_50.b = edx_6[ecx_24]
                var_5c_1 = eax_50.b
                char* eax_51 = *(ebx + 0x194)
                edx_6.b = eax_51[edi_1]
                ecx_24.b = eax_51[ecx_24]
                var_5b_2 = edx_6.b
                edx_6.b = eax_51[esi_3]
                var_5a_2 = edx_6.b
                var_59_2 = ecx_24.b
            
            int32_t i = 0
            int32_t i_5 = 0
            
            if (zx.d(*(ebx + 0x140)) s> 0)
                uint32_t eax_62 = zx.d(*(ebx + 0x148))
                char* esi_7 = *(ebx + 0x13c) + 2
                char* var_50_2 = esi_7
                
                do
                    char* eax_63
                    
                    if (i s< eax_62)
                        eax_63 = *(ebx + 0x1ac)
                        var_48.d = eax_63
                        eax_63.b = eax_63[i]
                    
                    if (i s>= eax_62 || eax_63.b == 0xff)
                        int32_t ecx_50 = *(ebx + 0x188)
                        uint32_t eax_77
                        eax_77.b = *(zx.d(esi_7[0xfffffffe]) + ecx_50)
                        esi_7[0xfffffffe] = eax_77.b
                        uint32_t eax_78
                        eax_78.b = *(zx.d(esi_7[0xffffffff]) + ecx_50)
                        esi_7[0xffffffff] = eax_78.b
                        eax_63.b = zx.d(*esi_7)[ecx_50]
                    else if (eax_63.b != 0)
                        int32_t edi_3 = *(ebx + 0x194)
                        uint16_t edx_14 = zx.w(eax_63.b)
                        int32_t ebx_2 = *(ebx + 0x190)
                        uint32_t eax_64
                        eax_64.b = var_5b_2
                        uint32_t eax_66 = zx.d(zx.w(*(zx.d(esi_7[0xfffffffe]) + edi_3)) * edx_14
                            + (0xff - edx_14) * zx.w(eax_64.b) + 0x80)
                        uint32_t eax_67
                        eax_67.b = *(zx.d((((eax_66 u>> 8) + eax_66) s>> 8).b) + ebx_2)
                        var_50_2[0xfffffffe] = eax_67.b
                        uint16_t edx_16 = zx.w(*(var_48.d + i_5))
                        uint32_t eax_69
                        eax_69.b = var_5a_2
                        uint32_t eax_71 = zx.d(zx.w(*(zx.d(var_50_2[0xffffffff]) + edi_3)) * edx_16
                            + (0xff - edx_16) * zx.w(eax_69.b) + 0x80)
                        uint32_t eax_72
                        eax_72.b = *(zx.d((((eax_71 u>> 8) + eax_71) s>> 8).b) + ebx_2)
                        var_50_2[0xffffffff] = eax_72.b
                        uint16_t edx_18 = zx.w(*(var_48.d + i_5))
                        uint32_t eax_74
                        eax_74.b = var_59_2
                        i = i_5
                        uint32_t eax_76 = zx.d(zx.w(*(zx.d(*var_50_2) + edi_3)) * edx_18
                            + (0xff - edx_18) * zx.w(eax_74.b) + 0x80)
                        esi_7 = var_50_2
                        eax_63.b = zx.d((((eax_76 u>> 8) + eax_76) s>> 8).b)[ebx_2]
                        ebx = var_4c
                    else
                        eax_63.w = var_58_2.w
                        *(esi_7 - 2) = eax_63.w
                        eax_63.b = var_5c_1
                    
                    *esi_7 = eax_63.b
                    i += 1
                    esi_7 = &esi_7[3]
                    i_5 = i
                    eax_62 = zx.d(*(ebx + 0x148))
                    var_50_2 = esi_7
                while (i s< zx.d(*(ebx + 0x140)))
            
            *(ebx + 0x7c) &= 0xffffdf7f
    else if (*(ebx + 0x14f) == 3 && ((eax_50 & 0x1000) == 0 || (eax_50 & 0x600000) == 0))
        uint32_t i_7 = zx.d(*(ebx + 0x140))
        
        if (i_7 s> 0)
            int32_t edx_28 = *(ebx + 0x188)
            void* ecx_66 = *(ebx + 0x13c) + 2
            uint32_t i_1
            
            do
                uint32_t eax_100 = zx.d(*(ecx_66 - 2))
                ecx_66 += 3
                eax_100.b = *(eax_100 + edx_28)
                *(ecx_66 - 5) = eax_100.b
                uint32_t eax_101
                eax_101.b = *(zx.d(*(ecx_66 - 4)) + edx_28)
                *(ecx_66 - 4) = eax_101.b
                uint32_t eax_102
                eax_102.b = *(zx.d(*(ecx_66 - 3)) + edx_28)
                *(ecx_66 - 3) = eax_102.b
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
            eax_50 = var_48.d
        
        *(ebx + 0x7c) = eax_50 & 0xffffdfff
else if (ecx_6 != 0 && *(ebx + 0x14f) == 3)
    ecx_6.b = *(ebx + 0x162)
    uint32_t eax_40 = zx.d(*(ebx + 0x148))
    char var_5a_1 = ecx_6.b
    char var_58_1 = ecx_6.b
    ecx_6.b = *(ebx + 0x164)
    char var_5b_1 = ecx_6.b
    char var_57_1 = ecx_6.b
    ecx_6.b = *(ebx + 0x166)
    char var_59_1 = ecx_6.b
    
    if (eax_40 s> 0)
        char* esi_2 = *(ebx + 0x13c) + 2
        uint32_t ebx_1 = *(ebx + 0x1ac)
        char* edi = nullptr
        
        do
            uint32_t eax_41
            eax_41.b = edi[ebx_1]
            
            if (eax_41.b == 0)
                eax_41.w = var_58_1.w
                *(esi_2 - 2) = eax_41.w
                *esi_2 = ecx_6.b
            else if (eax_41.b != 0xff)
                uint16_t ecx_7 = zx.w(eax_41.b)
                eax_41.b = var_5a_1
                uint32_t eax_44 =
                    zx.d((0xff - ecx_7) * zx.w(eax_41.b) + zx.w(esi_2[0xfffffffe]) * ecx_7 + 0x80)
                uint32_t ecx_10 = (eax_44 u>> 8) + eax_44
                eax_44.b = var_5b_1
                esi_2[0xfffffffe] = (ecx_10 s>> 8).b
                uint16_t ecx_12 = zx.w(edi[ebx_1])
                uint32_t eax_47 =
                    zx.d((0xff - ecx_12) * zx.w(eax_44.b) + zx.w(esi_2[0xffffffff]) * ecx_12 + 0x80)
                uint32_t ecx_15 = (eax_47 u>> 8) + eax_47
                eax_47.b = var_59_1
                esi_2[0xffffffff] = (ecx_15 s>> 8).b
                uint16_t ecx_17 = zx.w(edi[ebx_1])
                eax_41 = zx.d((0xff - ecx_17) * zx.w(eax_47.b) + zx.w(*esi_2) * ecx_17 + 0x80)
                *esi_2 = (((eax_41 u>> 8) + eax_41) s>> 8).b
                ecx_6.b = var_59_1
            
            edi = &edi[1]
            esi_2 = &esi_2[3]
        while (edi s< eax_40)
        
        ebx = var_4c
    
    *(ebx + 0x7c) = edx_3 & 0xffffff7f

int32_t result = *(ebx + 0x7c)

if ((result.b & 8) != 0 && (result & 0x1000) == 0 && *(ebx + 0x14f) == 3)
    uint32_t i_6 = zx.d(*(ebx + 0x140))
    int32_t esi_13 = 8 - zx.d(*(ebx + 0x1a0))
    var_48.d = esi_13
    *(ebx + 0x7c) = result & 0xfffffff7
    
    if (esi_13 - 1 u<= 6 && i_6 s> 0)
        int32_t esi_14 = *(ebx + 0x13c)
        int32_t eax_109 = 0
        uint32_t i_8 = i_6
        uint32_t i_2
        
        do
            eax_109 += 3
            *(eax_109 + esi_14 - 3) u>>= var_48.b
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        ebx = var_4c
    
    int32_t esi_15 = 8 - zx.d(*(ebx + 0x1a1))
    var_48.d = esi_15
    
    if (esi_15 - 1 u<= 6 && i_6 s> 0)
        int32_t esi_16 = *(ebx + 0x13c)
        int32_t eax_113 = 0
        uint32_t i_9 = i_6
        uint32_t i_3
        
        do
            eax_113 += 3
            *(eax_113 + esi_16 - 2) u>>= var_48.b
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
        ebx = var_4c
    
    int32_t ecx_68 = 8 - zx.d(*(ebx + 0x1a2))
    var_48.d = ecx_68
    result = ecx_68 - 1
    
    if (result u<= 6 && i_6 s> 0)
        int32_t esi_17 = *(ebx + 0x13c)
        result = 0
        uint32_t i_4
        
        do
            *(result + esi_17 + 2) u>>= ecx_68.b
            result += 3
            ecx_68 = var_48.d
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)

return result
