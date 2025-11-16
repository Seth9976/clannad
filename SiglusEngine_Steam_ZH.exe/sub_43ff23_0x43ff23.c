// 函数: sub_43ff23
// 地址: 0x43ff23
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** esi = nullptr
bool cond:0 = *(arg1 + 0x44) != 0
void*** var_8 = nullptr

if (cond:0)
    return 

void* ecx = arg5

while (true)
    char const* const var_74_1
    void*** var_64
    
    if (ecx u> 0)
        void* eax_1 = *(arg1 + 8)
        ecx -= 1
        
        if (eax_1 == 0)
            var_74_1 = "internal error: stack underflow"
        else
            (&var_64)[ecx] = *(eax_1 + 8)
            *(arg1 + 8) = *(eax_1 + 0xc)
            *(eax_1 + 8) = 0
            *(eax_1 + 0xc) = *(arg1 + 0xc)
            *(arg1 + 0xc) = eax_1
            continue
    else
        int32_t var_84_2
        int32_t var_80_1
        int32_t var_80_5
        int32_t var_80_10
        int32_t var_80_13
        int32_t var_7c_1
        int32_t var_7c_2
        int32_t var_7c_3
        int32_t var_7c_5
        void* var_7c_15
        void* var_7c_19
        int32_t var_78_1
        void*** var_78_4
        int32_t var_78_14
        int32_t* var_78_17
        void*** var_78_21
        int32_t var_78_37
        void*** var_78_42
        void*** var_74_2
        void*** var_74_4
        void*** var_74_16
        char const* const var_74_24
        void*** var_74_54
        void*** var_74_58
        int32_t var_74_81
        int32_t var_74_92
        void*** var_60
        int32_t* var_5c
        int32_t* var_58
        void*** eax
        void*** eax_2
        void*** eax_3
        void*** eax_4
        void*** eax_7
        void*** eax_15
        void*** eax_18
        void*** eax_20
        void*** eax_38
        int80_t st0_1
        
        switch (arg4)
            case nullptr
                eax_2 = sub_42cfa1(0x20)
                
                if (eax_2 != 0)
                    var_74_2 = nullptr
                    var_78_1 = 0
                    var_7c_1 = 0
                    var_80_1 = 0
                label_43ff9a:
                    eax_3 = sub_46b879(eax_2, var_80_1, var_7c_1, var_78_1, var_74_2)
                    goto label_440d73
                
            label_43ffa4:
                esi = nullptr
                sub_437268(arg1, esi)
            case 1
                eax_2 = sub_42cfa1(0x20)
                
                if (eax_2 == 0)
                    goto label_43ffa4
                
                var_74_2 = var_64
                var_78_1 = *(arg1 + 0x58)
                var_7c_1 = *(arg1 + 0x54)
                var_80_1 = *(arg1 + 0x50)
                goto label_43ff9a
            case 2, 5, 6, 7, 8, 9, 0xa, 0x12, 0x14, 0x21, 0x24, 0x25, 0x28, 0x2a, 0x2d, 0x2e, 0x2f, 
                    0x4e, 0x51, 0x56, 0x59, 0x5f, 0x61, 0x64, 0x65, 0x66, 0x68, 0x6b, 0x6e, 0x79, 
                    0x80, 0x86, 0x8c, 0x93, 0x97, 0x9e, 0xa7, 0xa8, 0xa9, 0xaa, 0xad, 0xb5, 0xb7, 
                    0xb9, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc7, 0xd4, 0xd5, 0xd6, 0xdb, 0xe1, 0xe3, 
                    0xe7, 0xea, 0xef, 0xf2, 0xf4, 0xf6, 0xfd, 0x102, 0x104, 0x105, 0x106, 0x108, 
                    0x109, 0x10b, 0x10d, 0x10f, 0x111, 0x118, 0x119, 0x121
                esi = var_64
            case 3, 0x52, 0x62, 0x6c, 0x7a, 0x8d, 0x94, 0x9f, 0x107
                var_74_4 = var_60
            label_43ffd7:
                esi = sub_46b5c3(var_64, var_74_4)
            case 4, 0x2c, 0x4a, 0x58, 0x5c, 0x5e, 0x67, 0x74, 0x75, 0x78, 0x88, 0x8f, 0x96, 0x9a, 
                    0xa0, 0xb3, 0xb6, 0xb8, 0xcc, 0x101, 0x117
                esi = nullptr
            case 0xb, 0x15, 0x81
                esi = var_64
                sub_437606(arg1, esi, var_60)
            case 0xc
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_6 = 0
                var_78_4 = nullptr
                var_7c_2 = 2
            label_44000a:
                eax_3 = sub_46baac(eax_4, var_7c_2, var_78_4, 0)
                goto label_440d73
            case 0xd
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_7 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x40
                goto label_44000a
            case 0xe
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_8 = 0
                var_78_4 = nullptr
                var_7c_2 = 1
                goto label_44000a
            case 0xf
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_9 = 0
                var_78_4 = nullptr
                var_7c_2 = 4
                goto label_44000a
            case 0x10
                void*** eax_5 = sub_42cfa1(0x1c)
                
                if (eax_5 == 0)
                    goto label_43ffa4
                
                int32_t var_74_10 = 0
                int32_t __saved_ebp
                int32_t entry_ebx
                return sub_44005f(eax_5, &__saved_ebp, arg1, arg3, arg2, entry_ebx) __tailcall
            case 0x11
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_11 = 0
                var_78_4 = nullptr
                var_7c_2 = 8
                goto label_44000a
            case 0x13
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_12 = 0
                var_78_4 = var_64
                var_7c_2 = 0
                goto label_44000a
            case 0x16
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_13 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x200
                goto label_44000a
            case 0x17
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_14 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x400
                goto label_44000a
            case 0x18
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_15 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x800
                goto label_44000a
            case 0x19
                eax_7 = sub_42cfa1(0x1c)
                
                if (eax_7 == 0)
                label_4400fb:
                    esi = nullptr
                else
                    var_74_16 = var_64
                    int32_t var_78_5 = 0
                    var_7c_3 = 0
                label_440746:
                    esi = sub_46baac(eax_7, var_7c_3, 0, var_74_16)
                
                sub_437268(arg1, esi)
                sub_43a9da(arg1, esi)
            case 0x1a
                esi = var_64
                esi[6] = var_60
                sub_43a9da(arg1, esi)
            case 0x1d
                esi = var_64
                void** var_24
                sub_46baac(&var_24, 0, 0, esi[2][6])
                sub_43a9da(arg1, &var_24)
            case 0x1e
                int32_t* esi_1 = var_64
                esi_1[6] = var_60[2][6]
                sub_43a9da(arg1, esi_1)
                esi_1[6] = 0
                esi = var_60
            case 0x1f
                eax_3 = sub_43e585(arg1, var_64, var_60)
            label_440d73:
                esi = eax_3
                sub_437268(arg1, esi)
            case 0x20
                void*** esi_2 = var_64
                void*** eax_14 = sub_43e585(arg1, esi_2[2][6], var_60)
                sub_437268(arg1, eax_14)
                esi = sub_46b5c3(esi_2, eax_14)
            case 0x22
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "TypeDefs"
            label_4401a2:
                eax_3 = sub_46b602(eax_15, var_64, nullptr, var_74_24)
                goto label_440d73
            case 0x23
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "TypeDefs"
            label_4409e2:
                eax_3 = sub_46b602(eax_15, var_64, var_60, var_74_24)
                goto label_440d73
            case 0x26
                sub_43be42(arg1, 0, &var_64[4], nullptr, nullptr, *(arg1 + 0x10), 1, &var_8, 
                    nullptr)
                esi = var_8
            case 0x27
                void* ebx_2 = &var_64[4]
                
                if (sub_43be42(arg1, 0, ebx_2, nullptr, nullptr, *(arg1 + 0x10), 1, &var_8, nullptr)
                        != 0)
                    esi = var_8
                else
                    esi = var_8
                    
                    if (esi != 0 && esi[1] != 1)
                        int32_t var_74_25 = *(ebx_2 + 8)
                        sub_43713d(arg1, ebx_2, 0xbbd, "invalid use of '%s'")
            case 0x29
                esi = var_60
                sub_43924a(arg1, var_64, esi)
            case 0x2b
                void*** var_74_27 = var_60
                eax_3 = sub_43e8ac(arg1, var_64)
                goto label_440d73
            case 0x30
                esi = var_64
                void*** var_74_28 = esi
                sub_438747(arg1, *(arg1 + 0x10))
            case 0x31
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_29 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0
            label_4402a8:
                var_84_2 = 0
                goto label_4402ab
            case 0x32
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_30 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 4
                goto label_4402a8
            case 0x33
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_31 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0xa
                goto label_4402a8
            case 0x34
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_32 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0xb
                goto label_4402a8
            case 0x35
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_33 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0xc
                goto label_4402a8
            case 0x36
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_34 = 0
                var_78_14 = 4
                var_7c_5 = 1
                var_80_5 = 0xb
                var_84_2 = 1
            label_4402ab:
                eax_3 = sub_46bbbb(eax_18, var_84_2, var_80_5, var_7c_5, var_78_14, 0)
                goto label_440d73
            case 0x37
                eax_3 = sub_43e77d(arg1, var_64, var_60)
                goto label_440d73
            case 0x38
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_36 = 0
                var_78_14 = 4
                var_7c_5 = 4
                var_80_5 = 0xb
                var_84_2 = 2
                goto label_4402ab
            case 0x39
                eax_3 = sub_43e803(arg1, var_64, var_60, var_5c)
                goto label_440d73
            case 0x3a
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_38 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0xe
                var_84_2 = 3
                goto label_4402ab
            case 0x3b
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_39 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0xf
                var_84_2 = 3
                goto label_4402ab
            case 0x3c
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_40 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x10
                var_84_2 = 3
                goto label_4402ab
            case 0x3d
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_41 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x11
                var_84_2 = 3
                goto label_4402ab
            case 0x3e
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_42 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x12
                var_84_2 = 3
                goto label_4402ab
            case 0x3f
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_43 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x13
                var_84_2 = 3
                goto label_4402ab
            case 0x40
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_44 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x14
                var_84_2 = 3
                goto label_4402ab
            case 0x41
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_45 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x15
                var_84_2 = 3
                goto label_4402ab
            case 0x42
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_46 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x16
                var_84_2 = 3
                goto label_4402ab
            case 0x43
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_47 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x17
                var_84_2 = 3
                goto label_4402ab
            case 0x44
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_48 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x18
                var_84_2 = 3
                goto label_4402ab
            case 0x45
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_49 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x19
                var_84_2 = 3
                goto label_4402ab
            case 0x46
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_50 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x1a
                var_84_2 = 3
                goto label_4402ab
            case 0x47
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_51 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x1b
                var_84_2 = 3
                goto label_4402ab
            case 0x48
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_52 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x1c
                var_84_2 = 3
                goto label_4402ab
            case 0x49
                eax_18 = sub_42cfa1(0x24)
                
                if (eax_18 == 0)
                    goto label_43ffa4
                
                int32_t var_74_53 = 0
                var_78_14 = 1
                var_7c_5 = 1
                var_80_5 = 0x1d
                var_84_2 = 3
                goto label_4402ab
            case 0x4b, 0x5d, 0x76, 0x89, 0x90, 0x9b
                esi = var_60
            case 0x4c
                var_74_54 = var_64
                var_78_17 = nullptr
            label_44051f:
                eax_3 = sub_43e735(arg1, var_78_17, var_74_54)
                goto label_440d73
            case 0x4d
                var_74_54 = var_64
                var_78_17 = var_5c
                goto label_44051f
            case 0x4f
                void*** eax_19 = var_64
                sub_43924a(arg1, eax_19, eax_19[2][6])
                esi = var_60
            case 0x50
                esi = nullptr
                sub_43729d(arg1, 1, 0)
            case 0x53, 0x63, 0x8b, 0x9d
                esi = nullptr
                sub_43877f(arg1)
            case 0x54, 0x55
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "Semantics"
                goto label_4401a2
            case 0x57
                eax_3 = sub_46b5c3(var_64, var_60)
                goto label_440d73
            case 0x5a
                eax_20 = sub_42cfa1(0x18)
                
                if (eax_20 == 0)
                    goto label_43ffa4
                
                var_74_58 = var_64
                var_78_21 = nullptr
            label_4405a4:
                eax_3 = sub_46c26c(eax_20, var_78_21, var_74_58)
                goto label_440d73
            case 0x5b
                eax_20 = sub_42cfa1(0x18)
                
                if (eax_20 == 0)
                    goto label_43ffa4
                
                var_74_58 = var_60
                var_78_21 = var_64
                goto label_4405a4
            case 0x60
                esi = nullptr
                sub_43729d(arg1, 5, 0)
            case 0x69, 0x7b
                esi = var_60
                sub_437551(arg1)
            case 0x6a
                esi = sub_46b5c3(var_64, var_60)
                sub_437551(arg1)
            case 0x6d
                eax_3 = sub_43f01c(arg1, var_64, var_60, var_5c, var_58)
                goto label_440d73
            case 0x6f
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "VariableDim"
                goto label_4401a2
            case 0x70
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "VariableDim"
                goto label_4409e2
            case 0x71
                esi = var_64
                sub_43877f(arg1)
                *(arg1 + 0x18) = 0
            case 0x72
                void*** eax_22 = var_64
                
                if (eax_22 != 0)
                    void* esi_3 = eax_22[2]
                    
                    if (esi_3 != 0)
                        void* eax_23 = *(esi_3 + 0x18)
                        *(esi_3 + 0x1c) = var_60
                        *(eax_23 + 0x28) = var_5c
                        *(eax_23 + 0x3c) = 1
                        void* i = *(arg1 + 0x10)
                        void* ebx_4 = *(esi_3 + 0x14) + 0x10
                        
                        for (; i != 0; i = *(i + 0x20))
                            void*** eax_24 = sub_437434(ebx_4, i)
                            arg4 = eax_24
                            
                            if (eax_24 != 0)
                                while (true)
                                    void* ecx_36 = eax_24[2]
                                    
                                    if (ecx_36 != 0 && *(ecx_36 + 4) == 6
                                            && *(ecx_36 + 0x24) == *(esi_3 + 0x24))
                                        if (*(eax_24[2][6] + 0x3c) != 0)
                                            int32_t var_74_62 = *(ebx_4 + 8)
                                            sub_43713d(arg1, ebx_4, 0xbfd, 
                                                "'%s' already has a body")
                                            eax_24 = arg4
                                        
                                        *(eax_24[2][6] + 0x3c) = 1
                                        break
                                    
                                    eax_24 = eax_24[3]
                                    arg4 = eax_24
                                    
                                    if (eax_24 == 0)
                                        goto label_4406af
                                
                                break
                            
                        label_4406af:
                
                esi = var_64
                sub_43877f(arg1)
                *(arg1 + 0x18) = 0
            case 0x73
                int32_t* var_74_63 = var_58
                esi = sub_43e080(arg1, var_60, var_5c)
                sub_437268(arg1, esi)
                sub_437551(arg1)
            case 0x77
                esi = nullptr
                sub_43729d(arg1, 2, *(arg1 + 0x1c))
            case 0x7c
                eax_7 = sub_42cfa1(0x1c)
                
                if (eax_7 == 0)
                    goto label_4400fb
                
                var_74_16 = var_64
                int32_t var_78_26 = 0
                var_7c_3 = 0x10
                goto label_440746
            case 0x7d
                esi = var_64
                esi[6] = var_60
                
                if ((esi[4].b & 0x70) == 0)
                    esi[4] |= 0x10
                
                sub_43a9da(arg1, esi)
            case 0x82
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_65 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x10
                goto label_44000a
            case 0x83
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_66 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x20
                goto label_44000a
            case 0x84
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_67 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x30
                goto label_44000a
            case 0x85
                eax_4 = sub_42cfa1(0x1c)
                
                if (eax_4 == 0)
                    goto label_43ffa4
                
                int32_t var_74_68 = 0
                var_78_4 = nullptr
                var_7c_2 = 0x50
                goto label_44000a
            case 0x87
                void*** eax_31 = sub_42cfa1(0x14)
                
                if (eax_31 == 0)
                    esi = nullptr
                else
                    esi = sub_46b602(eax_31, 0, 0, "Stmts")
                
                if (sub_437268(arg1, esi) != 0)
                    void*** eax_33 = sub_42cfa1(0x30)
                    void*** eax_34
                    
                    if (eax_33 == 0)
                        eax_34 = nullptr
                    else
                        eax_34 = sub_46b9d6(eax_33, 3, var_64, var_5c, var_60)
                    
                    esi[2] = eax_34
                    sub_437268(arg1, eax_34)
                
                *(arg1 + 0x50) += 1
            case 0x8a
                sub_43729d(arg1, 6, 0)
                esi = nullptr
            case 0x8e
                void*** eax_35 = sub_42cfa1(0x14)
                
                if (eax_35 == 0)
                    esi = nullptr
                else
                    esi = sub_46b602(eax_35, 0, 0, "Passes")
                
                if (sub_437268(arg1, esi) != 0)
                    void*** eax_37 = sub_42cfa1(0x30)
                    
                    if (eax_37 == 0)
                    label_4408ee:
                        eax_38 = nullptr
                        goto label_4408f0
                    
                    eax_38 = sub_46b9d6(eax_37, 4, var_64, var_5c, var_60)
                label_4408f0:
                    esi[2] = eax_38
                    sub_437268(arg1, eax_38)
            case 0x91
                sub_43729d(arg1, 7, 0)
                *(arg1 + 0x48) = 0
                esi = nullptr
            case 0x92
                *(arg1 + 0x48) = 1
                esi = nullptr
                sub_43877f(arg1)
            case 0x95
                void*** eax_39 = sub_42cfa1(0x14)
                
                if (eax_39 == 0)
                    esi = nullptr
                else
                    esi = sub_46b602(eax_39, 0, 0, "States")
                
                if (sub_437268(arg1, esi) != 0)
                    void*** eax_41 = sub_42cfa1(0x1c)
                    
                    if (eax_41 == 0)
                        goto label_4408ee
                    
                    eax_38 = sub_46c145(eax_41, var_64, var_60, var_58)
                    goto label_4408f0
            case 0x98
                *(arg1 + 0x48) = 1
            case 0x99
                *(arg1 + 0x48) = 0
            case 0x9c
                esi = nullptr
                sub_43729d(arg1, 3, 0)
            case 0xa1, 0xb4
                esi = sub_438224(var_64)
            case 0xa2
                esi = sub_43ef68(arg1, nullptr)
            case 0xa3
                esi = sub_43ef68(arg1, var_64)
            case 0xa4
                int32_t var_78_30 = 0
                esi = sub_438309(arg1, var_64, var_60, nullptr, var_64)
            case 0xa5
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "Stmts"
                goto label_4401a2
            case 0xa6
                esi = sub_438286(arg1)
            case 0xab, 0xae
                int32_t var_78_31 = 0
                esi = sub_438309(arg1, nullptr, var_64, nullptr, var_60)
            case 0xac, 0xaf
                int32_t* var_54
                esi = sub_438309(arg1, var_60, var_5c, var_58, var_54)
                sub_43877f(arg1)
            case 0xb0
                st0_1, eax = sub_43d3fc(arg1, var_64, var_60, nullptr)
                esi = eax
            case 0xb1
                st0_1, eax = sub_43d3fc(arg1, var_64, var_60, var_5c)
                esi = eax
            case 0xb2
                esi = nullptr
                sub_43729d(arg1, 4, 0)
            case 0xba
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "DwordExpr"
                goto label_4401a2
            case 0xbb
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "DwordExpr"
                goto label_4409e2
            case 0xc1
                var_74_81 = arg1 + 0x20
                void* var_78_34 = ecx
                var_7c_15 = ecx
                var_7c_15.q = fconvert.d(float.t(1))
                var_80_10 = 1
            label_4409fa:
                eax_3 = sub_439b14(0, var_80_10, var_7c_15, var_74_81)
                goto label_440d73
            case 0xc2
                var_74_81 = arg1 + 0x20
                void* var_78_35 = ecx
                var_7c_15 = ecx
                var_7c_15.q = fconvert.d(float.t(0))
                var_80_10 = 0
                goto label_4409fa
            case 0xc3, 0xc4
                int80_t st0_2
                st0_2, eax_3 = sub_439c2c(arg1, var_64)
                goto label_440d73
            case 0xc5
                eax_3 = sub_439cb0(var_64)
                goto label_440d73
            case 0xc6
                eax_3 = sub_43c4ff(arg1, var_64, nullptr)
                goto label_440d73
            case 0xc8, 0xc9
                int32_t var_74_84 = 1
                var_78_37 = 1
            label_440a4c:
                eax_3 = sub_43c606(arg1, var_64, var_60, var_78_37, 1)
                goto label_440d73
            case 0xca
                eax_3 = sub_43f941(arg1, var_64, var_60, 0)
                goto label_440d73
            case 0xcb
                esi = sub_437e5a(arg1, var_64)
            case 0xcd
                esi = sub_43a30f(var_60)
            case 0xce, 0xcf
                esi = sub_43a30f(var_64)
            case 0xd0
                esi = sub_43fd59(arg1, var_64, var_60, var_5c, 0)
            case 0xd1
                eax_3 = sub_43a449(arg1, var_64)
                goto label_440d73
            case 0xd2
                esi = sub_43fd59(arg1, var_64, var_60, var_5c, 1)
            case 0xd3
                eax_3 = sub_43a523(arg1, var_64)
                goto label_440d73
            case 0xd7
                eax_3 = sub_43e925(arg1, var_64, var_60)
                goto label_440d73
            case 0xd8
                eax_3 = sub_439e7e(arg1, var_64, var_60)
                goto label_440d73
            case 0xd9
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 0x21
            label_440af2:
                eax_3 = sub_43eb4f(arg1, var_80_13, var_7c_19, var_78_42, var_74_92)
                goto label_440d73
            case 0xda
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 0x22
                goto label_440af2
            case 0xdc
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 2
                goto label_440af2
            case 0xdd
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 3
                goto label_440af2
            case 0xde
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 4
                goto label_440af2
            case 0xdf
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 5
                goto label_440af2
            case 0xe0
                var_74_92 = 1
                var_78_42 = nullptr
                var_7c_19 = var_64
                var_80_13 = 6
                goto label_440af2
            case 0xe2
                int32_t var_74_93 = 1
                var_78_37 = 0
                goto label_440a4c
            case 0xe4
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 7
                goto label_440af2
            case 0xe5
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 8
                goto label_440af2
            case 0xe6
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 9
                goto label_440af2
            case 0xe8
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0xa
                goto label_440af2
            case 0xe9
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0xb
                goto label_440af2
            case 0xeb
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0xc
                goto label_440af2
            case 0xec
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0xd
                goto label_440af2
            case 0xed
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0xe
                goto label_440af2
            case 0xee
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0xf
                goto label_440af2
            case 0xf0
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x10
                goto label_440af2
            case 0xf1
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x11
                goto label_440af2
            case 0xf3
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x12
                goto label_440af2
            case 0xf5
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x13
                goto label_440af2
            case 0xf7
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x15
                goto label_440af2
            case 0xf8
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x1c
                goto label_440af2
            case 0xf9
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x1d
                goto label_440af2
            case 0xfa
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x1e
                goto label_440af2
            case 0xfb
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x1f
                goto label_440af2
            case 0xfc
                var_74_92 = 1
                var_78_42 = var_60
                var_7c_19 = var_64
                var_80_13 = 0x20
                goto label_440af2
            case 0xfe
                eax_3 = sub_43c82f(arg1, var_64, var_60, var_5c)
                goto label_440d73
            case 0xff
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "Arguments"
                goto label_4401a2
            case 0x100
                void*** eax_45 = sub_42cfa1(0x14)
                
                if (eax_45 == 0)
                    esi = nullptr
                else
                    esi = sub_46b602(eax_45, var_60, 0, "Arguments")
                
                if (sub_437268(arg1, esi) != 0)
                    var_74_4 = esi
                    goto label_43ffd7
            case 0x103
                eax_15 = sub_42cfa1(0x14)
                
                if (eax_15 == 0)
                    goto label_43ffa4
                
                var_74_24 = "Value"
                goto label_4401a2
            case 0x10a
                void* eax_47 = *(arg1 + 0x10)
                
                if (eax_47 != 0 && *(eax_47 + 0x10) == 7)
                    void*** eax_48 = var_60
                    
                    if (var_60 == 0)
                        eax_48 = var_64
                    
                    sub_4371a3(arg1, &eax_48[0xc], 0xc09, 
                        "comma expression used where an initializer list may have been intended")
                
                var_74_92 = 0
                var_78_42 = var_64
                var_7c_19 = var_60
                var_80_13 = 1
                goto label_440af2
            case 0x10c
                esi = var_64
                esi[6] = neg.d(esi[6])
            case 0x10e
                esi = var_64
                *(esi + 0x18) = fconvert.d(fneg(fconvert.t(*(esi + 0x18))))
            case 0x110
                esi = sub_438578(arg1, var_64, var_60)
            case 0x112, 0x113, 0x114, 0x11a, 0x11b, 0x11c, 0x11d, 0x11e, 0x11f, 0x120, 0x123, 
                    0x124, 0x125
                void*** eax_50 = sub_42cfa1(0x30)
                
                if (eax_50 == 0)
                    goto label_43ffa4
                
                eax_3 = sub_46b809(eax_50, arg1 + 0x20)
                goto label_440d73
            case 0x115, 0x116
                esi = var_64
                *(arg1 + 0x1c) = esi[6]
            case 0x122
                esi = sub_438677(arg1, var_64, var_60)
            case 0x126
                esi = sub_438424(arg1)
            case 0x127
                esi = sub_43843f(arg1, 0)
            case 0x128
                esi = sub_43843f(arg1, 1)
            default
                sub_437200(arg1, nullptr, 0, "internal error: unhandled production")
        
        if (*(arg1 + 0x44) != 0)
            break
        
        eax = *(arg1 + 0xc)
        
        if (eax != 0)
            *(arg1 + 0xc) = eax[3]
            eax[2] = esi
            eax[3] = *(arg1 + 8)
            *(arg1 + 8) = eax
            break
        
        void*** eax_51 = sub_42cfa1(0x14)
        
        if (eax_51 == 0)
            eax = nullptr
        else
            eax = sub_46b602(eax_51, esi, *(arg1 + 8), "Stack")
        
        if (eax != 0)
            *(arg1 + 8) = eax
            break
        
        var_74_1 = "internal error: out of memory"
    sub_437200(arg1, nullptr, 0, var_74_1)
    break
