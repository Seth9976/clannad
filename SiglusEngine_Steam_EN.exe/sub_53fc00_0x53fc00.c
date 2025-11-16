// 函数: sub_53fc00
// 地址: 0x53fc00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL ebp
BOOL var_4 = ebp
int32_t ecx
void* edx
ecx, edx = __chkstk(0x2050)
BOOL i_19
int32_t eax_1 = __security_cookie ^ &i_19
uint32_t __return_addr_1 = data_1bfdd30
int32_t* arg_20

if (__return_addr_1 s> 0x12c)
    __return_addr_1 -= 0x12d
    int32_t var_1c_3
    char** eax_89
    
    switch (__return_addr_1)
        case 0
            sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$$&", &data_1b8a720)
            int32_t eax_83 = sub_4a4620(
                sub_41b980(&arg_20, data_1b8a734, data_1b8a720, data_1b8a748, &arg_20), arg_20, 
                data_1b8a76c, data_1b8a768)
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_83
        case 1
            char** eax_84 = sub_53f9b0(ecx, edx)
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_84
        case 2
            sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$", &data_1b8a720)
            int32_t eax_85 = sub_41ba20(data_1b8a720, data_1b8a734)
            data_715e98 = eax_85
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_85
        case 3
            sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$", &data_1b8a720)
            int32_t eax_86 = sub_41ba70(data_1b8a720, data_1b8a734)
            data_715e98 = eax_86
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_86
        case 4
            int32_t eax_88 = sub_41bae0(
                sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, data_1b8a748)
            data_715e98 = eax_88
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_88
        case 5
            eax_89 = sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$S", &data_1b8a720)
            var_1c_3 = 1
        label_541196:
            int32_t eax_90 = sub_41bb80(eax_89, data_1b8a734, data_1b8a720, data_1b8a750, var_1c_3)
            data_715e98 = eax_90
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_90
        case 6
            eax_89 = sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$S", &data_1b8a720)
            var_1c_3 = 0
            goto label_541196
    
    goto label_5411d1

if (__return_addr_1 == 0x12c)
    int32_t eax_79 = sub_41b8f0(
        sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$$$%", &data_1b8a720), 
        data_1b8a734, data_1b8a720, data_1b8a748)
    int32_t eax_80 = sub_4e8000(eax_79, data_1b8a76c, data_1b8a768, eax_79, &data_704898)
    sub_5f02dd(eax_1 ^ &i_19)
    return eax_80

if (__return_addr_1 u> 0xd3)
label_5411d1:
    data_1b8b06c = 1
    sub_5f02dd(eax_1 ^ &i_19)
    return __return_addr_1

__return_addr_1 = zx.d(lookup_table_541220[__return_addr_1])
BOOL i_28
BOOL i_20
int32_t* i_21
BOOL i_22
int32_t* i_29
BOOL __return_addr_6
BOOL i_23
int32_t* i_24
int32_t arg_38
int32_t arg_3c
int32_t arg_40
int32_t arg_50
int32_t arg_54
int32_t arg_64
int32_t arg_68
int32_t arg_78
int32_t arg_7c
int32_t arg_8c
int32_t arg_90
int32_t arg_a0
int32_t arg_a4
int32_t arg_b4
int32_t arg_b8
int32_t arg_c8
int32_t arg_cc
int32_t arg_dc
int32_t arg_e0
int32_t arg_f0
int32_t arg_f4
int32_t arg_100[0x7d1]
BOOL esi_1

switch (__return_addr_1)
    case 0
        esi_1 = edx + 0x20
        arg_3c = 0
        arg_40 = 0
        arg_50 = 0
        arg_54 = 0
        arg_64 = 0
        arg_68 = 0
        arg_78 = 0
        arg_7c = 0
        arg_8c = 0
        arg_90 = 0
        arg_a0 = 0
        arg_a4 = 0
        arg_b4 = 0
        arg_b8 = 0
        arg_c8 = 0
        arg_cc = 0
        arg_dc = 0
        arg_e0 = 0
        arg_f0 = 0
        arg_f4 = 0
        sub_4ef190(__return_addr_1, esi_1, *(edx + 0x20), "%@", &data_1b8a720)
        __return_addr_1 = data_1b8a730
        int32_t i = 0
        i_19 = __return_addr_1
        
        if (data_1b8c884 s> 0)
            do
                sub_4e8000(sub_4ef440(&arg_38, esi_1, *esi_1, "$@", &arg_38), i_19, data_1b8a72c, 
                    arg_38, &data_704898)
                i_19 += 1
                sub_4eef40(&arg_38, 0xa)
                __return_addr_1 = *esi_1
                
                while (true)
                    char ecx_5 = *__return_addr_1
                    
                    if (ecx_5 != 0x2c && ecx_5 != 0x20)
                        break
                    
                    __return_addr_1 += 1
                
                i += 1
                *esi_1 = __return_addr_1
            while (i s< data_1b8c884)
    case 1
        int32_t eax_4 = data_1af4e84
        BOOL __return_addr_3
        
        if (eax_4 == 0)
            __return_addr_1 = sub_4ef190(eax_4, edx + 0x20, *(edx + 0x20), "%%", &data_1b8a720)
            __return_addr_3 = 0
        else
            __return_addr_1 = eax_4 - 1
            
            if (eax_4 != 1)
                __return_addr_3 = __return_addr
            else
                __return_addr_1 =
                    sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "%%$", &data_1b8a720)
                __return_addr_3 = data_1b8a748
        
        int32_t ecx_12 = data_1b8a72c
        i_19 = __return_addr_3
        
        if (ecx_12 == data_1b8a740)
            uint32_t __return_addr_7 = data_1b8a730
            uint32_t __return_addr_9 = data_1b8a744
            
            if (__return_addr_7 s> __return_addr_9)
                __return_addr_1 = __return_addr_7
                __return_addr_7 = __return_addr_9
                __return_addr_9 = __return_addr_1
            
            int32_t edi_2 = __return_addr_9 - __return_addr_7 + 1
            
            if (edi_2 s> 0)
                while (true)
                    __return_addr_1 = sub_4e8000(__return_addr_1, __return_addr_7, ecx_12, 
                        __return_addr_3, &data_704898)
                    __return_addr_7 += 1
                    int32_t temp11_1 = edi_2
                    edi_2 -= 1
                    
                    if (temp11_1 == 1)
                        break
                    
                    ecx_12 = data_1b8a72c
                    __return_addr_3 = i_19
        
        sub_5f02dd(eax_1 ^ &i_19)
        return __return_addr_1
    case 2
        sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "%%$", &data_1b8a720)
        int32_t* i_45 = data_1b8a744
        i_21 = data_1b8a730
        __return_addr_1 = data_1b8a748
        i_24 = i_45
        
        if (__return_addr_1 s> 0x7d0)
            __return_addr_1 = 0x7d0
        
        i_19 = __return_addr_1
        
        if (__return_addr_1 s> 0)
            int32_t* i_46 = i_21
            int32_t* esi_2 = &arg_100
            var_4 = __return_addr_1
            int32_t* i_52 = i_46
            BOOL i_1
            
            do
                __return_addr_1 =
                    sub_4e76e0(__return_addr_1, i_52, data_1b8a72c, esi_2, &data_704898)
                i_52 += 1
                esi_2 = &esi_2[1]
                i_1 = var_4
                var_4 -= 1
            while (i_1 != 1)
            i_45 = i_24
            __return_addr_1 = i_19
        
        int32_t esi_3 = 0
        
        if (__return_addr_1 s<= 0)
            sub_5f02dd(eax_1 ^ &i_19)
            return __return_addr_1
        
        do
            __return_addr_1 =
                sub_4e8000(__return_addr_1, i_45, data_1b8a740, arg_100[esi_3], &data_704898)
            esi_3 += 1
            i_45 += 1
        while (esi_3 s< i_19)
        
        sub_5f02dd(eax_1 ^ &i_19)
        return __return_addr_1
    case 3
        esi_1 = edx + 0x20
        arg_3c = 0
        arg_40 = 0
        arg_50 = 0
        arg_54 = 0
        arg_64 = 0
        arg_68 = 0
        arg_78 = 0
        arg_7c = 0
        arg_8c = 0
        arg_90 = 0
        arg_a0 = 0
        arg_a4 = 0
        arg_b4 = 0
        arg_b8 = 0
        arg_c8 = 0
        arg_cc = 0
        arg_dc = 0
        arg_e0 = 0
        arg_f0 = 0
        arg_f4 = 0
        sub_4ef190(__return_addr_1, esi_1, *(edx + 0x20), "%$@", &data_1b8a720)
        int32_t i_2 = 0
        i_19 = data_1b8a730
        __return_addr_1 = data_1b8a734
        i_21 = __return_addr_1
        
        if (data_1b8c884 s> 0)
            char* eax_11
            
            do
                sub_4e8000(sub_4ef440(&arg_38, esi_1, *esi_1, "$@", &arg_38), i_19, data_1b8a72c, 
                    arg_38, &data_704898)
                i_19 += i_21
                sub_4eef40(&arg_38, 0xa)
                eax_11 = *esi_1
                
                while (true)
                    char ecx_23 = *eax_11
                    
                    if (ecx_23 != 0x2c && ecx_23 != 0x20)
                        break
                    
                    eax_11 = &eax_11[1]
                
                i_2 += 1
                *esi_1 = eax_11
            while (i_2 s< data_1b8c884)
            
            *esi_1 += 1
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_11
    case 4
        int32_t eax_12 = data_1af4e84
        BOOL __return_addr_2
        int32_t* esi_4
        int32_t* i_25
        
        if (eax_12 == 0)
            sub_4ef190(eax_12, edx + 0x20, *(edx + 0x20), "%$$", &data_1b8a720)
            __return_addr_2 = 0
        label_540102:
            __return_addr_1 = data_1b8a734
            i_25 = data_1b8a748
            esi_4 = data_1b8a730
        else
            if (eax_12 == 1)
                sub_4ef190(eax_12 - 1, edx + 0x20, *(edx + 0x20), "%$$$", &data_1b8a720)
                __return_addr_2 = data_1b8a75c
                goto label_540102
            
            esi_4 = arg_20
            __return_addr_2 = __return_addr
            i_25 = arg_20
            __return_addr_1 = arg_20
        
        i_19 = __return_addr_1
        __return_addr_6 = __return_addr_2
        
        if (i_25 s<= 0)
            sub_5f02dd(eax_1 ^ &i_19)
            return __return_addr_1
        
        int32_t* i_3
        
        do
            __return_addr_1 =
                sub_4e8000(__return_addr_1, esi_4, data_1b8a72c, __return_addr_2, &data_704898)
            esi_4 += i_19
            __return_addr_2 = __return_addr_6
            i_3 = i_25
            i_25 -= 1
        while (i_3 != 1)
        sub_5f02dd(eax_1 ^ &i_19)
        return __return_addr_1
    case 5
        sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "%$%$$", &data_1b8a720)
        BOOL i_47 = data_1b8a758
        i_21 = data_1b8a730
        i_24 = data_1b8a734
        i_20 = data_1b8a75c
        __return_addr_1 = data_1b8a770
        i_22 = i_47
        
        if (__return_addr_1 s> 0x7d0)
            __return_addr_1 = 0x7d0
        
        i_19 = __return_addr_1
        
        if (__return_addr_1 s> 0)
            void* i_48 = i_21
            int32_t* esi_5 = &arg_100
            var_4 = __return_addr_1
            BOOL i_4
            
            do
                __return_addr_1 =
                    sub_4e76e0(__return_addr_1, i_48, data_1b8a72c, esi_5, &data_704898)
                i_48 += i_24
                esi_5 = &esi_5[1]
                i_4 = var_4
                var_4 -= 1
            while (i_4 != 1)
            i_47 = i_22
            __return_addr_1 = i_19
        
        int32_t esi_6 = 0
        
        if (__return_addr_1 s<= 0)
            sub_5f02dd(eax_1 ^ &i_19)
            return __return_addr_1
        
        do
            __return_addr_1 =
                sub_4e8000(__return_addr_1, i_47, data_1b8a740, arg_100[esi_6], &data_704898)
            i_47 += i_20
            esi_6 += 1
        while (esi_6 s< i_19)
        
        sub_5f02dd(eax_1 ^ &i_19)
        return __return_addr_1
    case 6
        esi_1 = edx + 0x20
        arg_3c = 0
        arg_40 = 0
        arg_50 = 0
        arg_54 = 0
        arg_64 = 0
        arg_68 = 0
        arg_78 = 0
        arg_7c = 0
        arg_8c = 0
        arg_90 = 0
        arg_a0 = 0
        arg_a4 = 0
        arg_b4 = 0
        arg_b8 = 0
        arg_c8 = 0
        arg_cc = 0
        arg_dc = 0
        arg_e0 = 0
        arg_f0 = 0
        arg_f4 = 0
        sub_4ef190(__return_addr_1, esi_1, *(edx + 0x20), "%$@", &data_1b8a720)
        int32_t i_5 = 0
        i_19 = data_1b8a730
        __return_addr_1 = data_1b8a734
        i_21 = __return_addr_1
        
        if (data_1b8c884 s> 0)
            char* eax_22
            
            do
                sub_4ef440(&arg_38, esi_1, *esi_1, "%@", &arg_38)
                sub_4e8000(
                    sub_4e76e0(&__return_addr, arg2 + i_21, arg1, &__return_addr, &data_704898), 
                    i_19, data_1b8a72c, __return_addr, &data_704898)
                i_19 += 1
                sub_4eef40(&arg_38, 0xa)
                eax_22 = *esi_1
                
                while (true)
                    char ecx_45 = *eax_22
                    
                    if (ecx_45 != 0x2c && ecx_45 != 0x20)
                        break
                    
                    eax_22 = &eax_22[1]
                
                i_5 += 1
                *esi_1 = eax_22
            while (i_5 s< data_1b8c884)
            
            *esi_1 += 1
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_22
    case 7
        __return_addr_1 =
            sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "%%", &data_1b8a720)
        int32_t ecx_50 = data_1b8a72c
        data_715e98 = 0
        
        if (ecx_50 == data_1b8a740)
            uint32_t __return_addr_10 = data_1b8a730
            uint32_t __return_addr_8 = data_1b8a744
            
            if (__return_addr_10 s> __return_addr_8)
                __return_addr_1 = __return_addr_10
                __return_addr_10 = __return_addr_8
                __return_addr_8 = __return_addr_1
            
            int32_t esi_8 = __return_addr_8 - __return_addr_10 + 1
            
            if (esi_8 s> 0)
                while (true)
                    sub_4e76e0(&__return_addr, __return_addr_10, ecx_50, &__return_addr, 
                        &data_704898)
                    __return_addr_1 = __return_addr
                    data_715e98 += __return_addr_1
                    __return_addr_10 += 1
                    int32_t temp10_1 = esi_8
                    esi_8 -= 1
                    
                    if (temp10_1 == 1)
                        break
                    
                    ecx_50 = data_1b8a72c
        
        sub_5f02dd(eax_1 ^ &i_19)
        return __return_addr_1
    case 8
        *(edx + 0x20) += 1
        esi_1 = edx + 0x20
        var_4 = esi_1
        arg_3c = 0
        arg_40 = 0
        arg_50 = 0
        arg_54 = 0
        arg_64 = 0
        arg_68 = 0
        arg_78 = 0
        arg_7c = 0
        arg_8c = 0
        arg_90 = 0
        arg_a0 = 0
        arg_a4 = 0
        arg_b4 = 0
        arg_b8 = 0
        arg_c8 = 0
        arg_cc = 0
        arg_dc = 0
        arg_e0 = 0
        arg_f0 = 0
        arg_f4 = 0
        data_715e98 = 0
        i_19 = 0
        
        if (data_1b8c884 s> 0)
            BOOL i_6 = 0
            char* eax_27
            
            do
                sub_4ef190(&arg_38, esi_1, *esi_1, "%%", &arg_38)
                int32_t eax_25 = arg1
                
                if (eax_25 == arg3)
                    void* edi_3 = arg2
                    void* esi_9 = arg4
                    
                    if (arg2 s> esi_9)
                        edi_3 = esi_9
                        esi_9 = arg2
                    
                    int32_t j_3 = esi_9 - edi_3 + 1
                    
                    if (j_3 s> 0)
                        int32_t j
                        
                        do
                            sub_4e76e0(eax_25, edi_3, eax_25, &__return_addr, &data_704898)
                            data_715e98 += __return_addr
                            edi_3 += 1
                            eax_25 = arg1
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                    
                    i_6 = i_19
                    esi_1 = var_4
                
                sub_4eef40(&arg_38, 0xa)
                eax_27 = *esi_1
                
                while (true)
                    char ecx_55 = *eax_27
                    
                    if (ecx_55 != 0x2c && ecx_55 != 0x20)
                        break
                    
                    eax_27 = &eax_27[1]
                
                i_6 += 1
                *esi_1 = eax_27
                i_19 = i_6
            while (i_6 s< data_1b8c884)
            
            *esi_1 += 1
            sub_5f02dd(eax_1 ^ &i_19)
            return eax_27
    case 9
        int32_t eax_28 = data_1af4e84
        
        if (eax_28 u> 3)
            __return_addr_1 = arg_20
            __return_addr_6 = __return_addr_1
        else
            switch (eax_28)
                case 0
                    sub_4ef190(eax_28, edx + 0x20, *(edx + 0x20), "$%%", &data_1b8a720)
                    data_1b8a768 = data_1b8a754
                    __return_addr_1 = data_1b8a758
                    data_1b8a76c = __return_addr_1
                    __return_addr_6 = 0
                case 1
                    sub_4ef190(eax_28, edx + 0x20, *(edx + 0x20), "$%&", &data_1b8a720)
                    data_1b8a768 = data_1b8a754
                    __return_addr_1 = data_1b8a758
                    data_1b8a76c = __return_addr_1
                    __return_addr_6 = 1
                case 2
                    __return_addr_1 =
                        sub_4ef190(eax_28, edx + 0x20, *(edx + 0x20), "$%%%", &data_1b8a720)
                    __return_addr_6 = 0
                case 3
                    __return_addr_1 =
                        sub_4ef190(eax_28, edx + 0x20, *(edx + 0x20), "$%&&", &data_1b8a720)
                    __return_addr_6 = 1
        
        BOOL i_49 = data_1b8a720
        i_28 = i_49
        
        if (i_49 s> 0)
            int32_t edx_32 = data_1b8a744
            int32_t ecx_66 = data_1b8a740
            __return_addr_1 = sub_4e76b0(ecx_66, edx_32)
            
            if (__return_addr_1 != 0)
                __return_addr_1 = sub_4e76b0(ecx_66, edx_32 - 1 + i_49)
                
                if (__return_addr_1 != 0)
                    int32_t edx_35 = data_1b8a758
                    int32_t ecx_67 = data_1b8a754
                    __return_addr_1 = sub_4e76b0(ecx_67, edx_35)
                    
                    if (__return_addr_1 != 0)
                        __return_addr_1 = sub_4e76b0(ecx_67, edx_35 - 1 + i_49)
                        
                        if (__return_addr_1 != 0)
                            int32_t edx_38 = data_1b8a76c
                            int32_t ecx_68 = data_1b8a768
                            __return_addr_1 = sub_4e76b0(ecx_68, edx_38)
                            
                            if (__return_addr_1 != 0)
                                __return_addr_1 = sub_4e76b0(ecx_68, edx_38 - 1 + i_49)
                                
                                if (__return_addr_1 != 0)
                                    uint32_t eax_31 = i_49 << 2
                                    i_24 = nullptr
                                    i_19 = 0
                                    i_21 = nullptr
                                    i_29 = nullptr
                                    i_22 = 0
                                    var_4 = 0
                                    sub_4d6960(eax_31, &i_19, &i_24, eax_31, "SortFlag")
                                    uint32_t eax_33 = i_49 * 0xc
                                    sub_4d6960(eax_33, &i_29, &i_21, eax_33, "SortFlagStruct")
                                    BOOL i_30 = data_1b8a744
                                    BOOL i_41 = i_19
                                    i_23 = i_30
                                    
                                    if (i_49 s> 0)
                                        i_20 = i_49
                                        BOOL i_53 = i_41
                                        BOOL i_7
                                        
                                        do
                                            sub_4e76e0(i_30, i_30, data_1b8a740, &__return_addr, 
                                                &data_704898)
                                            i_53 += 4
                                            *(i_53 - 4) = __return_addr
                                            i_30 = i_23 + 1
                                            i_7 = i_20
                                            i_20 -= 1
                                            i_23 = i_30
                                        while (i_7 != 1)
                                        i_49 = i_28
                                    
                                    BOOL i_35 = i_29
                                    int32_t eax_36 = data_1b8a758
                                    
                                    if (__return_addr_6 != 0)
                                        if (i_49 s> 0)
                                            i_20 = i_49
                                            int32_t* i_50 = i_35
                                            int32_t edi_5 = eax_36
                                            BOOL i_8
                                            
                                            do
                                                sub_4a48e0(&var_4, &i_22, edi_5, &var_4, 
                                                    data_1b8a754)
                                                BOOL eax_40 = var_4
                                                
                                                if (eax_40 != 0)
                                                    sub_4cfe90(eax_40, &i_50[1], i_50, eax_40, 
                                                        "SortStr")
                                                    sub_4d6c40(&i_22, &var_4)
                                                
                                                edi_5 += 1
                                                i_50 = &i_50[3]
                                                i_8 = i_20
                                                i_20 -= 1
                                            while (i_8 != 1)
                                        label_5408db:
                                            i_35 = i_29
                                            i_49 = i_28
                                            i_41 = i_19
                                    else if (i_49 s> 0)
                                        i_20 = i_49
                                        void* esi_11 = i_35 + 8
                                        int32_t edi_4 = eax_36
                                        BOOL i_9
                                        
                                        do
                                            sub_4e76e0(&__return_addr, edi_4, data_1b8a754, 
                                                &__return_addr, &data_704898)
                                            esi_11 += 0xc
                                            *(esi_11 - 0xc) = __return_addr
                                            edi_4 += 1
                                            i_9 = i_20
                                            i_20 -= 1
                                        while (i_9 != 1)
                                        goto label_5408db
                                    
                                    void arg_2c
                                    
                                    if (data_1bfdd30 != 0xc8)
                                        if (i_49 s> 0)
                                            BOOL i_39 = 1
                                            i_19 = i_35
                                            BOOL i_32 = i_41 + 4
                                            i_20 = 1
                                            i_22 = i_32
                                            i_23 = i_49
                                            BOOL i_10
                                            
                                            do
                                                if (i_39 s< i_49)
                                                    int32_t edi_7 = i_35 + 0xc
                                                    var_4 = i_28 - i_39
                                                    BOOL j_1
                                                    
                                                    do
                                                        int32_t ecx_86 = *i_41
                                                        int32_t edx_51 = *i_32
                                                        j_1 = var_4
                                                        
                                                        if (ecx_86 s> edx_51)
                                                            *i_41 = edx_51
                                                            BOOL i_40 = i_19
                                                            *i_32 = ecx_86
                                                            sub_4d1c30(i_32, i_40, &arg_2c, 0xc)
                                                            sub_4d1c30(i_32, edi_7, i_19, 0xc)
                                                            sub_4d1c30(i_32, &arg_2c, edi_7, 0xc)
                                                            j_1 = var_4
                                                        
                                                        i_32 += 4
                                                        edi_7 += 0xc
                                                        var_4 = j_1 - 1
                                                    while (j_1 != 1)
                                                    i_49 = i_28
                                                    i_35 = i_19
                                                    i_39 = i_20
                                                
                                                i_39 += 1
                                                i_32 = i_22 + 4
                                                i_20 = i_39
                                                i_35 += 0xc
                                                i_22 = i_32
                                                i_41 += 4
                                                i_19 = i_35
                                                i_10 = i_23
                                                i_23 -= 1
                                            while (i_10 != 1)
                                    else if (i_49 s> 0)
                                        BOOL i_37 = 1
                                        i_19 = i_35
                                        BOOL i_31 = i_41 + 4
                                        i_20 = 1
                                        i_22 = i_31
                                        i_23 = i_49
                                        BOOL i_11
                                        
                                        do
                                            if (i_37 s< i_49)
                                                int32_t edi_6 = i_35 + 0xc
                                                var_4 = i_28 - i_37
                                                BOOL j_2
                                                
                                                do
                                                    int32_t ecx_78 = *i_41
                                                    int32_t edx_48 = *i_31
                                                    j_2 = var_4
                                                    
                                                    if (ecx_78 s< edx_48)
                                                        *i_41 = edx_48
                                                        BOOL i_38 = i_19
                                                        *i_31 = ecx_78
                                                        sub_4d1c30(i_31, i_38, &arg_2c, 0xc)
                                                        sub_4d1c30(i_31, edi_6, i_19, 0xc)
                                                        sub_4d1c30(i_31, &arg_2c, edi_6, 0xc)
                                                        j_2 = var_4
                                                    
                                                    i_31 += 4
                                                    edi_6 += 0xc
                                                    var_4 = j_2 - 1
                                                while (j_2 != 1)
                                                i_49 = i_28
                                                i_35 = i_19
                                                i_37 = i_20
                                            
                                            i_37 += 1
                                            i_31 = i_22 + 4
                                            i_20 = i_37
                                            i_35 += 0xc
                                            i_22 = i_31
                                            i_41 += 4
                                            i_19 = i_35
                                            i_11 = i_23
                                            i_23 -= 1
                                        while (i_11 != 1)
                                    int32_t esi_12 = data_1b8a76c
                                    
                                    if (__return_addr_6 != 0)
                                        if (i_49 s> 0)
                                            void* eax_46 = &i_29[1]
                                            i_22 = i_49
                                            char** edi_9 = eax_46
                                            BOOL i_12
                                            
                                            do
                                                eax_46 =
                                                    sub_4a4620(eax_46, *edi_9, esi_12, data_1b8a768)
                                                edi_9 = &edi_9[3]
                                                esi_12 += 1
                                                i_12 = i_22
                                                i_22 -= 1
                                            while (i_12 != 1)
                                        label_540af0:
                                            BOOL i_26 = i_28
                                            
                                            if (i_26 s> 0)
                                                int32_t* i_51 = i_29
                                                BOOL i_13
                                                
                                                do
                                                    sub_4d6c40(i_51, &i_51[1])
                                                    i_51 = &i_51[3]
                                                    i_13 = i_26
                                                    i_26 -= 1
                                                while (i_13 != 1)
                                    else if (i_49 s> 0)
                                        void* eax_44 = &i_29[2]
                                        i_22 = i_49
                                        void* edi_8 = eax_44
                                        BOOL i_14
                                        
                                        do
                                            eax_44 = sub_4e8000(eax_44, esi_12, data_1b8a768, 
                                                *edi_8, &data_704898)
                                            edi_8 += 0xc
                                            esi_12 += 1
                                            i_14 = i_22
                                            i_22 -= 1
                                        while (i_14 != 1)
                                        goto label_540af0
                                    
                                    sub_4d6c40(&i_24, &i_19)
                                    int32_t eax_47 = sub_4d6c40(&i_21, &i_29)
                                    sub_5f02dd(eax_1 ^ &i_19)
                                    return eax_47
        
        if (data_702fc0 == 0)
            sub_5f02dd(eax_1 ^ &i_19)
            return __return_addr_1
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(__return_addr_1, data_72d6ac, data_719b6c, 0x61fb20, 0x61fae0), 
                data_72d6ac, data_719b6c, 0x61fb20, 0x61fae0), 
            data_72d6ac, data_719b6c, 0x61fb20, 0x61fae0)
        int32_t eax_50 = sub_4a1e40(3)
        sub_5f02dd(eax_1 ^ &i_19)
        return eax_50
    case 0xa
        int32_t eax_51 = data_1af4e84
        int32_t edx_63
        
        if (eax_51 == 0)
            sub_4ef190(eax_51, edx + 0x20, *(edx + 0x20), "$%", &data_1b8a720)
            __return_addr_1 = data_1b8a740
            edx_63 = data_1b8a744
            data_1b8a754 = __return_addr_1
            data_1b8a758 = edx_63
            data_1b8a75c = edx_63
        else if (eax_51 == 1)
            __return_addr_1 =
                sub_4ef190(eax_51 - 1, edx + 0x20, *(edx + 0x20), "$%%", &data_1b8a720)
            edx_63 = data_1b8a744
            data_1b8a75c = edx_63
        else
            __return_addr_1 = eax_51 - 2
            
            if (eax_51 != 2)
                edx_63 = data_1b8a744
            else
                __return_addr_1 =
                    sub_4ef190(__return_addr_1, edx + 0x20, *(edx + 0x20), "$%%$", &data_1b8a720)
                edx_63 = data_1b8a744
        
        int32_t* i_27 = data_1b8a720
        i_29 = i_27
        
        if (i_27 s> 0)
            int32_t ecx_111 = data_1b8a740
            __return_addr_1 = sub_4e76b0(ecx_111, edx_63)
            
            if (__return_addr_1 != 0)
                __return_addr_1 = sub_4e76b0(ecx_111, edx_63 - 1 + i_27)
                
                if (__return_addr_1 != 0)
                    int32_t edx_68 = data_1b8a758
                    int32_t ecx_112 = data_1b8a754
                    __return_addr_1 = sub_4e76b0(ecx_112, edx_68)
                    
                    if (__return_addr_1 != 0)
                        __return_addr_1 = sub_4e76b0(ecx_112, edx_68 - 1 + i_27)
                        
                        if (__return_addr_1 != 0)
                            uint32_t esi_13 = i_27 << 2
                            i_20 = 0
                            i_19 = 0
                            i_23 = 0
                            i_28 = 0
                            sub_4d6960(
                                sub_4d6960(__return_addr_1, &i_19, &i_20, esi_13, "SortFlag"), 
                                &i_28, &i_23, esi_13, "SortFlagIndex")
                            BOOL i_42 = i_19
                            BOOL i_36 = i_28
                            var_4 = data_1b8a744
                            int32_t* i_33 = data_1b8a75c
                            __return_addr_6 = i_42
                            i_21 = i_33
                            i_22 = i_36
                            
                            if (i_27 s> 0)
                                i_24 = i_27
                                BOOL edi_10 = var_4
                                arg_20 = i_36 - i_42
                                int32_t* i_15
                                
                                do
                                    sub_4e76e0(&__return_addr, edi_10, data_1b8a740, 
                                        &__return_addr, &data_704898)
                                    int32_t* ecx_116 = arg_20
                                    i_42 += 4
                                    *(i_42 - 4) = __return_addr
                                    edi_10 += 1
                                    int32_t* i_34 = i_21
                                    *(i_42 + ecx_116 - 4) = i_34
                                    i_33 = i_34 + 1
                                    i_15 = i_24
                                    i_24 -= 1
                                    i_21 = i_33
                                while (i_15 != 1)
                                i_42 = i_19
                                i_27 = i_29
                                i_36 = i_28
                            
                            if (data_1bfdd30 != 0xd2)
                                if (i_27 s> 0)
                                    i_21 = i_27
                                    BOOL edx_76 = 1
                                    __return_addr = i_42 + 4
                                    i_33 = i_29
                                    void* const __return_addr_5 = __return_addr
                                    var_4 = 1
                                    i_19 = i_36
                                    int32_t* i_16
                                    
                                    do
                                        if (var_4 s< i_33)
                                            do
                                                int32_t* eax_68 = *i_42
                                                int32_t ecx_119 = *__return_addr_5
                                                arg_20 = eax_68
                                                i_33 = i_29
                                                
                                                if (eax_68 s> ecx_119)
                                                    int32_t* eax_69 = arg_20
                                                    *i_42 = ecx_119
                                                    BOOL i_44 = i_19
                                                    *__return_addr_5 = eax_69
                                                    int32_t ecx_120 = *i_19
                                                    *i_44 = *(i_28 + (edx_76 << 2))
                                                    i_42 = __return_addr_6
                                                    *(i_28 + (edx_76 << 2)) = ecx_120
                                                    i_33 = i_29
                                                
                                                edx_76 += 1
                                                __return_addr_5 += 4
                                            while (edx_76 s< i_33)
                                            
                                            i_36 = i_19
                                        
                                        i_42 += 4
                                        edx_76 = var_4 + 1
                                        __return_addr_5 = __return_addr + 4
                                        __return_addr_6 = i_42
                                        i_36 += 4
                                        var_4 = edx_76
                                        i_16 = i_21
                                        i_21 -= 1
                                        __return_addr = __return_addr_5
                                        i_19 = i_36
                                    while (i_16 != 1)
                                    i_36 = i_28
                                    i_27 = i_29
                            else if (i_27 s> 0)
                                i_21 = i_27
                                BOOL edx_74 = 1
                                __return_addr = i_42 + 4
                                i_33 = i_29
                                void* const __return_addr_4 = __return_addr
                                var_4 = 1
                                i_19 = i_36
                                int32_t* i_17
                                
                                do
                                    if (var_4 s< i_33)
                                        do
                                            int32_t* eax_61 = *i_42
                                            int32_t ecx_117 = *__return_addr_4
                                            arg_20 = eax_61
                                            i_33 = i_29
                                            
                                            if (eax_61 s< ecx_117)
                                                int32_t* eax_62 = arg_20
                                                *i_42 = ecx_117
                                                BOOL i_43 = i_19
                                                *__return_addr_4 = eax_62
                                                int32_t ecx_118 = *i_19
                                                *i_43 = *(i_28 + (edx_74 << 2))
                                                i_42 = __return_addr_6
                                                *(i_28 + (edx_74 << 2)) = ecx_118
                                                i_33 = i_29
                                            
                                            edx_74 += 1
                                            __return_addr_4 += 4
                                        while (edx_74 s< i_33)
                                        
                                        i_36 = i_19
                                    
                                    i_42 += 4
                                    edx_74 = var_4 + 1
                                    __return_addr_4 = __return_addr + 4
                                    __return_addr_6 = i_42
                                    i_36 += 4
                                    var_4 = edx_74
                                    i_17 = i_21
                                    i_21 -= 1
                                    __return_addr = __return_addr_4
                                    i_19 = i_36
                                while (i_17 != 1)
                                i_36 = i_28
                                i_27 = i_29
                            
                            int32_t esi_14 = data_1b8a758
                            
                            if (i_27 s> 0)
                                int32_t* i_18
                                
                                do
                                    i_33 =
                                        sub_4e8000(i_33, esi_14, data_1b8a754, *i_36, &data_704898)
                                    i_36 = i_22 + 4
                                    esi_14 += 1
                                    i_22 = i_36
                                    i_18 = i_27
                                    i_27 -= 1
                                while (i_18 != 1)
                            
                            sub_4d6c40(&i_20, &i_19)
                            int32_t eax_74 = sub_4d6c40(&i_23, &i_28)
                            sub_5f02dd(eax_1 ^ &i_19)
                            return eax_74
        
        if (data_702fc0 == 0)
            sub_5f02dd(eax_1 ^ &i_19)
            return __return_addr_1
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(__return_addr_1, data_72d6ac, data_719b6c, 0x61fb44, 0x61fae0), 
                data_72d6ac, data_719b6c, 0x61fb44, 0x61fae0), 
            data_72d6ac, data_719b6c, 0x61fb44, 0x61fae0)
        int32_t eax_77 = sub_4a1e40(3)
        sub_5f02dd(eax_1 ^ &i_19)
        return eax_77
    case 0xb
        goto label_5411d1

*esi_1 += 1
sub_5f02dd(eax_1 ^ &i_19)
return __return_addr_1
