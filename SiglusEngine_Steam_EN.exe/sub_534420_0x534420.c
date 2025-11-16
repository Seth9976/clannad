// 函数: sub_534420
// 地址: 0x534420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
int32_t esi = data_1bfdd30

if (esi - 0x1f4 u> 0x22)
label_534df2:
    data_1b8b06c = 1
    sub_5f02dd(var_8 ^ &__saved_ebp)
    return eax_1

eax_1 = zx.d(*(esi + 0x534c4c))
char var_e0
int32_t var_d4
int32_t eax_5
void* esi_3

switch (eax_1)
    case 0
        char esi_1
        
        if (esi - 0x1f4 u> 4)
            esi_1 = var_e0
        else
            switch (esi)
                case 0x1f4
                    esi_1 = 0
                case 0x1f5
                    esi_1 = 1
                case 0x1f6
                    esi_1 = 2
                case 0x1f7
                    esi_1 = 3
                case 0x1f8
                    esi_1 = 4
        
        eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        int32_t edi_1 = data_1b8a720
        
        if (edi_1 u<= 0xff)
            int32_t edx_1 = data_1b8a734
            int32_t eax_2 = edi_1 * 5
            eax_1 = sub_4d1c70(eax_2, edx_1, (eax_2 << 3) + &data_91f904, data_1b8a75c, 
                data_1b8a748, edx_1, esi_1, 1)
            
            if (data_1af1780 == 0 && data_1af174c == 0)
                *((edi_1 << 2) + &data_1080164) = 1
                data_71929c = 2
                data_7192a0 = 0
                data_7192e0 = 0
            
            if (data_702fc0 != 0)
                void* eax_3 = sub_561580(edi_1)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_3
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_1
    case 1
        eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t edi_2 = data_1b8a720
        
        if (edi_2 u<= 0xff)
            int32_t esi_2 = edi_2 * 5
            sub_4d20b0((esi_2 << 3) + &data_91f904)
            bool cond:0_1 = data_702fc0 == 0
            eax_1 = *((esi_2 << 3) + &data_91f908)
            data_715e98 = eax_1
            
            if (not(cond:0_1))
                void* eax_4 = sub_561580(edi_2)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_4
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_1
    case 2
        *(arg2 + 0x20) += 1
        esi_3 = arg2 + 0x20
        eax_5 = 0
        int32_t var_d8 = 0
        int32_t var_d0 = 0
        int32_t var_cc = 0
        int32_t var_bc = 0
        int32_t var_b8 = 0
        int32_t var_a8 = 0
        int32_t var_a4 = 0
        int32_t var_94 = 0
        int32_t var_90 = 0
        int32_t var_80 = 0
        int32_t var_7c = 0
        int32_t var_6c = 0
        int32_t var_68 = 0
        int32_t var_58 = 0
        int32_t var_54 = 0
        int32_t var_44 = 0
        int32_t var_40 = 0
        int32_t var_30 = 0
        int32_t var_2c = 0
        int32_t var_1c = 0
        int32_t var_18 = 0
        int32_t i_10 = 0
        
        if (data_1b8c884 s> 0)
            int32_t i
            
            do
                sub_4ef440(&var_d4, esi_3, *esi_3, "$@", &var_d4)
                int32_t edi_3 = var_d4
                
                if (edi_3 u<= 0xff)
                    sub_4d20b0(edi_3 * 0x28 + &data_91f904)
                    char eax_9 = *(edi_3 * 0x28 + &data_91f90c)
                    
                    if (eax_9 == 0 || eax_9 == 3 || eax_9 == 4)
                        int32_t edx_4 = var_d8
                        
                        if (*(edi_3 * 0x28 + &data_91f908) != *(edi_3 * 0x28 + &data_91f904))
                            edx_4 = 1
                        
                        var_d8 = edx_4
                    
                    if (data_702fc0 != 0)
                        sub_561580(edi_3)
                
                sub_4eef40(&var_d4, 0xa)
                char* eax_11 = *esi_3
                
                while (true)
                    char ecx_19 = *eax_11
                    
                    if (ecx_19 != 0x2c && ecx_19 != 0x20)
                        break
                    
                    eax_11 = &eax_11[1]
                
                *esi_3 = eax_11
                i = i_10 + 1
                i_10 = i
            while (i s< data_1b8c884)
            eax_5 = var_d8
    case 3
        data_715e98 = 0
        int32_t i_1 = 0
        void* esi_4 = &data_91f90c
        
        do
            sub_4d20b0(esi_4 - 8)
            eax_1.b = *esi_4
            
            if (eax_1.b == 0 || eax_1.b == 3 || eax_1.b == 4)
                eax_1 = *(esi_4 - 4)
                
                if (eax_1 != *(esi_4 - 8))
                    data_715e98 = 1
                    break
            
            i_1 += 1
            esi_4 += 0x28
        while (i_1 s< 0x100)
        
        if (data_702fc0 == 0)
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_1
        
        void* ecx_23 = &data_91f908
        void* i_2
        
        for (i_2 = &data_20cb674; i_2 s< &data_20cba74; )
            int32_t edx_5 = *ecx_23
            
            if (*(i_2 + 0x800) != edx_5)
                *(i_2 + 0x800) = edx_5
                *i_2 += 1
            
            i_2 += 4
            ecx_23 += 0x28
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return i_2
    case 4
        int32_t eax_14 = data_1af4e84
        
        if (eax_14 == 0)
            eax_1 = sub_4ef190(eax_14, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0
        else
            eax_1 = eax_14 - 1
            
            if (eax_14 == 1)
                eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        
        int32_t ecx_30 = data_1b8a720
        
        if (ecx_30 u<= 0xff)
            bool cond:2_1 = data_702fc0 == 0
            int32_t edx_8 = ecx_30 * 5
            int32_t esi_5 = data_1b8a734
            eax_1 = data_1392710
            *((edx_8 << 3) + &data_91f91c) = eax_1
            *((edx_8 << 3) + &data_91f910) = esi_5
            *((edx_8 << 3) + &data_91f908) = esi_5
            *((edx_8 << 3) + &data_91f928) = 1
            *((edx_8 << 3) + &data_91f924) = 0
            *((edx_8 << 3) + &data_91f920) = 0
            *((edx_8 << 3) + &data_91f914) = esi_5
            *((edx_8 << 3) + &data_91f918) = esi_5
            *((edx_8 << 3) + &data_91f904) = esi_5
            *((edx_8 << 3) + &data_91f90c) = 0xff
            
            if (not(cond:2_1))
                void* eax_16 = sub_561580(ecx_30)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_16
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_1
    case 5
        int32_t eax_17 = data_1af4e84
        
        if (eax_17 == 0)
            sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_17 == 1)
            data_1b8a720 = eax_17 - 1
        
        int32_t ecx_35 = data_1b8a720
        eax_1 = &data_91f910
        int32_t esi_6 = data_1392710
        int32_t i_12 = 0x100
        int32_t i_3
        
        do
            *(eax_1 + 0xc) = esi_6
            eax_1 += 0x28
            *(eax_1 - 0x28) = ecx_35
            *(eax_1 - 0x30) = ecx_35
            *(eax_1 - 0x10) = 1
            *(eax_1 - 0x14) = 0
            *(eax_1 - 0x18) = 0
            *(eax_1 - 0x24) = ecx_35
            *(eax_1 - 0x20) = ecx_35
            *(eax_1 - 0x34) = ecx_35
            *(eax_1 - 0x2c) = 0xff
            i_3 = i_12
            i_12 -= 1
        while (i_3 != 1)
        
        if (data_702fc0 == i_12)
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_1
        
        void* ecx_36 = &data_91f908
        void* i_4
        
        for (i_4 = &data_20cb674; i_4 s< &data_20cba74; )
            int32_t edx_10 = *ecx_36
            
            if (*(i_4 + 0x800) != edx_10)
                *(i_4 + 0x800) = edx_10
                *i_4 += 1
            
            i_4 += 4
            ecx_36 += 0x28
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return i_4
    case 6
        char esi_7
        
        if (esi - 0x208 u> 4)
            esi_7 = var_e0
        else
            switch (esi)
                case 0x208
                    esi_7 = 0
                case 0x209
                    esi_7 = 1
                case 0x20a
                    esi_7 = 2
                case 0x20b
                    esi_7 = 3
                case 0x20c
                    esi_7 = 4
        
        eax_1 = sub_4ef190(esi - 0x208, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        int32_t edi_4 = data_1b8a720
        
        if (edi_4 u<= 0xff)
            int32_t edx_12 = data_1b8a734
            int32_t eax_21 = edi_4 * 5
            eax_1 = sub_4d1c70(eax_21, edx_12, (eax_21 << 3) + &data_922104, data_1b8a75c, 
                data_1b8a748, edx_12, esi_7, 0)
            
            if (data_1af1780 == 0 && data_1af174c == 0)
                *((edi_4 << 2) + &data_1080564) = 1
                data_71929c = 2
                data_7192a0 = 0
                data_7192e0 = 0
            
            if (data_702fc0 != 0)
                void* eax_22 = sub_560330(edi_4)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_22
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_1
    case 7
        eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t edi_5 = data_1b8a720
        
        if (edi_5 u<= 0xff)
            int32_t esi_8 = edi_5 * 5
            sub_4d20b0((esi_8 << 3) + &data_922104)
            bool cond:1_1 = data_702fc0 == 0
            eax_1 = *((esi_8 << 3) + &data_922108)
            data_715e98 = eax_1
            
            if (not(cond:1_1))
                void* eax_23 = sub_560330(edi_5)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_23
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_1
    case 8
        *(arg2 + 0x20) += 1
        esi_3 = arg2 + 0x20
        eax_5 = 0
        int32_t var_d8_1 = 0
        int32_t var_d0_1 = 0
        int32_t var_cc_1 = 0
        int32_t var_bc_1 = 0
        int32_t var_b8_1 = 0
        int32_t var_a8_1 = 0
        int32_t var_a4_1 = 0
        int32_t var_94_1 = 0
        int32_t var_90_1 = 0
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 0
        int32_t var_6c_1 = 0
        int32_t var_68_1 = 0
        int32_t var_58_1 = 0
        int32_t var_54_1 = 0
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t i_11 = 0
        
        if (data_1b8c884 s> 0)
            int32_t i_5
            
            do
                sub_4ef440(&var_d4, esi_3, *esi_3, "$@", &var_d4)
                int32_t edi_6 = var_d4
                
                if (edi_6 u<= 0xff)
                    sub_4d20b0(edi_6 * 0x28 + &data_922104)
                    char eax_27 = *(edi_6 * 0x28 + &data_92210c)
                    
                    if (eax_27 == 0 || eax_27 == 3 || eax_27 == 4)
                        int32_t edx_15 = var_d8_1
                        
                        if (*(edi_6 * 0x28 + &data_922108) != *(edi_6 * 0x28 + &data_922104))
                            edx_15 = 1
                        
                        var_d8_1 = edx_15
                    
                    if (data_702fc0 != 0)
                        sub_560330(edi_6)
                
                sub_4eef40(&var_d4, 0xa)
                char* eax_29 = *esi_3
                
                while (true)
                    char ecx_56 = *eax_29
                    
                    if (ecx_56 != 0x2c && ecx_56 != 0x20)
                        break
                    
                    eax_29 = &eax_29[1]
                
                *esi_3 = eax_29
                i_5 = i_11 + 1
                i_11 = i_5
            while (i_5 s< data_1b8c884)
            *esi_3 += 1
            data_715e98 = var_d8_1
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return var_d8_1
    case 9
        data_715e98 = 0
        int32_t i_6 = 0
        void* esi_9 = &data_92210c
        
        do
            sub_4d20b0(esi_9 - 8)
            eax_1.b = *esi_9
            
            if (eax_1.b == 0 || eax_1.b == 3 || eax_1.b == 4)
                eax_1 = *(esi_9 - 4)
                
                if (eax_1 != *(esi_9 - 8))
                    data_715e98 = 1
                    break
            
            i_6 += 1
            esi_9 += 0x28
        while (i_6 s< 0x100)
        
        if (data_702fc0 == 0)
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_1
        
        void* ecx_60 = &data_922108
        void* i_7
        
        for (i_7 = &data_20caa34; i_7 s< &data_20cae34; )
            int32_t edx_16 = *ecx_60
            
            if (*(i_7 + 0x800) != edx_16)
                *(i_7 + 0x800) = edx_16
                *i_7 += 1
            
            i_7 += 4
            ecx_60 += 0x28
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return i_7
    case 0xa
        int32_t eax_33 = data_1af4e84
        
        if (eax_33 == 0)
            eax_1 = sub_4ef190(eax_33, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0
        else
            eax_1 = eax_33 - 1
            
            if (eax_33 == 1)
                eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        
        int32_t ecx_67 = data_1b8a720
        
        if (ecx_67 u<= 0xff)
            bool cond:3_1 = data_702fc0 == 0
            int32_t edx_19 = ecx_67 * 5
            int32_t esi_10 = data_1b8a734
            eax_1 = data_131310c
            *((edx_19 << 3) + &data_92211c) = eax_1
            *((edx_19 << 3) + &data_922110) = esi_10
            *((edx_19 << 3) + &data_922108) = esi_10
            *((edx_19 << 3) + &data_922128) = 0
            *((edx_19 << 3) + &data_922124) = 0
            *((edx_19 << 3) + &data_922120) = 0
            *((edx_19 << 3) + &data_922114) = esi_10
            *((edx_19 << 3) + &data_922118) = esi_10
            *((edx_19 << 3) + &data_922104) = esi_10
            *((edx_19 << 3) + &data_92210c) = 0xff
            
            if (not(cond:3_1))
                void* eax_35 = sub_560330(ecx_67)
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_35
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return eax_1
    case 0xb
        int32_t eax_36 = data_1af4e84
        
        if (eax_36 == 0)
            sub_4ef190(eax_36, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_36 == 1)
            data_1b8a720 = eax_36 - 1
        
        int32_t ecx_72 = data_1b8a720
        eax_1 = &data_922110
        int32_t esi_11 = data_131310c
        int32_t i_13 = 0x100
        int32_t i_8
        
        do
            *(eax_1 + 0xc) = esi_11
            eax_1 += 0x28
            *(eax_1 - 0x28) = ecx_72
            *(eax_1 - 0x30) = ecx_72
            *(eax_1 - 0x10) = 0
            *(eax_1 - 0x14) = 0
            *(eax_1 - 0x18) = 0
            *(eax_1 - 0x24) = ecx_72
            *(eax_1 - 0x20) = ecx_72
            *(eax_1 - 0x34) = ecx_72
            *(eax_1 - 0x2c) = 0xff
            i_8 = i_13
            i_13 -= 1
        while (i_8 != 1)
        
        if (data_702fc0 == i_13)
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_1
        
        void* ecx_73 = &data_922108
        void* i_9
        
        for (i_9 = &data_20caa34; i_9 s< &data_20cae34; )
            int32_t edx_21 = *ecx_73
            
            if (*(i_9 + 0x800) != edx_21)
                *(i_9 + 0x800) = edx_21
                *i_9 += 1
            
            i_9 += 4
            ecx_73 += 0x28
        
        sub_5f02dd(var_8 ^ &__saved_ebp)
        return i_9
    case 0xc
        goto label_534df2

*esi_3 += 1
data_715e98 = eax_5
sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_5
