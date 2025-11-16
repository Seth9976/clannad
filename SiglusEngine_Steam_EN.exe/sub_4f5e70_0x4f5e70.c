// 函数: sub_4f5e70
// 地址: 0x4f5e70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
char* edx = __chkstk(0x4fd0)
void* hMem
int32_t eax_1 = __security_cookie ^ &hMem
uint32_t arg_c = 0xffffffff
hMem = nullptr
__return_addr = nullptr
int32_t eax_2 = data_1bfdd30
uint32_t eax_3

if (eax_2 s> 0x41f)
    eax_3 = eax_2 - 0x421
    
    if (eax_3 u<= 0xb)
        eax_3 = zx.d(lookup_table_4f789c[eax_3])
        char* var_18_2
        
        switch (eax_3)
            case 0
            label_4f604b:
                eax_3 = data_1af4e84
                
                if (data_1b8c884 != 0)
                    switch (eax_3)
                        case 0
                            eax_3 =
                                sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$@", &data_1b8a720)
                        case 1
                            eax_3 =
                                sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$$@", &data_1b8a720)
                        case 2
                            eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$$$$$$$@", 
                                &data_1b8a720)
                        case 3
                            eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$$$$$$$$@", 
                                &data_1b8a720)
                        case 4
                            eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), 
                                "$$$$$$$$$$$$$$$$$@", &data_1b8a720)
                else
                    switch (eax_3)
                        case 0
                            eax_3 =
                                sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$", &data_1b8a720)
                        case 1
                            eax_3 =
                                sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$$", &data_1b8a720)
                        case 2
                            eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$$$$$$$", 
                                &data_1b8a720)
                        case 3
                            eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "$$$$$$$$$", 
                                &data_1b8a720)
                        case 4
                            eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), 
                                "$$$$$$$$$$$$$$$$$", &data_1b8a720)
            case 1
            label_4f619f:
                eax_3 = data_1af4e84
                char* var_18_1
                
                if (data_1b8c884 != 0)
                    if (eax_3 u<= 4)
                        switch (eax_3)
                            case 0
                                int32_t* var_14_6 = &data_1b8a720
                                var_18_1 = &data_619b90
                            case 1
                                int32_t* var_14_7 = &data_1b8a720
                                var_18_1 = &data_61ee94
                            case 2
                                int32_t* var_14_8 = &data_1b8a720
                                var_18_1 = "$$$$$$$@"
                            case 3
                                int32_t* var_14_9 = &data_1b8a720
                                var_18_1 = "$$$$$$$$@"
                            case 4
                                int32_t* var_14_10 = &data_1b8a720
                                var_18_1 = "$$$$$$$$$$$$$$$$@"
                        
                        eax_3 =
                            sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), var_18_1, &data_1b8a720)
                else if (eax_3 u<= 4)
                    switch (eax_3)
                        case 0
                            int32_t* var_14_1 = &data_1b8a720
                            var_18_1 = &data_61e914
                        case 1
                            int32_t* var_14_2 = &data_1b8a720
                            var_18_1 = &data_61e930
                        case 2
                            int32_t* var_14_3 = &data_1b8a720
                            var_18_1 = "$$$$$$$"
                        case 3
                            int32_t* var_14_4 = &data_1b8a720
                            var_18_1 = "$$$$$$$$"
                        case 4
                            int32_t* var_14_5 = &data_1b8a720
                            var_18_1 = "$$$$$$$$$$$$$$$$"
                    
                    eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), var_18_1, &data_1b8a720)
                hMem = 0xffffffff
            case 2
            label_4f625a:
                eax_3 = data_1af4e84
                
                if (data_1b8c884 == 0)
                    if (eax_3 u> 4)
                        goto label_4f6301
                    
                    switch (eax_3)
                        case 0
                            int32_t* var_14_11 = &data_1b8a720
                            var_18_2 = &data_61ee14
                        case 1
                            int32_t* var_14_12 = &data_1b8a720
                            var_18_2 = "S$$$"
                        case 2
                            int32_t* var_14_13 = &data_1b8a720
                            var_18_2 = "S$$$$$$$$"
                        case 3
                            int32_t* var_14_14 = &data_1b8a720
                            var_18_2 = "S$$$$$$$$$"
                        case 4
                            int32_t* var_14_15 = &data_1b8a720
                            var_18_2 = "S$$$$$$$$$$$$$$$$"
                    
                    goto label_4f62f9
                
                if (eax_3 u> 4)
                    goto label_4f6301
                
                switch (eax_3)
                    case 0
                        int32_t* var_14_16 = &data_1b8a720
                        var_18_2 = "S$$@"
                    case 1
                        int32_t* var_14_17 = &data_1b8a720
                        var_18_2 = "S$$$@"
                    case 2
                        int32_t* var_14_18 = &data_1b8a720
                        var_18_2 = "S$$$$$$$$@"
                    case 3
                        int32_t* var_14_19 = &data_1b8a720
                        var_18_2 = "S$$$$$$$$$@"
                    case 4
                        int32_t* var_14_20 = &data_1b8a720
                        var_18_2 = "S$$$$$$$$$$$$$$$$@"
                
            label_4f62f9:
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), var_18_2, &data_1b8a720)
            label_4f6301:
                
                if (data_1af4e84 == 4)
                    data_1bfdd30 -= 0xa
                else
                    eax_3 = data_1b8a748
                label_4f6488:
                    __return_addr = 1
                    arg_c = eax_3
                    data_1bfdd30 -= 0xa
            case 3
            label_4f631f:
                eax_3 = data_1af4e84
                
                if (data_1b8c884 != 0)
                    if (eax_3 u> 4)
                        goto label_4f6301
                    
                    switch (eax_3)
                        case 0
                            int32_t* var_14_26 = &data_1b8a720
                            var_18_2 = "$$$@"
                        case 1
                            int32_t* var_14_27 = &data_1b8a720
                            var_18_2 = "$$$$@"
                        case 2
                            int32_t* var_14_28 = &data_1b8a720
                            var_18_2 = "$$$$$$$$$@"
                        case 3
                            int32_t* var_14_29 = &data_1b8a720
                            var_18_2 = "$$$$$$$$$$@"
                        case 4
                            int32_t* var_14_30 = &data_1b8a720
                            var_18_2 = "$$$$$$$$$$$$$$$$$@"
                    
                    goto label_4f62f9
                
                if (eax_3 u> 4)
                    goto label_4f6301
                
                switch (eax_3)
                    case 0
                        int32_t* var_14_21 = &data_1b8a720
                        var_18_2 = &data_61e934
                    case 1
                        int32_t* var_14_22 = &data_1b8a720
                        var_18_2 = "$$$$"
                    case 2
                        int32_t* var_14_23 = &data_1b8a720
                        var_18_2 = "$$$$$$$$$"
                    case 3
                        int32_t* var_14_24 = &data_1b8a720
                        var_18_2 = "$$$$$$$$$$"
                    case 4
                        int32_t* var_14_25 = &data_1b8a720
                        var_18_2 = "$$$$$$$$$$$$$$$$$"
                
                goto label_4f62f9
            case 4
            label_4f63cc:
                int32_t eax_4 = data_1af4e84
                char const* const var_18_3
                
                if (data_1b8c884 != 0)
                    if (eax_4 u<= 4)
                        switch (eax_4)
                            case 0
                                int32_t* var_14_36 = &data_1b8a720
                                var_18_3 = &data_61ee94
                            case 1
                                int32_t* var_14_37 = &data_1b8a720
                                var_18_3 = "$$$@"
                            case 2
                                int32_t* var_14_38 = &data_1b8a720
                                var_18_3 = "$$$$$$$$@"
                            case 3
                                int32_t* var_14_39 = &data_1b8a720
                                var_18_3 = "$$$$$$$$$@"
                            case 4
                                int32_t* var_14_40 = &data_1b8a720
                                var_18_3 = "$$$$$$$$$$$$$$$$@"
                        
                        sub_4ef190(eax_4, &edx[0x20], *(edx + 0x20), var_18_3, &data_1b8a720)
                else if (eax_4 u<= 4)
                    switch (eax_4)
                        case 0
                            int32_t* var_14_31 = &data_1b8a720
                            var_18_3 = &data_61e930
                        case 1
                            int32_t* var_14_32 = &data_1b8a720
                            var_18_3 = &data_61e934
                        case 2
                            int32_t* var_14_33 = &data_1b8a720
                            var_18_3 = "$$$$$$$$"
                        case 3
                            int32_t* var_14_34 = &data_1b8a720
                            var_18_3 = "$$$$$$$$$"
                        case 4
                            int32_t* var_14_35 = &data_1b8a720
                            var_18_3 = "$$$$$$$$$$$$$$$$"
                    
                    sub_4ef190(eax_4, &edx[0x20], *(edx + 0x20), var_18_3, &data_1b8a720)
                eax_3 = 0xffffffff
                bool cond:9_1 = data_1af4e84 == 4
                hMem = 0xffffffff
                
                if (not(cond:9_1))
                    eax_3 = data_1b8a734
                    goto label_4f6488
                
                data_1bfdd30 -= 0xa
else if (eax_2 == 0x41f)
label_4f5edb:
    eax_3 = data_1af4e84
    
    if (data_1b8c884 != 0)
        switch (eax_3)
            case 0
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$@", &data_1b8a720)
            case 1
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$@", &data_1b8a720)
            case 2
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$$$$$$@", &data_1b8a720)
            case 3
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$$$$$$$@", &data_1b8a720)
            case 4
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$$$$$$$$$$$$$$$@", 
                    &data_1b8a720)
    else
        switch (eax_3)
            case 0
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$", &data_1b8a720)
            case 1
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$", &data_1b8a720)
            case 2
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$$$$$$", &data_1b8a720)
            case 3
                eax_3 = sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$$$$$$$", &data_1b8a720)
            case 4
                eax_3 =
                    sub_4ef190(eax_3, &edx[0x20], *(edx + 0x20), "S$$$$$$$$$$$$$$$$", &data_1b8a720)
else
    eax_3 = eax_2 - 0x37
    
    if (eax_3 u<= 0x21)
        eax_3 = zx.d(lookup_table_4f7838[eax_3])
        
        switch (eax_3)
            case 0
                goto label_4f5edb
            case 1
                goto label_4f604b
            case 2
                goto label_4f619f
            case 3
                goto label_4f625a
            case 4
                goto label_4f631f
            case 5
                goto label_4f63cc

void arg_1678
void* edi_1 = &arg_1678
BOOL i_3 = 0x14
void arg_3f8
void* esi = &arg_3f8
BOOL i

do
    *(esi - 4) = 0
    *esi = 0
    *(esi + 0x10) = 0
    *(esi + 0x14) = 0
    *(esi + 0x24) = 0
    *(esi + 0x28) = 0
    *(esi + 0x38) = 0
    *(esi + 0x3c) = 0
    *(esi + 0x4c) = 0
    *(esi + 0x50) = 0
    *(esi + 0x60) = 0
    *(esi + 0x64) = 0
    *(esi + 0x74) = 0
    *(esi + 0x78) = 0
    *(esi + 0x88) = 0
    *(esi + 0x8c) = 0
    *(esi + 0x9c) = 0
    *(esi + 0xa0) = 0
    *(esi + 0xb0) = 0
    *(esi + 0xb4) = 0
    eax_3 = sub_4d1ba0(eax_3, 0x2d4, edi_1 - 0x220, 0)
    *edi_1 = 0xffffffff
    i = i_3
    i_3 -= 1
    esi += 0xc8
    *(edi_1 + 0x40) = 0xff
    edi_1 += 0x2d4
    *(edi_1 - 0x278) = 0xffffffff
while (i != 1)
int32_t eax_5 = data_1b8c884
char* edi_2 = edx
BOOL i_9 = 0
BOOL arg_4
int32_t arg_398[0x16]
void arg_3f0

if (eax_5 s> 0)
    BOOL i_1 = 0
    BOOL i_6 = 0x14
    arg_4 = 0
    BOOL i_10 = 0x14
    
    if (eax_5 s> 0)
        do
            BOOL i_4 = i_6
            
            if (i_1 s< 0x14)
                i_4 = i_1
            
            *(edi_2 + 0x20) += 1
            char* ecx_25 = *(edi_2 + 0x20)
            uint32_t eax_6 = zx.d(*ecx_25)
            *(edi_2 + 0x20) = &ecx_25[1]
            arg_398[i_4] = eax_6
            int32_t edi_4 = arg_398[i_4]
            
            if (edi_4 u<= 4)
                char* var_18_4
                uint32_t var_14_41
                void* eax_9
                
                switch (edi_4)
                    case 0
                        eax_9 = i_4 * 0xc8 + &arg_3f0
                        var_14_41 = eax_9
                        var_18_4 = U"SMDB"
                    case 1
                        eax_9 = i_4 * 0xc8 + &arg_3f0
                        var_14_41 = eax_9
                        var_18_4 = &data_61ed64
                    case 2
                        eax_9 = i_4 * 0xc8 + &arg_3f0
                        var_14_41 = eax_9
                        var_18_4 = &data_61ee14
                    case 3
                        eax_9 = i_4 * 0xc8 + &arg_3f0
                        var_14_41 = eax_9
                        var_18_4 = "S$$$$$$"
                    case 4
                        eax_9 = i_4 * 0xc8 + &arg_3f0
                        var_14_41 = eax_9
                        var_18_4 = "S$$$$$$$"
                
                sub_4ef190(eax_9, &edi_2[0x20], &ecx_25[1], var_18_4, var_14_41)
                i_1 = arg_4
            
            char* eax_14 = *(edi_2 + 0x20)
            
            while (true)
                char* ecx_26
                ecx_26.b = *eax_14
                
                if (ecx_26.b != 0x2c && ecx_26.b != 0x20)
                    break
                
                eax_14 = &eax_14[1]
            
            i_6 = i_10
            i_1 += 1
            *(edi_2 + 0x20) = eax_14
            arg_4 = i_1
        while (i_1 s< data_1b8c884)
        
        edi_2 = edx
    
    *(edi_2 + 0x20) += 1
    
    if (data_1b8c884 s< 0x14)
        i_6 = data_1b8c884
    
    i_9 = i_6

int32_t arg_18
bool cond:18_1

switch (data_1af4e84)
    case 0
        int32_t ecx_27 = (&data_1b8a734)[hMem * 5]
        
        if (ecx_27 s< 0 || ecx_27 s>= 0x3e8)
            ecx_27 = 0
        
        int32_t eax_20 = ecx_27 * 0x11
        sub_4d1c30(eax_20, (eax_20 << 2) + &data_12a705c, &arg_18, 0x44)
    case 1
        void* hMem_5 = hMem
        int32_t ecx_29 = (&data_1b8a734)[hMem_5 * 5]
        
        if (ecx_29 s< 0 || ecx_29 s>= 0x3e8)
            ecx_29 = 0
        
        int32_t eax_24 = ecx_29 * 0x11
        sub_4d1c30(eax_24, (eax_24 << 2) + &data_12a705c, &arg_18, 0x44)
        int32_t eax_28 = (&data_1b8a748)[(__return_addr + hMem_5) * 5]
        arg15 = eax_28
        
        if (eax_28 s<= 0)
            arg15 = 0xff
        else
            cond:18_1 = eax_28 s< 0xff
        label_4f6a1c:
            
            if (not(cond:18_1))
                arg15 = 0xff
    case 2
        void* hMem_6 = hMem
        int32_t ecx_31 = (&data_1b8a734)[hMem_6 * 5]
        
        if (ecx_31 s< 0 || ecx_31 s>= 0x3e8)
            ecx_31 = 0
        
        int32_t eax_32 = ecx_31 * 0x11
        sub_4d1c30(eax_32, (eax_32 << 2) + &data_12a705c, &arg_18, 0x44)
        void* ecx_33 = (__return_addr + hMem_6) * 5
        char* edi_6 = (&data_1b8a748)[ecx_33]
        int32_t edx_28 = (&data_1b8a75c)[ecx_33]
        int32_t esi_2 = (&data_1b8a784)[ecx_33]
        arg11 = (&data_1b8a770)[ecx_33]
        arg13 = (&data_1b8a798)[ecx_33]
        arg9 = edi_6
        arg10 = edx_28
        arg12 = esi_2
        arg14 = (&data_1b8a7ac)[ecx_33]
        
        if (data_1bfdd30 s>= 0x3e8)
            int32_t eax_38 = (&data_1b8a770)[ecx_33]
            
            if (eax_38 == 0)
                arg11 = edi_6
            else
                arg11 = eax_38 - 1 + edi_6
            
            if (esi_2 == 0)
                arg12 = edx_28
            else
                arg12 = edx_28 - 1 + esi_2
    case 3
        void* hMem_7 = hMem
        int32_t ecx_34 = (&data_1b8a734)[hMem_7 * 5]
        
        if (ecx_34 s< 0 || ecx_34 s>= 0x3e8)
            ecx_34 = 0
        
        int32_t eax_46 = ecx_34 * 0x11
        sub_4d1c30(eax_46, (eax_46 << 2) + &data_12a705c, &arg_18, 0x44)
        void* ecx_36 = (__return_addr + hMem_7) * 5
        char* eax_49 = (&data_1b8a770)[ecx_36]
        char* edi_7 = (&data_1b8a748)[ecx_36]
        int32_t edx_30 = (&data_1b8a75c)[ecx_36]
        int32_t esi_3 = (&data_1b8a784)[ecx_36]
        arg11 = eax_49
        arg13 = (&data_1b8a798)[ecx_36]
        int32_t ecx_37 = (&data_1b8a7c0)[ecx_36]
        arg9 = edi_7
        arg10 = edx_30
        arg12 = esi_3
        arg14 = (&data_1b8a7ac)[ecx_36]
        arg15 = ecx_37
        
        if (data_1bfdd30 s>= 0x3e8)
            if (eax_49 == 0)
                arg11 = edi_7
            else
                arg11 = eax_49 - 1 + edi_7
            
            if (esi_3 == 0)
                arg12 = edx_30
            else
                arg12 = edx_30 - 1 + esi_3
        
        if (ecx_37 s> 0)
            cond:18_1 = ecx_37 s< 0xff
            goto label_4f6a1c
        
        arg15 = 0xff
    case 4
        void* ecx_38 = hMem * 5
        arg9 = (&data_1b8a734)[ecx_38]
        arg11 = (&data_1b8a75c)[ecx_38]
        arg13 = (&data_1b8a784)[ecx_38]
        int32_t esi_4 = (&data_1b8a748)[ecx_38]
        int32_t edi_8 = (&data_1b8a770)[ecx_38]
        arg14 = (&data_1b8a798)[ecx_38]
        uint32_t eax_62 = (&data_1b8a7ac)[ecx_38]
        arg10 = esi_4
        
        if (eax_62 s< 0)
            eax_62 = 0
        
        arg12 = edi_8
        bool cond:12_1 = data_1bfdd30 s< 0x3e8
        int32_t edx_31 = (&data_1b8a84c)[ecx_38]
        arg7 = eax_62
        arg_18 = (&data_1b8a7c0)[ecx_38]
        arg1 = (&data_1b8a7d4)[ecx_38]
        arg2 = (&data_1b8a7e8)[ecx_38]
        arg3 = (&data_1b8a7fc)[ecx_38]
        arg4 = (&data_1b8a810)[ecx_38]
        arg5 = (&data_1b8a824)[ecx_38]
        arg6 = (&data_1b8a838)[ecx_38]
        arg15 = edx_31
        arg8 = (&data_1b8a860)[ecx_38]
        
        if (not(cond:12_1))
            char* eax_72 = (&data_1b8a734)[ecx_38]
            
            if ((&data_1b8a75c)[ecx_38] != 0)
                eax_72 = &eax_72[(&data_1b8a75c)[ecx_38] - 1]
                esi_4 = (&data_1b8a748)[ecx_38]
            
            arg11 = eax_72
            
            if (edi_8 == 0)
                arg12 = esi_4
            else
                arg12 = edi_8 - 1 + esi_4
        
        if (edx_31 s> 0)
            cond:18_1 = edx_31 s< 0xff
            goto label_4f6a1c
        
        arg15 = 0xff

uint32_t eax_75 = arg7

if (arg_c s> 0xffffffff)
    eax_75 = arg_c

char* arg_14 = nullptr
int32_t arg_60 = 0
arg_c = 0
int32_t arg_68
sub_4d1ba0(eax_75, 0x2d4, &arg_68, 0)
char* edi_9 = arg11
int32_t esi_7 = arg12
uint32_t eax_79 = data_1bfdd30
int32_t arg_188 = 0
int32_t arg_288 = 0xffffffff
int32_t arg_2e0 = 0
void* arg_2e4 = 0xffffffff
char* arg_168 = edi_9
int32_t arg_16c = esi_7
int32_t arg_15c = 1
int32_t eax_96
int32_t edx_42

if (eax_79 s> 0x4d)
    if (eax_79 == 0x421)
        goto label_4f6cfa
    
    if (eax_79 == 0x4e)
        goto label_4f6dc3
    
    if (eax_79 == 0x41f)
        goto label_4f6b36
    
    if (eax_79 == 0x422)
    label_4f6dc3:
        
        if (data_976f50 == 0)
            sub_411500(eax_79, data_70300c, 0x20, data_7030dc)
        
        int32_t eax_97 = sub_4d6c40(0x976b70, &data_976b74)
        bool cond:17_1 = data_702fc0 == 0
        data_976b78 = 0
        data_976b7c = 0
        
        if (not(cond:17_1) && data_1af0a78 != 0)
            bool cond:20_1 = data_1318520 != 2
            data_20cc940:4 = 1
            
            if (not(cond:20_1))
                eax_97 = sub_563b20(0)
        
        sub_411500(eax_97, data_976f58, 1, data_976f5c)
        eax_96 = data_976f5c * data_976f58
        edx_42 = data_976f54
    label_4f6e5e:
        int32_t eax_99 = eax_96 << 2
        sub_4d1c30(eax_99, edx_42, data_976b74, eax_99)
        esi_7 = arg12
        edi_9 = arg11
else if (eax_79 == 0x4d)
label_4f6cfa:
    int32_t ecx_45 = data_1b8a720
    
    if (ecx_45 != 1 && ecx_45 u<= 0x20)
        if ((&data_976b50)[ecx_45 * 8] == 0)
            sub_411500(eax_79, data_70300c, ecx_45, data_7030dc)
        
        int32_t eax_94 = sub_4d6c40(0x976b70, &data_976b74)
        bool cond:19_1 = data_702fc0 == 0
        data_976b78 = 0
        data_976b7c = 0
        
        if (not(cond:19_1) && data_1af0a78 != 0)
            bool cond:21_1 = data_1318520 != 2
            data_20cc940:4 = 1
            
            if (not(cond:21_1))
                eax_94 = sub_563b20(0)
        
        sub_411500(eax_94, (&data_976b58)[ecx_45 * 8], 1, (&data_976b5c)[ecx_45 * 8])
        eax_96 = (&data_976b5c)[ecx_45 * 8] * (&data_976b58)[ecx_45 * 8]
        edx_42 = (&data_976b54)[ecx_45 * 8]
        goto label_4f6e5e
else if (eax_79 - 0x37 u<= 0x14)
    eax_79 = zx.d(*(eax_79 + &jump_table_4f7970[0]:1))
    
    switch (eax_79)
        case 0
        label_4f6b36:
            uint32_t eax_81 = data_1b8a728
            arg_c = eax_81
            
            if (eax_81 != 0)
                void* ecx_41
                uint32_t esi_8
                
                if (*eax_81 != 0x3f)
                    sub_542740(eax_81.b, &arg_2e4, eax_81, 1, 0)
                    ecx_41 = arg_2e4
                    esi_8 = arg_c
                label_4f6bb5:
                    
                    if (arg15 - 1 u> 0xfd)
                        esi_7 = arg12
                        edi_9 = arg11
                        arg_2e0 = 1
                        
                        if (sub_42a960(sub_4122f0(arg15 - 1, esi_8, 1, ecx_41), arg10, arg9, edi_9, 
                                esi_7, arg13, arg14, arg15) != 0)
                            arg_14 = 1
                    else
                        if (data_976b50 == 0)
                            sub_411500(arg15 - 1, data_70300c, 0, data_7030dc)
                        
                        int32_t eax_84 = sub_4d6c40(0x976b70, &data_976b74)
                        bool cond:22_1 = data_702fc0 == 0
                        data_976b78 = 0
                        data_976b7c = 0
                        
                        if (not(cond:22_1) && data_1af0a78 != 0)
                            bool cond:24_1 = data_1318520 != 2
                            data_20cc940:4 = 1
                            
                            if (not(cond:24_1))
                                eax_84 = sub_563b20(0)
                        
                        sub_411500(eax_84, data_976b58, 1, data_976b5c)
                        int32_t eax_87 = (data_976b5c * data_976b58) << 2
                        sub_4d1c30(eax_87, data_976b54, data_976b74, eax_87)
                        void* eax_91 = data_70300c - 1
                        sub_412680(eax_91, esi_8, 1, nullptr, 0, eax_91, data_7030dc - 1, 0, 0, 
                            arg15, 0, arg_2e4)
                        esi_7 = arg12
                        edi_9 = arg11
                else if (*(eax_81 + 1) == 0x3f && *(eax_81 + 2) == 0x3f && data_7037ec != 0)
                    ecx_41 = data_703810
                    esi_8 = &data_7037ec
                    arg_c = &data_7037ec
                    arg_2e4 = ecx_41
                    int32_t arg_2dc = 1
                    goto label_4f6bb5
        case 1
            goto label_4f6cfa
        case 2
            goto label_4f6dc3
int32_t ecx_47 = arg10
char* arg_10 = arg9

if (arg9 s> edi_9)
    arg_10 = edi_9
    edi_9 = arg9

if (arg10 s> esi_7)
    ecx_47 = esi_7
    esi_7 = arg10

if ((arg15 s<= 0 || arg15 s>= 0xff) && arg13 s<= 0 && arg13 + edi_9 - arg_10 + 1 s>= data_70300c
        && arg14 s<= 0)
    int32_t ecx_48 = 0
    
    if (arg14 + esi_7 - ecx_47 + 1 s>= data_7030dc)
        ecx_48 = 1
    
    arg_60 = ecx_48

BOOL i_11 = i_9
BOOL i_7 = 0
HGLOBAL hMem_3 = nullptr
arg_4 = 0
hMem = nullptr
i_3 = 0
int32_t arg_340[0x16]

if (i_11 s> 0)
    void* __return_addr_2 = &arg_3f8
    __return_addr = &arg_3f8
    
    do
        char* edi_12 = *__return_addr_2
        
        if (edi_12 == 0)
            arg_340[i_7] = 0
        else
            i_11.b = *edi_12
            
            if (i_11.b == 0)
                i_11 = i_9
                arg_340[i_7] = 0
            else
                uint32_t var_1c_3
                BOOL eax_107
                BOOL ecx_53
                char* edx_47
                
                if (i_11.b != 0x3f)
                    arg_340[i_7] = 1
                    
                    if (hMem_3 != 0)
                        int32_t esi_16 = data_1af413c
                        char eax_111
                        
                        if (esi_16 != 0)
                            WaitForSingleObject(data_7027a8, 0xffffffff)
                            eax_111, i_7 = sub_4d6b80(&hMem)
                        
                        if (esi_16 == 0 || eax_111 != 0)
                            GlobalUnlock(hMem)
                            GlobalFree(hMem)
                            hMem = nullptr
                            arg_4 = 0
                            
                            if (esi_16 != 0)
                                sub_4d6500()
                                ReleaseSemaphore(data_7027a8, 1, nullptr)
                    else
                        arg_4 = hMem_3
                    
                    int32_t esi_17 = 0
                    char* eax_112 = edi_12
                    
                    if (*edi_12 != 0)
                        do
                            i_7.b = *eax_112
                            
                            if (i_7.b u< 0x80)
                                esi_17 += 1
                                eax_112 = &eax_112[1]
                            else if (i_7.b u< 0xa0)
                                if (i_7.b u>= 0xfe)
                                    esi_17 += 1
                                    eax_112 = &eax_112[1]
                                else
                                    esi_17 += 2
                                    eax_112 = &eax_112[2]
                            else if (i_7.b u<= 0xdf || i_7.b u>= 0xfe)
                                esi_17 += 1
                                eax_112 = &eax_112[1]
                            else
                                esi_17 += 2
                                eax_112 = &eax_112[2]
                        while (*eax_112 != 0)
                    
                    eax_107 = sub_4d6960(eax_112, &arg_4, &hMem, esi_17 + 1, "chr_name")
                    ecx_53 = arg_4
                    edx_47 = edi_12
                    var_1c_3 = esi_17 + 1
                label_4f6f93:
                    sub_4d1c30(eax_107, edx_47, ecx_53, var_1c_3)
                    hMem_3 = hMem
                    i_7 = i_3
                    __return_addr_2 = __return_addr
                else if (hMem_3 != 0)
                    arg_340[i_7] = 2
                    sub_4d6c40(__return_addr_2 - 4, __return_addr_2)
                    char* edi_13 = arg_4
                    
                    if (edi_13 != 0)
                        int32_t esi_13 = 0
                        char* eax_106 = edi_13
                        
                        if (*edi_13 != 0)
                            do
                                char ecx_50 = *eax_106
                                
                                if (ecx_50 u< 0x80)
                                    esi_13 += 1
                                    eax_106 = &eax_106[1]
                                else if (ecx_50 u< 0xa0)
                                    if (ecx_50 u>= 0xfe)
                                        esi_13 += 1
                                        eax_106 = &eax_106[1]
                                    else
                                        esi_13 += 2
                                        eax_106 = &eax_106[2]
                                else if (ecx_50 u<= 0xdf || ecx_50 u>= 0xfe)
                                    esi_13 += 1
                                    eax_106 = &eax_106[1]
                                else
                                    esi_13 += 2
                                    eax_106 = &eax_106[2]
                            while (*eax_106 != 0)
                        
                        BOOL* __return_addr_1 = __return_addr
                        eax_107 = sub_4d6960(__return_addr_1, __return_addr_1, 
                            &__return_addr_1[-1], esi_13 + 1, "chr_name")
                        edx_47 = edi_13
                        var_1c_3 = esi_13 + 1
                        ecx_53 = *__return_addr
                        goto label_4f6f93
                    
                    i_7 = i_3
                    __return_addr_2 = __return_addr
                else
                    arg_340[i_7] = hMem_3
                i_11 = i_9
        
        i_7 += 1
        __return_addr_2 += 0xc8
        i_3 = i_7
        __return_addr = __return_addr_2
    while (i_7 s< i_11)
    
    if (hMem_3 != 0)
        int32_t edi_14 = data_1af413c
        char eax_108
        
        if (edi_14 != 0)
            WaitForSingleObject(data_7027a8, 0xffffffff)
            eax_108 = sub_4d6b80(&hMem)
        
        if (edi_14 == 0 || eax_108 != 0)
            GlobalUnlock(hMem_3)
            GlobalFree(hMem_3)
            
            if (edi_14 != 0)
                sub_4d6500()
                ReleaseSemaphore(data_7027a8, 1, nullptr)

BOOL i_8 = 0
i_3 = 0

if (i_9 s> 0)
    BOOL i_12 = i_9
    void arg_404
    void* hMem_4 = &arg_404
    void arg_16b8
    char* esi_15 = &arg_16b8
    hMem = &arg_404
    
    do
        int32_t edi_15 = arg_340[i_8]
        
        if (edi_15 != 0)
            char* ecx_55 = *(hMem_4 - 0xc)
            *(esi_15 - 0x140) = 1
            sub_542740(i_12.b, &esi_15[0x1c], ecx_55, 2, 0)
            int32_t eax_110 = arg_398[i_3]
            
            if (eax_110 u> 4)
                hMem_4 = hMem
            else
                switch (eax_110)
                    case 0
                        void arg_64
                        int32_t eax_114 =
                            sub_411bf0(&__return_addr, &arg_64, ecx_55, &__return_addr, &arg_4)
                        *(esi_15 - 0x168) = 0
                        *(esi_15 - 0x164) = 0
                        BOOL eax_117
                        
                        if (eax_114 == 0)
                            *(esi_15 - 0x160) = data_70300c - 1
                            eax_117 = data_7030dc
                        else
                            *(esi_15 - 0x160) = __return_addr - 1
                            eax_117 = arg_4
                        
                        *(esi_15 - 0x15c) = eax_117 - 1
                        
                        if (esi_15 != 0x13c)
                            *(esi_15 - 0x13c) = 0
                        
                        if (esi_15 != 0x138)
                            *(esi_15 - 0x138) = 0
                        
                        *esi_15 = 0xff
                        hMem_4 = hMem
                    case 1
                        hMem_4 = hMem
                        int32_t eax_126 = *hMem_4
                        
                        if (eax_126 s< 0 || eax_126 s>= 0x3e8)
                            eax_126 = 0
                        
                        int32_t ecx_63 = eax_126 * 0x11
                        *(esi_15 - 0x168) = *((ecx_63 << 2) + &data_12a7084)
                        *(esi_15 - 0x164) = *((ecx_63 << 2) + &data_12a7088)
                        *(esi_15 - 0x160) = *((ecx_63 << 2) + &data_12a708c)
                        *(esi_15 - 0x15c) = *((ecx_63 << 2) + &data_12a7090)
                        *(esi_15 - 0x13c) = *((ecx_63 << 2) + &data_12a7094)
                        *(esi_15 - 0x138) = *((ecx_63 << 2) + &data_12a7098)
                        *esi_15 = *((ecx_63 << 2) + &data_12a709c)
                    case 2
                        hMem_4 = hMem
                        int32_t eax_134 = *hMem_4
                        
                        if (eax_134 s< 0 || eax_134 s>= 0x3e8)
                            eax_134 = 0
                        
                        int32_t ecx_66 = eax_134 * 0x11
                        *(esi_15 - 0x168) = *((ecx_66 << 2) + &data_12a7084)
                        *(esi_15 - 0x164) = *((ecx_66 << 2) + &data_12a7088)
                        *(esi_15 - 0x160) = *((ecx_66 << 2) + &data_12a708c)
                        *(esi_15 - 0x15c) = *((ecx_66 << 2) + &data_12a7090)
                        *(esi_15 - 0x13c) = *((ecx_66 << 2) + &data_12a7094)
                        *(esi_15 - 0x138) = *((ecx_66 << 2) + &data_12a7098)
                        *esi_15 = *(hMem_4 + 0x14)
                    case 3
                        bool cond:26_1 = data_1bfdd30 s< 0x3e8
                        hMem_4 = hMem
                        *esi_15 = 0xff
                        int32_t ecx_67 = *(hMem_4 + 0x28)
                        *(esi_15 - 0x168) = *hMem_4
                        *(esi_15 - 0x164) = *(hMem_4 + 0x14)
                        *(esi_15 - 0x15c) = *(hMem_4 + 0x3c)
                        *(esi_15 - 0x13c) = *(hMem_4 + 0x50)
                        int32_t eax_146 = *(hMem_4 + 0x64)
                        *(esi_15 - 0x160) = ecx_67
                        *(esi_15 - 0x138) = eax_146
                        
                        if (not(cond:26_1))
                            int32_t eax_147 = *hMem_4
                            
                            if (ecx_67 != 0)
                                eax_147 = eax_147 - 1 + ecx_67
                            
                            *(esi_15 - 0x160) = eax_147
                            int32_t eax_149 = *(hMem_4 + 0x3c)
                            
                            if (eax_149 == 0)
                                *(esi_15 - 0x15c) = *(hMem_4 + 0x14)
                            else
                                *(esi_15 - 0x15c) = eax_149 - 1 + *(hMem_4 + 0x14)
                    case 4
                        bool cond:27_1 = data_1bfdd30 s< 0x3e8
                        hMem_4 = hMem
                        int32_t ecx_69 = *(hMem_4 + 0x28)
                        *(esi_15 - 0x168) = *hMem_4
                        *(esi_15 - 0x164) = *(hMem_4 + 0x14)
                        *(esi_15 - 0x15c) = *(hMem_4 + 0x3c)
                        *(esi_15 - 0x13c) = *(hMem_4 + 0x50)
                        *(esi_15 - 0x138) = *(hMem_4 + 0x64)
                        int32_t eax_157 = *(hMem_4 + 0x78)
                        *(esi_15 - 0x160) = ecx_69
                        *esi_15 = eax_157
                        
                        if (not(cond:27_1))
                            int32_t eax_158 = *hMem_4
                            
                            if (ecx_69 != 0)
                                eax_158 = eax_158 - 1 + ecx_69
                            
                            *(esi_15 - 0x160) = eax_158
                            int32_t eax_160 = *(hMem_4 + 0x3c)
                            
                            if (eax_160 == 0)
                                *(esi_15 - 0x15c) = *(hMem_4 + 0x14)
                            else
                                *(esi_15 - 0x15c) = eax_160 - 1 + *(hMem_4 + 0x14)
            
            int32_t ecx_59 = *esi_15
            
            if (ecx_59 s<= 0 || ecx_59 s> 0xff)
                ecx_59 = 0xff
            
            int32_t eax_125 = *(*(data_1cd4328 + (ecx_59 << 2)) + (arg15 << 2))
            *esi_15 = eax_125
            uint32_t eax_163
            
            if (edi_15 == 1)
                enum WAIT_EVENT hMem_1 = data_976ed0
                
                if (hMem_1 != WAIT_OBJECT_0)
                    int32_t edi_16 = data_1af413c
                    
                    if (edi_16 == 0)
                        goto label_4f744e
                    
                    hMem_1 = WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (data_976ed0 == 0)
                        goto label_4f746f
                    
                    hMem_1 = sub_4d6b80(&data_976ed0)
                    
                    if (hMem_1.b != 0)
                        hMem_1 = data_976ed0
                    label_4f744e:
                        
                        if (hMem_1 == WAIT_OBJECT_0)
                            goto label_4f746f
                        
                        GlobalUnlock(hMem_1)
                        hMem_1 = GlobalFree(data_976ed0)
                        data_976ed0 = 0
                    label_4f746f:
                        data_976ed4 = 0
                        
                        if (edi_16 != 0)
                            sub_4d6500()
                            hMem_1 = ReleaseSemaphore(data_7027a8, 1, nullptr)
                else
                    data_976ed4 = hMem_1
                
                void* var_14_60 = *(esi_15 + 0x1c)
                data_976ed8 = 0
                data_976edc = 0
                sub_4122f0(hMem_1, ecx_55, 0x1c, var_14_60)
                eax_163 = zx.d(*esi_15)
                sub_4128b0(eax_163, *(esi_15 - 0x164), *(esi_15 - 0x168), *(esi_15 - 0x160), 
                    *(esi_15 - 0x15c), 0x1c, *(esi_15 - 0x13c), *(esi_15 - 0x138), 1, 0xffffffff, 
                    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, eax_163)
                hMem_4 = hMem
            else if (edi_15 == 2)
                eax_163 = zx.d(eax_125.b)
                sub_4128b0(eax_163, *(esi_15 - 0x164), *(esi_15 - 0x168), *(esi_15 - 0x160), 
                    *(esi_15 - 0x15c), 0x1c, *(esi_15 - 0x13c), *(esi_15 - 0x138), 1, 0xffffffff, 
                    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, eax_163)
                hMem_4 = hMem
            i_12 = i_9
        
        hMem_4 += 0xc8
        i_8 = i_3 + 1
        hMem = hMem_4
        esi_15 = &esi_15[0x2d4]
        i_3 = i_8
    while (i_8 s< i_12)

HGLOBAL hMem_2 = data_976ed0

if (hMem_2 != 0)
    int32_t esi_19 = data_1af413c
    
    if (esi_19 == 0)
        goto label_4f757b
    
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (data_976ed0 == 0)
        goto label_4f759c
    
    if (sub_4d6b80(&data_976ed0) != 0)
        hMem_2 = data_976ed0
    label_4f757b:
        
        if (hMem_2 == 0)
            goto label_4f759c
        
        GlobalUnlock(hMem_2)
        GlobalFree(data_976ed0)
        data_976ed0 = 0
    label_4f759c:
        data_976ed4 = 0
        
        if (esi_19 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    data_976ed4 = hMem_2

data_976ed8 = 0
data_976edc = 0
void* eax_165 = sub_49c260(arg_60)

if (arg_14 != 0)
    eax_165 = sub_42a500(1)

void* eax_166 = sub_4ef7c0(eax_165, arg10, arg9, arg_168, arg_16c, arg_15c, arg13, arg14, arg_188, 
    eax_75, arg_18, arg1, arg2, arg3, arg4, arg5, arg6, arg8, 0, 0, 1)
int32_t esi_20 = data_1bfdd30
arg_68 = esi_20
arg_288 = 0xffffffff
int32_t arg_28c = 0
int32_t arg_2d8 = 0

if (arg_14 != 0)
    uint32_t edx_54 = arg_c
    void* ecx_73 = &data_7037ec
    
    if (arg_c != 0)
        if (*arg_c != 0)
            ecx_73 = &data_7037ec
            
            do
                eax_166.b = *edx_54
                
                if (eax_166.b u< 0x80)
                label_4f76c2:
                    *ecx_73 = eax_166.b
                    ecx_73 += 1
                    edx_54 += 1
                else
                    if (eax_166.b u< 0xa0)
                        if (eax_166.b u>= 0xfe)
                            goto label_4f76c2
                    else if (eax_166.b u<= 0xdf || eax_166.b u>= 0xfe)
                        goto label_4f76c2
                    
                    *ecx_73 = eax_166.b
                    eax_166.b = *(edx_54 + 1)
                    *(ecx_73 + 1) = eax_166.b
                    ecx_73 += 2
                    edx_54 += 2
            while (*edx_54 != 0)
        
        *ecx_73 = 0
    
    eax_166 = arg_2e4
    data_703810 = eax_166

char arg_6c[0xf0]

if (esi_20 s> 0x4d)
    if (esi_20 == 0x422)
        arg_15c = 0x20
    
    if (esi_20 == 0x421)
        arg_15c = data_1b8a720
    else if (esi_20 == 0x4e)
        arg_15c = 0x20
    else if (esi_20 == 0x41f)
        sub_4cfdf0(eax_166, arg_c, &arg_6c, 0x24)
else if (esi_20 == 0x4d)
    arg_15c = data_1b8a720
else if (esi_20 - 0x37 u<= 0x14)
    eax_166 = zx.d(lookup_table_4f79a8[5 + esi_20])
    
    switch (eax_166)
        case nullptr
            sub_4cfdf0(eax_166, arg_c, &arg_6c, 0x24)
        case 1
            arg_15c = data_1b8a720
        case 2
            arg_15c = 0x20
sub_42a6d0(&arg_68)
int32_t edi_20 = 0

if (i_9 s> 0)
    BOOL i_13 = i_9
    void* eax_168 = &arg_3f8
    void arg_1458
    int32_t* esi_22 = &arg_1458
    arg_14 = &arg_3f8
    
    do
        if (arg_340[edi_20] != 0)
            char* edx_56 = *eax_168
            *esi_22 = 0x47
            sub_4cfdf0(eax_168, edx_56, &esi_22[1], 0x24)
            sub_42a6d0(esi_22)
            eax_168 = arg_14
            i_13 = i_9
        
        edi_20 += 1
        eax_168 += 0xc8
        esi_22 = &esi_22[0xb5]
        arg_14 = eax_168
    while (edi_20 s< i_13)

arg_68 = 0x64
int32_t arg_2c8 = 0xff
arg_15c = 1
sub_42a6d0(&arg_68)
void* esi_23 = &arg_3f0
int32_t i_5 = 0x14
int32_t result
int32_t i_2

do
    result = sub_4eef40(esi_23, 0xa)
    esi_23 += 0xc8
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
sub_5f02dd(eax_1 ^ &hMem)
return result
