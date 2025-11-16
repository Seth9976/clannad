// 函数: sub_4fec40
// 地址: 0x4fec40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_1bfdd30

if (eax u> 0x71)
    data_1b8b06c = 1
    return eax

eax = zx.d(lookup_table_4ff8d8[eax])
void* i_18
int32_t var_10
void* var_c
int32_t eax_97

switch (eax)
    case 0
        eax = data_1b8b070
        
        if (eax == 0x3c)
            int32_t eax_1 = data_1af4e84
            
            if (eax_1 == 0)
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_463b60(data_1b8a720, 0)
            
            eax = eax_1 - 1
            
            if (eax_1 == 1)
                int32_t* ecx_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_1 = &i_18
                eax = sub_468520(&i_18, &var_10, &var_c, ecx_3)
                
                if (eax != 0)
                    void* i_10 = i_18
                    
                    if (i_10 s> 0)
                        void* esi_1 = var_c
                        int32_t eax_6
                        void* i
                        
                        do
                            eax_6 = sub_463b60(esi_1, 0)
                            esi_1 += 1
                            i = i_10
                            i_10 -= 1
                        while (i != 1)
                        return eax_6
            
            return eax
        
        if (eax != 0x3d && eax != 0x3e)
            return eax
        
        int32_t eax_8 = data_1af4e84
        
        if (eax_8 == 0)
            return sub_463970(sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                arg3, data_1b8a720, 0)
        
        eax = eax_8 - 1
        
        if (eax_8 == 1)
            int32_t* ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            var_c = data_1b8a720
            var_10 = data_1b8a734
            void** var_24_2 = &i_18
            eax = sub_468520(&i_18, &var_10, &var_c, ecx_11)
            
            if (eax != 0)
                void* i_11 = i_18
                
                if (i_11 s> 0)
                    void* esi_2 = var_c
                    void* i_1
                    
                    do
                        eax = sub_463970(eax, arg3, esi_2, 0)
                        esi_2 += 1
                        i_1 = i_11
                        i_11 -= 1
                    while (i_1 != 1)
        
        return eax
    case 1
        if (data_1b8b070 != 0x3c)
            return eax
        
        int32_t eax_15 = data_1af4e84
        
        if (eax_15 == 0)
            sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_46d1e0(data_1b8a720, 1)
        
        eax = eax_15 - 1
        
        if (eax_15 != 1)
            return eax
        
        return sub_46d240(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, 1)
    case 2
        eax = data_1b8b070
        
        if (eax == 0x3c)
            int32_t eax_20 = data_1af4e84
            
            if (eax_20 == 0)
                char** eax_25 = sub_4ef190(eax_20, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                void* ecx_32 = data_1b8a720
                return sub_465400(eax_25, 1, ecx_32, ecx_32, 0, 0)
            
            eax = eax_20 - 1
            
            if (eax_20 == 1)
                int32_t* ecx_25 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_3 = &i_18
                int32_t ecx_27
                eax, ecx_27 = sub_468520(&i_18, &var_10, &var_c, ecx_25)
                
                if (eax != 0)
                    void* i_12 = i_18
                    
                    if (i_12 s> 0)
                        void* esi_3 = var_c
                        void* i_2
                        
                        do
                            eax = sub_465400(eax, 1, esi_3, esi_3, 0, 0)
                            esi_3 += 1
                            i_2 = i_12
                            i_12 -= 1
                        while (i_2 != 1)
        else if (eax == 0x3d || eax == 0x3e)
            return sub_465400(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 0, 
                data_1b8a734, data_1b8a720, arg3, 0)
        
        return eax
    case 3
        eax = data_1b8b070
        
        if (eax != 0x3c && (eax == 0x3d || eax == 0x3e))
            return sub_465400(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 1, 
                data_1b8a734, data_1b8a720, arg3, 0)
        
        return eax
    case 4
        eax = data_1b8b070
        
        if (eax == 0x3c || (eax != 0x3d && eax != 0x3e))
            return eax
        
        int32_t eax_31 = data_1af4e84
        
        if (eax_31 == 0)
            return sub_46d2a0(sub_4ef190(eax_31, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                arg3, data_1b8a720, 1)
        
        eax = eax_31 - 1
        
        if (eax_31 == 1)
            return sub_46d2d0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, arg3, 1)
        
        return eax
    case 5
        eax = data_1b8b070
        
        if (eax == 0x3c || (eax != 0x3d && eax != 0x3e))
            return eax
        
        int32_t eax_37 = data_1af4e84
        
        if (eax_37 == 0)
            return sub_46d2a0(sub_4ef190(eax_37, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                arg3, data_1b8a720, 0)
        
        eax = eax_37 - 1
        
        if (eax_37 == 1)
            return sub_46d2d0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, arg3, 0)
        
        return eax
    case 6
        eax = data_1b8b070
        
        if (eax != 0x3c && (eax == 0x3d || eax == 0x3e))
            int32_t eax_41 = data_1af4e84
            
            if (eax_41 == 0)
                return sub_46d320(sub_4ef190(eax_41, arg2 + 0x20, *(arg2 + 0x20), $", 
                    &data_1b8a720), arg3, data_1b8a720, 1)
            
            eax = eax_41 - 1
            
            if (eax_41 == 1)
                return sub_46d350(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg3, 1)
        
        return eax
    case 7
        eax = data_1b8b070
        
        if (eax != 0x3c && (eax == 0x3d || eax == 0x3e))
            int32_t eax_47 = data_1af4e84
            
            if (eax_47 == 0)
                return sub_46d320(sub_4ef190(eax_47, arg2 + 0x20, *(arg2 + 0x20), $", 
                    &data_1b8a720), arg3, data_1b8a720, 0)
            
            eax = eax_47 - 1
            
            if (eax_47 == 1)
                return sub_46d350(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg3, 0)
        
        return eax
    case 8
        eax = data_1b8b070
        
        if (eax == 0x3c)
            int32_t eax_53 = data_1af4e84
            
            if (eax_53 == 0)
                sub_4ef190(eax_53, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_462fe0(data_1b8a720)
            
            eax = eax_53 - 1
            
            if (eax_53 == 1)
                int32_t* ecx_64 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_4 = &i_18
                eax = sub_468520(&i_18, &var_10, &var_c, ecx_64)
                
                if (eax != 0)
                    void* i_13 = i_18
                    
                    if (i_13 s> 0)
                        void* esi_4 = var_c
                        int32_t eax_58
                        void* i_3
                        
                        do
                            eax_58 = sub_462fe0(esi_4)
                            esi_4 += 1
                            i_3 = i_13
                            i_13 -= 1
                        while (i_3 != 1)
                        return eax_58
        else if (eax == 0x3d || eax == 0x3e)
            int32_t eax_60 = data_1af4e84
            
            if (eax_60 == 0)
                sub_4ef190(eax_60, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_462e80(data_1b8a720, arg3)
            
            eax = eax_60 - 1
            
            if (eax_60 == 1)
                int32_t* ecx_72 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_5 = &i_18
                eax = sub_468520(&i_18, &var_10, &var_c, ecx_72)
                
                if (eax != 0)
                    void* i_14 = i_18
                    
                    if (i_14 s> 0)
                        void* esi_5 = var_c
                        int32_t eax_65
                        void* i_4
                        
                        do
                            eax_65 = sub_462e80(esi_5, arg3)
                            esi_5 += 1
                            i_4 = i_14
                            i_14 -= 1
                        while (i_4 != 1)
                        return eax_65
        
        return eax
    case 9
        eax = data_1b8b070
        
        if (eax == 0x3c)
            int32_t eax_67 = data_1af4e84
            
            if (eax_67 == 0)
                sub_4ef190(eax_67, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_463b60(data_1b8a720, 1)
            
            eax = eax_67 - 1
            
            if (eax_67 == 1)
                int32_t* ecx_80 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_6 = &i_18
                eax = sub_468520(&i_18, &var_10, &var_c, ecx_80)
                
                if (eax != 0)
                    void* i_15 = i_18
                    
                    if (i_15 s> 0)
                        void* esi_6 = var_c
                        int32_t eax_72
                        void* i_5
                        
                        do
                            eax_72 = sub_463b60(esi_6, 1)
                            esi_6 += 1
                            i_5 = i_15
                            i_15 -= 1
                        while (i_5 != 1)
                        return eax_72
            
            return eax
        
        if (eax != 0x3d && eax != 0x3e)
            return eax
        
        int32_t eax_74 = data_1af4e84
        
        if (eax_74 == 0)
            return sub_463970(sub_4ef190(eax_74, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                arg3, data_1b8a720, 1)
        
        eax = eax_74 - 1
        
        if (eax_74 == 1)
            int32_t* ecx_88 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            var_c = data_1b8a720
            var_10 = data_1b8a734
            void** var_24_7 = &i_18
            eax = sub_468520(&i_18, &var_10, &var_c, ecx_88)
            
            if (eax != 0)
                void* i_16 = i_18
                
                if (i_16 s> 0)
                    void* esi_7 = var_c
                    void* i_6
                    
                    do
                        eax = sub_463970(eax, arg3, esi_7, 1)
                        esi_7 += 1
                        i_6 = i_16
                        i_16 -= 1
                    while (i_6 != 1)
        
        return eax
    case 0xa
        eax = data_1b8b070
        
        if (eax == 0x3c)
            int32_t eax_79 = data_1af4e84
            
            if (eax_79 == 0)
                sub_4ef190(eax_79, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4630a0(data_1b8a720)
            
            eax = eax_79 - 1
            
            if (eax_79 == 1)
                int32_t* ecx_95 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_8 = &i_18
                eax = sub_468520(&i_18, &var_10, &var_c, ecx_95)
                
                if (eax != 0)
                    void* i_9 = i_18
                    
                    if (i_9 s> 0)
                        void* edx_48 = var_c
                        int32_t eax_84
                        void* i_7
                        
                        do
                            eax_84 = sub_4630a0(edx_48)
                            edx_48 += 1
                            i_7 = i_9
                            i_9 -= 1
                        while (i_7 != 1)
                        return eax_84
        else if (eax == 0x3d || eax == 0x3e)
            int32_t eax_86 = data_1af4e84
            
            if (eax_86 == 0)
                sub_4ef190(eax_86, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_463040(data_1b8a720, arg3)
            
            eax = eax_86 - 1
            
            if (eax_86 == 1)
                int32_t* ecx_103 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_c = data_1b8a720
                var_10 = data_1b8a734
                void** var_24_9 = &i_18
                eax = sub_468520(&i_18, &var_10, &var_c, ecx_103)
                
                if (eax != 0)
                    void* i_17 = i_18
                    
                    if (i_17 s> 0)
                        void* esi_8 = var_c
                        int32_t eax_91
                        void* i_8
                        
                        do
                            eax_91 = sub_463040(esi_8, arg3)
                            esi_8 += 1
                            i_8 = i_17
                            i_17 -= 1
                        while (i_8 != 1)
                        return eax_91
        
        return eax
    case 0xb
        if (data_1b8b070 != 0x3c)
            return eax
        
        int32_t eax_93 = data_1af4e84
        
        if (eax_93 == 0)
            sub_4ef190(eax_93, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_46d1e0(data_1b8a720, 2)
        
        eax = eax_93 - 1
        
        if (eax_93 != 1)
            return eax
        
        return sub_46d240(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, 2)
    case 0xc
        eax = data_1b8b070
        
        if (eax == 0x3c || (eax != 0x3d && eax != 0x3e))
            return eax
        
        var_10 = 0
        i_18 = nullptr
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        eax_97 = sub_46d540(&var_10, arg3, data_1b8a720, &var_10, &i_18)
    case 0xd
        eax = data_1b8b070
        
        if (eax == 0x3c || (eax != 0x3d && eax != 0x3e))
            return eax
        
        var_10 = 0
        i_18 = nullptr
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$&", &data_1b8a720)
        eax_97 = sub_46d5a0(&var_10, arg3, data_1b8a720, &var_10, &i_18)
    case 0xe
        eax = data_1b8b070
        
        if (eax == 0x3c)
            return sub_463b90(0)
        
        if (eax == 0x3d || eax == 0x3e)
            return sub_463a10(arg3, 0)
        
        return eax
    case 0xf
        if (data_1b8b070 == 0x3c)
            return sub_46d210(1)
        
        return eax
    case 0x10
        if (data_1b8b070 == 0x3c)
            return sub_4655f0()
        
        return eax
    case 0x11
        eax = data_1b8b070
        
        if (eax == 0x3c)
            sub_462ec0(0)
            return sub_462ec0(1)
        
        if (eax == 0x3d || eax == 0x3e)
            return sub_462ec0(arg3)
        
        return eax
    case 0x12
        eax = data_1b8b070
        
        if (eax == 0x3c)
            return sub_463b90(eax - 0x3b)
        
        if (eax == 0x3d || eax == 0x3e)
            return sub_463a10(arg3, 1)
        
        return eax
    case 0x13
        eax = data_1b8b070
        
        if (eax == 0x3c)
            return sub_4630d0()
        
        if (eax == 0x3d || eax == 0x3e)
            return sub_463070(arg3)
        
        return eax
    case 0x14
        if (data_1b8b070 == 0x3c)
            return sub_46d210(2)
        
        return eax
    case 0x15
        data_1b8b06c = 1
        return eax

void* const i_19 = i_18

if (i_19 == 0)
    i_19 = &data_6138e3

sub_4a4620(eax_97, i_19, data_1b8a744, data_1b8a740)
return sub_4d6c40(&var_10, &i_18)
