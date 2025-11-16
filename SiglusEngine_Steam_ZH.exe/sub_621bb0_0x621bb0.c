// 函数: sub_621bb0
// 地址: 0x621bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfd9b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_240 = esi
HWND hWnd

if (sub_663800().b != 0)
    SteamAPI_RunCallbacks(eax_2)
    *(esi + 0x4a5d0) = *(esi + 0x4a5c8)
    *(esi + 0x4a5d4) = *(esi + 0x4a5cc)
    *(esi + 0x4a5e0) = *(esi + 0x4a5d8)
    *(esi + 0x4a5e4) = *(esi + 0x4a5dc)
    *(esi + 0x4a680) = 0
    *(esi + 0x4a750) = 0x101
    *(esi + 0x4a79d) = 0
    HWND eax_7
    eax_7.b = GetActiveWindow() == *(data_bac454 + 4)
    *(esi + 0x4a680) = eax_7.b
    hWnd = GetFocus()
    
    if (hWnd != 0)
        if (hWnd != *(data_bac454 + 4))
            wchar16 className = 0
            char var_212[0x1fe]
            _memset(&var_212, 0, 0x1fe)
            GetClassNameW(hWnd, &className, 0x100)
            int32_t var_218_1 = 7
            int32_t var_21c_1 = 0
            int16_t var_22c = 0
            int32_t ecx_2
            
            if (className != 0)
                wchar16* ecx_3 = &className
                wchar16 i
                
                do
                    i = *ecx_3
                    ecx_3 = &ecx_3[1]
                while (i != 0)
                ecx_2 = (ecx_3 - &var_212) s>> 1
            else
                ecx_2 = 0
            
            sub_52e720(&var_22c, &className, ecx_2)
            int32_t var_8_1 = 0
            int32_t var_8_2 = 0xffffffff
            int32_t ebx
            ebx.b = sub_5ccf10(&var_22c, &NT3::Cc_edit::`vftable'{for `NT3::C_control'}.vFunc_2)
            
            if (var_218_1 u>= 8)
                j__free(var_22c.d)
            
            int32_t var_218_2 = 7
            int32_t var_21c_2 = 0
            var_22c = 0
            
            if (ebx.b != 0)
                *(esi + 0x4a682) = 1
        else
            *(esi + 0x4a681) = 1
    
    if (*(esi + 0x4a62c) != 0)
        data_bac4a0->__offset(0xcf).b = 1
        int32_t temp2_1 = *(esi + 0x4a62c)
        *(esi + 0x4a62c) -= 1
        
        if (temp2_1 == 1)
            sub_6167e0()
    
    if (*(esi + 0x4a7a1) != 0 && *(esi + 0x4a7a2) == 0)
        *(esi + 0x4a750) = 0
        hWnd.b = 1
    else
        int32_t var_244
        
        if (*(esi + 0x625d8) != 1)
        label_621deb:
            sub_748840(esi + 0x45480, data_bac4c8, 0x5100)
            *(esi + 0x45480) = *(esi + 0x40380)
            *(esi + 0x45484) = *(esi + 0x40384)
            sub_6b2720()
            void* eax_12 = data_bac4c8
            
            if (*(eax_12 + 0x14) == 2 && *(esi + 0x45494) == 0)
                if (*(eax_12 + 8) == 0 && *(eax_12 + 0x10) == 1 && *(eax_12 + 0x14) == 2)
                    *(eax_12 + 8) = 1
                    *(eax_12 + 0x10) = 0
                    *(eax_12 + 0x14) = 1
                
                *(eax_12 + 0x5108) = 1
            
            sub_6230c0(esi)
            sub_748840(esi + 0x40380, data_bac4c8, 0x5100)
            sub_623570(esi)
            int32_t* ecx_10 = data_bac42c
            POINT point
            point.x = *ecx_10
            point.y = ecx_10[1]
            ScreenToClient(*(data_bac454 + 4), &point)
            int32_t* edi_3 = data_bac42c
            void* ecx_11 = data_bac4c8
            *edi_3 = point.x
            edi_3[1] = point.y
            *edi_3 =
                divs.dp.d(sx.q((*edi_3 - *(esi + 0x4a5c8)) * *(esi + 0x4a5c0)), *(esi + 0x4a5d8))
            *(esi + 0x4a5dc)
            edi_3[1] =
                divs.dp.d(sx.q((edi_3[1] - *(esi + 0x4a5cc)) * *(esi + 0x4a5c4)), *(esi + 0x4a5dc))
            
            if (*(esi + 0x4a688) != 0)
                *(esi + 0x4a688) = 0
                *(ecx_11 + 0xc) = 0
                *(ecx_11 + 0x10) = 0
                *(ecx_11 + 0x14) = 0
                *(ecx_11 + 0x5c) = 0
                *(ecx_11 + 0x60) = 0
                *(ecx_11 + 0x64) = 0
            
            if (*edi_3 != *(esi + 0x45480) || edi_3[1] != *(esi + 0x45484))
                *(esi + 0x4a6c4) = 0
            
            void* eax_30
            
            if (*(data_bac4a0 + 0xcc) != 0)
                eax_30.b = 0
            else if (*(data_bac484 + 0x138) == 0)
                eax_30.b = *(data_bac498 + 2) == 0
            else
                eax_30.b = 0
            
            if (*(ecx_11 + 0xc) != 1)
                if (*(ecx_11 + 0x514) == 1)
                    if (eax_30.b != 0 && *(data_bac458 + 0x39b) != 0)
                        goto label_622031
                    
                    *(esi + 0x4a689) = 0
                else if (*(ecx_11 + 0x1c84) != 1 || (eax_30.b != 0 && *(data_bac458 + 0x3e6) != 0))
                label_622031:
                    void* eax_41 = sub_634fb0()
                    ecx_11.b = eax_41.b
                    
                    if (sub_6355a0(eax_41, 0, ecx_11.b, 1) != 0)
                        edi_3 = data_bac42c
                        *(esi + 0x4a689) = 0
                    else
                        void* eax_43 = sub_634fb0()
                        
                        if (sub_635790(eax_43, 0x11, eax_43.b, 0, 0) != 0)
                            edi_3 = data_bac42c
                            *(esi + 0x4a689) = 0
                        else
                            edi_3 = data_bac42c
                else
                    *(esi + 0x4a689) = 0
            else if (eax_30.b == 0)
                *(esi + 0x4a689) = 0
            else
                char eax_31
                eax_31, ecx_11 = sub_634fe0()
                
                if (eax_31 != 0)
                    goto label_622031
                
                edi_3 = data_bac42c
                *(esi + 0x4a689) = 0
            
            if (*edi_3 != *(esi + 0x45480))
                *(esi + 0x4a6c8) = 0
            else
                int32_t eax_33 = edi_3[1]
                
                if (eax_33 != *(esi + 0x45484))
                    *(esi + 0x4a6c8) = 0
                else if (sub_635890(eax_33, 0, 0x100, 1) != 0)
                    *(esi + 0x4a6c8) = 0
                else
                    void* eax_35 = sub_634fb0()
                    
                    if (sub_6355a0(eax_35, 0, eax_35.b, 1) != 0)
                        *(esi + 0x4a6c8) = 0
                    else
                        *(esi + 0x4a6c8) += *(data_bac47c + 0x14)
            
            if (sub_623c00(esi).b == 0)
                hWnd.b = 0
            else if (sub_6237f0(esi).b == 0)
                hWnd.b = 0
            else if (sub_6242c0(esi).b == 0)
                hWnd.b = 0
            else if (sub_6246a0(esi).b == 0)
                hWnd.b = 0
            else
                if (*(esi + 0x4a79c) != 0)
                    sub_67d860(esi + 0x4b3b4)
                
                if (sub_624440(esi).b == 0)
                    hWnd.b = 0
                else
                    if (*(esi + 0x4ae52) == 0 && *(esi + 0x4aab0) != 0 && sub_635940() != 0)
                        sub_65ffe0(0)
                        *(esi + 0x4a689) = 1
                    
                    bool cond:0_1 = sub_620a70() != 0
                    void* eax_47 = data_bac4a0
                    
                    if (not(cond:0_1))
                        *(eax_47 + 0x1a0) = 0
                    
                    int32_t i_18
                    
                    if (*(eax_47 + 0xcc) == 0 && *(data_bac458 + 0x378) != 0)
                        void* ebx_2 = data_bac408
                        int32_t i_33 = sub_5796c0(ebx_2 + 4)
                        int32_t i_16 = i_33
                        char var_231_1 = 0
                        
                        if (i_33 s<= 0)
                        label_6222c1:
                            char eax_56 = sub_635950()
                            char eax_58
                            
                            if (eax_56 == 0 && *(data_bac4e4 + 0x198) != 0)
                                eax_58 = sub_6b20a0(data_bac4c8 + 0xf8)
                            
                            if (eax_56 != 0 || (*(data_bac4e4 + 0x198) != 0 && eax_58 != 0))
                                *(data_bac4a0 + 0x1a5) = 1
                            else
                                void* eax_59 = sub_64da40()
                                
                                if (eax_59 != 0)
                                    sub_5d9410(eax_59, 1)
                        else
                            int32_t ecx_22 = *(ebx_2 + 0xa4)
                            int32_t i_42 = 0
                            var_244 = ecx_22
                            i_18 = 0
                            int32_t i_19 = i_33
                            void* esi_1 = ecx_22 + 0x398
                            int32_t eax_49
                            int32_t i_1
                            
                            do
                                eax_49 = sub_579670(esi_1)
                                int32_t ebx_3 = 0
                                
                                if (eax_49 s> 0)
                                    void* edi_4 = *(i_42 + var_244 + 0x438)
                                    
                                    do
                                        if (sub_5d95e0(edi_4).b != 0)
                                            i_42 = i_18
                                            eax_49.b = 1
                                            var_231_1 = 1
                                            goto label_6221d2
                                        
                                        ebx_3 += 1
                                        edi_4 += 0x19b0
                                    while (ebx_3 s< eax_49)
                                    
                                    i_42 = i_18
                                
                                eax_49.b = var_231_1
                            label_6221d2:
                                i_42 += 0x8ec
                                esi_1 += 0x8ec
                                i_1 = i_19
                                i_19 -= 1
                                i_18 = i_42
                            while (i_1 != 1)
                            esi = var_240
                            
                            if (eax_49.b == 0)
                                goto label_6222c1
                            
                            char eax_51 = sub_635970()
                            void* edx_4 = data_bac4a0
                            
                            if (eax_51 != 0)
                                *(edx_4 + 0x1e8) = 1
                            else if (*(data_bac4e4 + 0x198) != 0
                                    && sub_6b20a0(data_bac4c8 + 0xf8) != 0)
                                *(edx_4 + 0x1e8) = 1
                            
                            if (*(edx_4 + 0x1e8) != 0)
                                void* edi_5 = data_bac408
                                int32_t esi_2 = 0
                                int32_t i_2
                                
                                do
                                    int32_t j_1 = sub_579670(*(edi_5 + 0xa4) + 0x398 + esi_2)
                                    
                                    if (j_1 s> 0)
                                        int32_t edi_6 = 0
                                        int32_t j
                                        
                                        do
                                            sub_5d7f80(*(esi_2 + *(data_bac408 + 0xa4) + 0x438)
                                                + edi_6)
                                            edi_6 += 0x19b0
                                            j = j_1
                                            j_1 -= 1
                                        while (j != 1)
                                        edi_5 = data_bac408
                                    
                                    esi_2 += 0x8ec
                                    i_2 = i_16
                                    i_16 -= 1
                                while (i_2 != 1)
                                esi = var_240
                    
                    int32_t i_28 = sub_5796c0(esi + 0x56a94)
                    
                    if (i_28 s> 0)
                        int32_t edi_7 = 0
                        int32_t i_3
                        
                        do
                            sub_608750(*(esi + 0x56b34) + edi_7)
                            edi_7 += 0x8ec
                            i_3 = i_28
                            i_28 -= 1
                        while (i_3 != 1)
                    
                    sub_5ce960(esi + 0x56b64)
                    int32_t i_29 = sub_5796c0(esi + 0x62e78)
                    
                    if (i_29 s> 0)
                        int32_t edi_8 = 0
                        int32_t i_4
                        
                        do
                            sub_608750(*(esi + 0x62f18) + edi_8)
                            edi_8 += 0x8ec
                            i_4 = i_29
                            i_29 -= 1
                        while (i_4 != 1)
                    
                    int32_t ebx_4 = *(esi + 0x4b044)
                    int32_t edi_9 = *(esi + 0x4b050)
                    *(esi + 0x4b370) += *(esi + 0x4b05c)
                    bool cond:1_1 = *(esi + 0x4af95) != 0
                    var_244 = edi_9
                    
                    if (not(cond:1_1))
                        if (*(esi + 0x4af96) == 0)
                            int32_t i_34 = sub_55aed0(esi + 0x56468)
                            int32_t i_20 = i_34
                            
                            if (i_34 s> 0)
                                int32_t edx_5 = 0
                                int32_t i_5
                                
                                do
                                    sub_5b7ff0(*(esi + 0x56508) + edx_5, edi_9, ebx_4)
                                    edx_5 += 0xb4
                                    i_5 = i_20
                                    i_20 -= 1
                                while (i_5 != 1)
                        
                        int32_t i_35 = (*(esi + 0x56a80) - *(esi + 0x56a7c)) s/ 0x118
                        i_18 = i_35
                        
                        if (i_35 s> 0)
                            int32_t eax_67 = 0
                            int32_t var_230_1 = 0
                            int32_t i_6
                            
                            do
                                sub_5c3f40(*(esi + 0x56a7c) + eax_67, edi_9, ebx_4)
                                eax_67 = var_230_1 + 0x118
                                i_6 = i_18
                                i_18 -= 1
                                var_230_1 = eax_67
                            while (i_6 != 1)
                        
                        sub_5fa890(esi + 0x61f5c, edi_9, ebx_4)
                        
                        if (*(esi + 0x4af97) == 0)
                            sub_5bfed0(esi + 0x5651c, edi_9, ebx_4)
                            int32_t i_36 = (*(esi + 0x56890) - *(esi + 0x5688c)) s/ 0x2cc
                            int32_t i_21 = i_36
                            
                            if (i_36 s> 0)
                                int32_t edx_12 = 0
                                int32_t i_7
                                
                                do
                                    sub_5bfed0(*(esi + 0x5688c) + edx_12, edi_9, ebx_4)
                                    edx_12 += 0x2cc
                                    i_7 = i_21
                                    i_21 -= 1
                                while (i_7 != 1)
                        
                        if (*(esi + 0x4af98) == 0)
                            sub_6087f0(*(esi + 0x56b34), edi_9, ebx_4)
                            sub_6087f0(*(esi + 0x56b34) + 0x8ec, edi_9, ebx_4)
                            
                            if (*(esi + 0x4b348) s>= 0)
                                sub_6087f0(*(esi + 0x56b34) + 0x11d8, edi_9, ebx_4)
                        
                        if (*(esi + 0x4b32c) != 0xffffffff)
                            if (*(esi + 0x4b334) != 0)
                                *(esi + 0x4b314) += ebx_4
                            else
                                *(esi + 0x4b314) += edi_9
                        
                        sub_5ff990(esi + 0x6217c, ebx_4)
                        int32_t i_37 = (*(esi + 0x62470) - *(esi + 0x6246c)) s/ 0x250
                        int32_t i_22 = i_37
                        
                        if (i_37 s> 0)
                            int32_t edi_10 = 0
                            int32_t i_8
                            
                            do
                                sub_601f90(*(esi + 0x6246c) + edi_10, ebx_4)
                                edi_10 += 0x250
                                i_8 = i_22
                                i_22 -= 1
                            while (i_8 != 1)
                            edi_9 = var_244
                    
                    if (*(esi + 0x630c4) != 0)
                        int32_t i_38 = (*(esi + 0x62a60) - *(esi + 0x62a5c)) s/ 0xb4
                        int32_t i_23 = i_38
                        
                        if (i_38 s> 0)
                            int32_t edx_19 = 0
                            int32_t i_9
                            
                            do
                                sub_5b7ff0(*(esi + 0x62a5c) + edx_19, edi_9, ebx_4)
                                edx_19 += 0xb4
                                i_9 = i_23
                                i_23 -= 1
                            while (i_9 != 1)
                        
                        sub_5bfed0(esi + 0x62a70, edi_9, ebx_4)
                        int32_t i_39 = (*(esi + 0x62de4) - *(esi + 0x62de0)) s/ 0x2cc
                        int32_t i_24 = i_39
                        
                        if (i_39 s> 0)
                            int32_t edx_23 = 0
                            int32_t i_10
                            
                            do
                                sub_5bfed0(*(esi + 0x62de0) + edx_23, edi_9, ebx_4)
                                edx_23 += 0x2cc
                                i_10 = i_24
                                i_24 -= 1
                            while (i_10 != 1)
                        
                        sub_6087f0(*(esi + 0x62f18), edi_9, ebx_4)
                        sub_6087f0(*(esi + 0x62f18) + 0x8ec, edi_9, ebx_4)
                        
                        if (*(esi + 0x4b348) s>= 0)
                            sub_6087f0(*(esi + 0x62f18) + 0x11d8, edi_9, ebx_4)
                    
                    sub_748840(esi + 0x50508, data_bac4c8, 0x5100)
                    int32_t* ecx_81 = data_bac42c
                    *(esi + 0x50508) = *ecx_81
                    *(esi + 0x5050c) = ecx_81[1]
                    sub_6b24d0(esi + 0x4b408)
                    sub_622ca0(esi)
                    sub_624950(esi)
                    i_18.b = *(esi + 0x4a748)
                    var_240.b = *(esi + 0x4a74c) != 0
                    
                    if (sub_621b20() != 0)
                        i_18.b = 0
                        var_240.b = 0
                    
                    sub_6a6a60(esi + 0x4b348)
                    int32_t i_40 = (*(esi + 0x56a80) - *(esi + 0x56a7c)) s/ 0x118
                    int32_t i_25 = i_40
                    
                    if (i_40 s> 0)
                        void* ebx_5 = nullptr
                        int32_t i_11
                        
                        do
                            int32_t edi_12 = *(esi + 0x56a7c)
                            void* ecx_89 = ebx_5 + 0xb8 + edi_12
                            bool cond:6_1 = *(ecx_89 + 0x20) == 0xffffffff
                            *(ecx_89 + 0x18) = *(ecx_89 + 4)
                            
                            if (not(cond:6_1))
                                sub_5c1b40(ecx_89)
                            
                            void* ecx_91 = ebx_5 + 0xe4 + edi_12
                            bool cond:7_1 = *(ecx_91 + 0x20) == 0xffffffff
                            *(ecx_91 + 0x18) = *(ecx_91 + 4)
                            
                            if (not(cond:7_1))
                                sub_5c1b40(ecx_91)
                            
                            ebx_5 += 0x118
                            i_11 = i_25
                            i_25 -= 1
                        while (i_11 != 1)
                        ebx_4 = ebx_4
                    
                    sub_5fa900(esi + 0x61f5c)
                    
                    if (*(esi + 0x5663c) s>= 0 && *(esi + 0x56640) s>= 0 && *(esi + 0x56644) s>= 0
                            && sub_5b8040(esi + 0x56730) s>= *(esi + 0x56644))
                        sub_5bf760(esi + 0x5651c, 1)
                    
                    int32_t i_44 = (*(esi + 0x56890) - *(esi + 0x5688c)) s/ 0x2cc
                    int32_t i_31 = i_44
                    
                    if (i_44 s> 0)
                        int32_t i_27 = i_31
                        int32_t eax_94 = 0
                        int32_t var_230_2 = 0
                        int32_t i_12
                        
                        do
                            void* edi_15 = *(esi + 0x5688c) + eax_94
                            
                            if (*(edi_15 + 0x120) s>= 0 && *(edi_15 + 0x124) s>= 0
                                    && *(edi_15 + 0x128) s>= 0)
                                if (sub_5b8040(edi_15 + 0x214) s>= *(edi_15 + 0x128))
                                    sub_5bf760(edi_15, 1)
                                
                                i_27 = i_31
                                eax_94 = var_230_2
                            
                            eax_94 += 0x2cc
                            i_12 = i_27
                            i_27 -= 1
                            var_230_2 = eax_94
                            i_31 = i_27
                        while (i_12 != 1)
                    
                    int32_t eax_96 = sub_5cb350(esi + 0x62538)
                    
                    if (eax_96 != 2 && eax_96 != 3)
                        sub_6089d0(*(esi + 0x56b34) + 0x8ec, i_18, var_240, 0)
                        
                        if (*(esi + 0x4b348) s>= 0)
                            sub_6089d0(*(esi + 0x56b34) + 0x11d8, i_18, var_240, 0)
                    
                    bool cond:8_1 = *(esi + 0x4b32c) == 0xffffffff
                    *(esi + 0x4b324) = *(esi + 0x4b310)
                    
                    if (not(cond:8_1))
                        sub_5c1b40(esi + 0x4b30c)
                    
                    int32_t eax_98
                    int32_t edx_30
                    edx_30:eax_98 = muls.dp.d(0x4d4873ed, *(esi + 0x626dc) - *(esi + 0x626d8))
                    int32_t edx_31 = edx_30 s>> 6
                    int32_t i_41 = (edx_31 u>> 0x1f) + edx_31
                    int32_t i_17 = i_41
                    
                    if (i_41 s> 0)
                        int32_t edi_17 = var_244
                        int32_t eax_101 = 0
                        int32_t var_230_3 = 0
                        int32_t i_13
                        
                        do
                            sub_5f8860(*(esi + 0x626d8) + eax_101, edi_17, ebx_4)
                            eax_101 = var_230_3 + 0xd4
                            i_13 = i_17
                            i_17 -= 1
                            var_230_3 = eax_101
                        while (i_13 != 1)
                    
                    int32_t edx_32
                    edx_32:hWnd = muls.dp.d(0x30c30c31, *(esi + 0x62794) - *(esi + 0x62790))
                    int32_t edx_33 = edx_32 s>> 6
                    int32_t i_30 = (edx_33 u>> 0x1f) + edx_33
                    
                    if (i_30 s> 0)
                        int32_t edi_18 = 0
                        int32_t i_14
                        
                        do
                            sub_5b9940(*(esi + 0x62790) + edi_18)
                            edi_18 += 0x150
                            i_14 = i_30
                            i_30 -= 1
                        while (i_14 != 1)
                    
                    void* ebx_10
                    int32_t i_43
                    
                    if (*(esi + 0x630c4) == 0)
                        i_43 = i_18
                        ebx_10 = var_240
                    else
                        if (*(esi + 0x62b90) s>= 0 && *(esi + 0x62b94) s>= 0)
                            int32_t ebx_8 = *(esi + 0x62b98)
                            
                            if (ebx_8 s>= 0 && sub_5b8040(esi + 0x62c84) s>= ebx_8)
                                sub_5bf760(esi + 0x62a70, 1)
                        
                        int32_t i_26 = (*(esi + 0x62de4) - *(esi + 0x62de0)) s/ 0x2cc
                        int32_t i_32 = i_26
                        
                        if (i_26 s> 0)
                            int32_t ebx_9 = 0
                            int32_t i_15
                            
                            do
                                void* edi_20 = *(esi + 0x62de0) + ebx_9
                                
                                if (*(edi_20 + 0x120) s>= 0 && *(edi_20 + 0x124) s>= 0
                                        && *(edi_20 + 0x128) s>= 0)
                                    if (sub_5b8040(edi_20 + 0x214) s>= *(edi_20 + 0x128))
                                        sub_5bf760(edi_20, 1)
                                    
                                    i_26 = i_32
                                
                                ebx_9 += 0x2cc
                                i_15 = i_26
                                i_26 -= 1
                                i_32 = i_26
                            while (i_15 != 1)
                        
                        ebx_10 = var_240
                        i_43 = i_18
                        sub_6089d0(*(esi + 0x62f18) + 0x8ec, i_43, ebx_10, *(data_bac510 + 0x17364))
                        
                        if (*(esi + 0x4b348) s>= 0)
                            sub_6089d0(*(esi + 0x62f18) + 0x11d8, i_43, ebx_10, 
                                *(data_bac510 + 0x17364))
                    
                    if (*(esi + 0x56c9c) != 0)
                        sub_5ceaf0(esi + 0x56b64, i_43.b, ebx_10.b)
                    
                    hWnd.b = 1
        else
            int32_t* eax_9 = data_4ebe290
            
            if (eax_9 == 0)
                goto label_621deb
            
            (*(*eax_9 + 0x2c))(eax_9, &var_244)
            
            if (var_244 != 9)
                goto label_621deb
            
            *(esi + 0x4a750) = 0
            hWnd.b = 1
else
    hWnd.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd
