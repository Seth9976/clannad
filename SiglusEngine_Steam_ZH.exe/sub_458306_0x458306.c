// 函数: sub_458306
// 地址: 0x458306
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0x8876086c

int32_t edi
int32_t var_28_1 = edi
void*** eax_1 = sub_745f3f(0x130)
void*** edi_1

if (eax_1 == 0)
    edi_1 = nullptr
else
    edi_1 = sub_44cd0e(eax_1)

if (edi_1 != 0)
    char* esi_1 = arg1
    bool cond:1_1 = arg2 != *(esi_1 + 0xc)
    void* j_2
    int32_t* var_30_1 = &j_2
    j_2 = nullptr
    
    if (cond:1_1)
        int32_t* eax_50 = sub_457357(edi_1, arg2, *(esi_1 + 0x38), *(esi_1 + 0x28), var_30_1)
        arg2 = eax_50
        
        if (eax_50 s>= 0)
            int32_t* eax_51 = sub_443509(esi_1)
            arg2 = eax_51
            
            if (eax_51 s>= 0)
                sub_452ca1(edi_1)
            label_45862c:
                int32_t var_c_1 = 0
                void* var_8
                
                if (*(esi_1 + 0x98) u<= 0)
                label_4587e7:
                    bool cond:8_1 = *(esi_1 + 0xa0) u<= 0
                    j_2 = nullptr
                    
                    if (cond:8_1)
                    label_458a45:
                        *arg3 = edi_1
                        edi_1 = nullptr
                    else
                        int32_t var_c_2 = 0
                    label_4587ff:
                        void* eax_73 = *(esi_1 + 0xa4) + var_c_2
                        void* ecx_66 = edi_1[0x29] + var_c_2
                        void* edx_25 = *(eax_73 + 0x28) + *(esi_1 + 0x20)
                        char* var_14_2
                        
                        if (*edx_25 != 0)
                            var_14_2 = edx_25 + 4
                        else
                            var_14_2 = nullptr
                        
                        char* ecx_67 = *(ecx_66 + 0x30)
                        void* eax_74 = eax_73 + 0x30
                        char* ebx_9 = *eax_74
                        
                        while (true)
                            if (ecx_67 == 0)
                                arg1 = *eax_74
                                
                                while (true)
                                    if (ebx_9 == 0)
                                        int32_t var_14_3 = var_14_2 & ebx_9
                                        
                                        if (*(ecx_66 + 0x34) u<= ebx_9)
                                        label_458a29:
                                            j_2 += 1
                                            var_c_2 += 0xb4
                                            
                                            if (j_2 u< *(esi_1 + 0xa0))
                                                goto label_4587ff
                                            
                                            goto label_458a45
                                        
                                        var_8 &= ebx_9
                                    label_458920:
                                        void* eax_96 = *(eax_73 + 0x38) + var_8
                                        int32_t* edx_30 = *(eax_96 + 0x28) + *(esi_1 + 0x20)
                                        void* var_1c_1
                                        
                                        if (*edx_30 != 0)
                                            var_1c_1 = &edx_30[1]
                                        else
                                            var_1c_1 = nullptr
                                        
                                        char* ecx_79 = *(*(ecx_66 + 0x38) + var_8 + 0x30)
                                        char** eax_97 = eax_96 + 0x30
                                        char* ebx_11 = *eax_97
                                        
                                        while (true)
                                            if (ecx_79 == 0)
                                                arg1 = *eax_97
                                                
                                                while (true)
                                                    if (ebx_11 == 0)
                                                        var_14_3 += 1
                                                        var_8 += 0x38
                                                        
                                                        if (var_14_3 u< *(ecx_66 + 0x34))
                                                            goto label_458920
                                                        
                                                        goto label_458a29
                                                    
                                                    int32_t* eax_106 =
                                                        sub_443eee(esi_1, var_1c_1, ebx_11, edi_1)
                                                    arg2 = eax_106
                                                    
                                                    if (eax_106 s< 0)
                                                        break
                                                    
                                                    char* eax_108 = *(arg1 + 0x3c)
                                                    arg1 = eax_108
                                                    void* eax_110 = edi_1[0x2c][*(eax_108 + 0x14)]
                                                    int32_t edx_33
                                                    
                                                    if (*(eax_110 + 0x40) != 0)
                                                        edx_33 = edi_1[0xe][4]
                                                    else
                                                        edx_33 = edi_1[8]
                                                    
                                                    char* var_30_20 = esi_1
                                                    int32_t var_34_12 = *(ebx_11 + 0x40)
                                                    int32_t var_38_12 = *(arg1 + 0x40)
                                                    int32_t* eax_114 = sub_449be7(*(ebx_11 + 4), 
                                                        *(eax_110 + 0x30) + *(arg1 + 0x1c)
                                                            + edx_33, 
                                                        *ebx_11)
                                                    arg2 = eax_114
                                                    
                                                    if (eax_114 s< 0)
                                                        break
                                                    
                                                    ebx_11 = *(ebx_11 + 0x3c)
                                                
                                                break
                                            
                                            void* eax_99 = edi_1[0x2c][*(ecx_79 + 0x14)]
                                            int32_t edx_32
                                            
                                            if (*(eax_99 + 0x40) != 0)
                                                edx_32 = edi_1[0xe][4]
                                            else
                                                edx_32 = edi_1[8]
                                            
                                            char* var_30_18 = esi_1
                                            int32_t var_34_10 = *(ebx_11 + 0x40)
                                            int32_t var_38_10 = *(ecx_79 + 0x40)
                                            int32_t* eax_103 = sub_449be7(*(ebx_11 + 4), 
                                                *(eax_99 + 0x30) + *(ecx_79 + 0x1c) + edx_32, 
                                                *ebx_11)
                                            arg2 = eax_103
                                            
                                            if (eax_103 s< 0)
                                                break
                                            
                                            ebx_11 = *(ebx_11 + 0x3c)
                                            eax_97 = &ecx_79[0x3c]
                                            ecx_79 = *eax_97
                                        
                                        goto label_458a49
                                    
                                    int32_t* eax_83 = sub_443eee(esi_1, var_14_2, ebx_9, edi_1)
                                    arg2 = eax_83
                                    
                                    if (eax_83 s< 0)
                                        break
                                    
                                    char* eax_85 = *(arg1 + 0x3c)
                                    arg1 = eax_85
                                    void* eax_87 = edi_1[0x2c][*(eax_85 + 0x14)]
                                    int32_t edx_28
                                    
                                    if (*(eax_87 + 0x40) != 0)
                                        edx_28 = edi_1[0xe][4]
                                    else
                                        edx_28 = edi_1[8]
                                    
                                    char* var_30_17 = esi_1
                                    int32_t var_34_9 = *(ebx_9 + 0x40)
                                    int32_t var_38_9 = *(arg1 + 0x40)
                                    int32_t* eax_91 = sub_449be7(*(ebx_9 + 4), 
                                        *(eax_87 + 0x30) + *(arg1 + 0x1c) + edx_28, *ebx_9)
                                    arg2 = eax_91
                                    
                                    if (eax_91 s< 0)
                                        break
                                    
                                    ebx_9 = *(ebx_9 + 0x3c)
                                
                                break
                            
                            void* eax_76 = edi_1[0x2c][*(ecx_67 + 0x14)]
                            int32_t edx_27
                            
                            if (*(eax_76 + 0x40) != 0)
                                edx_27 = edi_1[0xe][4]
                            else
                                edx_27 = edi_1[8]
                            
                            char* var_30_15 = esi_1
                            int32_t var_34_7 = *(ebx_9 + 0x40)
                            int32_t var_38_7 = *(ecx_67 + 0x40)
                            int32_t* eax_80 = sub_449be7(*(ebx_9 + 4), 
                                *(eax_76 + 0x30) + *(ecx_67 + 0x1c) + edx_27, *ebx_9)
                            arg2 = eax_80
                            
                            if (eax_80 s< 0)
                                break
                            
                            ebx_9 = *(ebx_9 + 0x3c)
                            eax_74 = &ecx_67[0x3c]
                            ecx_67 = *eax_74
                else
                    var_8 = nullptr
                label_458647:
                    int32_t* ebx_7 = *(esi_1 + 0x9c) + var_8
                    char* eax_53 = edi_1[0x27] + var_8
                    void* j_3 = *(*(esi_1 + 0xb0) + (ebx_7[5] << 2))
                    bool cond:17_1 = *(j_3 + 0x40) != 0
                    arg1 = eax_53
                    j_2 = j_3
                    int32_t edx_15
                    
                    if (cond:17_1)
                        edx_15 = *(*(esi_1 + 0x38) + 0x10)
                    else
                        edx_15 = *(esi_1 + 0x20)
                    
                    int32_t* ecx_45 = *(ebx_7[1] + 8)
                    void* var_14_1
                    
                    if (*(ecx_45 + edx_15) != 0)
                        int32_t edx_17
                        
                        if (*(j_2 + 0x40) != 0)
                            edx_17 = *(*(esi_1 + 0x38) + 0x10)
                        else
                            edx_17 = *(esi_1 + 0x20)
                        
                        var_14_1 = ecx_45 + edx_17 + 4
                    else
                        var_14_1 = nullptr
                    
                    int32_t* i
                    
                    if ((*(j_2 + 0x28) & 2) != 0)
                        do
                            ebx_7 = ebx_7[0xf]
                            char* ecx_59 = arg1
                            char* eax_61 = *(arg1 + 0x3c)
                            arg1 = eax_61
                            
                            if (eax_61 == 0)
                                arg1 = ecx_59
                                
                                while (true)
                                    if (ebx_7 == 0)
                                        var_c_1 += 1
                                        var_8 += 0x50
                                        
                                        if (var_c_1 u< *(esi_1 + 0x98))
                                            goto label_458647
                                        
                                        goto label_4587e7
                                    
                                    int32_t* eax_62 = sub_443eee(esi_1, var_14_1, ebx_7, edi_1)
                                    arg2 = eax_62
                                    
                                    if (eax_62 s< 0)
                                        break
                                    
                                    char* eax_64 = *(arg1 + 0x3c)
                                    arg1 = eax_64
                                    void* eax_66 = edi_1[0x2c][*(eax_64 + 0x14)]
                                    int32_t edx_23
                                    
                                    if (*(eax_66 + 0x40) != 0)
                                        edx_23 = edi_1[0xe][4]
                                    else
                                        edx_23 = edi_1[8]
                                    
                                    char* var_30_14 = esi_1
                                    int32_t var_34_6 = ebx_7[0x10]
                                    int32_t var_38_6 = *(arg1 + 0x40)
                                    int32_t* eax_70 = sub_449be7(ebx_7[1], 
                                        *(eax_66 + 0x30) + *(arg1 + 0x1c) + edx_23, *ebx_7)
                                    arg2 = eax_70
                                    
                                    if (eax_70 s< 0)
                                        break
                                    
                                    ebx_7 = ebx_7[0xf]
                                
                                break
                            
                            void* eax_56 = edi_1[0x2c][*(eax_61 + 0x14)]
                            int32_t edx_22
                            
                            if (*(eax_56 + 0x40) != 0)
                                edx_22 = edi_1[0xe][4]
                            else
                                edx_22 = edi_1[8]
                            
                            char* var_30_12 = esi_1
                            int32_t var_34_4 = ebx_7[0x10]
                            int32_t var_38_4 = *(arg1 + 0x40)
                            i = sub_449be7(ebx_7[1], *(eax_56 + 0x30) + *(arg1 + 0x1c) + edx_22, 
                                *ebx_7)
                        label_458741:
                            arg2 = i
                        while (i s>= 0)
                    else
                        void* ecx_49 = edi_1[0x2c][*(eax_53 + 0x14)]
                        int32_t edx_20
                        
                        if (*(ecx_49 + 0x40) != 0)
                            edx_20 = edi_1[0xe][4]
                        else
                            edx_20 = edi_1[8]
                        
                        char* var_30_10 = esi_1
                        int32_t var_34_3 = ebx_7[0x10]
                        int32_t var_38_3 = *(eax_53 + 0x40)
                        int32_t* eax_54 = sub_449be7(ebx_7[1], 
                            *(ecx_49 + 0x30) + *(eax_53 + 0x1c) + edx_20, *ebx_7)
                        arg2 = eax_54
                        
                        if (eax_54 s>= 0)
                            i = sub_448129(edi_1, arg1)
                            goto label_458741
    else
        *(edi_1 + 0x119) |= 2
        int32_t* eax_4 = sub_457357(edi_1, arg2, *(esi_1 + 0x38), *(esi_1 + 0x28), var_30_1)
        arg2 = eax_4
        
        if (eax_4 s>= 0)
            *(edi_1 + 0x119) &= 0xfd
            int32_t* eax_5 = sub_443509(esi_1)
            arg2 = eax_5
            
            if (eax_5 s>= 0)
                *arg3 = 0
                int32_t i_1 = 0
                
                if (*(esi_1 + 0xa0) u> 0)
                    arg1 = nullptr
                    
                    do
                        int32_t ecx_5 = *(esi_1 + 0xa4)
                        
                        if (*(ecx_5 + arg1 + 0x88) != 0)
                            *(edi_1[0x29] + arg1 + 0x88) = *(ecx_5 + arg1 + 0x88)
                            int32_t* eax_8 = *(*(esi_1 + 0xa4) + arg1 + 0x88)
                            (*(*eax_8 + 4))(eax_8)
                        
                        void* ebx_2 = &arg1[0x8c]
                        j_2 = 2
                        void* j
                        
                        do
                            int32_t eax_9 = *(esi_1 + 0xa4)
                            
                            if (*(ebx_2 + eax_9) != 0)
                                *(ebx_2 + edi_1[0x29]) = *(ebx_2 + eax_9)
                                int32_t* eax_12 = *(ebx_2 + *(esi_1 + 0xa4))
                                (*(*eax_12 + 4))(eax_12)
                            
                            ebx_2 += 4
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        void* ebx_4 = &arg1[0x94]
                        j_2 = 2
                        void* j_1
                        
                        do
                            int32_t eax_13 = *(esi_1 + 0xa4)
                            
                            if (*(ebx_4 + eax_13) != 0)
                                *(ebx_4 + edi_1[0x29]) = *(ebx_4 + eax_13)
                                int32_t* eax_16 = *(ebx_4 + *(esi_1 + 0xa4))
                                (*(*eax_16 + 4))(eax_16)
                            
                            ebx_4 += 4
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        i_1 += 1
                        arg1 = &arg1[0xb4]
                    while (i_1 u< *(esi_1 + 0xa0))
                
                arg1 = nullptr
                
                if (*(esi_1 + 0x14) u> 0)
                    int32_t ebx_5 = 0
                    
                    do
                        int32_t* eax_19 = *(esi_1 + 0x18) + ebx_5
                        
                        if (*eax_19 == 0xf)
                            if (eax_19[1] != 0)
                                int32_t* eax_21 = *(ebx_5 + *(esi_1 + 0x18) + 4)
                                (*(*eax_21 + 4))(eax_21)
                            
                            int32_t* eax_23 = edi_1[6] + ebx_5 + 4
                            
                            if (*eax_23 != 0)
                                int32_t* eax_24 = *eax_23
                                (*(*eax_24 + 8))(eax_24)
                                *(edi_1[6] + ebx_5 + 4) = 0
                            
                            *(edi_1[6] + ebx_5 + 4) = *(ebx_5 + *(esi_1 + 0x18) + 4)
                            int32_t* eax_29 = edi_1[6] + ebx_5 + 0x14
                            *eax_29 ^=
                                (*(ebx_5 + *(esi_1 + 0x18) + 0x14) << 0x1e s>> 0x1e ^ *eax_29) & 2
                            int32_t* eax_31 = edi_1[6] + ebx_5 + 0x14
                            *eax_31 |= 1
                        
                        int32_t* eax_33 = *(esi_1 + 0x18) + ebx_5
                        
                        if (*eax_33 == 0x10)
                            if (eax_33[1] != 0)
                                int32_t* eax_35 = *(ebx_5 + *(esi_1 + 0x18) + 4)
                                (*(*eax_35 + 4))(eax_35)
                            
                            int32_t* eax_37 = edi_1[6] + ebx_5 + 4
                            
                            if (*eax_37 != 0)
                                int32_t* eax_38 = *eax_37
                                (*(*eax_38 + 8))(eax_38)
                                *(edi_1[6] + ebx_5 + 4) = 0
                            
                            *(edi_1[6] + ebx_5 + 4) = *(ebx_5 + *(esi_1 + 0x18) + 4)
                            int32_t* eax_43 = edi_1[6] + ebx_5 + 0x14
                            *eax_43 ^=
                                (*(ebx_5 + *(esi_1 + 0x18) + 0x14) << 0x1e s>> 0x1e ^ *eax_43) & 2
                            int32_t* eax_45 = edi_1[6] + ebx_5 + 0x14
                            *eax_45 |= 1
                        
                        arg1 = &arg1[1]
                        ebx_5 += 0x18
                    while (arg1 u< *(esi_1 + 0x14))
                
                edi_1[0x41] = *(esi_1 + 0x104)
                
                if (*(esi_1 + 0x104) != 0)
                    int32_t* eax_48 = *(esi_1 + 0x104)
                    (*(*eax_48 + 4))(eax_48)
                
                sub_452ca1(edi_1)
                void* eax_49 = nullptr
                int32_t i_2 = 0
                
                if (*(esi_1 + 0x14) u> 0)
                    do
                        int32_t* edx_2 = eax_49 + *(esi_1 + 0x18)
                        
                        if (*edx_2 == 0xf)
                            int32_t* ecx_36 = edi_1[6] + eax_49 + 0x14
                            *ecx_36 ^= (edx_2[5] << 0x1e s>> 0x1e ^ *ecx_36) & 2
                        
                        void* edx_8 = eax_49 + *(esi_1 + 0x18)
                        
                        if (*edx_8 == 0x10)
                            void* ecx_39 = edi_1[6] + eax_49 + 0x14
                            *ecx_39 ^= (*(edx_8 + 0x14) << 0x1e s>> 0x1e ^ *ecx_39) & 2
                        
                        i_2 += 1
                        eax_49 += 0x18
                    while (i_2 u< *(esi_1 + 0x14))
                
                goto label_45862c
    
label_458a49:
    
    if (edi_1 != 0)
        (*edi_1)[2](edi_1)
else
    arg2 = 0x8007000e

return arg2
