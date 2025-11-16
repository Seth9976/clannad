// 函数: sub_44128c
// 地址: 0x44128c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
int32_t eax = 0xffffffff
int32_t esi = 0
data_b972f0 = 0
data_b972ec = 0
data_b972e4 = &data_b96ef0
data_b972e0 = 0xb96720
data_b96ef0 = 0
void* result_1 = 1

while (true)
    data_b972e8 = 0xffffffff
    
    while (true)
        int32_t ecx_9 = sx.d(*((esi << 1) + &data_b4f9a0))
        
        if (ecx_9 != 0)
            goto label_4413b0
        
        if (eax s< 0)
            eax = sub_43d525(data_b972f8)
            data_b972e8 = eax
            
            if (eax s< 0)
                eax = 0
                data_b972e8 = 0
        
        int32_t ecx_2 = sx.d(*((esi << 1) + &data_b4fe50))
        
        if (ecx_2 != 0)
            int32_t ecx_3 = ecx_2 + eax
            
            if (ecx_2 + eax s< 0 || ecx_3 s> 0xd88)
                goto label_441374
            
            int32_t ecx_4 = ecx_3 * 2
            
            if (sx.d(*(ecx_4 + &data_b521e0)) != eax)
                goto label_441374
            
            void* eax_1 = data_b972e4
            
            if (eax_1 u< 0xb972d6)
                esi = sx.d(*(ecx_4 + &data_b506c8))
                data_b972e4 = eax_1 + 2
                *(eax_1 + 2) = esi.w
                data_b972e0 += 4
                *data_b972e0 = data_b972d8
                eax = 0xffffffff
                bool cond:4_1 = data_b972ec s<= 0
                data_b972e8 = 0xffffffff
                
                if (cond:4_1)
                    continue
                else
                    data_b972ec -= 1
                    continue
            
            goto label_4420e9
        
    label_441374:
        int32_t ecx_6 = sx.d(*((esi << 1) + &data_b50218))
        void* result
        int32_t eax_17
        
        if (ecx_6 == 0)
        label_44201d:
            
            if (data_b972ec == 0)
                sub_436ffd(data_b972f8, "syntax error")
                data_b972f0 += 1
                eax = data_b972e8
            
            if (data_b972ec s< 3)
                data_b972ec = 3
                void* ecx_20 = data_b972e4
                int32_t eax_19
                
                while (true)
                    eax_19 = sx.d(*((sx.d(*ecx_20) << 1) + &data_b4fe50))
                    
                    if (eax_19 != 0 && eax_19 + 0x100 s>= 0 && eax_19 + 0x100 s<= 0xd88
                            && *(((eax_19 + 0x100) << 1) + &data_b521e0) == 0x100)
                        break
                    
                    if (ecx_20 u<= &data_b96ef0)
                        goto label_4420f0_1
                    
                    ecx_20 -= 2
                    data_b972e0 -= 4
                    data_b972e4 = ecx_20
                
                if (ecx_20 u>= 0xb972d6)
                    goto label_4420e9
                
                esi = sx.d(*(((eax_19 + 0x100) << 1) + &data_b506c8))
                data_b972e4 = ecx_20 + 2
                *(ecx_20 + 2) = esi.w
                eax_17 = data_b972d8
                goto label_4420b9
            
            if (eax != 0)
                break
            
        label_4420f0:
            result = result_1
        else
            int32_t ecx_7 = ecx_6 + eax
            
            if (ecx_6 + eax s< 0 || ecx_7 s> 0xd88)
                goto label_44201d
            
            int32_t ecx_8 = ecx_7 * 2
            
            if (sx.d(*(ecx_8 + &data_b521e0)) != eax)
                goto label_44201d
            
            ecx_9 = sx.d(*(ecx_8 + &data_b506c8))
        label_4413b0:
            int32_t edx_3 = data_b972e0
            int32_t eax_5 = ecx_9 * 2
            int32_t esi_1 = sx.d(*(eax_5 + 0xb4f750))
            ebp_1[-2] = eax_5
            int32_t eax_7 = esi_1 << 2
            ebp_1[-1] = eax_7
            data_b972dc = *(edx_3 - eax_7 + 4)
            
            if (ecx_9 - 1 u<= 0x124)
                void*** result_2
                void* result_3
                
                switch (ecx_9)
                    case 1
                        result_3 = nullptr
                        result_2 = nullptr
                    case 2
                        result_3 = result_1
                        result_2 = result_1
                    case 3
                        result_3 = result_1
                        result_2 = 2
                    case 4
                        result_3 = 2
                        result_2 = 3
                    case 5
                        result_3 = nullptr
                        result_2 = 4
                    case 6
                        result_3 = result_1
                        result_2 = 5
                    case 7
                        result_3 = result_1
                        result_2 = 6
                    case 8
                        result_3 = result_1
                        result_2 = 7
                    case 9
                        result_3 = result_1
                        result_2 = 8
                    case 0xa
                        result_3 = result_1
                        result_2 = 9
                    case 0xb
                        result_3 = result_1
                        result_2 = 0xa
                    case 0xc
                        result_3 = 2
                        result_2 = 0xb
                    case 0xd
                        result_3 = nullptr
                        result_2 = 0xc
                    case 0xe
                        result_3 = nullptr
                        result_2 = 0xd
                    case 0xf
                        result_3 = nullptr
                        result_2 = 0xe
                    case 0x10
                        result_3 = nullptr
                        result_2 = 0xf
                    case 0x11
                        result_3 = nullptr
                        result_2 = 0x10
                    case 0x12
                        result_3 = nullptr
                        result_2 = 0x11
                    case 0x13
                        result_3 = result_1
                        result_2 = 0x12
                    case 0x14
                        result_3 = result_1
                        result_2 = 0x13
                    case 0x15
                        result_3 = result_1
                        result_2 = 0x14
                    case 0x16
                        result_3 = 2
                        result_2 = 0x15
                    case 0x17
                        result_3 = nullptr
                        result_2 = 0x16
                    case 0x18
                        result_3 = nullptr
                        result_2 = 0x17
                    case 0x19
                        result_3 = nullptr
                        result_2 = 0x18
                    case 0x1a
                        result_3 = result_1
                        result_2 = 0x19
                    case 0x1b
                        result_3 = 2
                        result_2 = 0x1a
                    case 0x1c
                        result_3 = result_1
                        result_2 = 0x1d
                    case 0x1d
                        result_3 = 2
                        result_2 = 0x1e
                    case 0x1e
                        result_3 = 2
                        result_2 = 0x1f
                    case 0x1f
                        result_3 = 2
                        result_2 = 0x20
                    case 0x20
                        result_3 = result_1
                        result_2 = 0x21
                    case 0x21
                        result_3 = result_1
                        result_2 = 0x22
                    case 0x22
                        result_3 = 2
                        result_2 = 0x23
                    case 0x23
                        result_3 = result_1
                        result_2 = 0x24
                    case 0x24
                        result_3 = result_1
                        result_2 = 0x25
                    case 0x25
                        result_3 = result_1
                        result_2 = 0x26
                    case 0x26
                        result_3 = result_1
                        result_2 = 0x27
                    case 0x27
                        result_3 = result_1
                        result_2 = 0x28
                    case 0x28
                        result_3 = 2
                        result_2 = 0x29
                    case 0x29
                        result_3 = result_1
                        result_2 = 0x2a
                    case 0x2a
                        result_3 = 2
                        result_2 = 0x2b
                    case 0x2b
                        result_3 = nullptr
                        result_2 = 0x2c
                    case 0x2c
                        result_3 = result_1
                        result_2 = 0x2d
                    case 0x2d
                        result_3 = result_1
                        result_2 = 0x2e
                    case 0x2e
                        result_3 = result_1
                        result_2 = 0x2f
                    case 0x2f
                        result_3 = result_1
                        result_2 = 0x30
                    case 0x30
                        result_3 = nullptr
                        result_2 = 0x31
                    case 0x31
                        result_3 = nullptr
                        result_2 = 0x32
                    case 0x32
                        result_3 = nullptr
                        result_2 = 0x33
                    case 0x33
                        result_3 = nullptr
                        result_2 = 0x34
                    case 0x34
                        result_3 = nullptr
                        result_2 = 0x35
                    case 0x35
                        result_3 = nullptr
                        result_2 = 0x36
                    case 0x36
                        result_3 = 2
                        result_2 = 0x37
                    case 0x37
                        result_3 = nullptr
                        result_2 = 0x38
                    case 0x38
                        result_3 = 3
                        result_2 = 0x39
                    case 0x39
                        result_3 = nullptr
                        result_2 = 0x3a
                    case 0x3a
                        result_3 = nullptr
                        result_2 = 0x3b
                    case 0x3b
                        result_3 = nullptr
                        result_2 = 0x3c
                    case 0x3c
                        result_3 = nullptr
                        result_2 = 0x3d
                    case 0x3d
                        result_3 = nullptr
                        result_2 = 0x3e
                    case 0x3e
                        result_3 = nullptr
                        result_2 = 0x3f
                    case 0x3f
                        result_3 = nullptr
                        result_2 = 0x40
                    case 0x40
                        result_3 = nullptr
                        result_2 = 0x41
                    case 0x41
                        result_3 = nullptr
                        result_2 = 0x42
                    case 0x42
                        result_3 = nullptr
                        result_2 = 0x43
                    case 0x43
                        result_3 = nullptr
                        result_2 = 0x44
                    case 0x44
                        result_3 = nullptr
                        result_2 = 0x45
                    case 0x45
                        result_3 = nullptr
                        result_2 = 0x46
                    case 0x46
                        result_3 = nullptr
                        result_2 = 0x47
                    case 0x47
                        result_3 = nullptr
                        result_2 = 0x48
                    case 0x48
                        result_3 = nullptr
                        result_2 = 0x49
                    case 0x49
                        result_3 = 2
                        result_2 = 0x4a
                    case 0x4a
                        result_3 = 3
                        result_2 = 0x4b
                    case 0x4b
                        result_3 = 3
                        result_2 = 0x4c
                    case 0x4c
                        result_3 = 4
                        result_2 = 0x4d
                    case 0x4d
                        result_3 = result_1
                        result_2 = 0x4e
                    case 0x4e
                        result_3 = 2
                        result_2 = 0x4f
                    case 0x4f
                        result_3 = nullptr
                        result_2 = 0x50
                    case 0x50
                        result_3 = result_1
                        result_2 = 0x51
                    case 0x51
                        result_3 = 2
                        result_2 = 0x52
                    case 0x52
                        result_3 = nullptr
                        result_2 = 0x53
                    case 0x53
                        result_3 = result_1
                        result_2 = 0x54
                    case 0x54
                        result_3 = result_1
                        result_2 = 0x55
                    case 0x55
                        result_3 = result_1
                        result_2 = 0x56
                    case 0x56
                        result_3 = 2
                        result_2 = 0x57
                    case 0x57
                        result_3 = nullptr
                        result_2 = 0x58
                    case 0x58
                        result_3 = result_1
                        result_2 = 0x59
                    case 0x59
                        result_3 = result_1
                        result_2 = 0x5a
                    case 0x5a
                        result_3 = 2
                        result_2 = 0x5b
                    case 0x5b
                        result_3 = 2
                        result_2 = 0x5c
                    case 0x5c
                        result_3 = 3
                        result_2 = 0x5d
                    case 0x5d
                        result_3 = nullptr
                        result_2 = 0x5e
                    case 0x5e
                        result_3 = result_1
                        result_2 = 0x5f
                    case 0x5f
                        result_3 = nullptr
                        result_2 = 0x60
                    case 0x60
                        result_3 = result_1
                        result_2 = 0x61
                    case 0x61
                        result_3 = 2
                        result_2 = 0x62
                    case 0x62
                        result_3 = nullptr
                        result_2 = 0x63
                    case 0x63
                        result_3 = result_1
                        result_2 = 0x64
                    case 0x64
                        result_3 = result_1
                        result_2 = 0x65
                    case 0x65
                        result_3 = result_1
                        result_2 = 0x66
                    case 0x66
                        result_3 = nullptr
                        result_2 = 0x67
                    case 0x67
                        result_3 = result_1
                        result_2 = 0x68
                    case 0x68
                        result_3 = 2
                        result_2 = 0x69
                    case 0x69
                        result_3 = 2
                        result_2 = 0x6a
                    case 0x6a
                        result_3 = result_1
                        result_2 = 0x6b
                    case 0x6b
                        result_3 = 2
                        result_2 = 0x6c
                    case 0x6c
                        result_3 = 4
                        result_2 = 0x6d
                    case 0x6d
                        result_3 = result_1
                        result_2 = 0x6e
                    case 0x6e
                        result_3 = result_1
                        result_2 = 0x6f
                    case 0x6f
                        result_3 = 2
                        result_2 = 0x70
                    case 0x70
                        result_3 = result_1
                        result_2 = 0x71
                    case 0x71
                        result_3 = 3
                        result_2 = 0x72
                    case 0x72
                        result_3 = 4
                        result_2 = 0x73
                    case 0x73
                        result_3 = 2
                        result_2 = 0x74
                    case 0x74
                        result_3 = 2
                        result_2 = 0x75
                    case 0x75
                        result_3 = 3
                        result_2 = 0x76
                    case 0x76
                        result_3 = nullptr
                        result_2 = 0x77
                    case 0x77
                        result_3 = nullptr
                        result_2 = 0x78
                    case 0x78
                        result_3 = result_1
                        result_2 = 0x79
                    case 0x79
                        result_3 = 2
                        result_2 = 0x7a
                    case 0x7a
                        result_3 = 2
                        result_2 = 0x7b
                    case 0x7b
                        result_3 = result_1
                        result_2 = 0x7c
                    case 0x7c
                        result_3 = 2
                        result_2 = 0x7d
                    case 0x7d
                        result_3 = result_1
                        result_2 = 0x80
                    case 0x7e
                        result_3 = 2
                        result_2 = 0x81
                    case 0x7f
                        result_3 = nullptr
                        result_2 = 0x82
                    case 0x80
                        result_3 = nullptr
                        result_2 = 0x83
                    case 0x81
                        result_3 = nullptr
                        result_2 = 0x84
                    case 0x82
                        result_3 = nullptr
                        result_2 = 0x85
                    case 0x83
                        result_3 = result_1
                        result_2 = 0x86
                    case 0x84
                        result_3 = 3
                        result_2 = 0x87
                    case 0x85
                        result_3 = 2
                        result_2 = 0x88
                    case 0x86
                        result_3 = 3
                        result_2 = 0x89
                    case 0x87
                        result_3 = nullptr
                        result_2 = 0x8a
                    case 0x88
                        result_3 = nullptr
                        result_2 = 0x8b
                    case 0x89
                        result_3 = result_1
                        result_2 = 0x8c
                    case 0x8a
                        result_3 = 2
                        result_2 = 0x8d
                    case 0x8b
                        result_3 = 3
                        result_2 = 0x8e
                    case 0x8c
                        result_3 = 2
                        result_2 = 0x8f
                    case 0x8d
                        result_3 = 3
                        result_2 = 0x90
                    case 0x8e
                        result_3 = nullptr
                        result_2 = 0x91
                    case 0x8f
                        result_3 = nullptr
                        result_2 = 0x92
                    case 0x90
                        result_3 = result_1
                        result_2 = 0x93
                    case 0x91
                        result_3 = 2
                        result_2 = 0x94
                    case 0x92
                        result_3 = 5
                        result_2 = 0x95
                    case 0x93
                        result_3 = nullptr
                        result_2 = 0x96
                    case 0x94
                        result_3 = result_1
                        result_2 = 0x97
                    case 0x95
                        result_3 = nullptr
                        result_2 = 0x98
                    case 0x96
                        result_3 = nullptr
                        result_2 = 0x99
                    case 0x97
                        result_3 = 2
                        result_2 = 0x9a
                    case 0x98
                        result_3 = 3
                        result_2 = 0x9b
                    case 0x99
                        result_3 = nullptr
                        result_2 = 0x9c
                    case 0x9a
                        result_3 = nullptr
                        result_2 = 0x9d
                    case 0x9b
                        result_3 = result_1
                        result_2 = 0x9e
                    case 0x9c
                        result_3 = 2
                        result_2 = 0x9f
                    case 0x9d
                        result_3 = nullptr
                        result_2 = 0xa0
                    case 0x9e
                        result_3 = result_1
                        result_2 = 0xa1
                    case 0x9f
                        result_3 = nullptr
                        result_2 = 0xa2
                    case 0xa0
                        result_3 = result_1
                        result_2 = 0xa3
                    case 0xa1
                        result_3 = 2
                        result_2 = 0xa4
                    case 0xa2
                        result_3 = result_1
                        result_2 = 0xa5
                    case 0xa3
                        result_3 = nullptr
                        result_2 = 0xa6
                    case 0xa4
                        result_3 = result_1
                        result_2 = 0xa7
                    case 0xa5
                        result_3 = result_1
                        result_2 = 0xa8
                    case 0xa6
                        result_3 = result_1
                        result_2 = 0xa9
                    case 0xa7
                        result_3 = result_1
                        result_2 = 0xaa
                    case 0xa8
                        result_3 = 2
                        result_2 = 0xab
                    case 0xa9
                        result_3 = 5
                        result_2 = 0xac
                    case 0xaa
                        result_3 = result_1
                        result_2 = 0xad
                    case 0xab
                        result_3 = 2
                        result_2 = 0xae
                    case 0xac
                        result_3 = 5
                        result_2 = 0xaf
                    case 0xad
                        result_3 = 2
                        result_2 = 0xb0
                    case 0xae
                        result_3 = 3
                        result_2 = 0xb1
                    case 0xaf
                        result_3 = nullptr
                        result_2 = 0xb2
                    case 0xb0
                        result_3 = nullptr
                        result_2 = 0xb3
                    case 0xb1
                        result_3 = result_1
                        result_2 = 0xb4
                    case 0xb2
                        result_3 = result_1
                        result_2 = 0xb5
                    case 0xb3
                        result_3 = nullptr
                        result_2 = 0xb6
                    case 0xb4
                        result_3 = result_1
                        result_2 = 0xb7
                    case 0xb5
                        result_3 = nullptr
                        result_2 = 0xb8
                    case 0xb6
                        result_3 = result_1
                        result_2 = 0xb9
                    case 0xb7
                        result_3 = result_1
                        result_2 = 0xba
                    case 0xb8
                        result_3 = 2
                        result_2 = 0xbb
                    case 0xb9
                        result_3 = result_1
                        result_2 = 0xbc
                    case 0xba
                        result_3 = result_1
                        result_2 = 0xbd
                    case 0xbb
                        result_3 = result_1
                        result_2 = 0xbe
                    case 0xbc
                        result_3 = result_1
                        result_2 = 0xbf
                    case 0xbd
                        result_3 = result_1
                        result_2 = 0xc0
                    case 0xbe
                        result_3 = nullptr
                        result_2 = 0xc1
                    case 0xbf
                        result_3 = nullptr
                        result_2 = 0xc2
                    case 0xc0
                        result_3 = result_1
                        result_2 = 0xc3
                    case 0xc1
                        result_3 = result_1
                        result_2 = 0xc4
                    case 0xc2
                        result_3 = result_1
                        result_2 = 0xc5
                    case 0xc3
                        result_3 = result_1
                        result_2 = 0xc6
                    case 0xc4
                        result_3 = result_1
                        result_2 = 0xc7
                    case 0xc5
                        result_3 = 2
                        result_2 = 0xc8
                    case 0xc6
                        result_3 = 2
                        result_2 = 0xc9
                    case 0xc7
                        result_3 = 2
                        result_2 = 0xca
                    case 0xc8
                        result_3 = result_1
                        result_2 = 0xcb
                    case 0xc9
                        result_3 = result_1
                        result_2 = 0xcc
                    case 0xca
                        result_3 = 2
                        result_2 = 0xcd
                    case 0xcb
                        result_3 = result_1
                        result_2 = 0xce
                    case 0xcc
                        result_3 = result_1
                        result_2 = 0xcf
                    case 0xcd
                        result_3 = 3
                        result_2 = 0xd0
                    case 0xce
                        result_3 = result_1
                        result_2 = 0xd1
                    case 0xcf
                        result_3 = 3
                        result_2 = 0xd2
                    case 0xd0
                        result_3 = result_1
                        result_2 = 0xd3
                    case 0xd1
                        result_3 = result_1
                        result_2 = 0xd4
                    case 0xd2
                        result_3 = result_1
                        result_2 = 0xd5
                    case 0xd3
                        result_3 = result_1
                        result_2 = 0xd6
                    case 0xd4
                        result_3 = 2
                        result_2 = 0xd7
                    case 0xd5
                        result_3 = 2
                        result_2 = 0xd8
                    case 0xd6
                        result_3 = result_1
                        result_2 = 0xd9
                    case 0xd7
                        result_3 = result_1
                        result_2 = 0xda
                    case 0xd8
                        result_3 = result_1
                        result_2 = 0xdb
                    case 0xd9
                        result_3 = result_1
                        result_2 = 0xdc
                    case 0xda
                        result_3 = result_1
                        result_2 = 0xdd
                    case 0xdb
                        result_3 = result_1
                        result_2 = 0xde
                    case 0xdc
                        result_3 = result_1
                        result_2 = 0xdf
                    case 0xdd
                        result_3 = result_1
                        result_2 = 0xe0
                    case 0xde
                        result_3 = result_1
                        result_2 = 0xe1
                    case 0xdf
                        result_3 = 2
                        result_2 = 0xe2
                    case 0xe0
                        result_3 = result_1
                        result_2 = 0xe3
                    case 0xe1
                        result_3 = 2
                        result_2 = 0xe4
                    case 0xe2
                        result_3 = 2
                        result_2 = 0xe5
                    case 0xe3
                        result_3 = 2
                        result_2 = 0xe6
                    case 0xe4
                        result_3 = result_1
                        result_2 = 0xe7
                    case 0xe5
                        result_3 = 2
                        result_2 = 0xe8
                    case 0xe6
                        result_3 = 2
                        result_2 = 0xe9
                    case 0xe7
                        result_3 = result_1
                        result_2 = 0xea
                    case 0xe8
                        result_3 = 2
                        result_2 = 0xeb
                    case 0xe9
                        result_3 = 2
                        result_2 = 0xec
                    case 0xea
                        result_3 = 2
                        result_2 = 0xed
                    case 0xeb
                        result_3 = 2
                        result_2 = 0xee
                    case 0xec
                        result_3 = result_1
                        result_2 = 0xef
                    case 0xed
                        result_3 = 2
                        result_2 = 0xf0
                    case 0xee
                        result_3 = 2
                        result_2 = 0xf1
                    case 0xef
                        result_3 = result_1
                        result_2 = 0xf2
                    case 0xf0
                        result_3 = 2
                        result_2 = 0xf3
                    case 0xf1
                        result_3 = result_1
                        result_2 = 0xf4
                    case 0xf2
                        result_3 = 2
                        result_2 = 0xf5
                    case 0xf3
                        result_3 = result_1
                        result_2 = 0xfd
                    case 0xf4
                        result_3 = 3
                        result_2 = 0xfe
                    case 0xf5
                        result_3 = result_1
                        result_2 = 0xf6
                    case 0xf6
                        result_3 = 2
                        result_2 = 0xf7
                    case 0xf7
                        result_3 = 2
                        result_2 = 0xf8
                    case 0xf8
                        result_3 = 2
                        result_2 = 0xf9
                    case 0xf9
                        result_3 = 2
                        result_2 = 0xfa
                    case 0xfa
                        result_3 = 2
                        result_2 = 0xfb
                    case 0xfb
                        result_3 = 2
                        result_2 = 0xfc
                    case 0xfc
                        result_3 = result_1
                        result_2 = 0xff
                    case 0xfd
                        result_3 = 2
                        result_2 = 0x100
                    case 0xfe
                        result_3 = nullptr
                        result_2 = 0x101
                    case 0xff
                        result_3 = result_1
                        result_2 = 0x102
                    case 0x100
                        result_3 = result_1
                        result_2 = 0x103
                    case 0x101
                        result_3 = result_1
                        result_2 = 0x104
                    case 0x102
                        result_3 = result_1
                        result_2 = 0x105
                    case 0x103
                        result_3 = result_1
                        result_2 = 0x106
                    case 0x104
                        result_3 = 2
                        result_2 = 0x107
                    case 0x105
                        result_3 = result_1
                        result_2 = 0x108
                    case 0x106
                        result_3 = result_1
                        result_2 = 0x109
                    case 0x107
                        result_3 = 2
                        result_2 = 0x10a
                    case 0x108
                        result_3 = result_1
                        result_2 = 0x10b
                    case 0x109
                        result_3 = result_1
                        result_2 = 0x10c
                    case 0x10a
                        result_3 = result_1
                        result_2 = 0x10d
                    case 0x10b
                        result_3 = result_1
                        result_2 = 0x10e
                    case 0x10c
                        result_3 = result_1
                        result_2 = 0x10f
                    case 0x10d
                        result_3 = 2
                        result_2 = 0x110
                    case 0x10e
                        result_3 = result_1
                        result_2 = 0x111
                    case 0x10f
                        result_3 = nullptr
                        result_2 = 0x112
                    case 0x110
                        result_3 = nullptr
                        result_2 = 0x113
                    case 0x111
                        result_3 = nullptr
                        result_2 = 0x114
                    case 0x112
                        result_3 = result_1
                        result_2 = 0x115
                    case 0x113
                        result_3 = result_1
                        result_2 = 0x116
                    case 0x114
                        result_3 = nullptr
                        result_2 = 0x117
                    case 0x115
                        result_3 = result_1
                        result_2 = 0x118
                    case 0x116
                        result_3 = result_1
                        result_2 = 0x119
                    case 0x117
                        result_3 = nullptr
                        result_2 = 0x11a
                    case 0x118
                        result_3 = nullptr
                        result_2 = 0x11b
                    case 0x119
                        result_3 = nullptr
                        result_2 = 0x11c
                    case 0x11a
                        result_3 = nullptr
                        result_2 = 0x11d
                    case 0x11b
                        result_3 = nullptr
                        result_2 = 0x11e
                    case 0x11c
                        result_3 = nullptr
                        result_2 = 0x11f
                    case 0x11d
                        result_3 = nullptr
                        result_2 = 0x120
                    case 0x11e
                        result_3 = result_1
                        result_2 = 0x121
                    case 0x11f
                        result_3 = 2
                        result_2 = 0x122
                    case 0x120
                        result_3 = nullptr
                        result_2 = 0x123
                    case 0x121
                        result_3 = nullptr
                        result_2 = 0x124
                    case 0x122
                        result_3 = nullptr
                        result_2 = 0x125
                    case 0x123
                        result_3 = nullptr
                        result_2 = 0x126
                    case 0x124
                        result_3 = nullptr
                        result_2 = 0x127
                    case 0x125
                        result_3 = nullptr
                        result_2 = 0x128
                
                ebp_1, esi_1, result_1 =
                    sub_43ff23(data_b972f8, esi_1, result_1, result_2, result_3)
            
            int32_t ecx_11 = ebp_1[-1]
            int16_t* eax_11 = data_b972e4 + (neg.d(esi_1) << 1)
            data_b972e4 = eax_11
            int32_t edx_5 = sx.d(*eax_11)
            data_b972e0 -= ecx_11
            int32_t ecx_13 = sx.d(*(ebp_1[-2] + 0xb4f500))
            
            if (edx_5 != 0 || ecx_13 != 0)
                int32_t esi_3 = ecx_13 * 2
                int32_t ecx_16 = sx.d(*(esi_3 + 0xb505e0))
                
                if (ecx_16 == 0)
                    esi = sx.d(*(esi_3 + &data_b4fd68))
                else
                    int32_t ecx_17 = ecx_16 + edx_5
                    
                    if (ecx_16 + edx_5 s< 0 || ecx_17 s> 0xd88)
                        esi = sx.d(*(esi_3 + &data_b4fd68))
                    else
                        int32_t ecx_18 = ecx_17 * 2
                        
                        if (sx.d(*(ecx_18 + &data_b521e0)) != edx_5)
                            esi = sx.d(*(esi_3 + &data_b4fd68))
                        else
                            esi = sx.d(*(ecx_18 + &data_b506c8))
                
                if (eax_11 u>= 0xb972d6)
                label_4420e9:
                    sub_436ffd(data_b972f8, "yacc stack overflow")
                label_4420f0_1:
                    result = result_1
                else
                    data_b972e4 = &eax_11[1]
                    eax_11[1] = esi.w
                    eax_17 = data_b972dc
                label_4420b9:
                    data_b972e0 += 4
                    *data_b972e0 = eax_17
                    eax = data_b972e8
                    continue
            else
                data_b972e4 = &eax_11[1]
                esi = 0x28
                eax_11[1] = 0x28
                data_b972e0 += 4
                *data_b972e0 = data_b972dc
                eax = data_b972e8
                bool cond:2_1 = eax != 0
                
                if (eax s< 0)
                    eax = sub_43d525(data_b972f8)
                    cond:2_1 = eax != 0
                    data_b972e8 = eax
                    
                    if (eax s< 0)
                        eax = 0
                        data_b972e8 = 0
                        cond:2_1 = false
                
                if (cond:2_1)
                    continue
                else
                    result = nullptr
        *ebp_1
        return result
    
    eax = 0xffffffff
