// 函数: sub_6579f0
// 地址: 0x6579f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c49d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_bac504
int32_t result

if (*arg1 != arg1[1])
    arg1[3] = 0
    
    if (arg2 s>= 2)
    label_657b03:
        int32_t* eax_16 = *arg1
        
        if (eax_16 == arg1[1])
            eax_16 = nullptr
        
        *(ebx + 0x4a8b0) = *eax_16
        arg1[3] += 4
        int32_t* eax_18 = *arg1
        
        if (eax_18 == arg1[1])
            eax_18 = nullptr
        
        *(ebx + 0x4a8b4) = *(eax_18 + arg1[3])
        arg1[3] += 4
        int32_t* ecx_10 = *arg1
        int32_t edx_2 = arg1[3]
        
        if (ecx_10 == arg1[1])
            ecx_10 = nullptr
        
        *(ebx + 0x4a8b8) = *(ecx_10 + edx_2)
        *(ebx + 0x4a8bc) = *(ecx_10 + edx_2 + 4)
        arg1[3] += 8
        int32_t* ecx_11 = *arg1
        int32_t edx_3 = arg1[3]
        
        if (ecx_11 == arg1[1])
            ecx_11 = nullptr
        
        *(ebx + 0x4a8c0) = *(ecx_11 + edx_3)
        *(ebx + 0x4a8c4) = *(ecx_11 + edx_3 + 4)
        arg1[3] += 8
    else if (arg2 != 1)
    label_657ac7:
        int32_t* ecx_7 = *arg1
        
        if (ecx_7 == arg1[1])
            ecx_7 = nullptr
        
        *(ebx + 0x4a8b0) = *(ecx_7 + arg1[3])
        arg1[3] += 4
        int32_t* ecx_8 = *arg1
        int32_t edx_1 = arg1[3]
        
        if (ecx_8 == arg1[1])
            ecx_8 = nullptr
        
        *(ebx + 0x4a8b8) = *(ecx_8 + edx_1)
        *(ebx + 0x4a8bc) = *(ecx_8 + edx_1 + 4)
        arg1[3] += 8
    else
        if (arg3 s>= 3)
            goto label_657b03
        
        if (arg3 != 2)
            goto label_657ac7
        
        if (sub_5ccf10(data_bac510 + 4, u"planetarian [HD Edition]") == 0)
            goto label_657ac7
        
        int32_t* ecx_3 = *arg1
        
        if (ecx_3 == arg1[1])
            ecx_3 = nullptr
        
        *(ebx + 0x4a8b0) = *(ecx_3 + arg1[3])
        arg1[3] += 4
        int32_t* eax_8 = *arg1
        
        if (eax_8 == arg1[1])
            eax_8 = nullptr
        
        *(ebx + 0x4a8b4) = *(eax_8 + arg1[3])
        arg1[3] += 4
        sub_5e1e90(arg1, ebx + 0x4a8b8)
        sub_5e1e90(arg1, ebx + 0x4a8c0)
    
    char* ecx_12 = *arg1
    
    if (ecx_12 == arg1[1])
        ecx_12 = nullptr
    
    int32_t eax_24
    eax_24.b = ecx_12[arg1[3]]
    *(ebx + 0x4a8c8) = eax_24.b
    arg1[3] += 1
    int32_t eax_25 = *arg1
    
    if (eax_25 == arg1[1])
        eax_25 = 0
    
    *(ebx + 0x4a8cc) = *(arg1[3] + eax_25)
    arg1[3] += 4
    int32_t eax_27 = *arg1
    
    if (eax_27 == arg1[1])
        eax_27 = 0
    
    *(ebx + 0x4a8d0) = *(arg1[3] + eax_27)
    arg1[3] += 4
    int32_t eax_29 = *arg1
    
    if (eax_29 == arg1[1])
        eax_29 = 0
    
    *(ebx + 0x4a8d4) = *(arg1[3] + eax_29)
    arg1[3] += 4
    int32_t eax_31 = *arg1
    
    if (eax_31 == arg1[1])
        eax_31 = 0
    
    *(ebx + 0x4a8d8) = *(arg1[3] + eax_31)
    arg1[3] += 4
    int32_t* edx_4 = arg1[3]
    int32_t ecx_17 = *arg1
    
    if (ecx_17 == arg1[1])
        ecx_17 = 0
    
    *(ebx + 0x4a8dc) = *(edx_4 + ecx_17)
    *(ebx + 0x4a8e0) = *(edx_4 + ecx_17 + 4)
    arg1[3] += 8
    int32_t eax_35 = *arg1
    
    if (eax_35 == arg1[1])
        eax_35 = 0
    
    *(ebx + 0x4a900) = *(arg1[3] + eax_35)
    arg1[3] += 4
    int32_t* ecx_19 = *arg1
    int32_t edx_5 = arg1[3]
    
    if (ecx_19 == arg1[1])
        ecx_19 = nullptr
    
    *(ebx + 0x4a904) = *(ecx_19 + edx_5)
    *(ebx + 0x4a908) = *(ecx_19 + edx_5 + 4)
    arg1[3] += 8
    char* eax_39 = *arg1
    
    if (eax_39 == arg1[1])
        eax_39 = nullptr
    
    eax_39.b = eax_39[arg1[3]]
    *(ebx + 0x4a90c) = eax_39.b
    arg1[3] += 1
    int32_t* ecx_21 = *arg1
    int32_t edx_6 = arg1[3]
    
    if (ecx_21 == arg1[1])
        ecx_21 = nullptr
    
    *(ebx + 0x4a910) = *(ecx_21 + edx_6)
    *(ebx + 0x4a914) = *(ecx_21 + edx_6 + 4)
    arg1[3] += 8
    int32_t i_5 = 0x20
    int32_t* eax_42 = *arg1
    
    if (eax_42 == arg1[1])
        eax_42 = nullptr
    
    *(ebx + 0x4a918) = *(eax_42 + arg1[3])
    arg1[3] += 4
    int32_t edx_7 = arg1[3]
    void* ecx_24 = ebx + 0x4a91c
    int32_t i
    
    do
        int32_t* eax_44 = *arg1
        ecx_24 += 4
        
        if (eax_44 == arg1[1])
            eax_44 = nullptr
        
        *(ecx_24 - 4) = *(eax_44 + edx_7)
        arg1[3] += 4
        edx_7 = arg1[3]
        i = i_5
        i_5 -= 1
    while (i != 1)
    char* eax_46 = *arg1
    int32_t i_1 = 0
    
    if (eax_46 == arg1[1])
        eax_46 = nullptr
    
    eax_46.b = eax_46[edx_7]
    *(ebx + 0x4a99c) = eax_46.b
    arg1[3] += 1
    int32_t edx_8 = arg1[3]
    
    do
        char* eax_47 = *arg1
        
        if (eax_47 == arg1[1])
            eax_47 = nullptr
        
        eax_47.b = eax_47[edx_8]
        *(ebx + i_1 + 0x4a99d) = eax_47.b
        i_1 += 1
        arg1[3] += 1
        edx_8 = arg1[3]
    while (i_1 s< 0x20)
    
    int32_t* eax_48 = *arg1
    
    if (eax_48 == arg1[1])
        eax_48 = nullptr
    
    *(ebx + 0x4a9c0) = *(eax_48 + edx_8)
    arg1[3] += 4
    char* eax_50 = *arg1
    
    if (eax_50 == arg1[1])
        eax_50 = nullptr
    
    eax_50.b = eax_50[arg1[3]]
    *(ebx + 0x4a9c4) = eax_50.b
    arg1[3] += 1
    int32_t* eax_51 = *arg1
    
    if (eax_51 == arg1[1])
        eax_51 = nullptr
    
    *(ebx + 0x4a9c5) = *(eax_51 + arg1[3])
    arg1[3] += 4
    char* eax_53 = *arg1
    
    if (eax_53 == arg1[1])
        eax_53 = nullptr
    
    eax_53.b = eax_53[arg1[3]]
    *(ebx + 0x4a9c9) = eax_53.b
    arg1[3] += 1
    int32_t var_30
    int16_t* eax_54 = sub_5b0600(arg1, &var_30)
    int32_t var_8_1 = 0
    
    if (ebx + 0x4a9cc != eax_54)
        sub_52e3c0(ebx + 0x4a9cc, eax_54, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    int32_t* ecx_30 = *arg1
    
    if (ecx_30 == arg1[1])
        ecx_30 = nullptr
    
    *(ebx + 0x4a9e8) = *(ecx_30 + arg1[3])
    arg1[3] += 4
    int32_t eax_57 = *arg1
    
    if (eax_57 == arg1[1])
        eax_57 = 0
    
    eax_57.b = arg1[3][eax_57]
    *(ebx + 0x4a9e4) = eax_57.b
    arg1[3] += 1
    int32_t eax_58 = *arg1
    
    if (eax_58 == arg1[1])
        eax_58 = 0
    
    *(ebx + 0x4a9ec) = *(arg1[3] + eax_58)
    arg1[3] += 4
    char* eax_60 = *arg1
    
    if (eax_60 == arg1[1])
        eax_60 = nullptr
    
    eax_60.b = eax_60[arg1[3]]
    *(ebx + 0x4a9f0) = eax_60.b
    arg1[3] += 1
    char* eax_61 = *arg1
    
    if (eax_61 == arg1[1])
        eax_61 = nullptr
    
    eax_61.b = eax_61[arg1[3]]
    *(ebx + 0x4a9f1) = eax_61.b
    arg1[3] += 1
    int32_t* eax_62 = *arg1
    
    if (eax_62 == arg1[1])
        eax_62 = nullptr
    
    *(ebx + 0x4a9f4) = *(eax_62 + arg1[3])
    arg1[3] += 4
    int32_t* eax_64 = *arg1
    
    if (eax_64 == arg1[1])
        eax_64 = nullptr
    
    *(ebx + 0x4a9f8) = *(eax_64 + arg1[3])
    arg1[3] += 4
    char* eax_66 = *arg1
    
    if (eax_66 == arg1[1])
        eax_66 = nullptr
    
    eax_66.b = eax_66[arg1[3]]
    *(ebx + 0x4a9fc) = eax_66.b
    arg1[3] += 1
    int32_t* eax_67 = *arg1
    
    if (eax_67 == arg1[1])
        eax_67 = nullptr
    
    *(ebx + 0x4aa00) = *(eax_67 + arg1[3])
    arg1[3] += 4
    char* eax_69 = *arg1
    
    if (eax_69 == arg1[1])
        eax_69 = nullptr
    
    eax_69.b = eax_69[arg1[3]]
    *(ebx + 0x4aa04) = eax_69.b
    arg1[3] += 1
    char* eax_70 = *arg1
    
    if (eax_70 == arg1[1])
        eax_70 = nullptr
    
    eax_70.b = eax_70[arg1[3]]
    *(ebx + 0x4aa05) = eax_70.b
    arg1[3] += 1
    char* eax_71 = *arg1
    
    if (eax_71 == arg1[1])
        eax_71 = nullptr
    
    eax_71.b = eax_71[arg1[3]]
    *(ebx + 0x4aa06) = eax_71.b
    arg1[3] += 1
    int32_t* eax_72 = *arg1
    
    if (eax_72 == arg1[1])
        eax_72 = nullptr
    
    *(ebx + 0x4aa08) = *(eax_72 + arg1[3])
    arg1[3] += 4
    int32_t* eax_74 = *arg1
    
    if (eax_74 == arg1[1])
        eax_74 = nullptr
    
    *(ebx + 0x4aa0c) = *(eax_74 + arg1[3])
    int32_t eax_76 = *arg1
    int32_t ecx_45 = arg1[3] + 8
    bool cond:13_1 = eax_76 == arg1[1]
    arg1[3] = ecx_45
    
    if (cond:13_1)
        eax_76 = 0
    
    sub_5382a0(ebx + 0x4aa10, *(eax_76 + ecx_45 - 4))
    int32_t* edx_9 = *(ebx + 0x4aa10)
    
    if (edx_9 == *(ebx + 0x4aa14))
        edx_9 = nullptr
    
    void* eax_79 = (*(ebx + 0x4aa14) - *(ebx + 0x4aa10)) & 0xfffffff8
    
    if (eax_79 s> 0)
        int32_t ecx_47 = *arg1
        
        if (ecx_47 == arg1[1])
            ecx_47 = 0
        
        sub_748840(edx_9, arg1[3] + ecx_47, eax_79, eax_2)
        arg1[3] += eax_79
    
    char* ecx_48 = *arg1
    
    if (ecx_48 == arg1[1])
        ecx_48 = nullptr
    
    int32_t eax_83
    eax_83.b = ecx_48[arg1[3]]
    *(ebx + 0x4aa1c) = eax_83.b
    int32_t eax_84 = *arg1
    int32_t ecx_50 = arg1[3] + 5
    bool cond:15_1 = eax_84 == arg1[1]
    arg1[3] = ecx_50
    
    if (cond:15_1)
        eax_84 = 0
    
    sub_60ce30(ebx + 0x4aa20, *(ecx_50 + eax_84 - 4))
    char* i_2 = nullptr
    
    if (*(ebx + 0x4aa24) - *(ebx + 0x4aa20) s> 0)
        do
            int32_t ecx_52 = *arg1
            
            if (ecx_52 == arg1[1])
                ecx_52 = 0
            
            char* eax_87 = arg1[3]
            ecx_52.b = eax_87[ecx_52]
            arg1[3] = &eax_87[1]
            i_2[*(ebx + 0x4aa20)] = ecx_52.b
            i_2 = &i_2[1]
        while (i_2 s< *(ebx + 0x4aa24) - *(ebx + 0x4aa20))
    
    arg1[3] += 4
    int32_t eax_92 = *arg1
    
    if (eax_92 == arg1[1])
        eax_92 = 0
    
    sub_60ce30(ebx + 0x4aa2c, *(arg1[3] + eax_92 - 4))
    char* i_3 = nullptr
    
    if (*(ebx + 0x4aa30) - *(ebx + 0x4aa2c) s> 0)
        do
            int32_t ecx_55 = *arg1
            
            if (ecx_55 == arg1[1])
                ecx_55 = 0
            
            char* eax_95 = arg1[3]
            ecx_55.b = eax_95[ecx_55]
            arg1[3] = &eax_95[1]
            i_3[*(ebx + 0x4aa2c)] = ecx_55.b
            i_3 = &i_3[1]
        while (i_3 s< *(ebx + 0x4aa30) - *(ebx + 0x4aa2c))
    
    arg1[3] += 4
    int32_t eax_100 = *arg1
    
    if (eax_100 == arg1[1])
        eax_100 = 0
    
    sub_55c6f0(ebx + 0x4aa38, *(eax_100 + arg1[3] - 4))
    int32_t i_4 = 0
    
    if (((*(ebx + 0x4aa3c) - *(ebx + 0x4aa38)) & 0xfffffffc) s> 0)
        do
            int32_t* ecx_58 = *arg1
            
            if (ecx_58 == arg1[1])
                ecx_58 = nullptr
            
            int32_t eax_103 = arg1[3]
            int32_t ecx_59 = *(ecx_58 + eax_103)
            arg1[3] = eax_103 + 4
            *(*(ebx + 0x4aa38) + (i_4 << 2)) = ecx_59
            i_4 += 1
        while (i_4 s< (*(ebx + 0x4aa3c) - *(ebx + 0x4aa38)) s>> 2)
    
    char* ecx_60 = *arg1
    
    if (ecx_60 == arg1[1])
        ecx_60 = nullptr
    
    int32_t eax_109
    eax_109.b = ecx_60[arg1[3]]
    *(ebx + 0x4aa44) = eax_109.b
    arg1[3] += 1
    char* eax_110 = *arg1
    
    if (eax_110 == arg1[1])
        eax_110 = nullptr
    
    eax_110.b = eax_110[arg1[3]]
    *(ebx + 0x4aa45) = eax_110.b
    arg1[3] += 1
    char* eax_111 = *arg1
    
    if (eax_111 == arg1[1])
        eax_111 = nullptr
    
    eax_111.b = eax_111[arg1[3]]
    *(ebx + 0x4aa46) = eax_111.b
    arg1[3] += 1
    char* eax_112 = *arg1
    
    if (eax_112 == arg1[1])
        eax_112 = nullptr
    
    eax_112.b = eax_112[arg1[3]]
    *(ebx + 0x4aa47) = eax_112.b
    arg1[3] += 1
    char* eax_113 = *arg1
    
    if (eax_113 == arg1[1])
        eax_113 = nullptr
    
    eax_113.b = eax_113[arg1[3]]
    *(ebx + 0x4aa48) = eax_113.b
    arg1[3] += 1
    char* eax_114 = *arg1
    
    if (eax_114 == arg1[1])
        eax_114 = nullptr
    
    eax_114.b = eax_114[arg1[3]]
    *(ebx + 0x4aa49) = eax_114.b
    arg1[3] += 1
    char* eax_115 = *arg1
    
    if (eax_115 == arg1[1])
        eax_115 = nullptr
    
    eax_115.b = eax_115[arg1[3]]
    *(ebx + 0x4aa4a) = eax_115.b
    arg1[3] += 1
    char* eax_116 = *arg1
    
    if (eax_116 == arg1[1])
        eax_116 = nullptr
    
    eax_116.b = eax_116[arg1[3]]
    *(ebx + 0x4aa4b) = eax_116.b
    arg1[3] += 1
    char* eax_117 = *arg1
    
    if (eax_117 == arg1[1])
        eax_117 = nullptr
    
    eax_117.b = eax_117[arg1[3]]
    *(ebx + 0x4aa4c) = eax_117.b
    arg1[3] += 1
    void** eax_118 = sub_5b0600(arg1, &var_30)
    int32_t var_8_3 = 1
    
    if (ebx + 0x4aa50 != eax_118)
        sub_52e3c0(ebx + 0x4aa50, eax_118, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    void** eax_119 = sub_5b0600(arg1, &var_30)
    int32_t var_8_5 = 2
    
    if (ebx + 0x4aa68 != eax_119)
        sub_52e3c0(ebx + 0x4aa68, eax_119, 0, 0xffffffff)
    
    int32_t var_8_6 = 0xffffffff
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    void** eax_120 = sub_5b0600(arg1, &var_30)
    int32_t var_8_7 = 3
    
    if (ebx + 0x4aa80 != eax_120)
        sub_52e3c0(ebx + 0x4aa80, eax_120, 0, 0xffffffff)
    
    int32_t var_8_8 = 0xffffffff
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    int32_t var_48
    int16_t* eax_121 = sub_5b0600(arg1, &var_48)
    int32_t var_8_9 = 4
    
    if (ebx + 0x4aa98 != eax_121)
        sub_52e3c0(ebx + 0x4aa98, eax_121, 0, 0xffffffff)
    
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48)
    
    arg1[1] = *arg1
    result.b = 1
    arg1[3] = 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
