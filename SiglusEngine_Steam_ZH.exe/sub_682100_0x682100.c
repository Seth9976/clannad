// 函数: sub_682100
// 地址: 0x682100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_bac4d0
int32_t var_48 = &esi[3]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x24a2]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x4941]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x4fd0]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x5310]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x551a]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x567f]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x5a8b]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x5db7]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x5ec6]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x60e0]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x61ef]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x6329]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x64ec]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x66d3]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x6872]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x6f69]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x7197]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x72cb]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x74be]
sub_530ba0(esi, &var_48)
var_48 = &esi[0x76b1]
sub_530ba0(esi, &var_48)
char* eax_21 = data_bac4a0

if (*eax_21 != 0)
    var_48 = &esi[0x77b0]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7922]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7a05]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7b18]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7c38]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7d41]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7e4a]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x7f64]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x809c]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x81ba]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x82d1]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x84e1]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x83d9]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x85e9]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x86ee]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x8934]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x8b21]
    sub_530ba0(esi, &var_48)
    var_48 = &esi[0x8c29]
    sub_530ba0(esi, &var_48)
    int32_t i_1 = 0xd
    void* ebx_1 = &esi[0x99d2]
    int32_t i_2 = 0xd
    int32_t i
    
    do
        int32_t eax_40 = esi[1]
        void* var_8
        void** ecx_39 = &var_8
        var_8 = ebx_1
        
        if (&var_8 u< eax_40)
            ecx_39 = *esi
        
        if (&var_8 u>= eax_40 || ecx_39 u> &var_8)
            if (eax_40 == esi[2])
                void** var_5c_2 = ecx_39
                sub_530c10(esi)
                i_1 = i_2
            
            void** eax_43 = esi[1]
            
            if (eax_43 != 0)
                *eax_43 = ebx_1
        else
            int32_t edi_2 = (&var_8 - ecx_39) s>> 2
            
            if (eax_40 == esi[2])
                void** var_5c_1 = ecx_39
                sub_530c10(esi)
                i_1 = i_2
            
            ecx_39 = esi[1]
            
            if (ecx_39 != 0)
                *ecx_39 = *(*esi + (edi_2 << 2))
        
        esi[1] += 4
        ebx_1 += 0x430
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    void* ebx_2 = &esi[0xa76e]
    int32_t var_c_1 = 0
    var_48 = ebx_2
    
    while (true)
        int32_t ecx_43 = esi[1]
        void* var_10 = ebx_2
        int32_t eax_44
        
        if (&var_10 u< ecx_43)
            eax_44 = *esi
        
        if (&var_10 u>= ecx_43 || eax_44 u> &var_10)
            int32_t edx_5 = esi[2]
            
            if (ecx_43 != edx_5 || (edx_5 - ecx_43) s>> 2 u>= 1)
            label_68257e:
                void** eax_57 = esi[1]
                
                if (eax_57 != 0)
                    *eax_57 = ebx_2
                
            label_68258a:
                ebx_2 += 0x418
                esi[1] += 4
                int32_t eax_59 = var_c_1 + 1
                int32_t ecx_57 = esi[1]
                var_c_1 = eax_59
                var_48 = ebx_2
                
                if (eax_59 s< 0x14)
                    continue
                else
                    void* var_14 = &esi[0xbbe6]
                    int32_t eax_60
                    
                    if (&var_14 u< ecx_57)
                        eax_60 = *esi
                    
                    if (&var_14 u>= ecx_57 || eax_60 u> &var_14)
                        int32_t edx_13 = esi[2]
                        
                        if (ecx_57 == edx_13 && (edx_13 - ecx_57) s>> 2 u< 1)
                            int32_t ecx_66 = (ecx_57 - *esi) s>> 2
                            
                            if (0x3fffffff - ecx_66 u< 1)
                                sub_743191("vector<T> too long")
                                noreturn
                            
                            int32_t edx_15 = (edx_13 - *esi) s>> 2
                            uint32_t ecx_69 = edx_15 u>> 1
                            int32_t edx_16
                            
                            if (0x3fffffff - ecx_69 u>= edx_15)
                                edx_16 = edx_15 + ecx_69
                            else
                                edx_16 = 0
                            
                            if (edx_16 u< ecx_66 + 1)
                                edx_16 = ecx_66 + 1
                            
                            sub_530c80(esi, edx_16)
                        
                        void** eax_73 = esi[1]
                        
                        if (eax_73 != 0)
                            *eax_73 = &esi[0xbbe6]
                        
                        break
                    
                    int32_t edx_9 = esi[2]
                    
                    if (ecx_57 != edx_9 || (edx_9 - ecx_57) s>> 2 u>= 1)
                    label_682616:
                        int32_t* ecx_64 = esi[1]
                        
                        if (ecx_64 != 0)
                            *ecx_64 = *(*esi + ((&var_14 - eax_60) s>> 2 << 2))
                        
                        break
                    
                    int32_t ecx_59 = (ecx_57 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_59 u>= 1)
                        int32_t edx_11 = (edx_9 - *esi) s>> 2
                        uint32_t ecx_62 = edx_11 u>> 1
                        int32_t edx_12
                        
                        if (0x3fffffff - ecx_62 u>= edx_11)
                            edx_12 = edx_11 + ecx_62
                        else
                            edx_12 = 0
                        
                        if (edx_12 u< ecx_59 + 1)
                            edx_12 = ecx_59 + 1
                        
                        sub_530c80(esi, edx_12)
                        goto label_682616
            else
                int32_t ecx_52 = (ecx_43 - *esi) s>> 2
                
                if (0x3fffffff - ecx_52 u>= 1)
                    int32_t edx_7 = (edx_5 - *esi) s>> 2
                    uint32_t ecx_55 = edx_7 u>> 1
                    int32_t edx_8
                    
                    if (0x3fffffff - ecx_55 u>= edx_7)
                        edx_8 = edx_7 + ecx_55
                    else
                        edx_8 = 0
                    
                    if (edx_8 u< ecx_52 + 1)
                        edx_8 = ecx_52 + 1
                    
                    sub_530c80(esi, edx_8)
                    goto label_68257e
        else
            int32_t edx_1 = esi[2]
            
            if (ecx_43 != edx_1 || (edx_1 - ecx_43) s>> 2 u>= 1)
            label_68251c:
                int32_t* ecx_50 = esi[1]
                
                if (ecx_50 != 0)
                    *ecx_50 = *(*esi + ((&var_10 - eax_44) s>> 2 << 2))
                
                ebx_2 = var_48
                goto label_68258a
            
            int32_t ecx_45 = (ecx_43 - *esi) s>> 2
            
            if (0x3fffffff - ecx_45 u>= 1)
                int32_t edx_3 = (edx_1 - *esi) s>> 2
                uint32_t ecx_48 = edx_3 u>> 1
                int32_t edx_4
                
                if (0x3fffffff - ecx_48 u>= edx_3)
                    edx_4 = edx_3 + ecx_48
                else
                    edx_4 = 0
                
                if (edx_4 u< ecx_45 + 1)
                    edx_4 = ecx_45 + 1
                
                sub_530c80(esi, edx_4)
                goto label_68251c
        
    label_6830dc:
        sub_743191("vector<T> too long")
        noreturn
    
    esi[1] += 4
    int32_t ecx_71 = esi[1]
    void* var_18 = &esi[0xbcee]
    int32_t eax_74
    
    if (&var_18 u< ecx_71)
        eax_74 = *esi
    
    if (&var_18 u>= ecx_71 || eax_74 u> &var_18)
        int32_t edx_21 = esi[2]
        
        if (ecx_71 == edx_21 && (edx_21 - ecx_71) s>> 2 u< 1)
            int32_t ecx_80 = (ecx_71 - *esi) s>> 2
            
            if (0x3fffffff - ecx_80 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_23 = (edx_21 - *esi) s>> 2
            uint32_t ecx_83 = edx_23 u>> 1
            int32_t edx_24
            
            if (0x3fffffff - ecx_83 u>= edx_23)
                edx_24 = edx_23 + ecx_83
            else
                edx_24 = 0
            
            if (edx_24 u< ecx_80 + 1)
                edx_24 = ecx_80 + 1
            
            sub_530c80(esi, edx_24)
        
        void** eax_87 = esi[1]
        
        if (eax_87 != 0)
            *eax_87 = &esi[0xbcee]
    else
        int32_t edx_17 = esi[2]
        
        if (ecx_71 == edx_17 && (edx_17 - ecx_71) s>> 2 u< 1)
            int32_t ecx_73 = (ecx_71 - *esi) s>> 2
            
            if (0x3fffffff - ecx_73 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_19 = (edx_17 - *esi) s>> 2
            uint32_t ecx_76 = edx_19 u>> 1
            int32_t edx_20
            
            if (0x3fffffff - ecx_76 u>= edx_19)
                edx_20 = edx_19 + ecx_76
            else
                edx_20 = 0
            
            if (edx_20 u< ecx_73 + 1)
                edx_20 = ecx_73 + 1
            
            sub_530c80(esi, edx_20)
        
        int32_t* ecx_78 = esi[1]
        
        if (ecx_78 != 0)
            *ecx_78 = *(*esi + ((&var_18 - eax_74) s>> 2 << 2))
    
    esi[1] += 4
    int32_t ecx_85 = esi[1]
    void* var_1c = &esi[0xbdf6]
    int32_t eax_88
    
    if (&var_1c u< ecx_85)
        eax_88 = *esi
    
    if (&var_1c u>= ecx_85 || eax_88 u> &var_1c)
        int32_t edx_29 = esi[2]
        
        if (ecx_85 == edx_29 && (edx_29 - ecx_85) s>> 2 u< 1)
            int32_t ecx_94 = (ecx_85 - *esi) s>> 2
            
            if (0x3fffffff - ecx_94 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_31 = (edx_29 - *esi) s>> 2
            uint32_t ecx_97 = edx_31 u>> 1
            int32_t edx_32
            
            if (0x3fffffff - ecx_97 u>= edx_31)
                edx_32 = edx_31 + ecx_97
            else
                edx_32 = 0
            
            if (edx_32 u< ecx_94 + 1)
                edx_32 = ecx_94 + 1
            
            sub_530c80(esi, edx_32)
        
        void** eax_101 = esi[1]
        
        if (eax_101 != 0)
            *eax_101 = &esi[0xbdf6]
    else
        int32_t edx_25 = esi[2]
        
        if (ecx_85 == edx_25 && (edx_25 - ecx_85) s>> 2 u< 1)
            int32_t ecx_87 = (ecx_85 - *esi) s>> 2
            
            if (0x3fffffff - ecx_87 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_27 = (edx_25 - *esi) s>> 2
            uint32_t ecx_90 = edx_27 u>> 1
            int32_t edx_28
            
            if (0x3fffffff - ecx_90 u>= edx_27)
                edx_28 = edx_27 + ecx_90
            else
                edx_28 = 0
            
            if (edx_28 u< ecx_87 + 1)
                edx_28 = ecx_87 + 1
            
            sub_530c80(esi, edx_28)
        
        int32_t* ecx_92 = esi[1]
        
        if (ecx_92 != 0)
            *ecx_92 = *(*esi + ((&var_1c - eax_88) s>> 2 << 2))
    
    esi[1] += 4
    int32_t ecx_99 = esi[1]
    void* var_20 = &esi[0xbfeb]
    int32_t eax_102
    
    if (&var_20 u< ecx_99)
        eax_102 = *esi
    
    if (&var_20 u>= ecx_99 || eax_102 u> &var_20)
        int32_t edx_37 = esi[2]
        
        if (ecx_99 == edx_37 && (edx_37 - ecx_99) s>> 2 u< 1)
            int32_t ecx_108 = (ecx_99 - *esi) s>> 2
            
            if (0x3fffffff - ecx_108 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_39 = (edx_37 - *esi) s>> 2
            uint32_t ecx_111 = edx_39 u>> 1
            int32_t edx_40
            
            if (0x3fffffff - ecx_111 u>= edx_39)
                edx_40 = edx_39 + ecx_111
            else
                edx_40 = 0
            
            if (edx_40 u< ecx_108 + 1)
                edx_40 = ecx_108 + 1
            
            sub_530c80(esi, edx_40)
        
        void** eax_115 = esi[1]
        
        if (eax_115 != 0)
            *eax_115 = &esi[0xbfeb]
    else
        int32_t edx_33 = esi[2]
        
        if (ecx_99 == edx_33 && (edx_33 - ecx_99) s>> 2 u< 1)
            int32_t ecx_101 = (ecx_99 - *esi) s>> 2
            
            if (0x3fffffff - ecx_101 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_35 = (edx_33 - *esi) s>> 2
            uint32_t ecx_104 = edx_35 u>> 1
            int32_t edx_36
            
            if (0x3fffffff - ecx_104 u>= edx_35)
                edx_36 = edx_35 + ecx_104
            else
                edx_36 = 0
            
            if (edx_36 u< ecx_101 + 1)
                edx_36 = ecx_101 + 1
            
            sub_530c80(esi, edx_36)
        
        int32_t* ecx_106 = esi[1]
        
        if (ecx_106 != 0)
            *ecx_106 = *(*esi + ((&var_20 - eax_102) s>> 2 << 2))
    
    esi[1] += 4
    int32_t ecx_113 = esi[1]
    void* var_24 = &esi[0xc0f0]
    int32_t eax_116
    
    if (&var_24 u< ecx_113)
        eax_116 = *esi
    
    if (&var_24 u>= ecx_113 || eax_116 u> &var_24)
        int32_t edx_45 = esi[2]
        
        if (ecx_113 == edx_45 && (edx_45 - ecx_113) s>> 2 u< 1)
            int32_t ecx_122 = (ecx_113 - *esi) s>> 2
            
            if (0x3fffffff - ecx_122 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_47 = (edx_45 - *esi) s>> 2
            uint32_t ecx_125 = edx_47 u>> 1
            int32_t edx_48
            
            if (0x3fffffff - ecx_125 u>= edx_47)
                edx_48 = edx_47 + ecx_125
            else
                edx_48 = 0
            
            if (edx_48 u< ecx_122 + 1)
                edx_48 = ecx_122 + 1
            
            sub_530c80(esi, edx_48)
        
        void** eax_129 = esi[1]
        
        if (eax_129 != 0)
            *eax_129 = &esi[0xc0f0]
    else
        int32_t edx_41 = esi[2]
        
        if (ecx_113 == edx_41 && (edx_41 - ecx_113) s>> 2 u< 1)
            int32_t ecx_115 = (ecx_113 - *esi) s>> 2
            
            if (0x3fffffff - ecx_115 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_43 = (edx_41 - *esi) s>> 2
            uint32_t ecx_118 = edx_43 u>> 1
            int32_t edx_44
            
            if (0x3fffffff - ecx_118 u>= edx_43)
                edx_44 = edx_43 + ecx_118
            else
                edx_44 = 0
            
            if (edx_44 u< ecx_115 + 1)
                edx_44 = ecx_115 + 1
            
            sub_530c80(esi, edx_44)
        
        int32_t* ecx_120 = esi[1]
        
        if (ecx_120 != 0)
            *ecx_120 = *(*esi + ((&var_24 - eax_116) s>> 2 << 2))
    
    esi[1] += 4
    int32_t ecx_127 = esi[1]
    void* var_28 = &esi[0xc1fb]
    int32_t eax_130
    
    if (&var_28 u< ecx_127)
        eax_130 = *esi
    
    if (&var_28 u>= ecx_127 || eax_130 u> &var_28)
        int32_t edx_53 = esi[2]
        
        if (ecx_127 == edx_53 && (edx_53 - ecx_127) s>> 2 u< 1)
            int32_t ecx_136 = (ecx_127 - *esi) s>> 2
            
            if (0x3fffffff - ecx_136 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_55 = (edx_53 - *esi) s>> 2
            uint32_t ecx_139 = edx_55 u>> 1
            int32_t edx_56
            
            if (0x3fffffff - ecx_139 u>= edx_55)
                edx_56 = edx_55 + ecx_139
            else
                edx_56 = 0
            
            if (edx_56 u< ecx_136 + 1)
                edx_56 = ecx_136 + 1
            
            sub_530c80(esi, edx_56)
        
        void** eax_143 = esi[1]
        
        if (eax_143 != 0)
            *eax_143 = &esi[0xc1fb]
    else
        int32_t edx_49 = esi[2]
        
        if (ecx_127 == edx_49 && (edx_49 - ecx_127) s>> 2 u< 1)
            int32_t ecx_129 = (ecx_127 - *esi) s>> 2
            
            if (0x3fffffff - ecx_129 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_51 = (edx_49 - *esi) s>> 2
            uint32_t ecx_132 = edx_51 u>> 1
            int32_t edx_52
            
            if (0x3fffffff - ecx_132 u>= edx_51)
                edx_52 = edx_51 + ecx_132
            else
                edx_52 = 0
            
            if (edx_52 u< ecx_129 + 1)
                edx_52 = ecx_129 + 1
            
            sub_530c80(esi, edx_52)
        
        int32_t* ecx_134 = esi[1]
        
        if (ecx_134 != 0)
            *ecx_134 = *(*esi + ((&var_28 - eax_130) s>> 2 << 2))
    
    esi[1] += 4
    int32_t ecx_141 = esi[1]
    void* var_2c = &esi[0xc300]
    int32_t eax_144
    
    if (&var_2c u< ecx_141)
        eax_144 = *esi
    
    if (&var_2c u>= ecx_141 || eax_144 u> &var_2c)
        int32_t edx_61 = esi[2]
        
        if (ecx_141 == edx_61 && (edx_61 - ecx_141) s>> 2 u< 1)
            int32_t ecx_150 = (ecx_141 - *esi) s>> 2
            
            if (0x3fffffff - ecx_150 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_63 = (edx_61 - *esi) s>> 2
            uint32_t ecx_153 = edx_63 u>> 1
            int32_t edx_64
            
            if (0x3fffffff - ecx_153 u>= edx_63)
                edx_64 = edx_63 + ecx_153
            else
                edx_64 = 0
            
            if (edx_64 u< ecx_150 + 1)
                edx_64 = ecx_150 + 1
            
            sub_530c80(esi, edx_64)
        
        void** eax_157 = esi[1]
        
        if (eax_157 != 0)
            *eax_157 = &esi[0xc300]
    else
        int32_t edx_57 = esi[2]
        
        if (ecx_141 == edx_57 && (edx_57 - ecx_141) s>> 2 u< 1)
            int32_t ecx_143 = (ecx_141 - *esi) s>> 2
            
            if (0x3fffffff - ecx_143 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_59 = (edx_57 - *esi) s>> 2
            uint32_t ecx_146 = edx_59 u>> 1
            int32_t edx_60
            
            if (0x3fffffff - ecx_146 u>= edx_59)
                edx_60 = edx_59 + ecx_146
            else
                edx_60 = 0
            
            if (edx_60 u< ecx_143 + 1)
                edx_60 = ecx_143 + 1
            
            sub_530c80(esi, edx_60)
        
        int32_t* ecx_148 = esi[1]
        
        if (ecx_148 != 0)
            *ecx_148 = *(*esi + ((&var_2c - eax_144) s>> 2 << 2))
    
    esi[1] += 4
    void* ebx_26 = &esi[0xc405]
    var_48 = 0
    void* var_c_2 = ebx_26
    
    while (true)
        int32_t ecx_155 = esi[1]
        void* var_30 = ebx_26
        int32_t eax_158
        
        if (&var_30 u< ecx_155)
            eax_158 = *esi
        
        if (&var_30 u>= ecx_155 || eax_158 u> &var_30)
            int32_t edx_69 = esi[2]
            
            if (ecx_155 == edx_69 && (edx_69 - ecx_155) s>> 2 u< 1)
                int32_t ecx_164 = (ecx_155 - *esi) s>> 2
                
                if (0x3fffffff - ecx_164 u< 1)
                    goto label_6830dc
                
                int32_t edx_71 = (edx_69 - *esi) s>> 2
                uint32_t ecx_167 = edx_71 u>> 1
                int32_t edx_72
                
                if (0x3fffffff - ecx_167 u>= edx_71)
                    edx_72 = edx_71 + ecx_167
                else
                    edx_72 = 0
                
                if (edx_72 u< ecx_164 + 1)
                    edx_72 = ecx_164 + 1
                
                sub_530c80(esi, edx_72)
            
            void** eax_171 = esi[1]
            
            if (eax_171 != 0)
                *eax_171 = ebx_26
        else
            int32_t edx_65 = esi[2]
            
            if (ecx_155 == edx_65 && (edx_65 - ecx_155) s>> 2 u< 1)
                int32_t ecx_157 = (ecx_155 - *esi) s>> 2
                
                if (0x3fffffff - ecx_157 u< 1)
                    goto label_6830dc
                
                int32_t edx_67 = (edx_65 - *esi) s>> 2
                uint32_t ecx_160 = edx_67 u>> 1
                int32_t edx_68
                
                if (0x3fffffff - ecx_160 u>= edx_67)
                    edx_68 = edx_67 + ecx_160
                else
                    edx_68 = 0
                
                if (edx_68 u< ecx_157 + 1)
                    edx_68 = ecx_157 + 1
                
                sub_530c80(esi, edx_68)
            
            int32_t* ecx_162 = esi[1]
            
            if (ecx_162 != 0)
                *ecx_162 = *(*esi + ((&var_30 - eax_158) s>> 2 << 2))
            
            ebx_26 = var_c_2
        
        int32_t eax_172 = var_48
        ebx_26 += 0x418
        esi[1] += 4
        int32_t ecx_169 = esi[1]
        var_48 = eax_172 + 1
        var_c_2 = ebx_26
        
        if (eax_172 + 1 s>= 6)
            void* var_34 = &esi[0xca29]
            int32_t eax_174
            
            if (&var_34 u< ecx_169)
                eax_174 = *esi
            
            if (&var_34 u>= ecx_169 || eax_174 u> &var_34)
                int32_t edx_77 = esi[2]
                
                if (ecx_169 == edx_77 && (edx_77 - ecx_169) s>> 2 u< 1)
                    int32_t ecx_178 = (ecx_169 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_178 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_79 = (edx_77 - *esi) s>> 2
                    uint32_t ecx_181 = edx_79 u>> 1
                    int32_t edx_80
                    
                    if (0x3fffffff - ecx_181 u>= edx_79)
                        edx_80 = edx_79 + ecx_181
                    else
                        edx_80 = 0
                    
                    if (edx_80 u< ecx_178 + 1)
                        edx_80 = ecx_178 + 1
                    
                    sub_530c80(esi, edx_80)
                
                void** eax_187 = esi[1]
                
                if (eax_187 != 0)
                    *eax_187 = &esi[0xca29]
            else
                int32_t edx_73 = esi[2]
                
                if (ecx_169 == edx_73 && (edx_73 - ecx_169) s>> 2 u< 1)
                    int32_t ecx_171 = (ecx_169 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_171 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_75 = (edx_73 - *esi) s>> 2
                    uint32_t ecx_174 = edx_75 u>> 1
                    int32_t edx_76
                    
                    if (0x3fffffff - ecx_174 u>= edx_75)
                        edx_76 = edx_75 + ecx_174
                    else
                        edx_76 = 0
                    
                    if (edx_76 u< ecx_171 + 1)
                        edx_76 = ecx_171 + 1
                    
                    sub_530c80(esi, edx_76)
                
                int32_t* ecx_176 = esi[1]
                
                if (ecx_176 != 0)
                    *ecx_176 = *(*esi + ((&var_34 - eax_174) s>> 2 << 2))
            
            esi[1] += 4
            int32_t ecx_183 = esi[1]
            void* var_38 = &esi[0xcc1e]
            int32_t eax_188
            
            if (&var_38 u< ecx_183)
                eax_188 = *esi
            
            if (&var_38 u>= ecx_183 || eax_188 u> &var_38)
                int32_t edx_85 = esi[2]
                
                if (ecx_183 == edx_85 && (edx_85 - ecx_183) s>> 2 u< 1)
                    int32_t ecx_192 = (ecx_183 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_192 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_87 = (edx_85 - *esi) s>> 2
                    uint32_t ecx_195 = edx_87 u>> 1
                    int32_t edx_88
                    
                    if (0x3fffffff - ecx_195 u>= edx_87)
                        edx_88 = edx_87 + ecx_195
                    else
                        edx_88 = 0
                    
                    if (edx_88 u< ecx_192 + 1)
                        edx_88 = ecx_192 + 1
                    
                    sub_530c80(esi, edx_88)
                
                void** eax_201 = esi[1]
                
                if (eax_201 != 0)
                    *eax_201 = &esi[0xcc1e]
            else
                int32_t edx_81 = esi[2]
                
                if (ecx_183 == edx_81 && (edx_81 - ecx_183) s>> 2 u< 1)
                    int32_t ecx_185 = (ecx_183 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_185 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_83 = (edx_81 - *esi) s>> 2
                    uint32_t ecx_188 = edx_83 u>> 1
                    int32_t edx_84
                    
                    if (0x3fffffff - ecx_188 u>= edx_83)
                        edx_84 = edx_83 + ecx_188
                    else
                        edx_84 = 0
                    
                    if (edx_84 u< ecx_185 + 1)
                        edx_84 = ecx_185 + 1
                    
                    sub_530c80(esi, edx_84)
                
                int32_t* ecx_190 = esi[1]
                
                if (ecx_190 != 0)
                    *ecx_190 = *(*esi + ((&var_38 - eax_188) s>> 2 << 2))
            
            esi[1] += 4
            int32_t ecx_197 = esi[1]
            void* var_3c = &esi[0xcd26]
            int32_t eax_202
            
            if (&var_3c u< ecx_197)
                eax_202 = *esi
            
            if (&var_3c u>= ecx_197 || eax_202 u> &var_3c)
                int32_t edx_93 = esi[2]
                
                if (ecx_197 == edx_93 && (edx_93 - ecx_197) s>> 2 u< 1)
                    int32_t ecx_206 = (ecx_197 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_206 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_95 = (edx_93 - *esi) s>> 2
                    uint32_t ecx_209 = edx_95 u>> 1
                    int32_t edx_96
                    
                    if (0x3fffffff - ecx_209 u>= edx_95)
                        edx_96 = edx_95 + ecx_209
                    else
                        edx_96 = 0
                    
                    if (edx_96 u< ecx_206 + 1)
                        edx_96 = ecx_206 + 1
                    
                    sub_530c80(esi, edx_96)
                
                void** eax_215 = esi[1]
                
                if (eax_215 != 0)
                    *eax_215 = &esi[0xcd26]
            else
                int32_t edx_89 = esi[2]
                
                if (ecx_197 == edx_89 && (edx_89 - ecx_197) s>> 2 u< 1)
                    int32_t ecx_199 = (ecx_197 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_199 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_91 = (edx_89 - *esi) s>> 2
                    uint32_t ecx_202 = edx_91 u>> 1
                    int32_t edx_92
                    
                    if (0x3fffffff - ecx_202 u>= edx_91)
                        edx_92 = edx_91 + ecx_202
                    else
                        edx_92 = 0
                    
                    if (edx_92 u< ecx_199 + 1)
                        edx_92 = ecx_199 + 1
                    
                    sub_530c80(esi, edx_92)
                
                int32_t* ecx_204 = esi[1]
                
                if (ecx_204 != 0)
                    *ecx_204 = *(*esi + ((&var_3c - eax_202) s>> 2 << 2))
            
            esi[1] += 4
            int32_t* ecx_211 = esi[1]
            void* var_40 = &esi[0xce2e]
            int32_t eax_216
            
            if (&var_40 u< ecx_211)
                eax_216 = *esi
            
            if (&var_40 u>= ecx_211 || eax_216 u> &var_40)
                int32_t edx_101 = esi[2]
                
                if (ecx_211 == edx_101 && (edx_101 - ecx_211) s>> 2 u< 1)
                    int32_t ecx_219 = (ecx_211 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_219 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_103 = (edx_101 - *esi) s>> 2
                    uint32_t ecx_222 = edx_103 u>> 1
                    int32_t edx_104
                    
                    if (0x3fffffff - ecx_222 u>= edx_103)
                        edx_104 = edx_103 + ecx_222
                    else
                        edx_104 = 0
                    
                    if (edx_104 u< ecx_219 + 1)
                        edx_104 = ecx_219 + 1
                    
                    ecx_211 = sub_530c80(esi, edx_104)
                
                void** eax_229 = esi[1]
                
                if (eax_229 != 0)
                    *eax_229 = &esi[0xce2e]
            else
                int32_t edx_97 = esi[2]
                
                if (ecx_211 == edx_97 && (edx_97 - ecx_211) s>> 2 u< 1)
                    int32_t ecx_213 = (ecx_211 - *esi) s>> 2
                    
                    if (0x3fffffff - ecx_213 u< 1)
                        sub_743191("vector<T> too long")
                        noreturn
                    
                    int32_t edx_99 = (edx_97 - *esi) s>> 2
                    uint32_t ecx_216 = edx_99 u>> 1
                    int32_t edx_100
                    
                    if (0x3fffffff - ecx_216 u>= edx_99)
                        edx_100 = edx_99 + ecx_216
                    else
                        edx_100 = 0
                    
                    if (edx_100 u< ecx_213 + 1)
                        edx_100 = ecx_213 + 1
                    
                    sub_530c80(esi, edx_100)
                
                ecx_211 = esi[1]
                
                if (ecx_211 != 0)
                    *ecx_211 = *(*esi + ((&var_40 - eax_216) s>> 2 << 2))
            
            esi[1] += 4
            int32_t edx_105 = esi[1]
            void* var_44 = &esi[0xcf9f]
            
            if (&var_44 u< edx_105)
                eax_21 = *esi
                ecx_211 = &var_44
            
            if (&var_44 u>= edx_105 || eax_21 u> &var_44)
                if (edx_105 == esi[2])
                    int32_t* var_5c_30 = ecx_211
                    sub_530c10(esi)
                
                eax_21 = esi[1]
                
                if (eax_21 != 0)
                    *eax_21 = &esi[0xcf9f]
            else
                int32_t ecx_224 = esi[2]
                int32_t ebx_43 = (&var_44 - eax_21) s>> 2
                
                if (edx_105 == ecx_224)
                    eax_21 = (ecx_224 - edx_105) s>> 2
                    
                    if (eax_21 u< 1)
                        int32_t edx_107 = (edx_105 - *esi) s>> 2
                        
                        if (0x3fffffff - edx_107 u< 1)
                            sub_743191("vector<T> too long")
                            noreturn
                        
                        int32_t ecx_226 = (ecx_224 - *esi) s>> 2
                        uint32_t eax_234 = ecx_226 u>> 1
                        int32_t ecx_227
                        
                        if (0x3fffffff - eax_234 u>= ecx_226)
                            ecx_227 = ecx_226 + eax_234
                        else
                            ecx_227 = 0
                        
                        if (ecx_227 u< edx_107 + 1)
                            ecx_227 = edx_107 + 1
                        
                        eax_21 = sub_530c80(esi, ecx_227)
                
                int32_t* ecx_229 = esi[1]
                
                if (ecx_229 != 0)
                    int32_t eax_236 = *(*esi + (ebx_43 << 2))
                    *ecx_229 = eax_236
                    esi[1] += 4
                    return eax_236
            
            esi[1] += 4
            break

return eax_21
