// 函数: sub_5332f0
// 地址: 0x5332f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char** i = data_1bfdd30 - 0x190
int32_t var_1c
int32_t var_18
int32_t var_14

switch (i)
    case nullptr
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$%%%", &data_1b8a720)
        int32_t ecx_2 = data_1b8a720
        
        if (ecx_2 u<= 0x3f)
            return sub_4e8000(
                sub_4e8000(
                    sub_4e8000(sub_57dd70(&var_18, &var_1c, ecx_2, &var_18, &var_14), data_1b8a744, 
                        data_1b8a740, var_1c, &data_704898), 
                    data_1b8a758, data_1b8a754, var_18, &data_704898), 
                data_1b8a76c, data_1b8a768, var_14, &data_704898)
        
        return i
    case 1
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        int32_t ecx_8 = data_1b8a720
        
        if (ecx_8 u> 0x3f)
            return i
        
        sub_57dae0(i, data_1b8a734, ecx_8, data_1b8a748, data_1b8a75c)
        return sub_577c90(data_1b8a720)
    case 2
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_12 = data_1b8a720
        
        if (ecx_12 u> 0x3f)
            return i
        
        sub_57dd10(ecx_12)
        return sub_577c90(data_1b8a720)
    case 3
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$%%%", &data_1b8a720)
        int32_t ecx_16 = data_1b8a720
        
        if (ecx_16 u<= 0x3f)
            return sub_4e8000(
                sub_4e8000(
                    sub_4e8000(sub_57d9a0(&var_18, &var_1c, ecx_16, &var_18, &var_14), 
                        data_1b8a744, data_1b8a740, var_1c, &data_704898), 
                    data_1b8a758, data_1b8a754, var_18, &data_704898), 
                data_1b8a76c, data_1b8a768, var_14, &data_704898)
        
        return i
    case 4
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        int32_t ecx_22 = data_1b8a720
        
        if (ecx_22 u> 0x3f)
            return i
        
        sub_57d850(i, data_1b8a734, ecx_22, data_1b8a748, data_1b8a75c)
        return sub_577c90(data_1b8a720)
    case 5
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_26 = data_1b8a720
        
        if (ecx_26 u> 0x3f)
            return i
        
        sub_57d950(ecx_26)
        return sub_577c90(data_1b8a720)
    case 0xa
        int32_t eax_15 = data_1313290
        data_715e98 = eax_15
        return eax_15
    case 0xb
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_45b6b0(data_1b8a720)
    case 0xc
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_17 = data_1b8a720
        
        if (eax_17 u> 0x3f)
            data_715e98 = 0
            return eax_17
        
        int32_t eax_19 = *(eax_17 * 0x2d0 + &data_8fcd8c)
        data_715e98 = eax_19
        return eax_19
    case 0xd
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u<= 0x3f)
            int32_t ecx_35 = data_1b8a734
            
            if (ecx_35 u<= 7)
                if (i u<= 0x3f && ecx_35 u<= 7)
                    *(i * 0x2d0 + &data_8fcd8c) = ecx_35
                
                sub_487f80()
                return sub_57fb20()
        
        return i
    case 0xe
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        int32_t eax_23 = *(i * 0x2d0 + 0x8fcd90)
        data_715e98 = eax_23
        return eax_23
    case 0xf
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        *(i * 0x2d0 + 0x8fcd90) = 0
        sub_487f80()
        return sub_57fb20()
    case 0x10
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        *(i * 0x2d0 + 0x8fcd90) = 1
        sub_487f80()
        return sub_57fb20()
    case 0x11
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        int32_t ecx_44
        ecx_44.b = data_1b8a734 != 0
        *(i * 0x2d0 + 0x8fcd90) = ecx_44
        sub_487f80()
        return sub_57fb20()
    case 0x14
        int32_t eax_33 = sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "%%%%%", &data_1b8a720), 
                    data_1b8a730, data_1b8a740, data_1313294, &data_704898), 
                data_1b8a744, data_1b8a754, data_1313298, &data_704898), 
            data_1b8a758, data_1b8a768, data_131329c, &data_704898)
        return sub_4e8000(
            sub_4e8000(eax_33, data_1b8a76c, data_1b8a77c, data_13132a0, &data_704898), 
            data_1b8a780, data_1b8a790, data_13132a4, &data_704898)
    case 0x15
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
        data_1313294 = data_1b8a720
        data_1313298 = data_1b8a734
        data_131329c = data_1b8a748
        data_13132a0 = data_1b8a75c
        data_13132a4 = data_1b8a770
        return sub_57fb20()
    case 0x16
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$%%%%%", &data_1b8a720)
        int32_t ecx_56 = data_1b8a720
        
        if (ecx_56 u> 0x3f)
            return i
        
        int32_t var_10
        int32_t var_c
        int32_t eax_46 = sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_57d730(&var_18, &var_14, ecx_56, &var_18, &var_1c, &var_10, &var_c), 
                    data_1b8a744, data_1b8a740, var_14, &data_704898), 
                data_1b8a758, data_1b8a754, var_18, &data_704898), 
            data_1b8a76c, data_1b8a768, var_1c, &data_704898)
        return sub_4e8000(sub_4e8000(eax_46, data_1b8a780, data_1b8a77c, var_10, &data_704898), 
            data_1b8a794, data_1b8a790, var_c, &data_704898)
    case 0x17
        i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
        int32_t ecx_64 = data_1b8a720
        
        if (ecx_64 u> 0x3f)
            return i
        
        sub_57d6e0(i, (data_1b8a734).b, ecx_64, (data_1b8a748).b, (data_1b8a75c).b, 
            (data_1b8a770).b, data_1b8a784)
        return sub_57fb20()
    case 0x18
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        int32_t eax_51 = *(i * 0x2d0 + 0x8fcd94)
        data_715e98 = eax_51
        return eax_51
    case 0x19
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        *(i * 0x2d0 + 0x8fcd94) = 0
        return sub_57fb20()
    case 0x1a
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        *(i * 0x2d0 + 0x8fcd94) = 1
        return sub_57fb20()
    case 0x1b
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        *(i * 0x2d0 + 0x8fcd94) = 2
        return sub_57fb20()
    case 0x1c
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u<= 0x3f)
            int32_t ecx_75 = data_1b8a734
            
            if (ecx_75 u<= 2)
                if (i u<= 0x3f)
                    *(i * 0x2d0 + 0x8fcd94) = ecx_75
                
                return sub_57fb20()
        
        return i
    case 0x1e
        uint32_t eax_60 = zx.d(data_703748)
        data_715e98 = eax_60
        return eax_60
    case 0x1f
        data_703748 = 1
        return i
    case 0x20
        data_703748 = 0
        return i
    case 0x23
        uint32_t eax_61 = zx.d(data_703756)
        data_715e98 = eax_61
        return eax_61
    case 0x24
        data_703756 = 1
        return i
    case 0x25
        data_703756 = 0
        return i
    case 0x28
        uint32_t eax_62 = zx.d(data_703749)
        data_715e98 = eax_62
        return eax_62
    case 0x29
        data_703749 = 1
        return i
    case 0x2a
        data_703749 = 0
        return i
    case 0x2d
        uint32_t eax_63 = zx.d(data_703755)
        data_715e98 = eax_63
        return eax_63
    case 0x2e
        data_703755 = 1
        return i
    case 0x2f
        data_703755 = 0
        return i
    case 0x32
        uint32_t eax_64 = zx.d(data_70374a)
        data_715e98 = eax_64
        return eax_64
    case 0x33
        data_70374a.w = 0x101
        data_70374c = 1
        return i
    case 0x34
        data_70374a.w = 0
        data_70374c = 0
        return i
    case 0x37
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 7)
            return i
        
        uint32_t eax_65 = zx.d(*(i + &data_70374d))
        data_715e98 = eax_65
        return eax_65
    case 0x38
        int32_t eax_66 = data_1af4e84
        
        if (eax_66 == 0)
            sub_4ef190(eax_66, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            i = data_1b8a720
            
            if (i u<= 7)
                *(i + &data_70374d) = 1
        else
            i = eax_66 - 1
            
            if (eax_66 == 1)
                data_70374d = 0x1010101
                data_703751 = 0x1010101
        
        if (data_1311178 == 0 || data_702fc0 == 0)
            return i
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(i, data_72d6ac, data_719b6c, 0x61f744, 0x61f6e8), data_72d6ac, 
                data_719b6c, 0x61f744, 0x61f6e8), 
            data_72d6ac, data_719b6c, 0x61f744, 0x61f6e8)
        return sub_4a1e40(3)
    case 0x39
        int32_t eax_71 = data_1af4e84
        
        if (eax_71 == 0)
            sub_4ef190(eax_71, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            i = data_1b8a720
            
            if (i u<= 7)
                *(i + &data_70374d) = 0
        else
            i = eax_71 - 1
            
            if (eax_71 == 1)
                data_70374d.q = 0
        
        if (data_1311178 == 0 || data_702fc0 == 0)
            return i
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(i, data_72d6ac, data_719b6c, 0x61f7bc, 0x61f760), data_72d6ac, 
                data_719b6c, 0x61f7bc, 0x61f760), 
            data_72d6ac, data_719b6c, 0x61f7bc, 0x61f760)
        return sub_4a1e40(3)
    case 0x3a
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 7)
            return i
        
        uint32_t eax_76 = zx.d(*(i + 0x70376d))
        data_715e98 = eax_76
        return eax_76
    case 0x3b
        int32_t eax_77 = data_1af4e84
        
        if (eax_77 == 0)
            i = sub_4ef190(eax_77, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            void* ecx_95 = data_1b8a720
            
            if (ecx_95 u<= 7)
                i = data_1b8a734
                
                if (i u<= 7)
                    *(ecx_95 + 0x70376d) = i.b
        else
            i = eax_77 - 1
            
            if (eax_77 == 1)
                i = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t ecx_92 = data_1b8a720
                
                if (ecx_92 u<= 7)
                    for (i = nullptr; i s< 8; i += 1)
                        *(i + 0x70376d) = ecx_92.b
        
        if (data_1311178 == 0 || data_702fc0 == 0)
            return i
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(i, data_72d6ac, data_719b6c, 0x61f838, 0x61f7e0), data_72d6ac, 
                data_719b6c, 0x61f838, 0x61f7e0), 
            data_72d6ac, data_719b6c, 0x61f838, 0x61f7e0)
        return sub_4a1e40(3)
    case 0x3c
        int32_t eax_82 = data_1af4e84
        
        if (eax_82 == 0)
            sub_4ef190(eax_82, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            i = data_1b8a720
            
            if (i u<= 0x3f)
                int32_t eax_85 = i * 0x2d0
                *(eax_85 + &data_8fcaf0) = 1
                return eax_85
        else
            i = eax_82 - 1
            
            if (eax_82 == 1)
                return sub_57d780(i + 1)
        
        return i
    case 0x3d
        int32_t eax_86 = data_1af4e84
        
        if (eax_86 == 0)
            sub_4ef190(eax_86, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            i = data_1b8a720
            
            if (i u<= 0x3f)
                int32_t eax_89 = i * 0x2d0
                *(eax_89 + &data_8fcaf0) = 0
                return eax_89
        else
            i = eax_86 - 1
            
            if (eax_86 == 1)
                return sub_57d780(0)
        
        return i
    case 0x3e
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_90 = data_1b8a720
        
        if (eax_90 u> 0x3f)
            data_715e98 = 0
            return 0
        
        int32_t eax_92 = *(eax_90 * 0x2d0 + &data_8fcaf4)
        data_715e98 = eax_92
        return eax_92
    case 0x3f
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        int32_t eax_93 = data_1b8a734
        *(i * 0x2d0 + &data_8fcaf4) = eax_93
        return eax_93
    case 0x40
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_94 = data_1b8a720
        
        if (eax_94 u> 0x3f)
            data_715e98 = 0
            return 0
        
        int32_t eax_96 = *(eax_94 * 0x2d0 + &data_8fcaf8)
        data_715e98 = eax_96
        return eax_96
    case 0x41
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        int32_t ecx_113 = data_1b8a720
        i = data_1b8a734
        
        if (ecx_113 u> 0x3f)
            return i
        
        if (i s< 0x64 || i s> 0x2710)
            i = 0x1f4
        
        *(ecx_113 * 0x2d0 + &data_8fcaf8) = i
        return i
    case 0x42
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_97 = data_1b8a720
        
        if (eax_97 u> 0x3f)
            data_715e98 = 0
            return 0
        
        int32_t eax_99 = *(eax_97 * 0x2d0 + 0x8fcafc)
        data_715e98 = eax_99
        return eax_99
    case 0x43
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        int32_t eax_100 = data_1b8a734
        *(i * 0x2d0 + 0x8fcafc) = eax_100
        return eax_100
    case 0x44
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_101 = data_1b8a720
        
        if (eax_101 u> 0x3f)
            data_715e98 = 0
            return 0
        
        int32_t eax_103 = *(eax_101 * 0x2d0 + &data_8fcb00)
        data_715e98 = eax_103
        return eax_103
    case 0x45
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        int32_t ecx_125 = data_1b8a720
        i = data_1b8a734
        
        if (ecx_125 u> 0x3f)
            return i
        
        if (i s< 0x64 || i s> 0x2710)
            i = 0x1f4
        
        *(ecx_125 * 0x2d0 + &data_8fcb00) = i
        return i
    case 0x46
        int32_t eax_104 = data_1af4e84
        
        if (eax_104 == 0)
            sub_4ef190(eax_104, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_57d7a0(data_1b8a720, 0)
        
        if (eax_104 == 1)
            return sub_57d800(0)
        
        return eax_104 - 1
    case 0x47
        int32_t eax_108 = data_1af4e84
        
        if (eax_108 == 0)
            sub_4ef190(eax_108, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_57d7a0(data_1b8a720, 1)
        
        i = eax_108 - 1
        
        if (eax_108 == 1)
            return sub_57d800(i + 1)
        
        return i
    case 0x48
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_112 = data_1b8a720
        
        if (eax_112 u> 0x3f)
            data_715e98 = 0
            return 0
        
        int32_t eax_114 = *(eax_112 * 0x2d0 + &data_8fcaf0)
        data_715e98 = eax_114
        return eax_114
    case 0x49
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i = data_1b8a720
        
        if (i u> 0x3f)
            return i
        
        int32_t ecx_139
        ecx_139.b = data_1b8a734 != 0
        int32_t eax_115 = i * 0x2d0
        *(eax_115 + &data_8fcaf0) = ecx_139
        return eax_115
    case 0x50
        int32_t eax_116 = data_1af4e84
        
        if (eax_116 == 0)
            sub_4ef190(eax_116, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_57ddd0(data_1b8a720, 1)
        
        i = eax_116 - 1
        
        if (eax_116 == 1)
            return sub_57de10(i + 1)
        
        return i
    case 0x51
        int32_t eax_120 = data_1af4e84
        
        if (eax_120 == 0)
            sub_4ef190(eax_120, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_57ddd0(data_1b8a720, 0)
        
        if (eax_120 == 1)
            return sub_57de10(0)
        
        return eax_120 - 1
    default
        data_1b8b06c = 1
        return i
