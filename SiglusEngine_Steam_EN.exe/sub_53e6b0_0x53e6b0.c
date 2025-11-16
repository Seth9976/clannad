// 函数: sub_53e6b0
// 地址: 0x53e6b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = data_1bfdd30

if (eax_2 u> 0xc8)
label_53f854:
    data_1b8b06c = 1
label_53f865:
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_2

eax_2 = zx.d(lookup_table_53f8e0[eax_2])
char const* const var_334_1
char* var_334_2
uint32_t var_314
BOOL var_30c
char* var_308
char var_304[0x200]
char* eax_15
char** eax_20
char* eax_29
char** eax_38
int32_t eax_43
int32_t eax_44
int32_t eax_47
int32_t eax_70
void* ecx_1
char* edx_13
char* edx_31
uint32_t edi_16

switch (eax_2)
    case 0
        int32_t eax_3 = data_1af4e84
        var_304[0] = 0
        
        if (eax_3 == 0)
            int32_t eax_7 = sub_4a4620(
                sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "&S", &data_1b8a720), data_1b8a73c, 
                data_1b8a730, data_1b8a72c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_7
        
        eax_2 = eax_3 - 1
        
        if (eax_3 != 1)
            goto label_53f865
        
        eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "&S$", &data_1b8a720)
        void* edx_1 = data_1b8a73c
        
        if (edx_1 == 0)
            goto label_53ea56
        
        int32_t edi_1 = data_1b8a748
        ecx_1 = &var_304
        int32_t esi_1 = 0
        
        if (edi_1 != 0)
            do
                eax_2.b = *edx_1
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u< 0x80)
                label_53e766:
                    *ecx_1 = eax_2.b
                    ecx_1 += 1
                    edx_1 += 1
                else
                    if (eax_2.b u< 0xa0)
                        if (eax_2.b u>= 0xfe)
                            goto label_53e766
                    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                        goto label_53e766
                    
                    *ecx_1 = eax_2.b
                    eax_2.b = *(edx_1 + 1)
                    *(ecx_1 + 1) = eax_2.b
                    ecx_1 += 2
                    edx_1 += 2
                
                esi_1 += 1
            while (esi_1 != edi_1)
        
    label_53e76f:
        int32_t* var_328_1 = data_1b8a72c
        *ecx_1 = 0
        int32_t eax_5 = sub_4a4620(eax_2, &var_304, data_1b8a730, var_328_1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_5
    case 1
        int32_t eax_8 = data_1af4e84
        
        if (eax_8 == 0)
            int32_t eax_11 =
                sub_4a4620(sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), &%", &data_1b8a720), 
                nullptr, data_1b8a730, data_1b8a72c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_11
        
        eax_2 = eax_8 - 1
        
        if (eax_8 == 1)
            eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "&&", &data_1b8a720)
            int32_t* ecx_10 = data_1b8a72c
            
            if (ecx_10 == data_1b8a740)
                uint32_t esi_2 = data_1b8a730
                uint32_t edi_2 = data_1b8a744
                
                if (esi_2 s> edi_2)
                    eax_2 = esi_2
                    esi_2 = edi_2
                    edi_2 = eax_2
                
                int32_t edi_4 = edi_2 - esi_2 + 1
                
                if (edi_4 s> 0)
                    while (true)
                        eax_2 = sub_4a4620(eax_2, nullptr, esi_2, ecx_10)
                        esi_2 += 1
                        int32_t temp26_1 = edi_4
                        edi_4 -= 1
                        
                        if (temp26_1 == 1)
                            break
                        
                        ecx_10 = data_1b8a72c
        
        goto label_53f865
    case 2
        char* eax_13 = sub_4a4760(
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "&S", &data_1b8a720), data_1b8a73c, 
            data_1b8a730, data_1b8a72c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_13
    case 3
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        eax_2 = sub_4cfc80(data_1b8a728)
        data_715e98 = eax_2
        
        if (eax_2 s<= 0)
            goto label_53f865
        
        data_715e98 = eax_2 - 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_2 - 1
    case 4
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "SS", &data_1b8a720)
        eax_15 = sub_4d0f10(data_1b8a728, data_1b8a73c)
        
        if (eax_15 s< 0)
            goto label_53f3ef
        
        int32_t eax_16
        eax_16.b = eax_15 s> 0
        data_715e98 = eax_16
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_16
    case 5
        int32_t eax_17 = data_1af4e84
        var_304[0] = 0
        
        if (eax_17 == 0)
            int32_t* var_328_4 = &data_1b8a720
            sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "&S$", &data_1b8a720)
        else if (eax_17 == 1)
            int32_t* var_328_3 = &data_1b8a720
            sub_4ef190(eax_17 - 1, arg2 + 0x20, *(arg2 + 0x20), "&S$$", &data_1b8a720)
        
        int32_t esi_3 = data_1b8a748
        eax_2 = 0
        edx_13 = data_1b8a73c
        
        if (esi_3 s< 0)
            esi_3 = 0
        
        int32_t ecx_30 = 0
        data_1b8a748 = esi_3
        
        if (edx_13 == 0)
            goto label_53ea56
        
        if (esi_3 != 0)
            do
                eax_2.b = *edx_13
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u< 0x80)
                    edx_13 = &edx_13[1]
                else if (eax_2.b u< 0xa0)
                    if (eax_2.b u>= 0xfe)
                        edx_13 = &edx_13[1]
                    else
                        edx_13 = &edx_13[2]
                else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                    edx_13 = &edx_13[1]
                else
                    edx_13 = &edx_13[2]
                
                ecx_30 += 1
            while (ecx_30 != esi_3)
        
        int32_t eax_19 = data_1af4e84
        eax_20 = eax_19
        
        if (eax_19 == 0)
            goto label_53eed3
        
        eax_2 = eax_20 - 1
        
        if (eax_20 != 1)
            goto label_53f865
        
        int32_t edi_5 = data_1b8a75c
        ecx_1 = &var_304
        int32_t esi_4 = 0
        
        if (edi_5 != 0)
            do
                eax_2.b = *edx_13
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u< 0x80)
                label_53ea3a:
                    *ecx_1 = eax_2.b
                    ecx_1 += 1
                    edx_13 = &edx_13[1]
                else
                    if (eax_2.b u< 0xa0)
                        if (eax_2.b u>= 0xfe)
                            goto label_53ea3a
                    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                        goto label_53ea3a
                    
                    *ecx_1 = eax_2.b
                    eax_2.b = edx_13[1]
                    *(ecx_1 + 1) = eax_2.b
                    ecx_1 += 2
                    edx_13 = &edx_13[2]
                
                esi_4 += 1
            while (esi_4 != edi_5)
        
        goto label_53e76f
    case 6
        int32_t eax_22 = data_1af4e84
        var_304[0] = 0
        
        if (eax_22 == 0)
            int32_t* var_328_7 = &data_1b8a720
            sub_4ef190(eax_22, arg2 + 0x20, *(arg2 + 0x20), "&S$", &data_1b8a720)
        else if (eax_22 == 1)
            int32_t* var_328_6 = &data_1b8a720
            sub_4ef190(eax_22 - 1, arg2 + 0x20, *(arg2 + 0x20), "&S$$", &data_1b8a720)
        
        int32_t edi_7 = data_1b8a748
        eax_2 = 0
        edx_13 = data_1b8a73c
        char* esi_5 = edx_13
        
        if (edi_7 s< 0)
            edi_7 = 0
        
        int32_t ecx_35 = 0
        data_1b8a748 = edi_7
        
        if (esi_5 == 0)
            goto label_53ea56
        
        eax_2.b = *esi_5
        
        if (eax_2.b != 0)
            ecx_35 = 0
            
            do
                if (eax_2.b u< 0x80)
                    esi_5 = &esi_5[1]
                else if (eax_2.b u< 0xa0)
                    if (eax_2.b u>= 0xfe)
                        esi_5 = &esi_5[1]
                    else
                        esi_5 = &esi_5[2]
                else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                    esi_5 = &esi_5[1]
                else
                    esi_5 = &esi_5[2]
                
                eax_2.b = *esi_5
                ecx_35 += 1
            while (eax_2.b != 0)
        
        if (ecx_35 s> edi_7)
            int32_t i = 0
            
            if (ecx_35 != edi_7)
                do
                    eax_2.b = *edx_13
                    
                    if (eax_2.b == 0)
                        break
                    
                    if (eax_2.b u< 0x80)
                        edx_13 = &edx_13[1]
                    else if (eax_2.b u< 0xa0)
                        if (eax_2.b u>= 0xfe)
                            edx_13 = &edx_13[1]
                        else
                            edx_13 = &edx_13[2]
                    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                        edx_13 = &edx_13[1]
                    else
                        edx_13 = &edx_13[2]
                    
                    i += 1
                while (i != ecx_35 - edi_7)
        
        int32_t eax_24 = data_1af4e84
        eax_20 = eax_24
        
        if (eax_24 == 0)
            goto label_53eed3
        
        eax_2 = eax_20 - 1
        
        if (eax_20 != 1)
            goto label_53f865
        
        int32_t edi_8 = data_1b8a75c
        ecx_1 = &var_304
        int32_t esi_6 = 0
        
        if (edi_8 != 0)
            do
                eax_2.b = *edx_13
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u< 0x80)
                label_53eb7a:
                    *ecx_1 = eax_2.b
                    ecx_1 += 1
                    edx_13 = &edx_13[1]
                else
                    if (eax_2.b u< 0xa0)
                        if (eax_2.b u>= 0xfe)
                            goto label_53eb7a
                    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                        goto label_53eb7a
                    
                    *ecx_1 = eax_2.b
                    eax_2.b = edx_13[1]
                    *(ecx_1 + 1) = eax_2.b
                    ecx_1 += 2
                    edx_13 = &edx_13[2]
                
                esi_6 += 1
            while (esi_6 != edi_8)
        
        goto label_53e76f
    case 7
        char i_1 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        char* ecx_38 = data_1b8a728
        int32_t edx_16 = 0
        
        if (ecx_38 != 0)
            i_1 = *ecx_38
            
            while (i_1 != 0)
                if (i_1 u< 0x80)
                    ecx_38 = &ecx_38[1]
                else if (i_1 u< 0xa0)
                    if (i_1 u>= 0xfe)
                        ecx_38 = &ecx_38[1]
                    else
                        ecx_38 = &ecx_38[2]
                else if (i_1 u<= 0xdf || i_1 u>= 0xfe)
                    ecx_38 = &ecx_38[1]
                else
                    ecx_38 = &ecx_38[2]
                
                i_1 = *ecx_38
                edx_16 += 1
        
        data_715e98 = edx_16
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return i_1
    case 8
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "&$", &data_1b8a720)
        char* edi_9 = data_1b8a728
        eax_2 = edi_9
        int32_t ecx_42 = 0
        
        if (eax_2 == 0)
            goto label_53f865
        
        while (*eax_2 != 0)
            if (ecx_42 == data_1b8a734)
                *eax_2 = 0
                edi_9 = data_1b8a728
                break
            
            char edx_18 = *eax_2
            
            if (edx_18 u< 0x80)
                eax_2 += 1
            else if (edx_18 u< 0xa0)
                if (edx_18 u>= 0xfe)
                    eax_2 += 1
                else
                    eax_2 += 2
            else if (edx_18 u<= 0xdf || edx_18 u>= 0xfe)
                eax_2 += 1
            else
                eax_2 += 2
            
            ecx_42 += 1
        
        int32_t eax_25 = sub_4a4620(eax_2, edi_9, data_1b8a730, data_1b8a72c)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_25
    case 9
        int32_t eax_26 = data_1af4e84
        
        if (eax_26 == 0)
            char** eax_30 = sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), U"&%", &data_1b8a720)
            var_308 = nullptr
            var_30c = 0
            eax_29 = sub_4cfee0(eax_30, &var_308, &var_30c, data_1b8a728)
        label_53ed1c:
            sub_4a4620(eax_29, var_308, data_1b8a730, data_1b8a72c)
        else
            eax_2 = eax_26 - 1
            
            if (eax_26 != 1)
                goto label_53f865
            
            char** eax_28 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&", &data_1b8a720)
            var_308 = nullptr
            var_30c = 0
            sub_4a4620(sub_4cfee0(eax_28, &var_308, &var_30c, data_1b8a728), var_308, data_1b8a744, 
                data_1b8a740)
    case 0xa
        int32_t eax_32 = data_1af4e84
        
        if (eax_32 == 0)
            char** eax_35 = sub_4ef190(eax_32, arg2 + 0x20, *(arg2 + 0x20), U"&%", &data_1b8a720)
            var_308 = nullptr
            var_30c = 0
            eax_29 = sub_4d0460(eax_35, &var_308, &var_30c, data_1b8a728)
            goto label_53ed1c
        
        eax_2 = eax_32 - 1
        
        if (eax_32 != 1)
            goto label_53f865
        
        char** eax_34 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&", &data_1b8a720)
        var_308 = nullptr
        var_30c = 0
        sub_4a4620(sub_4d0460(eax_34, &var_308, &var_30c, data_1b8a728), var_308, data_1b8a744, 
            data_1b8a740)
    case 0xb
        int32_t eax_36 = data_1af4e84
        
        if (eax_36 == 0)
            eax_20 = sub_4ef190(eax_36, arg2 + 0x20, *(arg2 + 0x20), U"&%", &data_1b8a720)
            edx_13 = data_1b8a728
            
            if (edx_13 == 0)
                goto label_53eed3
            
            while (true)
                eax_20.b = *edx_13
                
                if (eax_20.b u>= 0x80 && (eax_20.b u< 0xa0 || eax_20.b u> 0xdf) && eax_20.b u< 0xfe)
                    edx_13 = &edx_13[2]
                    continue
                
                if (eax_20.b == 0)
                    break
                
                if (eax_20.b u>= 0x61 && eax_20.b u<= 0x7a)
                    eax_20.b -= 0x20
                    *edx_13 = eax_20.b
                
                edx_13 = &edx_13[1]
            
        label_53eec1:
            edx_13 = data_1b8a728
        label_53eed3:
            int32_t eax_39 = sub_4a4620(eax_20, edx_13, data_1b8a730, data_1b8a72c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_39
        
        eax_2 = eax_36 - 1
        
        if (eax_36 != 1)
            goto label_53f865
        
        eax_38 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&", &data_1b8a720)
        edx_31 = data_1b8a728
        
        if (edx_31 == 0)
            goto label_53f04e
        
        while (true)
            eax_38.b = *edx_31
            
            if (eax_38.b u>= 0x80 && (eax_38.b u< 0xa0 || eax_38.b u> 0xdf) && eax_38.b u< 0xfe)
                edx_31 = &edx_31[2]
                continue
            
            if (eax_38.b == 0)
                break
            
            if (eax_38.b u>= 0x61 && eax_38.b u<= 0x7a)
                eax_38.b -= 0x20
                *edx_31 = eax_38.b
            
            edx_31 = &edx_31[1]
        
        edx_31 = data_1b8a728
        goto label_53f04e
    case 0xc
        int32_t eax_40 = data_1af4e84
        
        if (eax_40 == 0)
            eax_20 = sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), U"&%", &data_1b8a720)
            edx_13 = data_1b8a728
            
            if (edx_13 == 0)
                goto label_53eed3
            
            while (true)
                eax_20.b = *edx_13
                
                if (eax_20.b u>= 0x80 && (eax_20.b u< 0xa0 || eax_20.b u> 0xdf) && eax_20.b u< 0xfe)
                    edx_13 = &edx_13[2]
                    continue
                
                if (eax_20.b == 0)
                    break
                
                if (eax_20.b u>= 0x41 && eax_20.b u<= 0x5a)
                    eax_20.b += 0x20
                    *edx_13 = eax_20.b
                
                edx_13 = &edx_13[1]
            
            goto label_53eec1
        
        eax_2 = eax_40 - 1
        
        if (eax_40 != 1)
            goto label_53f865
        
        eax_38 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&", &data_1b8a720)
        edx_31 = data_1b8a728
        
        if (edx_31 == 0)
            goto label_53f04e
        
        while (true)
            eax_38.b = *edx_31
            
            if (eax_38.b u>= 0x80 && (eax_38.b u< 0xa0 || eax_38.b u> 0xdf) && eax_38.b u< 0xfe)
                edx_31 = &edx_31[2]
                continue
            
            if (eax_38.b == 0)
                break
            
            if (eax_38.b u>= 0x41 && eax_38.b u<= 0x5a)
                eax_38.b += 0x20
                *edx_31 = eax_38.b
            
            edx_31 = &edx_31[1]
        
        edx_31 = data_1b8a728
        goto label_53f04e
    case 0xd
        int32_t eax_42 = data_1af4e84
        eax_43 = eax_42
        void var_104
        
        if (eax_42 == 0)
        label_53f01d:
            sub_4ef190(eax_43, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
            int32_t var_330_7 = data_1b8a720
            var_334_2 = "%$!d"
        label_53f034:
            eax_38 = sub_4c84d0(&var_104, var_334_2)
        else
            eax_2 = eax_43 - 1
            
            if (eax_43 != 1)
                goto label_53f865
            
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$&$", &data_1b8a720)
            eax_44 = sub_53e660(data_1b8a720, data_1b8a748)
            int32_t var_330_5 = eax_44
            var_334_1 = "^%^$^!%d^d"
        label_53efe1:
            data_1b8a748 = eax_44
            void var_3c
            sub_4c84d0(&var_3c, var_334_1)
            int32_t var_328_10 = data_1b8a720
            eax_38 = sub_4c84d0(&var_104, &var_3c)
        
        edx_31 = &var_104
    label_53f04e:
        int32_t eax_45 = sub_4a4620(eax_38, edx_31, data_1b8a744, data_1b8a740)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_45
    case 0xe
        int32_t eax_46 = data_1af4e84
        eax_47 = eax_46
        
        if (eax_46 == 0)
        label_53f0b8:
            sub_4ef190(eax_47, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
            int32_t var_330_9 = data_1b8a720
            var_334_2 = &data_61c68c
            goto label_53f034
        
        eax_2 = eax_47 - 1
        
        if (eax_47 != 1)
            goto label_53f865
        
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$&$", &data_1b8a720)
        eax_44 = sub_53e660(data_1b8a720, data_1b8a748)
        int32_t var_330_8 = eax_44
        var_334_1 = "^%^$%d^d"
        goto label_53efe1
    case 0xf
        int32_t eax_48 = data_1af4e84
        eax_43 = eax_48
        
        if (eax_48 == 0)
            goto label_53f01d
        
        eax_2 = eax_43 - 1
        
        if (eax_43 != 1)
            goto label_53f865
        
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$&$", &data_1b8a720)
        eax_44 = sub_53e660(data_1b8a720, data_1b8a748)
        int32_t var_330_10 = eax_44
        var_334_1 = "^%^$^!^0%d^d"
        goto label_53efe1
    case 0x10
        int32_t eax_49 = data_1af4e84
        eax_47 = eax_49
        
        if (eax_49 == 0)
            goto label_53f0b8
        
        eax_2 = eax_47 - 1
        
        if (eax_47 != 1)
            goto label_53f865
        
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$&$", &data_1b8a720)
        eax_44 = sub_53e660(data_1b8a720, data_1b8a748)
        int32_t var_330_11 = eax_44
        var_334_1 = "^%^$^0%d^d"
        goto label_53efe1
    case 0x11
        char** eax_50 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        var_308 = nullptr
        var_30c = 0
        sub_4d0460(eax_50, &var_308, &var_30c, data_1b8a728)
        sub_4d11d0(&var_314, nullptr, var_308, &var_314)
        data_715e98 = var_314
    case 0x12
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_53 = sub_53e660(data_1b8a720, 0)
        data_715e98 = eax_53
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_53
    case 0x13
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$%$", &data_1b8a720)
        int32_t ecx_86 = data_1b8a720
        
        if (ecx_86 s< 0)
            ecx_86 = neg.d(ecx_86)
            data_1b8a720 = ecx_86
        
        BOOL eax_54 = sub_53e660(ecx_86, 0)
        int32_t ecx_87 = data_1b8a748
        var_30c = eax_54
        
        if (ecx_87 s<= 0)
            ecx_87 = 1
        else if (ecx_87 s> 0xa)
            ecx_87 = 0xa
        
        uint32_t eax_55 = data_1b8a744
        uint32_t esi_8 = eax_55
        data_1b8a748 = ecx_87
        var_314 = eax_55
        char* edi_11 = eax_55 - 1 + ecx_87
        var_308 = edi_11
        
        do
            eax_55 = sub_4e8000(eax_55, esi_8, data_1b8a740, 0, &data_704898)
            esi_8 += 1
        while (esi_8 s<= edi_11)
        
        BOOL eax_56 = var_30c
        int32_t esi_9 = 0
        int32_t ecx_89 = data_1b8a720
        
        if (eax_56 s> 0)
            while (true)
                int32_t edi_14 = ecx_89 s/ 0xa
                sub_4e8000(edi_14 * 0xa, var_308, data_1b8a740, ecx_89 s% 0xa, &data_704898)
                void* eax_61 = var_308 - 1
                var_308 = eax_61
                
                if (var_314 s> eax_61)
                    break
                
                eax_56 = var_30c
                ecx_89 = edi_14
                
                if (ecx_89 == 0)
                    goto label_53f3da
                
                esi_9 += 1
                
                if (esi_9 s>= eax_56)
                    data_715e98 = eax_56
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return eax_56
            
        label_53f3d4:
            eax_56 = var_30c
        
    label_53f3da:
        data_715e98 = eax_56
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_56
    case 0x14
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "SS", &data_1b8a720)
        char* esi_10 = data_1b8a728
        eax_15 = data_1b8a73c
        var_308 = eax_15
        
        if (esi_10 == 0 || eax_15 == 0 || *esi_10 == 0 || *eax_15 == 0)
        label_53f3ef:
            data_715e98 = 0xffffffff
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_15
        
        var_314 = sub_4cfc80(eax_15) - 1
        var_30c = 0xffffffff
        BOOL edi_15 = 0
        
        do
            int32_t eax_64 = sub_4cfc80(esi_10)
            uint32_t ecx_97 = var_314
            
            if (eax_64 - 1 s< ecx_97)
                break
            
            if (sub_4d1be0(eax_64 - 1, var_308, esi_10, ecx_97) == 0)
                bool cond:2_1 = data_1bfdd30 == 0x1e
                var_30c = edi_15
                
                if (cond:2_1)
                    break
            
            int32_t eax_66
            eax_66.b = *esi_10
            
            if (eax_66.b u< 0x80)
                esi_10 = &esi_10[1]
            else if (eax_66.b u< 0xa0)
                if (eax_66.b u>= 0xfe)
                    esi_10 = &esi_10[1]
                else
                    esi_10 = &esi_10[2]
            else if (eax_66.b u<= 0xdf || eax_66.b u>= 0xfe)
                esi_10 = &esi_10[1]
            else
                esi_10 = &esi_10[2]
            
            edi_15 += 1
        while (*esi_10 != 0)
        
        goto label_53f3d4
    case 0x15
        eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&&", &data_1b8a720)
        char* ecx_104 = data_1b8a728
        var_30c = 0
        var_308 = nullptr
        data_715e98 = 0xffffffff
        
        if (ecx_104 == 0)
            goto label_53f865
        
        eax_2 = data_1b8a740
        
        if (eax_2 != data_1b8a754)
            goto label_53f865
        
        if (ecx_104 != 0)
            while (true)
                eax_2.b = *ecx_104
                
                if (eax_2.b u>= 0x80 && (eax_2.b u< 0xa0 || eax_2.b u> 0xdf) && eax_2.b u< 0xfe)
                    ecx_104 = &ecx_104[2]
                    continue
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u>= 0x61 && eax_2.b u<= 0x7a)
                    eax_2.b -= 0x20
                    *ecx_104 = eax_2.b
                
                ecx_104 = &ecx_104[1]
        
        edi_16 = data_1b8a744
        uint32_t ecx_105 = data_1b8a758
        
        if (edi_16 s> ecx_105)
            eax_2 = edi_16
            edi_16 = ecx_105
            ecx_105 = eax_2
        
        var_314 = 0
        int32_t ecx_107 = ecx_105 - edi_16 + 1
        
        if (ecx_107 s<= 0)
            goto label_53f865
        
        while (true)
            sub_4a48e0(&var_30c, &var_308, edi_16, &var_30c, data_1b8a740)
            BOOL edx_57 = var_30c
            BOOL ecx_110 = edx_57
            
            if (edx_57 != 0)
                while (true)
                    char eax_68 = *ecx_110
                    
                    if (eax_68 u>= 0x80 && (eax_68 u< 0xa0 || eax_68 u> 0xdf) && eax_68 u< 0xfe)
                        ecx_110 += 2
                        continue
                    
                    if (eax_68 == 0)
                        break
                    
                    if (eax_68 u>= 0x61 && eax_68 u<= 0x7a)
                        *ecx_110 = eax_68 - 0x20
                    
                    ecx_110 += 1
            
            int32_t eax_69 = sub_4d0f10(data_1b8a728, edx_57)
            eax_70 = sub_4d6c40(&var_308, &var_30c)
            
            if (eax_69 == 0)
                break
            
            edi_16 += 1
            uint32_t esi_13 = var_314 + 1
            var_314 = esi_13
            
            if (esi_13 s>= ecx_107)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_70
        
    label_53f566:
        data_715e98 = edi_16
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_70
    case 0x16
        eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S&&", &data_1b8a720)
        var_30c = 0
        bool cond:0_1 = data_1b8a728 == 0
        var_308 = nullptr
        data_715e98 = 0xffffffff
        
        if (cond:0_1)
            goto label_53f865
        
        int32_t edx_60 = data_1b8a740
        
        if (edx_60 != data_1b8a754)
            goto label_53f865
        
        edi_16 = data_1b8a744
        uint32_t ecx_118 = data_1b8a758
        
        if (edi_16 s> ecx_118)
            eax_2 = edi_16
            edi_16 = ecx_118
            ecx_118 = eax_2
        
        var_314 = 0
        int32_t ecx_120 = ecx_118 - edi_16 + 1
        
        if (ecx_120 s<= 0)
            goto label_53f865
        
        while (true)
            sub_4a48e0(&var_30c, &var_308, edi_16, &var_30c, edx_60)
            int32_t eax_72 = sub_4d0f10(data_1b8a728, var_30c)
            eax_70 = sub_4d6c40(&var_308, &var_30c)
            
            if (eax_72 == 0)
                break
            
            edi_16 += 1
            eax_2 = var_314 + 1
            var_314 = eax_2
            
            if (eax_2 s>= ecx_120)
                goto label_53f865
            
            edx_60 = data_1b8a740
        
        goto label_53f566
    case 0x17
        eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "&S$", &data_1b8a720)
        char* edx_65 = data_1b8a73c
        
        if (edx_65 == 0)
        label_53ea56:
            int32_t eax_21 = sub_4a4620(eax_2, nullptr, data_1b8a730, data_1b8a72c)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_21
        
        int32_t edi_17 = data_1b8a748
        
        if (edi_17 s<= 0)
            goto label_53ea56
        
        int32_t esi_15 = 0
        ecx_1 = &var_304
        
        if (edi_17 != 0)
            do
                eax_2.b = *edx_65
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u< 0x80)
                label_53f6eb:
                    *ecx_1 = eax_2.b
                    edx_65 = &edx_65[1]
                    ecx_1 += 1
                    esi_15 += 1
                else
                    if (eax_2.b u< 0xa0)
                        if (eax_2.b u>= 0xfe)
                            goto label_53f6eb
                    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                        goto label_53f6eb
                    
                    eax_2 = edi_17 - 2
                    
                    if (esi_15 s> eax_2)
                        break
                    
                    eax_2.b = *edx_65
                    *ecx_1 = eax_2.b
                    eax_2 = zx.d(edx_65[1])
                    edx_65 = &edx_65[2]
                    *(ecx_1 + 1) = eax_2.b
                    ecx_1 += 2
                    esi_15 += 2
            while (esi_15 != edi_17)
        
        goto label_53e76f
    case 0x18
        eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "&$", &data_1b8a720)
        char* edx_67 = data_1b8a728
        
        if (edx_67 == 0)
            goto label_53ea56
        
        int32_t edi_18 = data_1b8a734
        
        if (edi_18 s<= 0)
            goto label_53ea56
        
        int32_t esi_16 = 0
        ecx_1 = &var_304
        
        if (edi_18 != 0)
            ecx_1 = &var_304
            
            do
                eax_2.b = *edx_67
                
                if (eax_2.b == 0)
                    break
                
                if (eax_2.b u< 0x80)
                label_53f77b:
                    *ecx_1 = eax_2.b
                    edx_67 = &edx_67[1]
                    ecx_1 += 1
                    esi_16 += 1
                else
                    if (eax_2.b u< 0xa0)
                        if (eax_2.b u>= 0xfe)
                            goto label_53f77b
                    else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                        goto label_53f77b
                    
                    eax_2 = edi_18 - 2
                    
                    if (esi_16 s> eax_2)
                        break
                    
                    eax_2.b = *edx_67
                    *ecx_1 = eax_2.b
                    eax_2 = zx.d(edx_67[1])
                    edx_67 = &edx_67[2]
                    *(ecx_1 + 1) = eax_2.b
                    ecx_1 += 2
                    esi_16 += 2
            while (esi_16 != edi_18)
        
        goto label_53e76f
    case 0x19
        sub_48e510(arg2)
        int32_t eax_74 = data_1af4e84
        
        if (eax_74 == 0)
            sub_4ebec0(sub_4ef190(eax_74, arg2 + 0x20, *(arg2 + 0x20), &%", &data_1b8a720), 
                arg2 + 0x2c, arg2 + 0x28, data_1b8a728)
        else if (eax_74 == 1)
            char** eax_77
            int32_t ecx_128
            eax_77, ecx_128 = sub_4ef190(eax_74 - 1, arg2 + 0x20, *(arg2 + 0x20), %", &data_1b8a720)
            int32_t var_330_13 = ecx_128
            sub_4ebe20(eax_77, arg2 + 0x2c, arg2 + 0x28, data_1b8a720)
            int32_t eax_78 = *(arg2 + 0x2c)
            *(arg2 + 0x30) = eax_78
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_78
        
        int32_t eax_80 = *(arg2 + 0x2c)
        *(arg2 + 0x30) = eax_80
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_80
    case 0x1a
        sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"&%", &data_1b8a720)
        int32_t eax_81
        eax_81.b = data_1b8a728 != 0
        data_715e98 = eax_81
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_81
    case 0x1b
        goto label_53f854

int32_t eax_31 = sub_4d6c40(&var_30c, &var_308)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_31
