// 函数: sub_596400
// 地址: 0x596400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b85ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_154
int32_t eax_2 = __security_cookie ^ &var_154
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    int32_t var_c4
    int32_t var_b0
    
    if (*(arg1 + 0x914) != 0)
        int32_t ebx_1 = *(*(data_bac45c + 0x10) + 0x50)
        int32_t eax_8 = *(data_bac4e0 + 0x30)
        
        if (eax_8 != 0)
            eax_8(*(arg1 + 0xbc), ebx_1, eax_4)
        
        int32_t edi_1 = 0
        
        if (ebx_1 s> 0)
            do
                sub_698170(data_bac45c, &var_c4, edi_1)
                int32_t var_c_1 = 0
                int32_t eax_10 = *(data_bac4e0 + 0x34)
                
                if (eax_10 != 0)
                    eax_10(*(arg1 + 0xbc), edi_1, 0, &var_c4, eax_4)
                
                int32_t var_c_2 = 0xffffffff
                
                if (var_b0 u>= 8)
                    j__free(var_c4)
                
                edi_1 += 1
            while (edi_1 s< ebx_1)
        
        sub_597350(arg1 + 0x8e0, ebx_1)
        *(arg1 + 0x8f8) = 0
    
    int32_t var_144_1 = 0
    int32_t var_14c_1 = 0
    int32_t var_148_1 = 0
    int32_t eax_13 = *(*(data_bac45c + 0x10) + 0x50)
    int16_t var_13c
    int32_t var_128
    int16_t var_124
    int32_t var_110
    int16_t var_10c
    int32_t var_f8
    int16_t var_f4
    int32_t var_e0
    
    if (eax_13 s> 0)
        int32_t* edi_2 = data_bac48c
        int32_t ebx_2 = 0
        void* ecx_2 = nullptr
        int32_t* var_150_1 = nullptr
        int32_t eax_38
        
        do
            sub_5970d0(*(arg1 + 0x8e0) + ebx_2, *edi_2 + ecx_2)
            edi_2 = data_bac48c
            int32_t i = 0
            int32_t* eax_17 = *edi_2 + var_150_1
            *(*(arg1 + 0x8e0) + ebx_2 + 0xc) = eax_17[1] - *eax_17
            *(*(arg1 + 0x8e0) + ebx_2 + 0x10) = 0
            
            if (*(*(arg1 + 0x8e0) + ebx_2 + 0xc) s> 0)
                do
                    int32_t ecx_7 = *(arg1 + 0x8e0)
                    void* eax_22 = *(var_150_1 + *edi_2)
                    edi_2 = data_bac48c
                    uint32_t eax_23 = zx.d(*(eax_22 + i))
                    i += 1
                    *(ecx_7 + ebx_2 + 0x10) += eax_23
                while (i s< *(*(arg1 + 0x8e0) + ebx_2 + 0xc))
            
            if (*(arg1 + 0x914) != 0
                    || *(*(arg1 + 0x8e0) + ebx_2 + 0x10) != *(*(arg1 + 0x8ac) + ebx_2 + 0x10))
                int32_t ecx_9 = *(arg1 + 0x8e0)
                void* const edx_1 = &data_af049c
                int32_t var_c8_1 = 7
                
                if (*(ecx_9 + ebx_2 + 0x10) == *(ecx_9 + ebx_2 + 0xc))
                    edx_1 = &data_af04a0
                
                int32_t var_cc_1 = 0
                int16_t var_dc = 0
                int32_t ecx_10
                
                if (*edx_1 != 0)
                    void* const ecx_11 = edx_1
                    void* edi_4 = ecx_11 + 2
                    int16_t i_1
                    
                    do
                        i_1 = *ecx_11
                        ecx_11 += 2
                    while (i_1 != 0)
                    ecx_10 = (ecx_11 - edi_4) s>> 1
                else
                    ecx_10 = 0
                
                int32_t ecx_14 = sub_52e720(&var_dc, edx_1, ecx_10)
                int32_t var_c_3 = 1
                int32_t eax_29 = *(data_bac4e0 + 0x34)
                
                if (eax_29 != 0)
                    ecx_14 = eax_29(*(arg1 + 0xbc), var_148_1, 1, &var_dc, eax_4)
                
                int32_t var_168_9 = ecx_14
                *(*(arg1 + 0x8e0) + ebx_2 + 0xc)
                int16_t* eax_30 = sub_6ad9b0(&var_f4)
                var_c_3.b = 2
                int32_t ecx_16 = *(arg1 + 0x8e0)
                *(ecx_16 + ebx_2 + 0xc)
                *(ecx_16 + ebx_2 + 0x10)
                int16_t* eax_31 = sub_6ad9b0(&var_13c)
                var_c_3.b = 3
                int16_t* eax_32 = sub_532b80(eax_31, eax_31, &var_124, &data_aefc08)
                var_c_3.b = 4
                int16_t* eax_33 = sub_5327a0(eax_32, eax_32, &var_10c, eax_30)
                var_c_3.b = 5
                
                if (&var_dc != eax_33)
                    sub_52e3c0(&var_dc, eax_33, 0, 0xffffffff)
                
                if (var_f8 u>= 8)
                    j__free(var_10c.d)
                
                var_f8 = 7
                int32_t var_fc_1 = 0
                var_10c = 0
                
                if (var_110 u>= 8)
                    j__free(var_124.d)
                
                var_110 = 7
                int32_t var_114_1 = 0
                var_124 = 0
                
                if (var_128 u>= 8)
                    j__free(var_13c.d)
                
                var_c_3.b = 1
                var_128 = 7
                int32_t var_12c_1 = 0
                var_13c = 0
                
                if (var_e0 u>= 8)
                    j__free(var_f4.d)
                
                var_e0 = 7
                var_f4 = 0
                int32_t var_e4_1 = 0
                int32_t eax_35 = *(data_bac4e0 + 0x34)
                
                if (eax_35 != 0)
                    eax_35(*(arg1 + 0xbc), var_148_1, 2, &var_dc, eax_4)
                
                int32_t var_c_4 = 0xffffffff
                
                if (var_c8_1 u>= 8)
                    j__free(var_dc.d)
                
                edi_2 = data_bac48c
                int32_t var_c8_2 = 7
                int32_t var_cc_2 = 0
                var_dc = 0
            
            int32_t eax_36 = *(arg1 + 0x8e0)
            ecx_2 = &var_150_1[3]
            var_144_1 += *(eax_36 + ebx_2 + 0xc)
            int32_t edx_11 = var_14c_1 + *(eax_36 + ebx_2 + 0x10)
            ebx_2 += 0x14
            eax_38 = var_148_1 + 1
            var_14c_1 = edx_11
            var_148_1 = eax_38
            var_150_1 = ecx_2
        while (eax_38 s< eax_13)
    
    if (*(arg1 + 0x914) != 0 || *(arg1 + 0x8c4) != *(arg1 + 0x8f8))
        sub_596f80(arg1)
    
    int32_t edi_6 = *(*(*(data_bac45c + 0x54) + *(arg1 + 0x8f8) * 0x54 + 4) + 0x80)
    sub_5979b0(arg1 + 0x8ec, edi_6)
    char* edx_12 = nullptr
    
    if (edi_6 s> 0)
        do
            int32_t eax_46
            eax_46.b = edx_12[*(*data_bac48c + *(arg1 + 0x8f8) * 0xc)]
            edx_12[*(arg1 + 0x8ec)] = eax_46.b
            edx_12 = &edx_12[1]
        while (edx_12 s< edi_6)
    
    WPARAM edi_8 = 0
    
    if (edi_6 s> 0)
        do
            int32_t eax_49
            
            if (*(arg1 + 0x914) == 0 && edi_8 s< *(arg1 + 0x8bc) - *(arg1 + 0x8b8))
                eax_49.b = *(edi_8 + *(arg1 + 0x8ec))
            
            if (*(arg1 + 0x914) != 0 || edi_8 s>= *(arg1 + 0x8bc) - *(arg1 + 0x8b8)
                    || eax_49.b != *(edi_8 + *(arg1 + 0x8b8)))
                int32_t eax_50
                eax_50.b = *(edi_8 + *(arg1 + 0x8ec)) u> 0
                sub_6c4cb0(arg1 + 0x3ec, edi_8, eax_50.b)
            
            edi_8 += 1
        while (edi_8 s< edi_6)
    
    int32_t ecx_29 = *(arg1 + 0x8f8) * 5
    int32_t eax_53 = *(arg1 + 0x8e0)
    int32_t var_168_19 = ecx_29
    *(eax_53 + (ecx_29 << 2) + 0x10)
    *(eax_53 + (ecx_29 << 2) + 0xc)
    void** eax_54 = sub_6ad9b0(&var_c4)
    int32_t var_c_5 = 6
    int16_t var_ac
    void** eax_55 = sub_6ad9b0(&var_ac)
    var_c_5.b = 7
    int16_t var_94
    void** eax_56 = sub_698170(data_bac45c, &var_94, *(arg1 + 0x8f8))
    var_c_5.b = 8
    void** eax_57 = sub_532b80(eax_56, eax_56, &var_10c, 0xaf04a8)
    var_c_5.b = 9
    void** eax_58 = sub_5327a0(eax_57, eax_57, &var_124, eax_55)
    var_c_5.b = 0xa
    void** eax_59 = sub_532b80(eax_58, eax_58, &var_13c, &data_aefc08)
    var_c_5.b = 0xb
    void** eax_60 = sub_5327a0(eax_59, eax_59, &var_f4, eax_54)
    void* ecx_37 = arg1 + 0x8fc
    var_c_5.b = 0xc
    
    if (ecx_37 != eax_60)
        ecx_37 = sub_52e3c0(ecx_37, eax_60, 0, 0xffffffff)
    
    if (var_e0 u>= 8)
        ecx_37 = j__free(var_f4.d)
    
    int32_t var_e0_1 = 7
    int32_t var_e4_2 = 0
    var_f4 = 0
    
    if (var_128 u>= 8)
        ecx_37 = j__free(var_13c.d)
    
    int32_t var_128_1 = 7
    int32_t var_12c_2 = 0
    var_13c = 0
    
    if (var_110 u>= 8)
        ecx_37 = j__free(var_124.d)
    
    int32_t var_110_1 = 7
    int32_t var_114_2 = 0
    var_124 = 0
    
    if (var_f8 u>= 8)
        ecx_37 = j__free(var_10c.d)
    
    int32_t var_f8_1 = 7
    int32_t var_fc_2 = 0
    var_10c = 0
    int32_t var_80
    
    if (var_80 u>= 8)
        ecx_37 = j__free(var_94.d)
    
    int32_t var_80_1 = 7
    int32_t var_84_1 = 0
    var_94 = 0
    int32_t var_98
    
    if (var_98 u>= 8)
        ecx_37 = j__free(var_ac.d)
    
    int32_t var_c_6 = 0xffffffff
    int32_t var_98_1 = 7
    int32_t var_9c_1 = 0
    var_ac = 0
    
    if (var_b0 u>= 8)
        ecx_37 = j__free(var_c4)
    
    void* var_168_30 = ecx_37
    int32_t var_34
    void** eax_61 = sub_6ad9b0(&var_34)
    int32_t var_c_7 = 0xd
    void** eax_65 = sub_6ad9b0(&var_c4)
    var_c_7.b = 0xe
    int16_t var_7c
    void** eax_66 = sub_6ad9b0(&var_7c)
    var_c_7.b = 0xf
    int16_t var_64
    void** eax_67 = sub_6ad9b0(&var_64)
    var_c_7.b = 0x10
    int16_t var_4c
    void** eax_68 = sub_548cb0(eax_67, 0xaf04c4, &var_4c, eax_67)
    var_c_7.b = 0x11
    void** eax_69 = sub_532b80(eax_68, eax_68, &var_10c, &data_aefc08)
    var_c_7.b = 0x12
    void** eax_70 = sub_5327a0(eax_69, eax_69, &var_124, eax_66)
    var_c_7.b = 0x13
    void** eax_71 = sub_532b80(eax_70, eax_70, &var_13c, 0xaf04bc)
    var_c_7.b = 0x14
    void** eax_72 = sub_5327a0(eax_71, eax_71, &var_f4, eax_65)
    var_c_7.b = 0x15
    void** eax_73 = sub_532b80(eax_72, eax_72, &var_94, 0xaf04b0)
    var_c_7.b = 0x16
    var_c_7.b = 0x17
    sub_532870(arg1 + 0x8fc, sub_5327a0(eax_73, eax_73, &var_ac, eax_61), 0, 0xffffffff)
    
    if (var_98_1 u>= 8)
        j__free(var_ac.d)
    
    int32_t var_98_2 = 7
    int32_t var_9c_2 = 0
    var_ac = 0
    
    if (var_80_1 u>= 8)
        j__free(var_94.d)
    
    int32_t var_80_2 = 7
    int32_t var_84_2 = 0
    var_94 = 0
    
    if (var_e0_1 u>= 8)
        j__free(var_f4.d)
    
    int32_t var_e0_2 = 7
    int32_t var_e4_3 = 0
    var_f4 = 0
    
    if (var_128_1 u>= 8)
        j__free(var_13c.d)
    
    int32_t var_128_2 = 7
    int32_t var_12c_3 = 0
    var_13c = 0
    
    if (var_110_1 u>= 8)
        j__free(var_124.d)
    
    int32_t var_110_2 = 7
    int32_t var_114_3 = 0
    var_124 = 0
    
    if (var_f8_1 u>= 8)
        j__free(var_10c.d)
    
    int32_t var_f8_2 = 7
    int32_t var_fc_3 = 0
    var_10c = 0
    int32_t var_38
    
    if (var_38 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_50
    
    if (var_50 u>= 8)
        j__free(var_64.d)
    
    int32_t var_50_1 = 7
    int32_t var_54_1 = 0
    var_64 = 0
    int32_t var_68
    
    if (var_68 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_68_1 = 7
    int32_t var_6c_1 = 0
    var_7c = 0
    
    if (var_b0 u>= 8)
        j__free(var_c4)
    
    int32_t var_c_8 = 0xffffffff
    int32_t var_b0_1 = 7
    int32_t var_b4_1 = 0
    var_c4.w = 0
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34)
    
    int32_t eax_76
    
    if (*(arg1 + 0x914) == 0)
        void** eax_75
        
        if (*(arg1 + 0x910) u< 8)
            eax_75 = arg1 + 0x8fc
        else
            eax_75 = *(arg1 + 0x8fc)
        
        int32_t var_168_46 = *(arg1 + 0x90c)
        eax_76 = sub_536340(arg1 + 0x8c8, arg1 + 0x8c8, *(arg1 + 0x8d8), eax_75)
    
    if (*(arg1 + 0x914) != 0 || eax_76 != 0)
        sub_6c2db0(arg1 + 0x7b0, arg1 + 0x8fc)
    
    sub_5971b0(arg1 + 0x8ac, arg1 + 0x8e0)
    sub_5970d0(arg1 + 0x8b8, arg1 + 0x8ec)
    result = *(arg1 + 0x8f8)
    *(arg1 + 0x8c4) = result
    
    if (arg1 + 0x8c8 != arg1 + 0x8fc)
        result = sub_52e3c0(arg1 + 0x8c8, arg1 + 0x8fc, 0, 0xffffffff)
    
    *(arg1 + 0x914) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_154)
return result
