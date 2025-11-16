// 函数: sub_53a240
// 地址: 0x53a240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_3 = data_1bfdd30 - 0x708
int32_t edi
int32_t var_14c = edi

if (eax_3 u<= 0x35)
    eax_3 = zx.d(lookup_table_53add4[eax_3])
    int32_t var_154_1
    int32_t* var_150_2
    int32_t var_144
    void var_140
    char var_12c[0x124]
    int32_t eax_4
    int32_t eax_7
    int32_t eax_8
    int32_t eax_18
    char** eax_39
    int32_t ecx_10
    int32_t ecx_51
    int32_t ecx_139
    int32_t edx_1
    int32_t edx_5
    
    switch (eax_3)
        case 0
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            edx_1 = 1
        label_53a29a:
            eax_4 = sub_419520(data_1b8a728, edx_1)
            goto label_53a29f
        case 1
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            edx_1 = 0
            goto label_53a29a
        case 2
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S%", &data_1b8a720)
            eax_8 = sub_419920(data_1b8a728, &var_144)
        label_53a301:
            edx_5 = data_1b8a744
            ecx_10 = data_1b8a740
            goto label_53a30d
        case 3
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S%", &data_1b8a720)
            eax_8 = sub_4190e0(data_1b8a728)
            edx_5 = data_1b8a744
            ecx_10 = data_1b8a740
            
            if (eax_8 == 0)
                goto label_53a340
            
            int32_t eax_11 = *(eax_8 + 0x20)
            data_715e98 = 1
            int32_t eax_12 = sub_4e8000(eax_11, edx_5, ecx_10, eax_11, &data_704898)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_12
        case 4
            char** eax_13 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$%", &data_1b8a720)
            int32_t esi_1 = data_1b8a734
            
            if (esi_1 u<= 4)
                eax_13 = sub_4190e0(data_1b8a728)
                
                if (eax_13 != 0)
                    int32_t eax_14 = eax_13[esi_1 + 9]
                    int32_t edx_8 = data_1b8a758
                    int32_t ecx_23 = data_1b8a754
                    data_715e98 = 1
                    int32_t eax_15 = sub_4e8000(eax_14, edx_8, ecx_23, eax_14, &data_704898)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return eax_15
            
            int32_t edx_9 = data_1b8a758
            int32_t ecx_26 = data_1b8a754
            data_715e98 = 0
            int32_t eax_16 = sub_4e8000(eax_13, edx_9, ecx_26, 0xffffffff, &data_704898)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_16
        case 5
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S%%%%%", &data_1b8a720)
            char* eax_17 = sub_4190e0(data_1b8a728)
            
            if (eax_17 == 0)
                data_715e98 = 0
                
                for (int32_t* i = &data_1b8a740; i s< &data_1b8a7a4; i = &i[5])
                    eax_17 = sub_4e8000(eax_17, i[1], *i, 0xffffffff, &data_704898)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_17
            
            sub_4d1c30(eax_17, &eax_17[0x24], &var_140, 0x14)
            data_715e98 = 1
            int32_t* i_1 = &data_1b8a740
            void* edi_7 = &var_140
            
            do
                eax_17 = sub_4e8000(eax_17, i_1[1], *i_1, *edi_7, &data_704898)
                i_1 = &i_1[5]
                edi_7 += 4
            while (i_1 s< &data_1b8a7a4)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_17
        case 6
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_4 = sub_419770(data_1b8a720, 1)
        label_53a29f:
            int32_t eax_5 = neg.d(eax_4)
            eax_7 = neg.d(sbb.d(eax_5, eax_5, eax_4 != 0))
            goto label_53a2a5
        case 7
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_4 = sub_419770(data_1b8a720, 0)
            goto label_53a29f
        case 8
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$%", &data_1b8a720)
            eax_8 = sub_419960(data_1b8a720, &var_144)
            goto label_53a301
        case 9
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
            eax_18 = sub_419ae0(data_1b8a720, &var_12c)
            var_150_2 = data_1b8a740
            ecx_51 = data_1b8a744
        label_53a5df:
            
            if (eax_18 != 0)
                data_715e98 = 1
                int32_t eax_19 = sub_4a4620(eax_18, &var_12c, ecx_51, var_150_2)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_19
            
        label_53a60d:
            data_715e98 = 0
            int32_t eax_20 = sub_4a4620(eax_18, nullptr, ecx_51, var_150_2)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_20
        case 0xa
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$%", &data_1b8a720)
            void* eax_21 = data_1b8a720
            
            if (data_1321ebc == 0 || eax_21 s< 0 || eax_21 s>= data_1321eb8)
            label_53a68f:
                int32_t edx_22 = data_1b8a744
                int32_t ecx_61 = data_1b8a740
                data_715e98 = 0
                int32_t eax_23 = sub_4e8000(eax_21, edx_22, ecx_61, 0xffffffff, &data_704898)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_23
            
            eax_21 = data_1321ec0 + eax_21 * 0x3c
            
            if (eax_21 == 0)
                goto label_53a68f
            
            eax_8 = *(eax_21 + 0x20)
            edx_5 = data_1b8a744
            ecx_10 = data_1b8a740
            void* var_150_3 = &data_704898
            var_154_1 = eax_8
            goto label_53a31c
        case 0xb
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$%", &data_1b8a720)
            eax_8 = sub_419c90(&var_144, data_1b8a734, data_1b8a720, &var_144)
            edx_5 = data_1b8a758
            ecx_10 = data_1b8a754
        label_53a30d:
            void* var_150_1 = &data_704898
            
            if (eax_8 == 0)
            label_53a340:
                data_715e98 = 0
                int32_t eax_10 = sub_4e8000(eax_8, edx_5, ecx_10, 0xffffffff, &data_704898)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_10
            
            var_154_1 = var_144
        label_53a31c:
            data_715e98 = 1
            int32_t eax_9 = sub_4e8000(eax_8, edx_5, ecx_10, var_154_1, &data_704898)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_9
        case 0xc
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$%%%%%", &data_1b8a720)
            int32_t eax_25 = sub_419d40(data_1b8a720, &var_140)
            int32_t* i_2 = &data_1b8a740
            
            if (eax_25 == 0)
                data_715e98 = 0
                
                do
                    eax_25 = sub_4e8000(eax_25, i_2[1], *i_2, 0xffffffff, &data_704898)
                    i_2 = &i_2[5]
                while (i_2 s< &data_1b8a7a4)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_25
            
            data_715e98 = 1
            void* edi_13 = &var_140
            
            do
                eax_25 = sub_4e8000(eax_25, i_2[1], *i_2, *edi_13, &data_704898)
                i_2 = &i_2[5]
                edi_13 += 4
            while (i_2 s< &data_1b8a7a4)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_25
        case 0xd
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_4 = sub_4197e0(data_1b8a720, 1)
            goto label_53a29f
        case 0xe
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_4 = sub_4197e0(data_1b8a720, 0)
            goto label_53a29f
        case 0xf
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$%", &data_1b8a720)
            eax_8 = sub_4199c0(data_1b8a720, &var_144)
            goto label_53a301
        case 0x10
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
            eax_18 = sub_419b20(data_1b8a720, &var_12c)
            ecx_51 = data_1b8a744
            var_150_2 = data_1b8a740
            
            if (eax_18 == 0)
                goto label_53a60d
            
            data_715e98 = 1
            int32_t eax_26 = sub_4a4620(eax_18, &var_12c, ecx_51, var_150_2)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_26
        case 0x11
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$%", &data_1b8a720)
            eax_8 = sub_419ce0(&var_144, data_1b8a734, data_1b8a720, &var_144)
            edx_5 = data_1b8a758
            ecx_10 = data_1b8a754
            goto label_53a30d
        case 0x12
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$%%%%%", &data_1b8a720)
            int32_t eax_28 = sub_419d90(data_1b8a720, &var_140)
            int32_t* i_3 = &data_1b8a740
            
            if (eax_28 == 0)
                data_715e98 = 0
                
                do
                    eax_28 = sub_4e8000(eax_28, i_3[1], *i_3, 0xffffffff, &data_704898)
                    i_3 = &i_3[5]
                while (i_3 s< &data_1b8a7a4)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_28
            
            data_715e98 = 1
            void* edi_17 = &var_140
            
            do
                eax_28 = sub_4e8000(eax_28, i_3[1], *i_3, *edi_17, &data_704898)
                i_3 = &i_3[5]
                edi_17 += 4
            while (i_3 s< &data_1b8a7a4)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_28
        case 0x13
            eax_4 = sub_419860(
                sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, data_1b8a770, 1)
            goto label_53a29f
        case 0x14
            eax_4 = sub_419860(
                sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, data_1b8a770, 0)
            goto label_53a29f
        case 0x15
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$%", &data_1b8a720)
            eax_8 = sub_419a30(&var_144, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, 
                data_1b8a770, &var_144)
            edx_5 = data_1b8a794
            ecx_10 = data_1b8a790
            goto label_53a30d
        case 0x16
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$&", &data_1b8a720)
            eax_18 = sub_419b70(&var_12c, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, 
                data_1b8a770, &var_12c)
            ecx_51 = data_1b8a794
            var_150_2 = data_1b8a790
            goto label_53a5df
        case 0x17
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$%", &data_1b8a720)
            eax_8 = sub_419c00(&var_144, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, 
                data_1b8a770, &var_144)
            edx_5 = data_1b8a794
            ecx_10 = data_1b8a790
            goto label_53a30d
        case 0x18
            char** eax_33 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$%", &data_1b8a720)
            int32_t esi_2 = data_1b8a784
            
            if (esi_2 u<= 4)
                eax_33 = sub_4191a0(eax_33, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, 
                    data_1b8a770)
            
            if (esi_2 u> 4 || eax_33 == 0)
                int32_t edx_53 = data_1b8a7a8
                int32_t ecx_119 = data_1b8a7a4
                data_715e98 = 0
                int32_t eax_34 = sub_4e8000(eax_33, edx_53, ecx_119, 0xffffffff, &data_704898)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_34
            
            eax_8 = eax_33[esi_2 + 9]
            edx_5 = data_1b8a7a8
            ecx_10 = data_1b8a7a4
            void* var_150_5 = &data_704898
            var_154_1 = eax_8
            goto label_53a31c
        case 0x19
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$%%%%%", &data_1b8a720)
            int32_t eax_36 = sub_419de0(&var_140, data_1b8a734, data_1b8a720, data_1b8a748, 
                data_1b8a75c, data_1b8a770, &var_140)
            int32_t* i_4 = &data_1b8a790
            
            if (eax_36 == 0)
                data_715e98 = 0
                
                do
                    eax_36 = sub_4e8000(eax_36, i_4[1], *i_4, 0xffffffff, &data_704898)
                    i_4 = &i_4[5]
                while (i_4 s< 0x1b8a7f4)
                
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_36
            
            data_715e98 = 1
            void* edi_22 = &var_140
            
            do
                eax_36 = sub_4e8000(eax_36, i_4[1], *i_4, *edi_22, &data_704898)
                i_4 = &i_4[5]
                edi_22 += 4
            while (i_4 s< 0x1b8a7f4)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_36
        case 0x1a
            eax_7 = sub_419e70(
                sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, data_1b8a770)
        label_53a2a5:
            data_715e98 = eax_7
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_7
        case 0x1b
            char** eax_38
            int32_t ecx_136
            eax_38, ecx_136 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            int32_t var_158_10 = data_1b8a770
            eax_7 =
                sub_419300(eax_38, data_1b8a720, ecx_136, data_1b8a734, data_1b8a748, data_1b8a75c)
            goto label_53a2a5
        case 0x1c
            eax_39, ecx_139 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            int32_t var_158_11 = 1
            eax_7 = sub_419420(eax_39, data_1b8a720, ecx_139, data_1b8a734, data_1b8a748, 
                data_1b8a75c, data_1b8a770)
            goto label_53a2a5
        case 0x1d
            eax_39, ecx_139 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            int32_t var_158_12 = 0
            eax_7 = sub_419420(eax_39, data_1b8a720, ecx_139, data_1b8a734, data_1b8a748, 
                data_1b8a75c, data_1b8a770)
            goto label_53a2a5

data_1b8b06c = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_3
