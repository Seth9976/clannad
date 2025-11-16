// 函数: sub_6a1900
// 地址: 0x6a1900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9dd5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t* edx = arg2
int32_t var_160 = 0
int32_t ecx = data_4ebe29c
int32_t* var_1b4 = arg1
int32_t* var_16c = edx
int32_t* result
int32_t var_188
int32_t* var_184

if (((data_4ebe2a0 - ecx) & 0xffffff80) s<= 0)
label_6a1a49:
    int32_t* esi_2 = sub_745f3f(0xc)
    
    if (esi_2 == 0)
        esi_2 = nullptr
    else
        *esi_2 = 0
        esi_2[1] = 0
        esi_2[2] = 0
    
    int32_t* var_15c = esi_2
    int32_t var_158_1 = 0
    int32_t var_8_1 = 1
    int32_t* var_198
    int32_t* eax_22 = sub_5f21f0(&var_198, esi_2)
    int32_t* ecx_8 = *eax_22
    *eax_22 = var_158_1
    int32_t* edi_3 = var_198
    
    if (edi_3 != 0)
        bool cond:1_1 = edi_3[1] != 1
        edi_3[1]
        edi_3[1] -= 1
        
        if (not(cond:1_1))
            (*(*edi_3 + 4))(eax_2)
            bool cond:3_1 = edi_3[2] != 1
            edi_3[2]
            edi_3[2] -= 1
            
            if (not(cond:3_1))
                (*(*edi_3 + 8))()
    
    int32_t* var_1d0_5 = esi_2
    int32_t* var_1d4_2 = esi_2
    int32_t** var_1d8_2 = &var_15c
    int32_t var_8_2 = 2
    
    if (sub_6f30a0(var_15c, var_16c, 0) == 0)
    label_6a1be6:
        var_8_2.b = 0
        int32_t var_160_1 = 1
        *arg1 = 0
        arg1[1] = 0
        
        if (ecx_8 != 0)
            bool cond:4_1 = ecx_8[1] != 1
            ecx_8[1]
            ecx_8[1] -= 1
            
            if (not(cond:4_1))
                (*(*ecx_8 + 4))(eax_2)
                int32_t ebx_2 = ecx_8[2]
                ecx_8[2] -= 1
                
                if (ebx_2 == 1)
                    (*(*ecx_8 + 8))()
        
        result = arg1
    else
        int32_t* ecx_13 = var_15c
        
        if (((ecx_13[1] - *ecx_13) & 0xfffffff8) s< 0x60)
            int32_t var_90_1 = 7
            int32_t var_94_1 = 0
            int16_t var_a4 = 0
            sub_52e720(&var_a4, &data_ad7c90, nullptr)
            var_8_2.b = 3
            int32_t var_78_1 = 7
            int32_t var_7c_1 = 0
            int16_t var_8c = 0
            sub_52e720(&var_8c, 0xaff410, 0x1d)
            var_8_2.b = 4
            sub_6b9da0(&var_8c, &var_a4)
            
            if (var_78_1 u>= 8)
                j__free(var_8c.d)
            
            int32_t var_78_2 = 7
            int32_t var_7c_2 = 0
            var_8c = 0
            
            if (var_90_1 u>= 8)
                j__free(var_a4.d)
            
            goto label_6a1be6
        
        int32_t var_74[0x2]
        int32_t (* eax_35)[0x2] = &var_74
        int32_t edx_6 = 0xb
        int32_t temp6_1
        
        do
            temp6_1 = edx_6
            edx_6 -= 1
            *eax_35 = 0
            (*eax_35)[1] = 0
            eax_35 = &eax_35[1]
        while (temp6_1 - 1 s>= 0)
        int32_t edi_5 = 0
        int32_t (* ebx_4)[0x2] = &var_74
        
        while (true)
            void* eax_37 = *sub_54d980(ecx_13, &var_188, edi_5)
            int32_t ecx_20 = *(eax_37 + 8)
            *ebx_4 = *(eax_37 + 4)
            (*ebx_4)[1] = ecx_20
            
            if (var_184 != 0)
                bool cond:8_1 = var_184[1] != 1
                var_184[1]
                var_184[1] -= 1
                
                if (not(cond:8_1))
                    (*(*var_184 + 4))(eax_2)
                    bool cond:10_1 = var_184[2] != 1
                    var_184[2]
                    var_184[2] -= 1
                    
                    if (not(cond:10_1))
                        (*(*var_184 + 8))()
            
            edi_5 += 1
            ebx_4 = &ebx_4[1]
            
            if (edi_5 s>= 0xc)
                break
            
            ecx_13 = var_15c
        
        int32_t var_6c
        int32_t var_64
        int32_t i_15 = divs.dp.d(sx.q(arg3 - 1 + var_6c - var_74[0] - var_64), var_6c)
        int32_t var_58
        int32_t var_50
        int32_t var_48
        int32_t var_28
        int32_t i_16 =
            divs.dp.d(sx.q(arg4 - 1 + var_50 - var_74[1] - var_28 - var_48 - var_58), var_50)
        int32_t eax_54 = var_74[0] + var_6c * i_15
        int32_t ecx_34 = var_64 + eax_54
        int32_t eax_56 = var_74[1] + var_50 * i_16
        int32_t ecx_40 = var_28 + var_48 + var_58 + eax_56
        int32_t* esi_6 = sub_745f3f(0x28)
        
        if (esi_6 == 0)
            esi_6 = nullptr
        else
            __builtin_memset(esi_6, 0, 0x27)
            esi_6[7] = 0
            esi_6[8] = 0
        
        int32_t* var_150 = esi_6
        int32_t var_14c_1 = 0
        var_8_2.b = 5
        int32_t* var_19c
        int32_t* eax_58 = sub_69e5b0(&var_19c, esi_6)
        int32_t* var_14c_2 = *eax_58
        *eax_58 = var_14c_1
        int32_t* edi_7 = var_19c
        
        if (edi_7 != 0)
            bool cond:11_1 = edi_7[1] != 1
            edi_7[1]
            edi_7[1] -= 1
            
            if (not(cond:11_1))
                (*(*edi_7 + 4))(eax_2)
                bool cond:12_1 = edi_7[2] != 1
                edi_7[2]
                edi_7[2] -= 1
                
                if (not(cond:12_1))
                    (*(*edi_7 + 8))()
        
        int32_t* var_1d0_10 = esi_6
        int32_t* var_1d4_5 = esi_6
        void** var_1d8_3 = &var_150
        var_8_2.b = 6
        sub_6f3610(var_150, ecx_34, ecx_40, 0, 0x400, 0x15, 1)
        int32_t* ecx_47 = var_150
        int32_t var_1a8
        char eax_71
        
        if (ecx_47 != 0)
            int32_t var_1d0_11 = 0
            int32_t* var_1d4_6 = ecx_47
            eax_71 = sub_6f3b20(ecx_47, ecx_47, &var_1a8)
        
        if (ecx_47 == 0 || eax_71 == 0)
            var_8_2.b = 2
            int32_t var_160_2 = 1
            *arg1 = 0
            arg1[1] = 0
            
            if (var_14c_2 != 0)
                bool cond:13_1 = var_14c_2[1] != 1
                var_14c_2[1]
                var_14c_2[1] -= 1
                
                if (not(cond:13_1))
                    (*(*var_14c_2 + 4))(eax_2)
                    bool cond:16_1 = var_14c_2[2] != 1
                    var_14c_2[2]
                    var_14c_2[2] -= 1
                    
                    if (not(cond:16_1))
                        (*(*var_14c_2 + 8))()
            
            var_8_2.b = 0
            
            if (ecx_8 == 0)
                result = arg1
            else
                bool cond:15_1 = ecx_8[1] != 1
                ecx_8[1]
                ecx_8[1] -= 1
                
                if (cond:15_1)
                    result = arg1
                else
                    (*(*ecx_8 + 4))(eax_2)
                    int32_t ebx_7 = ecx_8[2]
                    ecx_8[2] -= 1
                    
                    if (ebx_7 != 1)
                        result = arg1
                    else
                        (*(*ecx_8 + 8))()
                        result = arg1
        else
            int32_t eax_72 = 0
            int32_t var_148_1 = 0
            int32_t* result_1
            
            while (true)
                void var_1bc
                int32_t* eax_73
                int32_t ecx_55
                eax_73, ecx_55 = sub_54d980(var_15c, &var_1bc, eax_72)
                int32_t var_1d0_13 = 0
                int32_t var_1d4_8 = ecx_55
                var_8_2.b = 7
                var_8_2.b = 6
                int32_t* ebx_6
                ebx_6.b = sub_6f3b20(*eax_73, &var_188, &var_188) == 0
                int32_t* var_1b8
                
                if (var_1b8 != 0)
                    bool cond:17_1 = var_1b8[1] != 1
                    var_1b8[1]
                    var_1b8[1] -= 1
                    
                    if (not(cond:17_1))
                        (*(*var_1b8 + 4))(eax_2)
                        bool cond:19_1 = var_1b8[2] != 1
                        var_1b8[2]
                        var_1b8[2] -= 1
                        
                        if (not(cond:19_1))
                            (*(*var_1b8 + 8))()
                
                if (ebx_6.b == 0)
                    ebx_6 = var_184
                    int32_t* var_1a4
                    int32_t* esi_10 = var_1a4
                    int32_t ecx_60 = var_188
                    int32_t eax_79 = (&var_74)[var_148_1][0]
                    int32_t edx_15 = var_1a8
                    var_70
                    int32_t i_13 = *(&var_70 + (var_148_1 << 3))
                    int32_t* var_140_1 = ebx_6
                    int32_t i_14 = i_13
                    
                    if (var_148_1 != 0)
                        if (var_148_1 != 1)
                            if (var_148_1 != 2)
                                if (var_148_1 != 3)
                                    if (var_148_1 != 4)
                                        if (var_148_1 == 5)
                                            int32_t eax_96 = var_58 + eax_56
                                            
                                            if (eax_79 s>= 0 && i_13 s>= 0 && eax_79 s<= ecx_34
                                                    && eax_96 s>= 0)
                                                int32_t ecx_74 = i_13 + eax_96
                                                
                                                if (eax_96 s<= ecx_74 && ecx_74 s<= ecx_40)
                                                    int32_t* esi_22 = edx_15 * eax_96 + esi_10
                                                    
                                                    if (i_13 s> 0)
                                                        void* eax_98 = eax_79 << 2
                                                        void* var_138_5 = eax_98
                                                        int32_t i
                                                        
                                                        do
                                                            sub_748840(esi_22, ebx_6, eax_98, eax_2)
                                                            ebx_6 += ecx_60
                                                            esi_22 += edx_15
                                                            eax_98 = var_138_5
                                                            i = i_13
                                                            i_13 -= 1
                                                        while (i != 1)
                                        else
                                            int32_t var_44
                                            
                                            if (var_148_1 == 6)
                                                sub_6a1870(eax_79, ecx_60, ebx_6, eax_79, i_13, 0, 
                                                    eax_79, i_13, esi_10, edx_15, ecx_34, ecx_40, 
                                                    ecx_34 - var_44, var_74[1])
                                            else if (var_148_1 != 7)
                                                int32_t var_1e0_2
                                                int32_t var_1dc_4
                                                int32_t var_1d8_12
                                                int32_t var_1d4_15
                                                int32_t var_1d0_20
                                                
                                                if (var_148_1 == 8)
                                                    var_1d0_20 = eax_56 + var_58
                                                    int32_t var_34
                                                    var_1d4_15 = ecx_34 - var_34
                                                    var_1d8_12 = ecx_40
                                                    var_1dc_4 = ecx_34
                                                    var_1e0_2 = edx_15
                                                label_6a25ba:
                                                    sub_6a1870(eax_79, ecx_60, ebx_6, eax_79, i_13, 
                                                        0, eax_79, i_13, esi_10, var_1e0_2, 
                                                        var_1dc_4, var_1d8_12, var_1d4_15, 
                                                        var_1d0_20)
                                                else if (var_148_1 == 9)
                                                    int32_t eax_107 = ecx_40 - var_28
                                                    
                                                    if (eax_79 s>= 0 && i_13 s>= 0
                                                            && eax_79 s<= ecx_34 && eax_107 s>= 0)
                                                        int32_t ecx_81 = i_13 + eax_107
                                                        
                                                        if (eax_107 s<= ecx_81 && ecx_81 s<= ecx_40)
                                                            int32_t* esi_26 =
                                                                edx_15 * eax_107 + esi_10
                                                            
                                                            if (i_13 s> 0)
                                                                void* eax_109 = eax_79 << 2
                                                                void* var_138_6 = eax_109
                                                                int32_t i_1
                                                                
                                                                do
                                                                    sub_748840(esi_26, ebx_6, eax_109, 
                                                                        eax_2)
                                                                    ebx_6 += ecx_60
                                                                    esi_26 += edx_15
                                                                    eax_109 = var_138_6
                                                                    i_1 = i_13
                                                                    i_13 -= 1
                                                                while (i_1 != 1)
                                                else if (var_148_1 != 0xa)
                                                    if (var_148_1 == 0xb)
                                                        int32_t var_18
                                                        var_1d0_20 = ecx_40 - var_18
                                                        var_1d4_15 = eax_54
                                                        var_1d8_12 = ecx_40
                                                        var_1dc_4 = ecx_34
                                                        var_1e0_2 = edx_15
                                                        goto label_6a25ba
                                                else if (i_15 s> 0)
                                                    int32_t edx_29 = var_74[0]
                                                    int32_t var_140_4 = edx_29
                                                    int32_t i_12 = i_15
                                                    int32_t i_2
                                                    
                                                    do
                                                        int32_t var_20
                                                        sub_6a1870(eax_79, ecx_60, ebx_6, eax_79, 
                                                            i_13, 0, eax_79, i_13, esi_10, edx_15, 
                                                            ecx_34, ecx_40, edx_29, ecx_40 - var_20)
                                                        edx_29 = var_140_4 + var_6c
                                                        i_2 = i_12
                                                        i_12 -= 1
                                                        var_140_4 = edx_29
                                                    while (i_2 != 1)
                                            else if (i_16 s> 0)
                                                int32_t edx_24 = var_58 + var_74[1]
                                                int32_t var_140_3 = edx_24
                                                int32_t i_11 = i_16
                                                int32_t i_3
                                                
                                                do
                                                    int32_t var_3c
                                                    sub_6a1870(eax_79, ecx_60, ebx_6, eax_79, i_13, 
                                                        0, eax_79, i_13, esi_10, edx_15, ecx_34, 
                                                        ecx_40, ecx_34 - var_3c, edx_24)
                                                    edx_24 = var_140_3 + var_50
                                                    i_3 = i_11
                                                    i_11 -= 1
                                                    var_140_3 = edx_24
                                                while (i_3 != 1)
                                    else if (i_16 s> 0)
                                        int32_t eax_92 = var_74[1] + var_58
                                        int32_t var_170_1 = eax_92
                                        int32_t var_164_2 = eax_92 + i_13
                                        int32_t* edx_21 = eax_92 * edx_15 + esi_10
                                        int32_t i_10 = i_16
                                        int32_t ecx_72 = var_164_2
                                        int32_t esi_18 = eax_79
                                        int32_t* var_12c_3 = edx_21
                                        int32_t i_4
                                        
                                        do
                                            if (esi_18 s>= 0 && i_13 s>= 0 && esi_18 s<= ecx_34
                                                    && eax_92 s>= 0 && eax_92 s<= ecx_72
                                                    && ecx_72 s<= ecx_40)
                                                int32_t* esi_19 = edx_21
                                                
                                                if (i_13 s> 0)
                                                    int32_t j_3 = i_13
                                                    int32_t* edi_10 = ebx_6
                                                    int32_t eax_94 = eax_79 << 2
                                                    int32_t var_17c_2 = eax_94
                                                    int32_t j
                                                    
                                                    do
                                                        sub_748840(esi_19, edi_10, eax_94, eax_2)
                                                        edi_10 += ecx_60
                                                        esi_19 += edx_15
                                                        eax_94 = var_17c_2
                                                        j = j_3
                                                        j_3 -= 1
                                                    while (j != 1)
                                                    i_13 = i_14
                                                    ebx_6 = var_140_1
                                                    eax_92 = var_170_1
                                                    ecx_72 = var_164_2
                                                    edx_21 = var_12c_3
                                                
                                                esi_18 = eax_79
                                            
                                            eax_92 += var_50
                                            ecx_72 += var_50
                                            edx_21 += var_50 * edx_15
                                            i_4 = i_10
                                            i_10 -= 1
                                            var_170_1 = eax_92
                                            var_164_2 = ecx_72
                                            var_12c_3 = edx_21
                                        while (i_4 != 1)
                                else if (eax_79 s>= 0 && i_13 s>= 0 && eax_79 s<= ecx_34)
                                    int32_t ecx_65 = var_74[1]
                                    
                                    if (ecx_65 s>= 0)
                                        int32_t eax_87 = ecx_65 + i_13
                                        
                                        if (ecx_65 s<= eax_87 && eax_87 s<= ecx_40)
                                            void* esi_17 = ecx_65 * edx_15 + esi_10
                                            
                                            if (i_13 s> 0)
                                                void* eax_89 = eax_79 << 2
                                                void* var_138_3 = eax_89
                                                int32_t i_5
                                                
                                                do
                                                    sub_748840(esi_17, ebx_6, eax_89, eax_2)
                                                    ebx_6 += ecx_60
                                                    esi_17 += edx_15
                                                    eax_89 = var_138_3
                                                    i_5 = i_13
                                                    i_13 -= 1
                                                while (i_5 != 1)
                            else if (eax_79 s>= 0 && i_13 s>= 0 && eax_54 s>= 0)
                                int32_t eax_84 = eax_79 + eax_54
                                
                                if (eax_54 s<= eax_84 && eax_84 s<= ecx_34 && i_13 s<= ecx_40)
                                    void* esi_14 = &esi_10[eax_54]
                                    
                                    if (i_13 s> 0)
                                        void* eax_86 = eax_79 << 2
                                        void* var_138_2 = eax_86
                                        int32_t i_6
                                        
                                        do
                                            sub_748840(esi_14, ebx_6, eax_86, eax_2)
                                            ebx_6 += ecx_60
                                            esi_14 += edx_15
                                            eax_86 = var_138_2
                                            i_6 = i_13
                                            i_13 -= 1
                                        while (i_6 != 1)
                        else if (i_15 s> 0)
                            int32_t eax_81 = var_74[0]
                            int32_t ecx_62 = eax_79 + eax_81
                            int32_t var_164_1 = eax_81
                            int32_t var_12c_2 = ecx_62
                            void* edx_19 = &esi_10[eax_81]
                            int32_t i_9 = i_15
                            int32_t esi_12 = eax_79
                            void* var_168_1 = edx_19
                            int32_t i_7
                            
                            do
                                if (esi_12 s>= 0 && i_13 s>= 0 && eax_81 s>= 0 && eax_81 s<= ecx_62
                                        && ecx_62 s<= ecx_34 && i_13 s<= ecx_40)
                                    void* esi_13 = edx_19
                                    
                                    if (i_13 s> 0)
                                        int32_t j_2 = i_13
                                        int32_t* edi_9 = ebx_6
                                        void* eax_83 = eax_79 << 2
                                        void* var_17c_1 = eax_83
                                        int32_t j_1
                                        
                                        do
                                            sub_748840(esi_13, edi_9, eax_83, eax_2)
                                            edi_9 += ecx_60
                                            esi_13 += edx_15
                                            eax_83 = var_17c_1
                                            j_1 = j_2
                                            j_2 -= 1
                                        while (j_1 != 1)
                                        i_13 = i_14
                                        ebx_6 = var_140_1
                                        eax_81 = var_164_1
                                        ecx_62 = var_12c_2
                                        edx_19 = var_168_1
                                    
                                    esi_12 = eax_79
                                
                                eax_81 += var_6c
                                ecx_62 += var_6c
                                edx_19 += var_6c << 2
                                i_7 = i_9
                                i_9 -= 1
                                var_164_1 = eax_81
                                var_12c_2 = ecx_62
                                var_168_1 = edx_19
                            while (i_7 != 1)
                    else if (eax_79 s>= 0 && i_13 s>= 0 && eax_79 s<= ecx_34 && i_13 s<= ecx_40
                            && i_13 s> 0)
                        int32_t eax_80 = eax_79 << 2
                        int32_t var_140_2 = eax_80
                        int32_t i_8
                        
                        do
                            sub_748840(esi_10, ebx_6, eax_80, eax_2)
                            ebx_6 += ecx_60
                            esi_10 += edx_15
                            eax_80 = var_140_2
                            i_8 = i_13
                            i_13 -= 1
                        while (i_8 != 1)
                    
                    void var_1b0
                    int32_t* eax_117
                    int32_t ecx_87
                    eax_117, ecx_87 = sub_54d980(var_15c, &var_1b0, var_148_1)
                    var_8_2.b = 8
                    int32_t var_1d0_25 = ecx_87
                    char eax_118
                    int32_t ecx_89
                    eax_118, ecx_89 = sub_6f3c40(*eax_117)
                    var_8_2.b = 6
                    ebx_6.b = eax_118 == 0
                    int32_t* var_1ac
                    
                    if (var_1ac != 0)
                        bool cond:24_1 = var_1ac[1] != 1
                        ecx_89 = var_1ac[1]
                        var_1ac[1] -= 1
                        
                        if (not(cond:24_1))
                            ecx_89 = (*(*var_1ac + 4))(eax_2)
                            bool cond:26_1 = var_1ac[2] != 1
                            var_1ac[2]
                            var_1ac[2] -= 1
                            
                            if (not(cond:26_1))
                                ecx_89 = (*(*var_1ac + 8))()
                    
                    if (ebx_6.b == 0)
                        eax_72 = var_148_1 + 1
                        var_148_1 = eax_72
                        
                        if (eax_72 s< 0xc)
                            continue
                        else
                            int32_t var_1d0_26 = ecx_89
                            
                            if (sub_6f3c40(var_150) != 0)
                                int32_t var_124
                                sub_6a0aa0(&var_124)
                                var_8_2.b = 9
                                int32_t eax_125 = data_4ebe2a8
                                int32_t* var_c8
                                int32_t* ecx_94 = var_c8
                                int32_t var_120_1 = eax_125
                                data_4ebe2a8 = eax_125 + 1
                                int32_t* eax_127 = var_150
                                var_124 = 5
                                int32_t* var_cc_1 = eax_127
                                
                                if (var_14c_2 != ecx_94)
                                    if (var_14c_2 != 0)
                                        var_14c_2[2] += 1
                                        ecx_94 = var_c8
                                    
                                    if (ecx_94 != 0)
                                        bool cond:28_1 = ecx_94[2] != 1
                                        ecx_94[2]
                                        ecx_94[2] -= 1
                                        
                                        if (not(cond:28_1))
                                            (*(*ecx_94 + 8))(eax_2)
                                    
                                    int32_t* var_c8_1 = var_14c_2
                                
                                void var_fc
                                
                                if (&var_fc != var_16c)
                                    sub_52e3c0(&var_fc, var_16c, 0, 0xffffffff)
                                
                                int32_t var_11c_1 = arg3
                                int32_t var_118_1 = arg4
                                char var_d0_1 = 0
                                sub_6a4030(&var_124)
                                result_1 = arg1
                                int32_t* eax_134 = var_150
                                var_150 = nullptr
                                *result_1 = eax_134
                                result_1[1] = 0
                                int32_t* eax_135 = result_1[1]
                                result_1[1] = var_14c_2
                                var_14c_2 = eax_135
                                int32_t var_160_3 = 1
                                var_8_2.b = 6
                                sub_5719b0(&var_124)
                                var_8_2.b = 2
                                break
                
                result_1 = arg1
                var_8_2.b = 2
                int32_t var_160_4 = 1
                *result_1 = 0
                result_1[1] = 0
                break
            
            if (var_14c_2 != 0)
                bool cond:20_1 = var_14c_2[1] != 1
                var_14c_2[1]
                var_14c_2[1] -= 1
                
                if (not(cond:20_1))
                    (*(*var_14c_2 + 4))(eax_2)
                    bool cond:22_1 = var_14c_2[2] != 1
                    var_14c_2[2]
                    var_14c_2[2] -= 1
                    
                    if (not(cond:22_1))
                        (*(*var_14c_2 + 8))()
            
            var_8_2.b = 0
            
            if (ecx_8 != 0)
                bool cond:21_1 = ecx_8[1] != 1
                ecx_8[1]
                ecx_8[1] -= 1
                
                if (not(cond:21_1))
                    (*(*ecx_8 + 4))(eax_2)
                    int32_t edi_11 = ecx_8[2]
                    ecx_8[2] -= 1
                    
                    if (edi_11 == 1)
                        (*(*ecx_8 + 8))()
            
            result = result_1
else
    void* ebx_1 = nullptr
    
    while (true)
        if (*(ebx_1 + ecx) == 5)
            int32_t* eax_9
            
            if (edx[5] u< 8)
                eax_9 = edx
            else
                eax_9 = *edx
            
            int32_t var_1d0_1 = edx[4]
            int32_t eax_10 =
                sub_536340(ebx_1 + ecx + 0x28, ebx_1 + ecx + 0x28, *(ebx_1 + ecx + 0x38), eax_9)
            ecx = data_4ebe29c
            
            if (eax_10 == 0)
                void* edx_1 = ebx_1 + ecx
                
                if (*(ebx_1 + ecx + 8) == arg3 && *(edx_1 + 0xc) == arg4)
                    bool edx_2 = *sub_571430(edx_1 + 0x58, &var_188) != 0
                    
                    if (var_184 != 0)
                        bool cond:7_1 = var_184[1] != 1
                        var_184[1]
                        var_184[1] -= 1
                        
                        if (not(cond:7_1))
                            (*(*var_184 + 4))(eax_2)
                            bool cond:9_1 = var_184[2] != 1
                            var_184[2]
                            var_184[2] -= 1
                            
                            if (not(cond:9_1))
                                (*(*var_184 + 8))()
                            
                            edx_2 = edx_2
                    
                    if (edx_2 != 0)
                        sub_571430((edi << 7) + data_4ebe29c + 0x58, arg1)
                        result = arg1
                        break
                    
                    ecx = data_4ebe29c
            
            edx = var_16c
        
        edi += 1
        ebx_1 -= 0xffffff80
        
        if (edi s>= (data_4ebe2a0 - ecx) s>> 7)
            goto label_6a1a49
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
