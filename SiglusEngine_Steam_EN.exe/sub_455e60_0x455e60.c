// 函数: sub_455e60
// 地址: 0x455e60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx
int32_t i_46
ecx, i_46 = __chkstk(0x104c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t i_39 = i_46
int32_t i_40 = i_39
int32_t var_103c
int32_t i_81
int32_t entry_ebx

switch (jump_table_458d48[arg6])
    case 0x455e8e
        int32_t edi = arg4
        
        if (edi s<= 0)
            edi = 1
        else if (edi s> 0x40)
            edi = 0x40
        
        int32_t ecx_1 = arg5
        
        if (ecx_1 s<= 0)
            ecx_1 = 1
        else if (ecx_1 s> 0x40)
            ecx_1 = 0x40
        
        int32_t eax_3 = edi << 2
        int32_t ecx_2 = ecx_1 << 2
        ecx[2] = eax_3
        uint32_t eax_4 = eax_3 * ecx_2
        ecx[3] = ecx_2
        sub_4d6960(eax_4, &ecx[1], ecx, eax_4, "AVGMASK")
        void* eax_5 = ecx[1]
        int32_t ecx_4 = 0
        int32_t var_1014_1 = 0
        void* const i = &data_6107e0
        int32_t eax_8 = ecx_1 - 1
        int32_t var_1020_1 = eax_8
        
        do
            int32_t edx_1 = eax_8 + ecx_4
            int32_t esi_1 = 0
            int32_t j = 0
            int32_t var_1044_1 = edx_1
            int32_t ecx_5 = ecx_4
            
            do
                uint32_t var_24_1 = zx.d(*(i + j))
                int32_t eax_12 = ecx_1 << 2
                sub_4555c0(eax_12, eax_3, eax_5, eax_12.b, esi_1, ecx_5, edi - 1 + esi_1, edx_1)
                esi_1 += edi
                j += 1
                ecx_5 = var_1014_1
                edx_1 = var_1044_1
            while (j s< 4)
            
            ecx_4 = ecx_5 + ecx_1
            i += 4
            eax_8 = var_1020_1
            var_1014_1 = ecx_4
        while (i s< U"*)('&%$#"!\n\t")
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_8
    case 0x455fac
        uint32_t eax_14 = i_46 * arg1
        char* var_14_1 = "AVGMASK"
        ecx[2] = i_39
        ecx[3] = arg1
        int32_t eax_16 = sub_455d80(sub_4d6960(eax_14, &ecx[1], ecx, eax_14, var_14_1), i_39, 
            ecx[1], arg1, arg3.b)
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_16
    case 0x455fea
        int32_t eax_17 = arg4
        
        if (eax_17 s<= 0)
            eax_17 = 2
        else if (eax_17 s> 0x40)
            eax_17 = 0x40
        
        int32_t ecx_13 = eax_17 * 2
        
        if (arg2 == 0)
            ecx[3] = arg1
            int32_t eax_33
            int32_t edx_13
            edx_13:eax_33 = sx.q(arg1)
            int32_t i_49 = divs.dp.d(edx_13:eax_33, ecx_13)
            ecx[2] = 1
            int32_t i_28 = i_49
            int32_t i_48 = i_49
            
            if (mods.dp.d(edx_13:eax_33, ecx_13) != 0)
                i_48 += 1
                i_28 = i_48
            
            sub_4d6960(i_49, &ecx[1], ecx, arg1, "AVGMASK")
            void* eax_35 = ecx[1]
            int32_t ecx_23 = 0
            i_81 = divs.dp.d(0xff00, i_48)
            int32_t edx_17 = 0
            int32_t var_1040_1 = 0
            int32_t edi_1 = eax_17 - 1
            int32_t var_1020_3 = 0
            
            if (i_28 s> 0)
                int32_t eax_38 = eax_17 - edi_1
                int32_t eax_45
                int32_t i_1
                
                do
                    char eax_40 = (ecx_23 s>> 8).b
                    char ecx_24 = eax_40
                    
                    if (eax_40 u> 0xff)
                        ecx_24 = -1
                    
                    var_103c.b = ecx_24
                    uint32_t eax_41 = zx.d(0xff - ecx_24)
                    uint32_t var_24_4 = eax_41
                    sub_4555c0(eax_41, 1, eax_35, arg1.b, 0, edx_17, 0, edi_1)
                    int32_t var_24_5 = var_103c
                    int32_t eax_44 = eax_38 + edi_1
                    sub_4555c0(eax_44, 1, eax_35, arg1.b, 0, eax_44, 0, edi_1 + eax_17)
                    eax_45 = eax_17 * 2
                    edx_17 = var_1020_3 + eax_45
                    ecx_23 = var_1040_1 + i_81
                    edi_1 += eax_45
                    var_1020_3 = edx_17
                    i_1 = i_28
                    i_28 -= 1
                    var_1040_1 = ecx_23
                while (i_1 != 1)
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_45
        else
            ecx[2] = i_39
            int32_t eax_19
            int32_t edx_5
            edx_5:eax_19 = sx.q(i_39)
            int32_t i_42 = divs.dp.d(edx_5:eax_19, ecx_13)
            ecx[3] = 1
            int32_t i_27 = i_42
            
            if (mods.dp.d(edx_5:eax_19, ecx_13) != 0)
                i_42 += 1
                i_27 = i_42
            
            sub_4d6960(i_42, &ecx[1], ecx, i_39, "AVGMASK")
            void* eax_20 = ecx[1]
            i_81 = divs.dp.d(0xff00, i_27)
            int32_t var_1020_2 = 0
            int32_t var_1014_2 = 0
            int32_t edx_9 = eax_17 - 1
            int32_t var_1024_2 = edx_9
            
            if (i_27 s> 0)
                int32_t eax_23 = eax_17 - edx_9
                int32_t eax_24 = 0
                int32_t i_2
                
                do
                    char eax_25 = (eax_24 s>> 8).b
                    char ecx_16 = eax_25
                    
                    if (eax_25 u> 0xff)
                        ecx_16 = -1
                    
                    var_103c.b = ecx_16
                    uint32_t eax_26 = zx.d(0xff - ecx_16)
                    uint32_t var_24_2 = eax_26
                    sub_4555c0(eax_26, i_39, eax_20, 1, var_1014_2, 0, edx_9, 0)
                    int32_t var_24_3 = var_103c
                    int32_t eax_29 = eax_23 + var_1024_2
                    sub_4555c0(eax_29, i_39, eax_20, 1, eax_29, 0, var_1024_2 + eax_17, 0)
                    int32_t eax_30 = eax_17 * 2
                    var_1014_2 += eax_30
                    edx_9 = var_1024_2 + eax_30
                    eax_24 = var_1020_2 + i_81
                    i_2 = i_27
                    i_27 -= 1
                    var_1024_2 = edx_9
                    var_1020_2 = eax_24
                while (i_2 != 1)
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_24
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x45627b
        int32_t edi_2 = arg3
        
        if (edi_2 s<= 0)
            edi_2 = 2
        else if (edi_2 s> 0x40)
            edi_2 = 0x40
        
        int32_t eax_46 = edi_2 * 2
        
        if (arg2 == 0)
            ecx[2] = eax_46
            ecx[3] = 1
        else
            ecx[2] = 1
            ecx[3] = eax_46
        
        uint32_t eax_48 = ecx[2] * ecx[3]
        i_81 = sub_4d6960(eax_48, &ecx[1], ecx, eax_48, "AVGMASK")
        
        if (edi_2 s<= 0)
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return i_81
        
        __builtin_memset(__builtin_memset(ecx[1], 0xffffffff, edi_2 u>> 2 << 2), 0xff, edi_2 & 3)
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0xffffffff
    case 0x4562f9
        ecx[3] = arg1
        uint32_t eax_50 = i_39 * arg1
        char* var_14_5 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_50, &ecx[1], ecx, eax_50, var_14_5)
        void* eax_51 = ecx[1]
        int32_t eax_54
        int32_t edx_22
        edx_22:eax_54 = sx.q(arg1 * 7)
        int32_t esi_4 = ((edx_22 & 0xf) + eax_54) s>> 4
        
        if (esi_4 == 0)
            esi_4 = 1
        
        int32_t ebx_8 = 0
        int32_t edx_25 = 0
        int32_t var_1010_4 = 0
        int32_t var_1018_2 = i_39 - 1
        void* var_1024_3 = arg1 - 1
        int32_t eax_59 = esi_4
        int32_t var_1014_3 = 0
        
        if (eax_59 s> 0)
            do
                char eax_61 = (ebx_8 s>> 8).b
                char ecx_39 = eax_61
                
                if (eax_61 u> 0xff)
                    ecx_39 = -1
                
                int32_t ebx_9
                ebx_9.b = 0xff - ecx_39
                int32_t var_24_6 = ebx_9
                int32_t var_28_6 = edx_25
                int32_t var_2c_6 = i_39 - 1
                int32_t var_30_6 = edx_25
                sub_455320(i_39 - 1, i_39, eax_51, arg1, 0)
                int32_t var_24_7 = ebx_9
                void* var_28_7 = var_1024_3
                int32_t var_2c_7 = i_39 - 1
                void* var_30_7 = var_1024_3
                sub_455320(i_39 - 1, i_39, eax_51, arg1, 0)
                eax_59 = esi_4
                edx_25 = var_1014_3 + 1
                var_1024_3 -= 1
                ebx_8 = var_1010_4 + divs.dp.d(0x2000, esi_4)
                var_1014_3 = edx_25
                var_1010_4 = ebx_8
            while (edx_25 s< eax_59)
        
        int32_t eax_66
        int32_t edx_29
        edx_29:eax_66 = sx.q(arg1 - eax_59 * 2)
        int32_t eax_69
        int32_t edx_30
        edx_30:eax_69 = sx.q(i_39)
        int32_t ebx_14 = (eax_66 - edx_29) s>> 1
        int32_t ecx_44 = (eax_69 - edx_30) s>> 1
        int32_t var_1010_5 = ecx_44
        
        if ((ecx_44.b & 1) != 0)
            ecx_44 += 1
            var_1010_5 = ecx_44
        
        int32_t var_102c_1 = 0
        i_81 = 0
        int32_t i_82 = 0
        int32_t var_104c = 0
        
        if (ecx_44 s<= 0)
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return i_81
        
        bool cond:20_1
        
        do
            char edx_34 = (var_102c_1 s>> 8).b + 0x20
            
            if ((var_102c_1 s>> 8).b + 0x20 u> 0xff)
                edx_34 = -1
            
            int32_t ecx_48 = i_81 s>> 8
            
            if (ecx_48 s> ebx_14)
                ecx_48 = ebx_14
            
            int32_t eax_77
            eax_77.b = 0xff
            eax_77.b = 0xff - edx_34
            uint32_t var_24_8 = zx.d(eax_77.b)
            int32_t eax_81 = ecx_48 + var_1014_3
            sub_4555c0(eax_81, i_39, eax_51, arg1.b, var_104c, eax_81, var_1018_2, 
                var_1024_3 - ecx_48)
            var_102c_1 += divs.dp.d(0xdf00, ecx_44)
            i_82 += divs.dp.d(sx.q(ebx_14 << 0xa), ecx_44)
            var_1018_2 -= 1
            cond:20_1 = var_104c + 1 s< var_1010_5
            var_104c += 1
            i_81 = i_82
        while (cond:20_1)
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x45653a
        int32_t edi_5 = arg4
        
        if (edi_5 s<= 0)
            edi_5 = 1
        else if (edi_5 s> 0x40)
            edi_5 = 0x40
        
        int32_t ecx_52 = arg5
        
        if (ecx_52 s<= 0)
            ecx_52 = 1
        else if (ecx_52 s> 0x40)
            ecx_52 = 0x40
        
        int32_t eax_86 = edi_5 << 2
        int32_t ecx_53 = ecx_52 << 2
        ecx[2] = eax_86
        uint32_t eax_87 = eax_86 * ecx_53
        ecx[3] = ecx_53
        sub_4d6960(eax_87, &ecx[1], ecx, eax_87, "AVGMASK")
        void* eax_88 = ecx[1]
        int32_t ecx_55 = 0
        int32_t var_1014_4 = 0
        void* const i_3 = &data_6107d0
        int32_t eax_91 = ecx_52 - 1
        int32_t var_1020_5 = eax_91
        
        do
            int32_t edx_37 = eax_91 + ecx_55
            int32_t esi_5 = 0
            int32_t j_1 = 0
            int32_t var_1044_2 = edx_37
            
            do
                uint32_t var_24_9 = zx.d(*(i_3 + j_1))
                int32_t eax_95 = ecx_52 << 2
                sub_4555c0(eax_95, eax_86, eax_88, eax_95.b, esi_5, ecx_55, edi_5 - 1 + esi_5, 
                    edx_37)
                esi_5 += edi_5
                j_1 += 1
                ecx_55 = var_1014_4
                edx_37 = var_1044_2
            while (j_1 s< 4)
            
            ecx_55 += ecx_52
            i_3 += 4
            eax_91 = var_1020_5
            var_1014_4 = ecx_55
        while (i_3 s< &data_6107e0)
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_91
    case 0x456650
        int32_t edi_6 = arg4
        
        if (edi_6 s<= 0)
            edi_6 = 1
        else if (edi_6 s> 0x40)
            edi_6 = 0x40
        
        int32_t ecx_60 = arg5
        
        if (ecx_60 s<= 0)
            ecx_60 = 1
        else if (ecx_60 s> 0x40)
            ecx_60 = 0x40
        
        int32_t eax_96 = edi_6 << 2
        int32_t ecx_61 = ecx_60 << 2
        ecx[2] = eax_96
        uint32_t eax_97 = eax_96 * ecx_61
        ecx[3] = ecx_61
        sub_4d6960(eax_97, &ecx[1], ecx, eax_97, "AVGMASK")
        void* eax_98 = ecx[1]
        int32_t var_1014_5 = 0
        void* const i_4 = &data_6107c0
        int32_t eax_101 = ecx_60 - 1
        int32_t var_1020_6 = eax_101
        int32_t ecx_63 = 0
        
        do
            int32_t edx_40 = eax_101 + ecx_63
            int32_t esi_6 = 0
            int32_t j_2 = 0
            int32_t var_1044_3 = edx_40
            int32_t ecx_64 = ecx_63
            
            do
                uint32_t var_24_10 = zx.d(*(i_4 + j_2))
                int32_t eax_105 = ecx_60 << 2
                sub_4555c0(eax_105, eax_96, eax_98, eax_105.b, esi_6, ecx_64, edi_6 - 1 + esi_6, 
                    edx_40)
                esi_6 += edi_6
                j_2 += 1
                ecx_64 = var_1014_5
                edx_40 = var_1044_3
            while (j_2 s< 4)
            
            ecx_63 = ecx_64 + ecx_60
            i_4 += 4
            eax_101 = var_1020_6
            var_1014_5 = ecx_63
        while (i_4 s< &data_6107d0)
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_101
    case 0x45676c
        int32_t edi_7 = arg4
        
        if (edi_7 s<= 0)
            edi_7 = 1
        else if (edi_7 s> 0x40)
            edi_7 = 0x40
        
        int32_t ecx_69 = arg5
        
        if (ecx_69 s<= 0)
            ecx_69 = 1
        else if (ecx_69 s> 0x40)
            ecx_69 = 0x40
        
        int32_t eax_106 = edi_7 << 2
        int32_t ecx_70 = ecx_69 << 2
        ecx[2] = eax_106
        uint32_t eax_107 = eax_106 * ecx_70
        ecx[3] = ecx_70
        sub_4d6960(eax_107, &ecx[1], ecx, eax_107, "AVGMASK")
        void* eax_108 = ecx[1]
        int32_t ecx_72 = 0
        int32_t var_1014_6 = 0
        void* const i_5 = &data_6107b0
        int32_t eax_111 = ecx_69 - 1
        int32_t var_1020_7 = eax_111
        
        do
            int32_t edx_43 = eax_111 + ecx_72
            int32_t esi_7 = 0
            int32_t j_3 = 0
            int32_t var_1044_4 = edx_43
            int32_t ecx_73 = ecx_72
            
            do
                uint32_t var_24_11 = zx.d(*(i_5 + j_3))
                int32_t eax_115 = ecx_69 << 2
                sub_4555c0(eax_115, eax_106, eax_108, eax_115.b, esi_7, ecx_73, edi_7 - 1 + esi_7, 
                    edx_43)
                esi_7 += edi_7
                j_3 += 1
                ecx_73 = var_1014_6
                edx_43 = var_1044_4
            while (j_3 s< 4)
            
            ecx_72 = ecx_73 + ecx_69
            i_5 += 4
            eax_111 = var_1020_7
            var_1014_6 = ecx_72
        while (i_5 s< &data_6107c0)
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_111
    case 0x45688c
        int32_t j_11 = arg4
        
        if (j_11 s<= 0)
            j_11 = 0x18
        else if (j_11 s> 0x40)
            j_11 = 0x40
        
        if (data_703054 u> 1)
            ecx[2] = i_39
            ecx[3] = 1
        else
            i_39 = arg1
            ecx[2] = 1
            ecx[3] = i_39
        
        int32_t eax_117
        int32_t edx_45
        edx_45:eax_117 = sx.q(i_39)
        int32_t i_50 = divs.dp.d(edx_45:eax_117, j_11)
        int32_t i_24 = i_50
        
        if (mods.dp.d(edx_45:eax_117, j_11) != 0)
            i_24 = i_50 + 1
        
        uint32_t eax_121 = ecx[2] * ecx[3]
        sub_4d6960(eax_121, &ecx[1], ecx, eax_121, "AVGMASK")
        char* ebx_20 = ecx[1]
        i_81 = divs.dp.d(0x10000, i_24 + j_11)
        int32_t edx_49 = 0
        int32_t i_87 = i_81
        int32_t var_1014_7 = 0
        
        if (i_24 s<= 0)
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return i_81
        
        int32_t j_10 = j_11
        int32_t i_6
        
        do
            int32_t var_1028_8 = edx_49
            
            if (j_10 s> 0)
                int32_t j_7 = j_10
                int32_t j_4
                
                do
                    char eax_124 = (edx_49 s>> 8).b
                    char ecx_81 = eax_124
                    int32_t eax_125 = var_1014_7
                    
                    if (eax_124 u> 0xff)
                        ecx_81 = -1
                    
                    if (eax_125 s< i_39)
                        eax_125.b = 0xff
                        eax_125.b = 0xff - ecx_81
                        *ebx_20 = eax_125.b
                        eax_125 = var_1014_7
                    
                    ebx_20 = &ebx_20[1]
                    var_1014_7 = eax_125 + 1
                    i_81 = i_87
                    edx_49 += i_81
                    j_4 = j_7
                    j_7 -= 1
                while (j_4 != 1)
                j_10 = j_11
            
            edx_49 = var_1028_8 + i_81
            i_6 = i_24
            i_24 -= 1
        while (i_6 != 1)
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x4569b2
        char* var_14_10 = "AVGMASK"
        
        if (data_703054 == 0)
            int32_t eax_137 = i_39 * 2
            ecx[2] = eax_137
            uint32_t eax_138 = eax_137 * arg1
            ecx[3] = arg1
            sub_4d6960(eax_138, &ecx[1], ecx, eax_138, var_14_10)
            int32_t eax_139 = ecx[1]
            int32_t ebx_24 = 0
            int32_t* edx_58 = arg1
            i_81 = 0
            int32_t i_86 = 0
            
            if (edx_58 s> 0)
                do
                    char eax_142 = (i_81 s>> 8).b
                    char ecx_97 = eax_142
                    
                    if (eax_142 u> 0xff)
                        ecx_97 = -1
                    
                    var_103c.b = ecx_97
                    uint32_t var_24_14 = zx.d(0xff - ecx_97)
                    int32_t var_28_14 = ebx_24
                    int32_t var_2c_14 = i_39 - 1
                    int32_t var_30_14 = ebx_24
                    sub_455320(i_39 - 1, i_39 * 2, eax_139, edx_58, 0)
                    int32_t var_24_15 = var_103c
                    int32_t var_28_15 = ebx_24
                    void* var_2c_15 = (i_39 << 1) + 0xffffffff
                    int32_t var_30_15 = ebx_24
                    sub_455320((i_39 << 1) + 0xffffffff, i_39 * 2, eax_139, arg1, i_39.b)
                    ebx_24 += 1
                    i_81 = i_86 + divs.dp.d(0x10000, arg1)
                    edx_58 = arg1
                    i_86 = i_81
                while (ebx_24 s< edx_58)
                
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return i_81
        else
            ecx[2] = i_39
            void* ecx_84 = arg1 * 2
            uint32_t eax_129 = i_39 * ecx_84
            ecx[3] = ecx_84
            sub_4d6960(eax_129, &ecx[1], ecx, eax_129, var_14_10)
            int32_t eax_130 = ecx[1]
            int32_t ebx_22 = 0
            i_81 = 0
            int32_t i_85 = 0
            
            if (i_39 s> 0)
                void* edx_54 = ecx_84
                void* ecx_88 = edx_54 - 1
                
                do
                    char eax_133 = (i_81 s>> 8).b
                    char ecx_89 = eax_133
                    
                    if (eax_133 u> 0xff)
                        ecx_89 = -1
                    
                    var_103c.b = ecx_89
                    uint32_t eax_134 = zx.d(0xff - ecx_89)
                    uint32_t var_24_12 = eax_134
                    void* var_28_12 = arg1 - 1
                    int32_t var_2c_12 = ebx_22
                    int32_t var_30_12 = 0
                    int32_t var_24_13 = var_103c
                    void* var_28_13 = ecx_88
                    int32_t var_2c_13 = ebx_22
                    int32_t* var_30_13 = arg1
                    sub_455320(sub_455320(eax_134, i_39, eax_130, edx_54, ebx_22.b), i_39, eax_130, 
                        ecx_84, ebx_22.b)
                    ebx_22 += 1
                    i_81 = i_85 + divs.dp.d(0x10000, i_39)
                    edx_54 = ecx_84
                    i_85 = i_81
                while (ebx_22 s< i_39)
                
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return i_81
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x456b96
        ecx[3] = arg1
        uint32_t eax_148 = i_39 * arg1
        char* var_14_11 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_148, &ecx[1], ecx, eax_148, var_14_11)
        int32_t eax_149 = ecx[1]
        int32_t ebx_26 = 0
        int32_t var_1014_9 = 0
        void* i_45 = arg1 - 1 + i_39
        int32_t var_1024_4 = 0
        i_81 = divs.dp.d(0x10000, i_45)
        void* i_29 = i_45
        
        if (arg2 u> 1)
            int32_t edx_66 = i_39 - 1
            int32_t var_1010_12 = edx_66
            int32_t var_1030_3 = edx_66
            
            if (i_45 s> 0)
                int32_t eax_160
                void* i_7
                
                do
                    char eax_158 = (ebx_26 s>> 8).b
                    char ecx_110 = eax_158
                    
                    if (eax_158 u> 0xff)
                        ecx_110 = -1
                    
                    uint32_t eax_159 = zx.d(0xff - ecx_110)
                    uint32_t var_24_17 = eax_159
                    int32_t var_28_17 = var_1024_4
                    int32_t var_2c_17 = var_1030_3
                    int32_t var_30_17 = var_1014_9
                    sub_455320(eax_159, i_39, eax_149, arg1, edx_66.b)
                    edx_66 = var_1010_12
                    
                    if (edx_66 s<= 0)
                        var_1014_9 += 1
                    else
                        edx_66 -= 1
                        var_1010_12 = edx_66
                    
                    eax_160 = var_1024_4
                    
                    if (eax_160 s>= arg1 - 1)
                        var_1030_3 -= 1
                    else
                        eax_160 += 1
                        var_1024_4 = eax_160
                    
                    ebx_26 += i_81
                    i_7 = i_29
                    i_29 -= 1
                while (i_7 != 1)
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_160
        else
            int32_t edx_64 = 0
            int32_t var_1030_2 = 0
            int32_t var_1010_11 = 0
            
            if (i_45 s> 0)
                int32_t eax_155
                void* i_8
                
                do
                    char eax_153 = (ebx_26 s>> 8).b
                    char ecx_105 = eax_153
                    
                    if (eax_153 u> 0xff)
                        ecx_105 = -1
                    
                    uint32_t eax_154 = zx.d(0xff - ecx_105)
                    uint32_t var_24_16 = eax_154
                    int32_t var_28_16 = edx_64
                    int32_t var_2c_16 = var_1030_2
                    int32_t var_30_16 = var_1024_4
                    sub_455320(eax_154, i_39, eax_149, arg1, var_1014_9.b)
                    eax_155 = var_1014_9
                    
                    if (eax_155 s>= i_39 - 1)
                        var_1024_4 += 1
                    else
                        eax_155 += 1
                        var_1014_9 = eax_155
                    
                    edx_64 = var_1010_11
                    
                    if (edx_64 s>= arg1 - 1)
                        var_1030_2 += 1
                    else
                        edx_64 += 1
                        var_1010_11 = edx_64
                    
                    ebx_26 += i_81
                    i_8 = i_29
                    i_29 -= 1
                while (i_8 != 1)
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_155
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x456d6e
        if (data_703054 u> 1)
            ecx[2] = i_39
            ecx[3] = 1
        else
            i_39 = arg1
            ecx[2] = 1
            ecx[3] = i_39
        
        uint32_t eax_162 = ecx[2] * ecx[3]
        sub_4d6960(eax_162, &ecx[1], ecx, eax_162, "AVGMASK")
        void* ebx_29 = ecx[1]
        i_81 = divs.dp.d(0x10000, i_39)
        int32_t edx_70 = 0
        
        if (i_39 s<= 0)
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return i_81
        
        char ecx_114
        int32_t i_9
        
        do
            ebx_29 += 1
            char eax_165 = (edx_70 s>> 8).b
            ecx_114 = eax_165
            
            if (eax_165 u> 0xff)
                ecx_114 = -1
            
            edx_70 += i_81
            *(ebx_29 - 1) = 0xff - ecx_114
            i_9 = i_39
            i_39 -= 1
        while (i_9 != 1)
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0xff - ecx_114
    case 0x456df9
        ecx[3] = arg1
        uint32_t eax_167 = i_39 * arg1
        char* var_14_13 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_167, &ecx[1], ecx, eax_167, var_14_13)
        int32_t eax_168 = ecx[1]
        
        if (i_39 s< arg1)
            int32_t esi_13 = arg1 s>> 1
            
            if (esi_13 == 0)
                esi_13 = 1
            
            int32_t ecx_125 = 0
            int32_t var_1010_14 = 0
            int32_t eax_195
            int32_t edx_80
            edx_80:eax_195 = sx.q(i_39)
            int32_t var_1040_3 = 0
            int32_t eax_197 = (eax_195 - edx_80) s>> 1
            i_81 = arg1 - 1
            int32_t var_1014_10 = 0
            int32_t i_84 = i_81
            
            if (esi_13 s> 0)
                int32_t edx_81 = 0
                int32_t eax_205
                
                do
                    char eax_199 = (ecx_125 s>> 8).b
                    char ecx_126 = eax_199
                    
                    if (eax_199 u> 0xff)
                        ecx_126 = -1
                    
                    int32_t edx_82 = edx_81 s>> 8
                    
                    if (edx_82 s> eax_197)
                        edx_82 = eax_197
                    
                    int32_t eax_200
                    eax_200.b = 0xff
                    eax_200.b = 0xff - ecx_126
                    int32_t eax_203 = i_39 - 1 - edx_82
                    sub_455500(eax_203, i_39, eax_168, arg1, edx_82, var_1014_10, eax_203, i_84, 
                        zx.d(eax_200.b))
                    eax_205 = var_1014_10 + 1
                    ecx_125 = var_1010_14 + divs.dp.d(0x10000, esi_13)
                    edx_81 = var_1040_3 + divs.dp.d(sx.q(i_39 << 8), arg1)
                    i_84 -= 1
                    var_1014_10 = eax_205
                    var_1010_14 = ecx_125
                    var_1040_3 = edx_81
                while (eax_205 s< esi_13)
                
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_205
        else
            int32_t esi_11 = i_39 s>> 1
            
            if (esi_11 == 0)
                esi_11 = 1
            
            int32_t ecx_119 = 0
            int32_t var_1010_13 = 0
            int32_t eax_176
            int32_t edx_74
            edx_74:eax_176 = sx.q(arg1)
            int32_t var_1024_5 = 0
            int32_t eax_178 = (eax_176 - edx_74) s>> 1
            i_81 = i_39 - 1
            int32_t i_90 = i_81
            int32_t var_1030_4 = 0
            
            if (esi_11 s> 0)
                int32_t eax_187
                
                do
                    char eax_180 = (ecx_119 s>> 8).b
                    char ecx_120 = eax_180
                    
                    if (eax_180 u> 0xff)
                        ecx_120 = -1
                    
                    int32_t edx_76 = var_1024_5 s>> 8
                    
                    if (edx_76 s> eax_178)
                        edx_76 = eax_178
                    
                    int32_t eax_181
                    eax_181.b = 0xff
                    eax_181.b = 0xff - ecx_120
                    void* eax_184 = arg1 - 1 - edx_76
                    sub_455500(eax_184, i_39, eax_168, arg1, var_1030_4, edx_76, i_90, eax_184, 
                        zx.d(eax_181.b))
                    var_1024_5 += divs.dp.d(sx.q(arg1 << 8), i_39)
                    eax_187 = var_1030_4 + 1
                    ecx_119 = var_1010_13 + divs.dp.d(0x10000, esi_11)
                    i_90 -= 1
                    var_1010_13 = ecx_119
                    var_1030_4 = eax_187
                while (eax_187 s< esi_11)
                
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_187
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x457031
        ecx[3] = arg1
        uint32_t eax_207 = i_39 * arg1
        char* var_14_14 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_207, &ecx[1], ecx, eax_207, var_14_14)
        int32_t eax_208 = ecx[1]
        int32_t eax_210
        int32_t edx_86
        edx_86:eax_210 = sx.q(i_39)
        int32_t eax_212 = (eax_210 - edx_86) s>> 1
        int32_t eax_214
        int32_t edx_87
        edx_87:eax_214 = sx.q(arg1)
        int32_t ecx_134 = (eax_214 - edx_87) s>> 1
        int32_t var_102c_2 = ecx_134
        
        if (eax_212 != 0 && ecx_134 != 0)
            int32_t ecx_135 = 0
            int32_t i_30 = eax_212 - 1 + ecx_134
            int32_t temp0_16 = divs.dp.d(0x10000, i_30)
            int32_t edx_89 = 0
            int32_t var_1020_10 = 0
            int32_t var_1014_11 = 0
            int32_t var_1024_6 = 0
            int32_t var_1030_5 = 0
            int32_t var_1010_15 = 0
            
            if (i_30 s> 0)
                i_39 = i_40
                int32_t i_10
                
                do
                    char eax_224 = (ecx_135 s>> 8).b
                    char ecx_136 = eax_224
                    
                    if (eax_224 u> 0xff)
                        ecx_136 = -1
                    
                    uint32_t eax_225 = zx.d(0xff - ecx_136)
                    uint32_t var_24_20 = eax_225
                    int32_t var_28_20 = edx_89
                    int32_t var_2c_20 = var_1030_5
                    int32_t var_30_20 = var_1024_6
                    sub_455320(eax_225, i_39, eax_208, arg1, var_1014_11.b)
                    
                    if (var_1014_11 s>= eax_212 - 1)
                        var_1024_6 += 1
                    else
                        var_1014_11 += 1
                    
                    edx_89 = var_1010_15
                    
                    if (edx_89 s>= var_102c_2 - 1)
                        var_1030_5 += 1
                    else
                        edx_89 += 1
                        var_1010_15 = edx_89
                    
                    ecx_135 = var_1020_10 + temp0_16
                    i_10 = i_30
                    i_30 -= 1
                    var_1020_10 = ecx_135
                while (i_10 != 1)
            
            ecx_134 = var_102c_2
        
        int32_t eax_229
        int32_t edx_91
        edx_91:eax_229 = sx.q(i_39 + 1)
        int32_t eax_231 = (eax_229 - edx_91) s>> 1
        
        if (eax_231 != 0 && ecx_134 != 0)
            int32_t i_31 = eax_231 - 1 + ecx_134
            int32_t temp0_17 = divs.dp.d(0x10000, i_31)
            int32_t edx_93 = 0
            int32_t var_1020_11 = 0
            int32_t var_1014_12 = i_39 - 1
            int32_t var_1024_7 = 0
            int32_t var_1030_6 = i_39 - 1
            int32_t var_1010_16 = 0
            
            if (i_31 s> 0)
                int32_t ecx_139 = 0
                int32_t i_11
                
                do
                    char eax_242 = (ecx_139 s>> 8).b
                    char ecx_140 = eax_242
                    
                    if (eax_242 u> 0xff)
                        ecx_140 = -1
                    
                    uint32_t eax_243 = zx.d(0xff - ecx_140)
                    uint32_t var_24_21 = eax_243
                    int32_t var_28_21 = edx_93
                    int32_t var_2c_21 = var_1030_6
                    int32_t var_30_21 = var_1024_7
                    sub_455320(eax_243, i_39, eax_208, arg1, var_1014_12.b)
                    
                    if (var_1014_12 s<= i_39 - eax_231)
                        var_1024_7 += 1
                    else
                        var_1014_12 -= 1
                    
                    edx_93 = var_1010_16
                    
                    if (edx_93 s>= var_102c_2 - 1)
                        var_1030_6 -= 1
                    else
                        edx_93 += 1
                        var_1010_16 = edx_93
                    
                    ecx_139 = var_1020_11 + temp0_17
                    i_11 = i_31
                    i_31 -= 1
                    var_1020_11 = ecx_139
                while (i_11 != 1)
        
        int32_t eax_247
        int32_t edx_95
        edx_95:eax_247 = sx.q(arg1 + 1)
        i_81 = (eax_247 - edx_95) s>> 1
        int32_t i_83 = i_81
        
        if (eax_212 != 0 && i_81 != 0)
            int32_t ecx_144 = 0
            int32_t i_32 = i_81 - 1 + eax_212
            int32_t temp0_18 = divs.dp.d(0x10000, i_32)
            int32_t var_1020_12 = 0
            void* edx_97 = arg1 - 1
            int32_t var_1014_13 = 0
            void* var_1024_8 = arg1 - 1
            int32_t var_1030_7 = 0
            void* var_1010_17 = edx_97
            
            if (i_32 s> 0)
                int32_t i_12
                
                do
                    char eax_259 = (ecx_144 s>> 8).b
                    char ecx_145 = eax_259
                    
                    if (eax_259 u> 0xff)
                        ecx_145 = -1
                    
                    uint32_t eax_260 = zx.d(0xff - ecx_145)
                    uint32_t var_24_22 = eax_260
                    void* var_28_22 = edx_97
                    int32_t var_2c_22 = var_1030_7
                    void* var_30_22 = var_1024_8
                    sub_455320(eax_260, i_39, eax_208, arg1, var_1014_13.b)
                    
                    if (var_1014_13 s>= eax_212 - 1)
                        var_1024_8 -= 1
                    else
                        var_1014_13 += 1
                    
                    edx_97 = var_1010_17
                    
                    if (edx_97 s<= arg1 - i_83)
                        var_1030_7 += 1
                    else
                        edx_97 -= 1
                        var_1010_17 = edx_97
                    
                    ecx_144 = var_1020_12 + temp0_18
                    i_12 = i_32
                    i_32 -= 1
                    var_1020_12 = ecx_144
                while (i_12 != 1)
            
            i_81 = i_83
        
        if (eax_231 != 0 && i_81 != 0)
            int32_t ecx_149 = 0
            int32_t i_33 = i_81 - 1 + eax_231
            int32_t temp0_19 = divs.dp.d(0x10000, i_33)
            int32_t edx_100 = i_39 - 1
            int32_t var_1020_13 = 0
            i_81 = arg1 - 1
            int32_t i_93 = i_81
            int32_t var_1010_18 = edx_100
            int32_t i_91 = i_81
            int32_t var_1024_9 = edx_100
            
            if (i_33 s> 0)
                int32_t eax_274
                int32_t i_13
                
                do
                    char eax_272 = (ecx_149 s>> 8).b
                    char ecx_150 = eax_272
                    
                    if (eax_272 u> 0xff)
                        ecx_150 = -1
                    
                    uint32_t eax_273 = zx.d(0xff - ecx_150)
                    uint32_t var_24_23 = eax_273
                    int32_t i_96 = i_93
                    int32_t var_2c_23 = var_1024_9
                    int32_t i_95 = i_91
                    eax_274 = sub_455320(eax_273, i_39, eax_208, arg1, edx_100.b)
                    edx_100 = var_1010_18
                    
                    if (edx_100 s<= i_39 - eax_231)
                        i_91 -= 1
                    else
                        edx_100 -= 1
                        var_1010_18 = edx_100
                    
                    if (i_93 s<= arg1 - i_83)
                        var_1024_9 -= 1
                    else
                        i_93 -= 1
                    
                    ecx_149 = var_1020_13 + temp0_19
                    i_13 = i_33
                    i_33 -= 1
                    var_1020_13 = ecx_149
                while (i_13 != 1)
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_274
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x4574ec
        if (data_703054 == 0)
            i_39 = arg1
            ecx[2] = 1
            ecx[3] = i_39
        else
            ecx[2] = i_39
            ecx[3] = 1
        
        int32_t eax_276
        int32_t edx_102
        edx_102:eax_276 = sx.q(i_39)
        int32_t i_43 = (eax_276 - edx_102) s>> 1
        int32_t i_34 = i_43
        sub_4d6960(i_43, &ecx[1], ecx, ecx[2] * ecx[3], "AVGMASK")
        i_81 = divs.dp.d(0x10000, i_34)
        void* ebx_36 = ecx[1]
        int32_t edx_105 = 0
        
        if (i_34 s<= 0)
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return i_81
        
        void* edi_13 = i_39 - 1 + ebx_36
        char ecx_159
        int32_t i_14
        
        do
            ebx_36 += 1
            char eax_280 = (edx_105 s>> 8).b
            edi_13 -= 1
            ecx_159 = eax_280
            
            if (eax_280 u> 0xff)
                ecx_159 = -1
            
            edx_105 += i_81
            i_14 = i_34
            i_34 -= 1
            *(ebx_36 - 1) = 0xff - ecx_159
            *(edi_13 + 1) = 0xff - ecx_159
        while (i_14 != 1)
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return 0xff - ecx_159
    case 0x45759c
        char const* const var_14_16 = "AVGMASK"
        
        if (data_703054 u> 1)
            int32_t eax_290 = i_39 * 2
            int32_t ecx_173 = arg1 * 2
            ecx[2] = eax_290
            uint32_t eax_291 = eax_290 * ecx_173
            ecx[3] = ecx_173
            sub_4d6960(eax_291, &ecx[1], ecx, eax_291, var_14_16)
            int32_t eax_292 = ecx[1]
            int32_t ecx_175 = 0
            int32_t var_1020_15 = 0
            i_81 = divs.dp.d(0x10000, eax_290)
            int32_t edx_115 = eax_290
            int32_t var_1014_15 = 0
            
            if (edx_115 s> 0)
                int32_t eax_302
                
                do
                    char eax_297 = (ecx_175 s>> 8).b
                    char ecx_176 = eax_297
                    
                    if (eax_297 u> 0xff)
                        ecx_176 = -1
                    
                    void* ebx_40
                    ebx_40.b = 0xff
                    ebx_40.b = 0xff - ecx_176
                    void* var_24_26 = ebx_40
                    void* var_28_25 = arg1 - 1
                    int32_t var_2c_26 = var_1014_15
                    int32_t var_30_25 = 0
                    void* eax_299 = arg1 * 2
                    sub_455320(eax_299, edx_115, eax_292, eax_299, var_1014_15.b)
                    void* var_24_27 = ebx_40
                    void* var_28_26 = (arg1 << 1) + 0xffffffff
                    void* eax_300 = arg1 * 2
                    int32_t i_41 = i_39
                    int32_t* var_30_26 = arg1
                    sub_455320(eax_300, eax_290, eax_292, eax_300, i_39.b)
                    ecx_175 = var_1020_15 + i_81
                    i_39 += 1
                    edx_115 = eax_290
                    var_1020_15 = ecx_175
                    
                    if (i_39 == edx_115)
                        i_39 = 0
                    
                    eax_302 = var_1014_15 + 1
                    var_1014_15 = eax_302
                while (eax_302 s< edx_115)
                
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_302
        else
            int32_t edx_106 = i_39 * 2
            ecx[2] = edx_106
            int32_t* var_1040_4 = arg1
            void* ecx_162 = arg1 * 2
            ecx[3] = ecx_162
            sub_4d6960(arg1, &ecx[1], ecx, edx_106 * ecx_162, var_14_16)
            int32_t eax_282 = ecx[1]
            int32_t ecx_164 = 0
            int32_t var_1020_14 = 0
            i_81 = divs.dp.d(0x10000, ecx_162)
            void* edx_110 = ecx_162
            int32_t var_1014_14 = 0
            
            if (edx_110 s> 0)
                int32_t eax_289
                
                do
                    char eax_285 = (ecx_164 s>> 8).b
                    char ecx_165 = eax_285
                    
                    if (eax_285 u> 0xff)
                        ecx_165 = -1
                    
                    int32_t* ebx
                    ebx.b = 0xff
                    ebx.b = 0xff - ecx_165
                    int32_t* var_24_24 = ebx
                    int32_t var_28_23 = var_1014_14
                    int32_t var_2c_24 = i_39 - 1
                    int32_t var_30_23 = var_1014_14
                    sub_455320(var_1014_14, i_39 * 2, eax_282, edx_110, 0)
                    int32_t* var_24_25 = ebx
                    int32_t* var_28_24 = var_1040_4
                    void* var_2c_25 = (i_39 << 1) + 0xffffffff
                    int32_t* var_30_24 = var_1040_4
                    sub_455320((i_39 << 1) + 0xffffffff, i_39 * 2, eax_282, ecx_162, i_39.b)
                    ecx_164 = var_1020_14 + i_81
                    ebx = var_1040_4 + 1
                    edx_110 = ecx_162
                    var_1020_14 = ecx_164
                    
                    if (ebx == edx_110)
                        ebx = nullptr
                    
                    eax_289 = var_1014_14 + 1
                    var_1040_4 = ebx
                    var_1014_14 = eax_289
                while (eax_289 s< edx_110)
                
                sub_5f02dd(entry_ebx ^ &__saved_ebp)
                return eax_289
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x4577e6
        ecx[3] = arg1
        uint32_t eax_304 = i_39 * arg1
        char* var_14_17 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_304, &ecx[1], ecx, eax_304, var_14_17)
        int32_t eax_305 = ecx[1]
        int32_t i_89 = 0
        int32_t temp0_23 = divs.dp.d(sx.q(arg3 - 1 + i_39), arg3)
        int32_t temp0_24 = divs.dp.d(sx.q(arg1 - 1 + arg4), arg4)
        int32_t eax_315 = temp0_24 * temp0_23
        int32_t var_100c
        int32_t var_c0c
        int32_t var_80c
        int32_t var_40c
        int32_t edx_125
        int32_t var_1008
        int32_t var_1004
        int32_t var_1000
        int32_t var_ffc
        int32_t var_ff8
        int32_t var_ff4
        int32_t var_ff0
        int32_t var_fec
        int32_t var_fe8
        int32_t var_fe4
        int32_t var_fe0
        int32_t var_fdc
        int32_t var_fd8
        int32_t var_fd4
        int32_t var_fd0
        int32_t var_be8
        int32_t var_408
        
        if (temp0_23 s< 0x1e && temp0_24 s< 0x1e)
            int32_t var_7e4_1 = 0
            int32_t eax_319 = temp0_23 s>> 2
            int32_t var_be4_1 = eax_319
            int32_t var_c04_1 = eax_319
            int32_t var_bec_1 = eax_319
            var_c0c = eax_319
            int32_t edx_123 = (temp0_23 + 1) s>> 2
            int32_t eax_323 = (((temp0_23 + 1) s>> 1) + 1) s>> 1
            int32_t var_bd0_1 = eax_323
            int32_t var_bf0_1 = eax_323
            int32_t var_bd8_1 = eax_323
            int32_t var_bf8_1 = eax_323
            int32_t ebx_46 = ((temp0_23 s>> 1) + 1) s>> 1
            int32_t eax_327 = (((temp0_24 + 1) s>> 1) + 1) s>> 1
            int32_t var_3d0_1 = eax_327
            int32_t var_3e0_1 = eax_327
            int32_t var_3d4_1 = eax_327
            int32_t var_3e4_1 = eax_327
            int32_t eax_329 = eax_319 * arg3
            int32_t edi_15 = temp0_24 s>> 2
            int32_t esi_18 = ((temp0_24 s>> 1) + 1) s>> 1
            int32_t ecx_188 = (temp0_24 + 1) s>> 2
            int32_t var_bd4_1 = ebx_46
            int32_t var_7d4_1 = eax_329
            int32_t var_7f4_1 = eax_329
            int32_t var_7dc_1 = eax_329
            int32_t var_7fc_1 = eax_329
            int32_t var_bf4_1 = ebx_46
            int32_t eax_332 = (eax_319 + edx_123) * arg3
            int32_t var_bdc_1 = ebx_46
            int32_t var_bfc_1 = ebx_46
            int32_t var_be0_1 = edx_123
            int32_t var_c00_1 = edx_123
            int32_t var_7e0_1 = eax_332
            int32_t var_800_1 = eax_332
            int32_t var_7e8_1 = eax_332
            int32_t var_808_1 = eax_332
            int32_t eax_335 = (edx_123 + ebx_46 + eax_319) * arg3
            var_be8 = edx_123
            int32_t var_c08_1 = edx_123
            int32_t var_3f8_1 = edi_15
            var_408 = edi_15
            int32_t var_3fc_1 = edi_15
            var_40c = edi_15
            int32_t var_3d8_1 = esi_18
            int32_t var_3e8_1 = esi_18
            int32_t var_3dc_1 = esi_18
            int32_t var_3ec_1 = esi_18
            int32_t var_3f0_1 = ecx_188
            int32_t var_400_1 = ecx_188
            int32_t var_3f4_1 = ecx_188
            int32_t var_404_1 = ecx_188
            int32_t var_804_1 = 0
            int32_t var_7ec_1 = 0
            var_80c = 0
            int32_t var_7d0_1 = eax_335
            int32_t var_7f0_1 = eax_335
            int32_t var_7d8_1 = eax_335
            int32_t var_7f8_1 = eax_335
            int32_t eax_337 = edi_15 * arg4
            var_ff8 = 0
            var_1008 = 0
            var_ffc = 0
            var_100c = 0
            var_fd8 = eax_337
            var_fe8 = eax_337
            var_fdc = eax_337
            var_fec = eax_337
            int32_t eax_339 = (ecx_188 + edi_15) * arg4
            var_ff0 = eax_339
            var_1000 = eax_339
            var_ff4 = eax_339
            var_1004 = eax_339
            i_39 = i_40
            int32_t eax_342 = (ecx_188 + esi_18 + edi_15) * arg4
            edx_125 = 0xf
            var_fd0 = eax_342
            var_fe0 = eax_342
            var_fd4 = eax_342
            var_fe4 = eax_342
        else
            int32_t var_7cc
            int32_t var_78c
            int32_t var_74c
            
            if (temp0_23 s>= 0x12c || temp0_24 s>= 0x12c)
                var_c0c = temp0_23 s>> 4
                int32_t var_c08_3 = ((temp0_23 s>> 3) + 1) s>> 1
                int32_t var_c00_3 = ((((temp0_23 s>> 2) + 1) s>> 1) + 1) s>> 1
                int32_t var_c04_3 = ((temp0_23 s>> 2) + 1) s>> 2
                int32_t i_38 = 0xf
                int32_t var_bfc_3 = ((temp0_23 s>> 1) + 1) s>> 3
                int32_t var_bf8_3 = ((((temp0_23 s>> 1) + 1) s>> 2) + 1) s>> 1
                int32_t var_bf4_3 = ((((temp0_23 s>> 1) + 1) s>> 1) + 1) s>> 2
                int32_t var_bec_2 = (temp0_23 + 1) s>> 4
                int32_t var_bf0_3 = ((((((temp0_23 s>> 1) + 1) s>> 1) + 1) s>> 1) + 1) s>> 1
                var_be8 = (((temp0_23 + 1) s>> 3) + 1) s>> 1
                int32_t var_be4_2 = (((temp0_23 + 1) s>> 2) + 1) s>> 2
                int32_t var_be0_2 = (((((temp0_23 + 1) s>> 2) + 1) s>> 1) + 1) s>> 1
                void var_bcc
                void* edx_133 = &var_bcc
                int32_t var_bdc_2 = (((temp0_23 + 1) s>> 1) + 1) s>> 3
                int32_t var_bd8_2 = (((((temp0_23 + 1) s>> 1) + 1) s>> 2) + 1) s>> 1
                int32_t var_bd4_2 = (((((temp0_23 + 1) s>> 1) + 1) s>> 1) + 1) s>> 2
                int32_t var_bd0_2 = (((((((temp0_23 + 1) s>> 1) + 1) s>> 1) + 1) s>> 1) + 1) s>> 1
                int32_t i_15
                
                do
                    for (int32_t j_5 = 0; j_5 s< 0x10; )
                        int32_t eax_424 = (&var_c0c)[j_5]
                        j_5 += 1
                        *edx_133 = eax_424
                        edx_133 += 4
                    
                    i_15 = i_38
                    i_38 -= 1
                while (i_15 != 1)
                int32_t* esi_24 = &var_408
                int32_t i_35 = 0x10
                var_40c = temp0_24 s>> 4
                int32_t var_3cc_2 = ((temp0_24 s>> 3) + 1) s>> 1
                int32_t var_34c_2 = ((((temp0_24 s>> 2) + 1) s>> 1) + 1) s>> 1
                int32_t var_38c_2 = ((temp0_24 s>> 2) + 1) s>> 2
                int32_t var_30c_1 = ((temp0_24 s>> 1) + 1) s>> 3
                int32_t var_2cc_1 = ((((temp0_24 s>> 1) + 1) s>> 2) + 1) s>> 1
                int32_t var_28c_1 = ((((temp0_24 s>> 1) + 1) s>> 1) + 1) s>> 2
                int32_t var_20c_1 = (temp0_24 + 1) s>> 4
                int32_t var_24c_1 = ((((((temp0_24 s>> 1) + 1) s>> 1) + 1) s>> 1) + 1) s>> 1
                int32_t var_1cc_1 = (((temp0_24 + 1) s>> 3) + 1) s>> 1
                int32_t var_18c_1 = (((temp0_24 + 1) s>> 2) + 1) s>> 2
                int32_t var_14c_1 = (((((temp0_24 + 1) s>> 2) + 1) s>> 1) + 1) s>> 1
                int32_t var_10c_1 = (((temp0_24 + 1) s>> 1) + 1) s>> 3
                int32_t var_cc_1 = (((((temp0_24 + 1) s>> 1) + 1) s>> 2) + 1) s>> 1
                int32_t var_8c_1 = (((((temp0_24 + 1) s>> 1) + 1) s>> 1) + 1) s>> 2
                int32_t var_4c_1 = (((((((temp0_24 + 1) s>> 1) + 1) s>> 1) + 1) s>> 1) + 1) s>> 1
                int32_t j_8
                int32_t i_16
                
                do
                    int32_t* ecx_263 = esi_24
                    j_8 = 0xf
                    int32_t j_6
                    
                    do
                        ecx_263 = &ecx_263[1]
                        ecx_263[-1] = esi_24[-1]
                        j_6 = j_8
                        j_8 -= 1
                    while (j_6 != 1)
                    esi_24 = &esi_24[0x10]
                    i_16 = i_35
                    i_35 -= 1
                while (i_16 != 1)
                
                for (int32_t i_17 = 0; i_17 s< 0x40; i_17 += 4)
                    int32_t j_9 = j_8
                    j_8 += *(&var_c0c + i_17)
                    int32_t eax_458 = j_9 * arg3
                    *(&var_80c + i_17) = eax_458
                    *(&var_7cc + i_17) = eax_458
                    *(&var_78c + i_17) = eax_458
                    *(&var_74c + i_17) = eax_458
                    void var_70c
                    *(&var_70c + i_17) = eax_458
                    void var_6cc
                    *(&var_6cc + i_17) = eax_458
                    void var_68c
                    *(&var_68c + i_17) = eax_458
                    void var_64c
                    *(&var_64c + i_17) = eax_458
                    void var_60c
                    *(&var_60c + i_17) = eax_458
                    void var_5cc
                    *(&var_5cc + i_17) = eax_458
                    void var_58c
                    *(&var_58c + i_17) = eax_458
                    void var_54c
                    *(&var_54c + i_17) = eax_458
                    void var_50c
                    *(&var_50c + i_17) = eax_458
                    void var_4cc
                    *(&var_4cc + i_17) = eax_458
                    void var_48c
                    *(&var_48c + i_17) = eax_458
                    void var_44c
                    *(&var_44c + i_17) = eax_458
                
                int32_t edx_137 = 0
                
                for (int32_t i_18 = 0; i_18 s< 0x400; i_18 += 0x40)
                    int32_t eax_459 = edx_137
                    edx_137 += *(&var_40c + i_18)
                    int32_t eax_460 = eax_459 * arg4
                    *(&var_100c + i_18) = eax_460
                    *(&var_1008 + i_18) = eax_460
                    *(&var_1004 + i_18) = eax_460
                    *(&var_1000 + i_18) = eax_460
                    *(&var_ffc + i_18) = eax_460
                    *(&var_ff8 + i_18) = eax_460
                    *(&var_ff4 + i_18) = eax_460
                    *(&var_ff0 + i_18) = eax_460
                    *(&var_fec + i_18) = eax_460
                    *(&var_fe8 + i_18) = eax_460
                    *(&var_fe4 + i_18) = eax_460
                    *(&var_fe0 + i_18) = eax_460
                    *(&var_fdc + i_18) = eax_460
                    *(&var_fd8 + i_18) = eax_460
                    *(&var_fd4 + i_18) = eax_460
                    *(&var_fd0 + i_18) = eax_460
                
                edx_125 = 0xff
            else
                int32_t eax_346 = ((temp0_23 s>> 2) + 1) s>> 1
                int32_t eax_348 = ((temp0_23 s>> 1) + 1) s>> 2
                int32_t ecx_194 = ((((temp0_23 s>> 1) + 1) s>> 1) + 1) s>> 1
                int32_t esi_19 = 7
                int32_t edx_127 = temp0_23 s>> 3
                int32_t eax_350 = (temp0_23 + 1) s>> 3
                int32_t eax_354 = (((temp0_23 + 1) s>> 2) + 1) s>> 1
                int32_t eax_356 = (((temp0_23 + 1) s>> 1) + 1) s>> 2
                int32_t* ecx_201 = &var_be8
                var_c0c = edx_127
                
                while (true)
                    ecx_201[-1] = edx_127
                    ecx_201 = &ecx_201[8]
                    ecx_201[-8] = eax_346
                    ecx_201[-7] = eax_348
                    ecx_201[-6] = ecx_194
                    ecx_201[-5] = eax_350
                    ecx_201[-4] = eax_354
                    ecx_201[-3] = eax_356
                    ecx_201[-2] = (((((temp0_23 + 1) s>> 1) + 1) s>> 1) + 1) s>> 1
                    int32_t temp3_1 = esi_19
                    esi_19 -= 1
                    
                    if (temp3_1 == 1)
                        break
                    
                    edx_127 = var_c0c
                
                int32_t ecx_203 = temp0_24 s>> 3
                var_40c = ecx_203
                int32_t edx_129 = ((temp0_24 s>> 1) + 1) s>> 2
                int32_t eax_369 = ((((temp0_24 s>> 1) + 1) s>> 1) + 1) s>> 1
                int32_t var_3ac_1 = eax_369
                int32_t ebx_50 = (((temp0_24 + 1) s>> 2) + 1) s>> 1
                int32_t var_36c_1 = ebx_50
                int32_t esi_23 = ((temp0_24 s>> 2) + 1) s>> 1
                int32_t edi_18 = (temp0_24 + 1) s>> 3
                int32_t eax_373 = (((temp0_24 + 1) s>> 1) + 1) s>> 2
                int32_t ebx_54 = (((((temp0_24 + 1) s>> 1) + 1) s>> 1) + 1) s>> 1
                int32_t var_32c_1 = ebx_54
                var_408 = ecx_203
                int32_t var_404_2 = ecx_203
                int32_t var_400_2 = ecx_203
                int32_t var_3fc_2 = ecx_203
                int32_t var_3f8_2 = ecx_203
                int32_t var_3f4_2 = ecx_203
                int32_t var_3f0_2 = ecx_203
                int32_t var_3ec_2 = esi_23
                int32_t var_3cc_1 = edx_129
                int32_t var_38c_1 = edi_18
                int32_t var_34c_1 = eax_373
                int32_t var_3e8_2 = esi_23
                int32_t var_3e4_2 = esi_23
                int32_t var_3e0_2 = esi_23
                int32_t var_3dc_2 = esi_23
                int32_t var_3d8_2 = esi_23
                int32_t var_3d4_2 = esi_23
                int32_t var_3d0_2 = esi_23
                int32_t var_3c8_1 = edx_129
                int32_t var_3c4_1 = edx_129
                int32_t var_3c0_1 = edx_129
                int32_t var_3bc_1 = edx_129
                int32_t var_3b8_1 = edx_129
                int32_t var_3b4_1 = edx_129
                int32_t var_3b0_1 = edx_129
                int32_t var_3a8_1 = eax_369
                int32_t var_3a4_1 = eax_369
                int32_t var_3a0_1 = eax_369
                int32_t var_39c_1 = eax_369
                int32_t var_398_1 = eax_369
                int32_t var_394_1 = eax_369
                int32_t var_390_1 = eax_369
                int32_t var_388_1 = edi_18
                int32_t var_384_1 = edi_18
                int32_t var_380_1 = edi_18
                int32_t var_37c_1 = edi_18
                int32_t var_378_1 = edi_18
                int32_t var_374_1 = edi_18
                int32_t var_370_1 = edi_18
                int32_t var_368_1 = ebx_50
                int32_t var_364_1 = ebx_50
                int32_t var_360_1 = ebx_50
                int32_t ecx_205 = var_c0c
                int32_t var_348_1 = eax_373
                int32_t var_344_1 = eax_373
                int32_t var_340_1 = eax_373
                int32_t var_33c_1 = eax_373
                int32_t var_338_1 = eax_373
                int32_t var_334_1 = eax_373
                int32_t var_330_1 = eax_373
                int32_t var_328_1 = ebx_54
                int32_t var_324_1 = ebx_54
                int32_t var_320_1 = ebx_54
                int32_t var_31c_1 = ebx_54
                int32_t var_318_1 = ebx_54
                int32_t var_314_1 = ebx_54
                int32_t var_310_1 = ebx_54
                int32_t ecx_206 = ecx_205 + eax_346
                int32_t var_35c_1 = ebx_50
                int32_t var_358_1 = ebx_50
                int32_t var_354_1 = ebx_50
                int32_t var_350_1 = ebx_50
                int32_t eax_376 = ecx_205 * arg3
                var_80c = 0
                int32_t var_7ec_2 = 0
                var_7cc = 0
                int32_t var_7ac_1 = 0
                int32_t var_808_2 = eax_376
                int32_t var_7e8_2 = eax_376
                int32_t var_7c8_1 = eax_376
                int32_t var_7a8_1 = eax_376
                int32_t var_788_1 = eax_376
                int32_t var_768_1 = eax_376
                int32_t var_748_1 = eax_376
                int32_t var_728_1 = eax_376
                int32_t ecx_207 = ecx_206 + eax_348
                int32_t eax_378 = ecx_206 * arg3
                var_78c = 0
                int32_t var_76c_1 = 0
                var_74c = 0
                int32_t var_72c_1 = 0
                int32_t var_804_2 = eax_378
                int32_t var_7e4_2 = eax_378
                int32_t var_7c4_1 = eax_378
                int32_t var_7a4_1 = eax_378
                int32_t var_784_1 = eax_378
                int32_t var_764_1 = eax_378
                int32_t var_744_1 = eax_378
                int32_t var_724_1 = eax_378
                int32_t ecx_208 = ecx_207 + ecx_194
                int32_t eax_380 = ecx_207 * arg3
                int32_t var_800_2 = eax_380
                int32_t var_7e0_2 = eax_380
                int32_t var_7c0_1 = eax_380
                int32_t var_7a0_1 = eax_380
                int32_t var_780_1 = eax_380
                int32_t var_760_1 = eax_380
                int32_t var_740_1 = eax_380
                int32_t var_720_1 = eax_380
                int32_t ecx_209 = ecx_208 + eax_350
                int32_t eax_382 = ecx_208 * arg3
                int32_t var_7fc_2 = eax_382
                int32_t var_7dc_2 = eax_382
                int32_t var_7bc_1 = eax_382
                int32_t var_79c_1 = eax_382
                int32_t var_77c_1 = eax_382
                int32_t var_75c_1 = eax_382
                int32_t var_73c_1 = eax_382
                int32_t var_71c_1 = eax_382
                int32_t eax_384 = ecx_209 * arg3
                int32_t var_7f8_2 = eax_384
                int32_t var_7d8_2 = eax_384
                int32_t var_7b8_1 = eax_384
                int32_t var_798_1 = eax_384
                int32_t var_778_1 = eax_384
                int32_t var_758_1 = eax_384
                int32_t ecx_210 = ecx_209 + eax_354
                int32_t edx_130 = 0
                int32_t var_738_1 = eax_384
                int32_t var_718_1 = eax_384
                int32_t eax_386 = ecx_210 * arg3
                int32_t var_7f4_2 = eax_386
                int32_t var_7d4_2 = eax_386
                int32_t var_7b4_1 = eax_386
                int32_t var_794_1 = eax_386
                int32_t var_774_1 = eax_386
                int32_t var_754_1 = eax_386
                int32_t var_734_1 = eax_386
                int32_t var_714_1 = eax_386
                int32_t eax_389 = (eax_356 + ecx_210) * arg3
                int32_t i_19 = 0
                int32_t var_7f0_2 = eax_389
                int32_t var_7d0_2 = eax_389
                int32_t var_7b0_1 = eax_389
                int32_t var_790_1 = eax_389
                int32_t var_770_1 = eax_389
                int32_t var_750_1 = eax_389
                int32_t var_730_1 = eax_389
                int32_t var_710_1 = eax_389
                
                do
                    int32_t eax_390 = edx_130
                    edx_130 += *(&var_40c + i_19)
                    int32_t eax_391 = eax_390 * arg4
                    *(&var_100c + i_19) = eax_391
                    *(&var_1008 + i_19) = eax_391
                    *(&var_1004 + i_19) = eax_391
                    *(&var_1000 + i_19) = eax_391
                    *(&var_ffc + i_19) = eax_391
                    *(&var_ff8 + i_19) = eax_391
                    *(&var_ff4 + i_19) = eax_391
                    *(&var_ff0 + i_19) = eax_391
                    i_19 += 0x20
                while (i_19 s< 0x100)
                
                i_39 = i_40
                edx_125 = 0x3f
        int32_t ecx_264 = 0
        int32_t var_1038_2 = edx_125
        int32_t var_103c_2 = 0
        i_81 = 0
        
        while (true)
            i_81 s>>= 0x10
            
            if (i_81.b u> 0xff)
                break
            
            if (i_81.b == 0xff)
                break
            
            int32_t ebx_59 = (&var_c0c)[edx_125 & ecx_264]
            
            if (ebx_59 != 0)
                int32_t esi_25 = (&var_40c)[edx_125 & ecx_264]
                
                if (esi_25 != 0)
                    uint32_t var_102c_3
                    
                    if (ebx_59 s<= 0)
                        var_102c_3 = 0
                    else
                        var_102c_3 = modu.dp.d(0:(sub_4d18c0(2)), ebx_59)
                    
                    uint32_t esi_26
                    
                    if (esi_25 s<= 0)
                        esi_26 = 0
                    else
                        esi_26 = modu.dp.d(0:(sub_4d18c0(2)), esi_25)
                    
                    int32_t edx_143 = var_102c_3 * arg3
                    int32_t esi_27 = esi_26 * arg4
                    int32_t var_102c_4 = edx_143
                    int32_t var_1020_16 = 0
                    int32_t ecx_267 = (&var_100c)[edx_125 & ecx_264]
                    int32_t ebx_60 = (&var_80c)[edx_125 & ecx_264]
                    int32_t var_1014_19 = ecx_267
                    int32_t var_1024_10 = ebx_60
                    
                    while (true)
                        int32_t eax_471 = edx_143
                        int32_t edx_144 = 0
                        int32_t ebx_61 = ebx_60 + (ecx_267 + esi_27) * i_39
                        i_39 = i_40
                        
                        if (*(var_102c_4 + ebx_61 + eax_305) == 0)
                        label_458450:
                            int32_t ecx_275 = var_1024_10 + eax_471
                            int32_t esi_28 = esi_27 + var_1014_19
                            int32_t ebx_65 = arg4 - 1 + esi_28
                            int32_t var_1028_19 = ecx_275
                            int32_t edx_146 = arg3 - 1 + ecx_275
                            int32_t ebx_66 = ebx_65 - esi_28
                            int32_t var_1010_23 = edx_146
                            
                            if (ebx_65 - esi_28 s< 0)
                                esi_28 = ebx_65
                                ebx_66 = neg.d(ebx_66)
                            
                            int32_t i_37 = ebx_66 + 1
                            
                            if (i_37 s> 0)
                                int32_t eax_472
                                eax_472.b = 0xff
                                eax_472.b = 0xff - i_81.b
                                int32_t var_1050_2 = eax_472
                                int32_t i_20
                                
                                do
                                    int32_t var_24_28 = eax_472
                                    int32_t var_28_27 = esi_28
                                    int32_t var_2c_27 = edx_146
                                    int32_t var_30_27 = esi_28
                                    sub_455320(eax_472, i_39, eax_305, arg1, ecx_275.b)
                                    eax_472 = var_1050_2
                                    ecx_275 = var_1028_19
                                    esi_28 += 1
                                    edx_146 = var_1010_23
                                    i_20 = i_37
                                    i_37 -= 1
                                while (i_20 != 1)
                            
                            break
                        
                        while (true)
                            edx_144 += 1
                            
                            if (edx_144 s>= (&var_c0c)[edx_125 & ecx_264])
                                break
                            
                            eax_471 += arg3
                            
                            if (eax_471 s>= ebx_59 * arg3)
                                eax_471 = 0
                            
                            i_39 = i_40
                            
                            if (*(eax_471 + ebx_61 + eax_305) == 0)
                                goto label_458450
                        
                        int32_t eax_475 = var_1020_16 + 1
                        var_1020_16 = eax_475
                        
                        if (eax_475 s>= esi_25)
                            break
                        
                        esi_27 += arg4
                        edx_143 = var_102c_4
                        ecx_267 = var_1014_19
                        ebx_60 = var_1024_10
                        
                        if (esi_27 s>= esi_25 * arg4)
                            esi_27 = 0
                    
                    int32_t ecx_278 = var_103c_2 + 1
                    i_81 = i_89 + divs.dp.d(0x1000000, eax_315)
                    i_89 = i_81
                    var_103c_2 = ecx_278
                    
                    if (ecx_278 == eax_315)
                        break
                    
                    edx_125 = var_1038_2
                    ecx_264 += 1
                    continue
            
            i_81 = i_89
            ecx_264 += 1
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
    case 0x45854b
        ecx[3] = arg1
        uint32_t eax_477 = i_39 * arg1
        char* var_14_18 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_477, &ecx[1], ecx, eax_477, var_14_18)
        int32_t eax_478 = ecx[1]
        int32_t i_63 = arg4
        void* i_53 = nullptr
        void* i_54 = nullptr
        int32_t i_68 = i_63
        
        if (i_63 == 0)
            i_63 = i_39 s>> 1
            i_68 = i_63
        
        int32_t i_57 = arg5
        int32_t i_67 = i_57
        
        if (i_57 == 0)
            i_57 = arg1 s>> 1
            i_67 = i_57
        
        if (i_63 s> i_39)
            int32_t i_58 = i_63
            
            if (i_63 s< 0)
                i_58 = neg.d(i_58)
            
            if (i_58 s> 0)
                i_53 = i_58
            
            i_54 = i_53
        
        if (i_63 s>= 0)
            if (i_63 s> i_53)
                i_53 = i_63
            
            int32_t i_60 = i_39 - i_63
            
            if (i_39 - i_63 s< 0)
                i_60 = neg.d(i_60)
            
            if (i_60 s> i_53)
                i_53 = i_60
            
            i_54 = i_53
        else
            int32_t i_59 = i_39 - i_63
            
            if (i_39 - i_63 s< 0)
                i_59 = neg.d(i_59)
            
            if (i_59 s> i_53)
                i_53 = i_59
                i_54 = i_53
        
        if (i_57 s> arg1)
            int32_t i_61 = i_57
            
            if (i_57 s< 0)
                i_61 = neg.d(i_61)
            
            if (i_61 s> i_53)
                i_53 = i_61
            
            i_54 = i_53
        
        if (i_57 s>= 0)
            if (i_57 s> i_53)
                i_53 = i_57
            
            void* i_56 = arg1 - i_57
            
            if (arg1 - i_57 s< 0)
                i_56 = neg.d(i_56)
            
            if (i_56 s> i_53)
                i_53 = i_56
            
            i_54 = i_53
        else
            void* i_55 = arg1 - i_57
            
            if (arg1 - i_57 s< 0)
                i_55 = neg.d(i_55)
            
            if (i_55 s> i_53)
                i_53 = i_55
                i_54 = i_53
        
        int32_t var_1044_8 = 0
        int32_t i_66 = i_57
        void* i_44 = i_53
        
        if (i_53 == 0)
            i_44 = 1
        
        int32_t temp0_28 = divs.dp.d(0x10000, i_44)
        int32_t i_72 = i_57
        void* eax_483 = i_63 - i_53
        void* eax_485 = i_57 - i_53
        
        if (i_44 s> 0)
            void* i_36 = i_44
            int32_t eax_487 = 0
            void* i_21
            
            do
                char ecx_284 = (eax_487 s>> 8).b
                char eax_488 = ecx_284
                
                if (ecx_284 u> 0xff)
                    eax_488 = -1
                
                var_103c.b = eax_488
                int32_t eax_490 = i_68 - i_57 + i_72
                sub_455500(eax_490, i_39, eax_478, arg1, eax_483, eax_485, eax_490, i_72, var_103c)
                i_72 = i_66 - 1
                eax_487 = var_1044_8 + temp0_28
                i_21 = i_36
                i_36 -= 1
                i_66 = i_72
                var_1044_8 = eax_487
            while (i_21 != 1)
            i_53 = i_54
            i_57 = i_67
        
        i_81 = i_68
        int32_t var_1020_17 = 0
        int32_t i_64 = i_57
        void* var_1010_24 = nullptr
        void* i_52 = i_44
        
        if (i_52 s> 0)
            void* eax_498
            
            do
                char ecx_288 = (var_1020_17 s>> 8).b
                char eax_492 = ecx_288
                
                if (ecx_288 u> 0xff)
                    eax_492 = -1
                
                var_103c.b = eax_492
                void* eax_494 = var_1010_24 + i_81 + 1
                sub_455500(eax_494, i_39, eax_478, arg1, i_81 + 1 + i_53, eax_485, eax_494, i_64, 
                    var_103c)
                i_64 -= 1
                var_1020_17 += temp0_28
                eax_498 = var_1010_24 + 1
                var_1010_24 = eax_498
            while (eax_498 s< i_44)
            i_53 = i_54
            i_57 = i_67
            i_81 = i_68
            i_52 = i_44
        
        int32_t edi_21 = i_57 + 1
        int32_t var_1020_18 = 0
        int32_t i_92 = i_81
        int32_t var_1040_6 = 0
        
        if (i_52 s> 0)
            int32_t eax_505
            
            do
                char ecx_291 = (var_1020_18 s>> 8).b
                char eax_499 = ecx_291
                
                if (ecx_291 u> 0xff)
                    eax_499 = -1
                
                var_103c.b = eax_499
                int32_t eax_501 = var_1040_6 + edi_21
                sub_455500(eax_501, i_40, eax_478, arg1, eax_483, i_53 + 1 + i_57, i_92, eax_501, 
                    var_103c)
                i_92 -= 1
                var_1020_18 += temp0_28
                eax_505 = var_1040_6 + 1
                var_1040_6 = eax_505
            while (eax_505 s< i_44)
            i_53 = i_54
            i_57 = i_67
            i_81 = i_68
        
        int32_t var_1010_25 = 0
        int32_t var_1020_19 = 0
        
        if (i_44 s<= 0)
            sub_5f02dd(entry_ebx ^ &__saved_ebp)
            return i_81
        
        int32_t edx_161 = 1 + i_81
        int32_t var_101c_27 = edx_161
        int32_t eax_512
        
        do
            char ecx_294 = (var_1010_25 s>> 8).b
            char eax_506 = ecx_294
            
            if (ecx_294 u> 0xff)
                eax_506 = -1
            
            var_103c.b = eax_506
            int32_t eax_508 = var_1020_19 + edi_21
            sub_455500(eax_508, i_40, eax_478, arg1, i_53 + 1 + i_81, i_53 + i_57 + 1, edx_161, 
                eax_508, var_103c)
            var_1010_25 += temp0_28
            edx_161 = var_101c_27 + 1
            eax_512 = var_1020_19 + 1
            var_101c_27 = edx_161
            var_1020_19 = eax_512
        while (eax_512 s< i_44)
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_512
    case 0x45899f
        ecx[3] = arg1
        uint32_t eax_514 = i_39 * arg1
        char* var_14_19 = "AVGMASK"
        ecx[2] = i_39
        sub_4d6960(eax_514, &ecx[1], ecx, eax_514, var_14_19)
        int32_t eax_515 = ecx[1]
        int32_t i_71 = arg4
        int32_t i_62 = 0
        int32_t i_65 = 0
        int32_t i_79 = i_71
        
        if (i_71 == 0)
            i_71 = i_39 s>> 1
            i_79 = i_71
        
        int32_t i_77 = arg5
        int32_t i_78 = i_77
        
        if (i_77 == 0)
            i_77 = arg1 s>> 1
            i_78 = i_77
        
        if (i_71 s> i_39)
            int32_t i_73 = i_71
            
            if (i_71 s< 0)
                i_73 = neg.d(i_73)
            
            if (i_73 s> 0)
                i_62 = i_73
            
            i_65 = i_62
        
        if (i_71 s>= 0)
            if (i_71 s> i_62)
                i_62 = i_71
            
            int32_t i_75 = i_39 - i_71
            
            if (i_39 - i_71 s< 0)
                i_75 = neg.d(i_75)
            
            if (i_75 s> i_62)
                i_62 = i_75
            
            i_65 = i_62
        else
            int32_t i_74 = i_39 - i_71
            
            if (i_39 - i_71 s< 0)
                i_74 = neg.d(i_74)
            
            if (i_74 s> i_62)
                i_62 = i_74
                i_65 = i_62
        
        if (i_77 s> arg1)
            int32_t i_76 = i_77
            
            if (i_77 s< 0)
                i_76 = neg.d(i_76)
            
            if (i_76 s> i_62)
                i_62 = i_76
            
            i_65 = i_62
        
        if (i_77 s>= 0)
            if (i_77 s> i_62)
                i_62 = i_77
            
            int32_t i_70 = arg1 - i_77
            
            if (arg1 - i_77 s< 0)
                i_70 = neg.d(i_70)
            
            if (i_70 s> i_62)
                i_62 = i_70
            
            i_65 = i_62
        else
            int32_t i_69 = arg1 - i_77
            
            if (arg1 - i_77 s< 0)
                i_69 = neg.d(i_69)
            
            if (i_69 s> i_62)
                i_62 = i_69
                i_65 = i_62
        
        int32_t i_80 = i_77
        int32_t i_51 = i_62
        
        if (i_62 == 0)
            i_51 = 1
        
        int32_t temp0_29 = divs.dp.d(0x10000, i_51)
        int32_t edx_168 = i_71 - i_62
        int32_t eax_519 = 0
        int32_t var_101c_28 = 0
        int32_t edx_170 = i_77 - i_62
        int32_t i_47 = i_51
        
        if (i_47 s> 0)
            int32_t i_25 = i_47
            int32_t i_22
            
            do
                char ecx_302 = (eax_519 s>> 8).b
                uint32_t eax_520 = zx.d(ecx_302)
                
                if (ecx_302 u> 0xff)
                    eax_520 = 0xff
                
                var_103c.b = eax_520.b
                sub_455500(eax_520, i_39, eax_515, arg1, edx_168, edx_170, i_79, i_80, var_103c)
                eax_519 = var_101c_28 + temp0_29
                i_80 -= 1
                i_22 = i_25
                i_25 -= 1
                var_101c_28 = eax_519
            while (i_22 != 1)
            i_62 = i_65
            i_71 = i_79
            i_47 = i_51
        
        int32_t eax_522 = 0
        int32_t var_1020_20 = 0
        int32_t var_1010_26 = 0
        
        if (i_47 s> 0)
            int32_t eax_529
            
            do
                char ecx_307 = (eax_522 s>> 8).b
                char eax_523 = ecx_307
                
                if (ecx_307 u> 0xff)
                    eax_523 = -1
                
                var_103c.b = eax_523
                int32_t eax_525 = var_1010_26 + i_71 + 1
                sub_455500(eax_525, i_39, eax_515, arg1, i_71 + 1 + i_62, edx_170, eax_525, i_78, 
                    var_103c)
                i_47 = i_51
                var_1020_20 += temp0_29
                eax_529 = var_1010_26 + 1
                var_1010_26 = eax_529
                eax_522 = var_1020_20
            while (eax_529 s< i_47)
            i_62 = i_65
        
        int32_t ecx_309 = 0
        int32_t var_101c_29 = 0
        
        if (i_47 s> 0)
            int32_t i_94 = i_79
            int32_t i_26 = i_47
            int32_t i_23
            
            do
                char ecx_310 = (ecx_309 s>> 8).b
                uint32_t eax_533 = zx.d(ecx_310)
                
                if (ecx_310 u> 0xff)
                    eax_533 = 0xff
                
                var_103c.b = eax_533.b
                sub_455500(eax_533, i_39, eax_515, arg1, edx_168, i_78 + 1 + i_62, i_94, i_78 + 1, 
                    var_103c)
                ecx_309 = var_101c_29 + temp0_29
                i_94 -= 1
                i_23 = i_26
                i_26 -= 1
                var_101c_29 = ecx_309
            while (i_23 != 1)
            i_62 = i_65
            i_47 = i_51
        
        i_81 = 0
        int32_t i_88 = 0
        int32_t ebx_77 = 0
        
        if (i_47 s> 0)
            do
                char ecx_318 = (i_81 s>> 8).b
                char eax_534 = ecx_318
                
                if (ecx_318 u> 0xff)
                    eax_534 = -1
                
                var_103c.b = eax_534
                int32_t eax_536 = i_78 + 1 + ebx_77
                sub_455500(eax_536, i_39, eax_515, arg1, i_71 + 1 + i_62, i_78 + 1 + i_62, 
                    i_71 + 1, eax_536, var_103c)
                ebx_77 += 1
                i_81 = i_88 + temp0_29
                i_88 = i_81
            while (ebx_77 s< i_51)
        
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return i_81
