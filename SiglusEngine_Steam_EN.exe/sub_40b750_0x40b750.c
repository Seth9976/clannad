// 函数: sub_40b750
// 地址: 0x40b750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
void* eax = esi[0x10]
void* edi = *(eax + 4)
void* edx = *(eax + 0x68)
void* eax_1 = esi[0x1a]
void* var_14 = edi
void* ecx = *(edi + 0x1c)
int32_t ebx_1 = *(edi + 4) << 2
int32_t ecx_1 = esi[9]
int32_t eax_3
eax_3.b = (ebx_1 + 3).b & 0xfc
__chkstk(eax_3)
int32_t __saved_edi
int32_t* var_54 = &__saved_edi
int32_t eax_4 = sub_4038a0(esi, ebx_1)
int32_t* eax_5 = sub_4038a0(esi, *(edi + 4) << 2)
int32_t* eax_8 = sub_4038a0(esi, *(edi + 4) << 2)
float var_40 = *(eax_1 + 4)
int32_t eax_11
eax_11.b = ((*(edi + 4) << 2) + 3).b & 0xfc
__chkstk(eax_11)
int32_t ecx_3 = esi[7]
int32_t* edx_4 = *(ecx + (ecx_3 << 2) + 0x220)
int32_t eax_14 = neg.d(ecx_3)
int32_t* var_34 = &__saved_edi
arg1 = nullptr
int32_t eax_17 = (sbb.d(eax_14, eax_14, ecx_3 != 0) & 2) + *(eax_1 + 8)
int32_t edx_8 = *(edx + 0x38)
esi[0xa] = ecx_3
int32_t* eax_19 = edx_8 + eax_17 * 0x34
float var_58
float var_38
int32_t* var_1c
int16_t top

if (*(edi + 4) s> 0)
    int32_t eax_22
    int32_t edx_9
    edx_9:eax_22 = sx.q(ecx_1)
    var_1c = &__saved_edi
    int32_t eax_25 = (eax_22 - edx_9) s>> 1 << 2
    void* ecx_5 = eax_4 - &__saved_edi
    int32_t var_24_1 = eax_25
    
    while (true)
        int32_t edx_10 = *esi
        var_58 = fconvert.s(fconvert.t(4f) / float.t(ecx_1))
        float* ebx_2 = *(edx_10 + (arg1 << 2))
        *(ecx_5 + var_1c) = sub_4038a0(esi, eax_25)
        float var_4c_1 = fconvert.s(sub_40c120(&var_58) + fconvert.t(0.34499999999999997))
        sub_40b2c0(ebx_2, edx + 4, ecx, esi[6], esi[7], esi[8])
        sub_40ae30(**(edx + (esi[7] << 2) + 0xc), ebx_2, *(ecx_5 + var_1c))
        sub_408a60(edx + esi[7] * 0xc + 0x14, ebx_2)
        int32_t* ecx_14 = var_1c
        long double x87_r7_7 =
            sub_40c120(ebx_2) + fconvert.t(var_4c_1) + fconvert.t(0.34499999999999997)
        int32_t var_48_1 = 1
        *ebx_2 = fconvert.s(x87_r7_7)
        *ecx_14 = fconvert.s(x87_r7_7)
        
        if (ecx_1 - 1 s> 1)
            void* eax_36 = &ebx_2[1]
            void* var_3c_1 = eax_36
            
            while (true)
                long double x87_r7_8 = fconvert.t(*(eax_36 + 4))
                long double x87_r6_1 = fconvert.t(*eax_36)
                var_38 = fconvert.s(x87_r7_8 * x87_r7_8 + x87_r6_1 * x87_r6_1)
                long double x87_r7_13 = sub_40c120(&var_38) * fconvert.t(0.5f)
                    + fconvert.t(var_4c_1) + fconvert.t(0.34499999999999997)
                ebx_2[(var_48_1 + 1) s>> 1] = fconvert.s(x87_r7_13)
                float* edx_19 = var_1c
                long double temp3_1 = fconvert.t(*edx_19)
                x87_r7_13 - temp3_1
                
                if ((((x87_r7_13 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_13, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp3_1 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                    *edx_19 = fconvert.s(x87_r7_13)
                
                int32_t ecx_16 = var_48_1 + 2
                var_48_1 = ecx_16
                var_3c_1 += 8
                
                if (ecx_16 s>= ecx_1 - 1)
                    break
                
                eax_36 = var_3c_1
            
            ecx_14 = var_1c
        
        long double x87_r7_14 = fconvert.t(*ecx_14)
        long double temp1_1 = fconvert.t(0f)
        x87_r7_14 - temp1_1
        int32_t eax_35
        eax_35.w = (x87_r7_14 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_14, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == temp1_1 ? 1 : 0) << 0xe
        
        if ((eax_35:1.b & 0x41) == 0)
            *ecx_14 = 0
        
        long double x87_r7_15 = fconvert.t(*ecx_14)
        long double temp2_1 = fconvert.t(var_40)
        x87_r7_15 - temp2_1
        top = 0
        eax_35.w = (x87_r7_15 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_15, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp2_1 ? 1 : 0) << 0xe
        
        if ((eax_35:1.b & 0x41) == 0)
            var_40 = *ecx_14
        
        var_1c = &ecx_14[1]
        bool cond:2_1 = arg1 + 1 s< *(edi + 4)
        arg1 += 1
        
        if (not(cond:2_1))
            break
        
        eax_25 = var_24_1

int32_t eax_44
int32_t edx_21
edx_21:eax_44 = sx.q(ecx_1)
int32_t eax_46 = (eax_44 - edx_21) s>> 1
int32_t ebx_3 = eax_46 << 2
void* eax_47 = sub_4038a0(esi, ebx_3)
var_38 = sub_4038a0(esi, ebx_3)
arg1 = nullptr

if (*(edi + 4) s> 0)
    int32_t* ebx_4 = eax_8
    int32_t* var_4c_2 = &edx_4[1]
    void* ecx_20 = eax_4 - var_34
    void* eax_53 = var_34 - ebx_4
    void* var_30_2 = ecx_20
    void* var_5c_2 = eax_53
    
    while (true)
        int32_t edx_24 = *var_4c_2
        int32_t eax_55 = *(eax_53 + ebx_4 + ecx_20)
        int32_t* eax_56 = *(*esi + (arg1 << 2))
        var_1c = eax_56
        var_58 = &eax_56[eax_46]
        esi[0xa] = ecx_3
        int32_t eax_57 = sub_4038a0(esi, 0x3c)
        *ebx_4 = eax_57
        __builtin_memset(eax_57, 0, 0x3c)
        float edi_2 = var_58
        
        if (eax_46 s> 0)
            float var_48_2 = edi_2
            void* ecx_25 = eax_55 i- edi_2
            var_58 = eax_46
            void* var_6c_1 = ecx_25
            
            while (true)
                sub_40c120(ecx_25 i+ var_48_2)
                unimplemented  {call 0x40c120}
                unimplemented  {fadd qword [0x606790]}
                float eax_61 = var_48_2 i+ 4
                var_48_2 = eax_61
                *(eax_61 - 4) = fconvert.s(unimplemented  {fstp dword [eax-0x4], st0})
                unimplemented  {fstp dword [eax-0x4], st0}
                float eax_62 = var_58
                var_58 = eax_62 i- 1
                
                if (eax_62 == 1)
                    break
                
                ecx_25 = var_6c_1
        
        sub_4058e0(eax_19, edi_2, eax_47)
        top -= 1
        unimplemented  {call 0x4058e0}
        sub_405fa0(eax_19, var_1c, var_38, var_40, *(var_5c_2 + ebx_4))
        unimplemented  {call 0x405fa0}
        sub_406490(eax_19, eax_47, var_38, 1.40129846e-45f, var_1c, eax_55, edi_2)
        unimplemented  {call 0x406490}
        int32_t eax_70 = edx_4[edx_24 + 0x101]
        
        if (*(ecx + (eax_70 << 2) + 0x320) != 1)
            return 0xffffffff
        
        *(*ebx_4 + 0x1c) = sub_40e020(esi, *(*(edx + 0x30) + (eax_70 << 2)), edi_2, var_1c)
        
        if (sub_4089e0(esi) != 0 && *(*ebx_4 + 0x1c) != 0)
            sub_406490(eax_19, eax_47, var_38, 2.80259693e-45f, var_1c, eax_55, edi_2)
            unimplemented  {call 0x406490}
            *(*ebx_4 + 0x38) =
                sub_40e020(esi, *(*(edx + 0x30) + (edx_4[edx_24 + 0x101] << 2)), edi_2, var_1c)
            sub_406490(eax_19, eax_47, var_38, 0f, var_1c, eax_55, edi_2)
            unimplemented  {call 0x406490}
            int32_t eax_84 =
                sub_40e020(esi, *(*(edx + 0x30) + (edx_4[edx_24 + 0x101] << 2)), edi_2, var_1c)
            int32_t* edx_43 = *ebx_4
            var_58 = 5.60519386e-45f
            int32_t i = 0x10000
            *edx_43 = eax_84
            
            do
                int32_t* ecx_44 = *ebx_4
                void* eax_91 = sub_40ebc0(esi, *(*(edx + 0x30) + (edx_4[edx_24 + 0x101] << 2)), 
                    *ecx_44, ecx_44[7], i s/ 7)
                float ecx_47 = var_58
                i += 0x10000
                *(*ebx_4 i+ ecx_47) = eax_91
                var_58 = ecx_47 i+ 4
            while (i s< 0x70000)
            
            var_58 = 4.48415509e-44f
            
            for (int32_t i_1 = 0x10000; i_1 s< 0x70000; )
                void* ecx_49 = *ebx_4
                void* eax_98 = sub_40ebc0(esi, *(*(edx + 0x30) + (edx_4[edx_24 + 0x101] << 2)), 
                    *(ecx_49 + 0x1c), *(ecx_49 + 0x38), i_1 s/ 7)
                float ecx_52 = var_58
                i_1 += 0x10000
                *(*ebx_4 i+ ecx_52) = eax_98
                var_58 = ecx_52 i+ 4
        
        void* eax_100 = arg1 + 1
        var_4c_2 = &var_4c_2[1]
        ebx_4 = &ebx_4[1]
        arg1 = eax_100
        
        if (eax_100 s>= *(var_14 + 4))
            break
        
        ecx_20 = var_30_2
        eax_53 = var_5c_2
    
    edi = var_14

*(eax_1 + 4) = var_40
int32_t ebx_6 = *(edi + 4) << 2
int32_t eax_103
eax_103.b = (ebx_6 + 3).b & 0xfc
__chkstk(eax_103)
int32_t eax_105
eax_105.b = (ebx_6 + 3).b & 0xfc
__chkstk(eax_105)
int32_t* var_40_1 = &__saved_edi
int32_t eax_107
eax_107.b = (ebx_6 + 3).b & 0xfc
__chkstk(eax_107)
int32_t* var_48_3 = &__saved_edi
int32_t eax_109
eax_109.b = (ebx_6 + 3).b & 0xfc
__chkstk(eax_109)
int32_t* edx_61 = &__saved_edi
int32_t* var_5c_3 = &__saved_edi
int32_t* var_70

if (edx_4[0x121] != 0)
    int32_t* eax_112 = sub_4065a0(esi, ecx + 0xb34, eax_19, edx_4, eax_4)
    var_70 = eax_112
    var_1c = sub_406850(esi, eax_19, edx_4, eax_112)
    sub_407280(ecx + 0xb34, eax_19, edx_4, eax_112)
    unimplemented  {call 0x407280}
    edx_61 = var_5c_3

int32_t ecx_61 = *(edi + 4) << 2
__builtin_memset(__builtin_memset(edx_61, 0, ecx_61 u>> 2 << 2), 0, ecx_61 & 3)

if (*(eax_19[1] + 0x1f4) != 0)
    arg1 = nullptr
    
    if (*(var_14 + 4) s> 0)
        uint32_t eax_120 = ecx_1 << 2 u>> 1
        void* ecx_69 = eax_4 - edx_61
        uint32_t var_68_1 = eax_120
        int32_t* edi_5 = edx_61
        void* var_6c_2 = ecx_69
        
        while (true)
            int32_t ebx_9 = *(ecx_69 + edi_5)
            int32_t eax_122
            eax_122.b = (eax_120 + 3).b & 0xfc
            __chkstk(eax_122)
            *edi_5 = &__saved_edi
            sub_406a00(eax_19, ebx_9, &__saved_edi)
            edi_5 = &edi_5[1]
            bool cond:3_1 = arg1 + 1 s< *(var_14 + 4)
            arg1 += 1
            
            if (not(cond:3_1))
                break
            
            ecx_69 = var_6c_2
            eax_120 = var_68_1

int32_t eax_125 = sub_4089e0(esi)
int32_t edi_7 = neg.d(eax_125)
int32_t i_2 = (sbb.d(edi_7, edi_7, eax_125 != 0) & 0xfffffff9) + 7
int32_t i_3 = i_2
int32_t eax_126 = sub_4089e0(esi)
int32_t eax_127 = neg.d(eax_126)

if (i_2 s<= (sbb.d(eax_127, eax_127, eax_126 != 0) & 7) + 7)
    var_38 = eax_1 + (i_2 << 2) + 0xc
    int32_t eax_182
    int32_t eax_183
    
    do
        float ebx_10 = *var_38
        var_58 = ebx_10
        sub_410990(ebx_10, 0, 1)
        sub_410990(ebx_10, ecx_3, *(edx + 0x2c))
        
        if (esi[7] != 0)
            sub_410990(ebx_10, esi[6], 1)
            sub_410990(ebx_10, esi[8], 1)
        
        arg1 = nullptr
        
        if (*(var_14 + 4) s> 0)
            int32_t* edi_10 = eax_5
            int32_t* ecx_76 = eax_8 - edi_10
            void* ecx_78 = var_54 - edi_10
            void* var_4c_3 = &edx_4[1]
            int32_t* eax_139 = eax_4 - edi_10
            void* ecx_80 = var_5c_3 - edi_10
            int32_t* var_6c_3 = eax_139
            
            while (true)
                int32_t* eax_140 = *(eax_139 + edi_10)
                int32_t edx_70 = *var_4c_3
                int32_t ebx_11 = *(*esi + (arg1 << 2))
                int32_t eax_142 = sub_4038a0(esi, ebx_3)
                *edi_10 = eax_142
                *(ecx_78 + edi_10) = sub_40ec70(var_58, esi, 
                    *(*(edx + 0x30) + (edx_4[edx_70 + 0x101] << 2)), 
                    *(*(ecx_76 + edi_10) + (i_3 << 2)), eax_142)
                sub_405880(eax_19, eax_140, eax_142, ebx_11, 
                    *(ecx + (((esi[7] + 0x36) * 0xf + i_3) << 2)))
                sub_406ad0(eax_19, ebx_11, ebx_3 + ebx_11, *(ecx_80 + edi_10))
                top -= 1
                unimplemented  {call 0x406ad0}
                edi_10 = &edi_10[1]
                bool cond:4_1 = arg1 + 1 s< *(var_14 + 4)
                arg1 += 1
                var_4c_3 += 4
                
                if (not(cond:4_1))
                    break
                
                eax_139 = var_6c_3
            
            i_2 = i_3
        
        int32_t* ecx_94 = edx_4
        void* ebx_14
        
        if (ecx_94[0x121] == 0)
            ebx_14 = ecx
        else
            ebx_14 = ecx
            sub_406d40(i_2, ebx_14 + 0xb34, eax_19, ecx_94, *esi, var_70, var_1c, eax_5, var_54, 
                *(ebx_14 + (((esi[7] + 0x36) * 0xf + i_2) << 2)))
            top -= 1
            unimplemented  {call 0x406d40}
            ecx_94 = edx_4
        
        arg1 = nullptr
        
        if (*ecx_94 s> 0)
            void* var_3c_4 = &ecx_94[0x111]
            bool cond:7_1
            
            do
                int32_t j = 0
                int32_t var_44_2 = 0
                int32_t edi_11 = *var_3c_4
                
                if (*(var_14 + 4) s> 0)
                    int32_t* eax_168 = var_48_3
                    void* var_4c_4 = &edx_4[1]
                    void* edx_90 = &__saved_edi - eax_168
                    void** edx_92 = var_40_1 - eax_168
                    
                    do
                        if (*var_4c_4 == arg1)
                            *eax_168 = 0
                            
                            if (var_54[j] != 0)
                                *eax_168 = 1
                            
                            *(edx_90 + eax_168) = *(*esi + (j << 2))
                            *(edx_92 + eax_168) = *(*esi + (j << 2)) + ebx_3
                            eax_168 = &eax_168[1]
                            var_44_2 += 1
                        
                        j += 1
                        var_4c_4 += 4
                    while (j s< *(var_14 + 4))
                    
                    ebx_14 = ecx
                
                int32_t eax_173 = (*((&data_632fc8)[*(ebx_14 + (edi_11 << 2) + 0x520)] + 0x14))(
                    esi, *(*(edx + 0x34) + (edi_11 << 2)), var_40_1, var_48_3, var_44_2)
                (*((&data_632fc8)[*(ebx_14 + (edi_11 << 2) + 0x520)] + 0x18))(var_58, esi, 
                    *(*(edx + 0x34) + (edi_11 << 2)), var_40_1, 0, var_48_3, var_44_2, eax_173)
                cond:7_1 = arg1 + 1 s< *edx_4
                arg1 += 1
                var_3c_4 += 4
            while (cond:7_1)
            i_2 = i_3
        
        i_2 += 1
        i_3 = i_2
        var_38 += 4
        eax_182 = sub_4089e0(esi)
        eax_183 = neg.d(eax_182)
    while (i_2 s<= (sbb.d(eax_183, eax_183, eax_182 != 0) & 7) + 7)

return 0
