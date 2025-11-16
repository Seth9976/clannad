// 函数: sub_629ab0
// 地址: 0x629ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0653
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_104 = edi
*(edi + 0x556a8) = 0
*(edi + 0x4b000) = 0xffffffff
*(edi + 0x4b004) = 0
uint32_t eax_3 = timeGetTime()
void* ecx = data_bac510
void* edx = data_bac508
*(edi + 0x4b030) = eax_3
*(edi + 0x4b034) = 0
*(edi + 0x4b038) = 0
*(edi + 0x4b03c) = 0
*(edi + 0x4a5b8) = 0
eax_3.b = *(edx + 0x95)
*(edi + 0x4a5ba) = eax_3.b
*(edi + 0x4a5bb) = 0
*(edi + 0x4a5bc) = 0xffffffff
*(edi + 0x4a5c0) = *(ecx + 0x7c)
*(edi + 0x4a5c4) = *(ecx + 0x80)
*(edi + 0x4a5c8) = 0
*(edi + 0x4a5cc) = 0
*(edi + 0x4a5d0) = 0
*(edi + 0x4a5d4) = 0
*(edi + 0x4a5d8) = *(ecx + 0x7c)
*(edi + 0x4a5dc) = *(ecx + 0x80)
*(edi + 0x4a5e0) = *(ecx + 0x7c)
*(edi + 0x4a5e4) = *(ecx + 0x80)
*(edi + 0x4a5e8) = *(ecx + 0x7c)
*(edi + 0x4a5ec) = *(ecx + 0x80)
*(edi + 0x4a5f0) = 0
*(edi + 0x4a5f4) = 0
*(edi + 0x4a5f8) = 0
*(edi + 0x4a5fc) = 0
*(edi + 0x4a600) = 0x64
*(edi + 0x4a604) = 0x64
*(edi + 0x4a608) = *(ecx + 0x7c)
*(edi + 0x4a60c) = *(ecx + 0x80)
void* eax_14 = edx + 0x20
*(edi + 0x4a610) = 0
*(edi + 0x4a614) = 0
*(edi + 0x4a618) = 0
*(edi + 0x4a61c) = 0
*(edi + 0x4a620) = 0
__builtin_memset(edi + 0x4a624, 0, 0x2d)
*(edi + 0x4a654) = 0
*(edi + 0x4a658) = 0
*(edi + 0x4a65c) = 0x101
*(edi + 0x4a660) = 2

if (*(edx + 0x1c) == 0)
    eax_14 = ecx + 0x84

if (edi + 0x4a664 != eax_14)
    sub_52e3c0(edi + 0x4a664, eax_14, 0, 0xffffffff)
    edx = data_bac508
    ecx = data_bac510

int32_t eax_15

if (*(edx + 0x38) == 0)
    eax_15 = *(ecx + 0x9c)
else
    eax_15 = *(edx + 0x3c)

*(edi + 0x4a67c) = eax_15
*(edi + 0x4a680) = 0
*(edi + 0x4a684) = 0
*(edi + 0x4a688) = 0
__builtin_memset(edi + 0x4a68c, 0, 0x32)
*(edi + 0x4a6c0) = 0
*(edi + 0x4a6c4) = 0
*(edi + 0x4a6c8) = 0
*(edi + 0x4a6cc) = 0
*(edi + 0x4a6d0) = 0
*(edi + 0x4a6d4) = *(ecx + 0xbb7c)
*(edi + 0x4a6d8) = *(ecx + 0xbb80)
*(edi + 0x4a6dc) = *(ecx + 0xbb84)
*(edi + 0x4a6e0) = *(ecx + 0xbb88)
*(edi + 0x4a6e4) = *(ecx + 0xbb8c)
*(edi + 0x4a6e8) = *(ecx + 0xbb90)
*(edi + 0x4a6ec) = 0
*(edi + 0x4a6f0) = 0
*(edi + 0x4a6f4) = 0xff
*(edi + 0x4a6f8) = 0xff
*(edi + 0x4a6fc) = 0
*(edi + 0x4a700) = 0
*(edi + 0x4a704) = 0xff
*(edi + 0x4a708) = 0xff
__builtin_memset(edi + 0x4a710, 0, 0x20)

if (edi + 0x4a730 != ecx + 0xbba8)
    sub_52e3c0(edi + 0x4a730, ecx + 0xbba8, 0, 0xffffffff)
    ecx = data_bac510

void* eax_22
eax_22.b = *(ecx + 0xbbc4)
*(edi + 0x4a748) = eax_22.b
*(edi + 0x4a74c) = *(ecx + 0xbbc8)
void* eax_24 = edi + 0x4a7e4
*(edi + 0x4a750) = 0x101
*(edi + 0x4a754) = 0
*(edi + 0x4a758) = 0
*(edi + 0x4a75c) = 0
*(edi + 0x4a760) = 0
*(edi + 0x4a764) = 0x7fffffff
*(edi + 0x4a768) = 0x7fffffff
*(edi + 0x4a76c) = 0
*(edi + 0x4a79c) = 0
*(edi + 0x4a7a0) = 0
*(edi + 0x4a7a4) = 0
*(edi + 0x4a7a6) = 0
__builtin_memset(edi + 0x4a7d0, 0, 0x14)
*(edi + 0x4a800) = 0
bool cond:0 = *(eax_24 + 0x14) u< 8
*(eax_24 + 0x10) = 0

if (not(cond:0))
    eax_24 = *eax_24

*eax_24 = 0
*(edi + 0x4a7fc) = 0
sub_62bfd0()
bool result

if (sub_62b090() == 0)
    result = false
else
    int16_t var_44
    int16_t* lpFileName = sub_6299e0(&var_44)
    
    if (*(lpFileName + 0x14) u>= 8)
        lpFileName = *lpFileName
    
    uint32_t eax_25 = GetFileAttributesW(lpFileName)
    uint32_t eax_26
    
    if (eax_25 != 0xffffffff)
        eax_25.b = not.b(eax_25.b)
        eax_26 = zx.d(eax_25.b) u>> 4 & 1
    else
        eax_26 = eax_25
    
    eax_26.b = eax_26 == 1
    bool var_ed = eax_26.b
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
        eax_26.b = var_ed
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    void* var_2c
    int32_t var_18
    
    if (eax_26.b != 0)
        int32_t var_8_1 = 0
        sub_6b4cb0(sub_6299e0(&var_2c))
        int32_t var_8_2 = 0xffffffff
        
        if (var_18 u>= 8)
            j__free(var_2c)
    
    if (sub_62bde0() == 0)
        result = false
    else
        sub_60da20(edi + 0x55660)
        *(edi + 0x4a5b9) = 1
        *(edi + 0x4a5a4) = 0
        *(edi + 0x4a5b0) = 0x101
        *(edi + 0x4a5a8) = 1
        *(edi + 0x4a5ac) = 2
        *(edi + 0x4a5b2) = 0
        *(edi + 0x4a5b4) = 1
        sub_652fa0()
        void* eax_30
        
        if (*(data_bac508 + 0x90) == 0)
            eax_30.b = *(edi + 0x4a5a8) != 0
        else
            eax_30.b = 0
        
        *(edi + 0x4a65c) = eax_30.b
        *(edi + 0x4a65d) = eax_30.b
        *(edi + 0x4a660) = *(edi + 0x4a5ac)
        sub_62c100()
        sub_62c400()
        
        if (sub_684f00(edi + 0x4a580) == 0)
            result = false
        else
            if (SteamAPI_Init(eax_2) != 0)
                goto label_62a11e
            
            var_30_1 = 7
            int16_t* ecx_6 = &var_44
            var_34_1 = 0
            var_44 = 0
            
            if (*(edi + 0x4a5b8) == 0)
                sub_52e720(ecx_6, u"Steam", 0x12)
                int32_t var_8_12 = 2
                sub_684160(data_bac424, 2, &var_44)
                sub_52e8a0(&var_44)
                result = false
            else
                sub_52e720(ecx_6, u"Steam", 0x32)
                int32_t var_8_3 = 1
                sub_684160(data_bac424, 1, &var_44)
                int32_t var_8_4 = 0xffffffff
                sub_52e8a0(&var_44)
            label_62a11e:
                sub_65f400()
                
                if (sub_62cdb0() == 0)
                    result = false
                else
                    sub_688af0(edi + 0x4b07c)
                    void* eax_33 = data_bac510
                    int32_t esi_1 = 0
                    int32_t var_fc_1 = 0
                    void* var_8c
                    int16_t var_74
                    int16_t var_5c
                    int32_t var_48
                    
                    if (*(eax_33 + 0x15b58) s<= 0)
                    label_62a2cb:
                        int32_t esi_3 = 0
                        int32_t var_fc_2 = 0
                        uint32_t numFonts
                        int32_t var_90
                        int32_t var_78
                        
                        if (*(eax_33 + 0x1735c) s<= 0)
                        label_62a487:
                            void* ecx_38 = data_bac454
                            int32_t var_f4_1 = 0xff000000
                            *(ecx_38 + 0x1ae4) = 0xff000000
                            *(ecx_38 + 0x1ae8) = var_f4_1
                            *(ecx_38 + 0x1aec) = 0xff000000
                            *(ecx_38 + 0x1c38) = 0xffffffff
                            *(ecx_38 + 0x1c8c) = 1
                            int16_t* eax_49 = sub_6299b0(&var_8c)
                            int32_t var_8_9 = 0x1b
                            int32_t ecx_39 = data_bac3a0
                            
                            if ((ecx_39.b & 1) == 0)
                                data_bac3a0 = ecx_39 | 1
                                var_8_9.b = 0x1c
                                sub_58fa00()
                                _atexit(j_sub_58fec0)
                                var_8_9.b = 0x1b
                            
                            sub_6ba5d0(&data_bac3a4, eax_49)
                            int32_t var_8_10 = 0xffffffff
                            
                            if (var_78 u>= 8)
                                j__free(var_8c)
                            
                            int32_t var_60_2 = 7
                            int32_t var_64_2 = 0
                            var_74 = 0
                            sub_52e720(&var_74, u"siglus_engine_main_window", 0x19)
                            int32_t var_8_11 = 0x1d
                            void** eax_51 = data_bac510 + 4
                            int16_t* eax_52 =
                                sub_548cb0(eax_51, siglus_engine_main_window_", &var_5c, eax_51)
                            var_8_11.b = 0x1e
                            int16_t* eax_53 = sub_532b80(eax_52, eax_52, &var_44, &data_af4700)
                            var_8_11.b = 0x1f
                            int16_t* eax_54 = sub_5327a0(eax_53, eax_53, &var_2c, data_bac514)
                            var_8_11.b = 0x20
                            numFonts = *(edi + 0x4a5ec)
                            int32_t ecx_46 = *(edi + 0x4a5e8)
                            PWSTR ecx_48 = data_bac510 + 0x1c
                            void* ecx_49 = data_bac454
                            
                            if (ecx_49 + 0x78 != eax_54)
                                sub_52e3c0(ecx_49 + 0x78, eax_54, 0, 0xffffffff)
                            
                            PWSTR lpClassName
                            
                            if (*(ecx_49 + 0x8c) u< 8)
                                lpClassName = ecx_49 + 0x78
                            else
                                lpClassName = *(ecx_49 + 0x78)
                            
                            bool eax_73 = sub_6bfba0(UnregisterClassW(lpClassName, data_4ebe3a8), 
                                0, ecx_49 + 0x78, 0, ~WHITE_BRUSH)
                            
                            if (eax_73 != 0)
                                eax_73 = sub_6bfcd0(ecx_49, &var_74, ecx_49 + 0x78, ecx_48, 
                                    0xffffffff, 0xffffffff, ecx_46, numFonts, 0, 0x2ce0000, 
                                    WS_EX_LEFT, 1, 1, nullptr) != 0
                            
                            var_ed = eax_73 == 0
                            
                            if (var_18 u>= 8)
                                j__free(var_2c)
                            
                            int32_t var_18_3 = 7
                            int32_t var_1c_3 = 0
                            var_2c.w = 0
                            
                            if (var_30_1 u>= 8)
                                j__free(var_44.d)
                            
                            int32_t var_30_3 = 7
                            int32_t var_34_3 = 0
                            var_44 = 0
                            
                            if (var_48 u>= 8)
                                j__free(var_5c.d)
                            
                            int32_t var_8_13 = 0xffffffff
                            int32_t var_48_1 = 7
                            int32_t var_4c_3 = 0
                            var_5c = 0
                            
                            if (var_60_2 u>= 8)
                                j__free(var_74.d)
                            
                            int32_t var_60_3 = 7
                            int32_t var_64_3 = 0
                            var_74 = 0
                            
                            if (var_ed == 0)
                                void var_b4
                                int32_t* eax_74 = sub_6c12d0(data_bac454, &var_b4)
                                int32_t edx_18 = eax_74[3] - eax_74[1]
                                bool cond:11_1 = *(edi + 0x4a5b8) == 0
                                *(edi + 0x4a5f0) = eax_74[2] - *eax_74
                                void* ecx_94 = data_bac454
                                *(edi + 0x4a5f4) = edx_18
                                
                                if (not(cond:11_1))
                                    sub_6a7a00(ecx_94 + 0x1af0)
                                    ecx_94 = data_bac454
                                    HWND hWnd = *(ecx_94 + 4)
                                    
                                    if (hWnd != 0)
                                        SetMenu(hWnd, *(ecx_94 + 0x1af0))
                                        ecx_94 = data_bac454
                                
                                sub_6c1150(ecx_94, *(edi + 0x4a5e8), *(edi + 0x4a5ec))
                                
                                if (sub_62d9d0() == 0)
                                    result = false
                                else if (sub_62f1d0() == 0)
                                    result = false
                                else
                                    sub_62cb30()
                                    sub_6e4050()
                                    void* ecx_96 = data_bac454
                                    HWND hWnd_1 = *(ecx_96 + 4)
                                    
                                    if (hWnd_1 != 0)
                                        UpdateWindow(hWnd_1)
                                        ecx_96 = data_bac454
                                    
                                    sub_6c1a60(ecx_96, 1)
                                    void* eax_75 = data_bac510
                                    numFonts = edi + 0x4b084
                                    sub_630c60(edi + 0x4b084, *(eax_75 + 0xb58c))
                                    int32_t i = 0
                                    
                                    if (*(data_bac510 + 0xb58c) s> 0)
                                        int32_t edi_3 = 0
                                        
                                        do
                                            sub_680ea0(*numFonts + edi_3, i)
                                            i += 1
                                            edi_3 += 0xc
                                        while (i s< *(data_bac510 + 0xb58c))
                                        
                                        edi = var_104
                                    
                                    *(edi + 0x4b00c) = 0
                                    *(edi + 0x4b010) = 0x400
                                    *(edi + 0x4b008) =
                                        HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 0x1000)
                                    sub_6a4cc0(edi + 0x4b068)
                                    sub_650690()
                                    sub_6506e0()
                                    sub_60c850()
                                    *(edi + 0x4a620) = *(edi + 0x4a8c8)
                                    *(edi + 0x4a624) = *(edi + 0x4a8d0)
                                    *(edi + 0x4a628) = *(edi + 0x4a8d8)
                                    HWND ecx_101 = *(data_bac454 + 4)
                                    int32_t eax_87 = *(data_bac510 + 0x10bd8) - 1
                                    int32_t eax_88 = neg.d(eax_87)
                                    int32_t var_118_46 = sbb.d(eax_88, eax_88, eax_87 != 0) + 2
                                    HWND var_11c_4 = ecx_101
                                    sub_6b0090(edi + 0x4b0bc, ecx_101, ecx_101.b, 0)
                                    sub_52e820(&var_2c, u"SceneZH.pck")
                                    int32_t var_8_15 = 0x22
                                    int32_t var_8_16 = 0xffffffff
                                    bool eax_91 = sub_697330(edi + 0x4af9c, &var_2c) == 0
                                    var_ed = eax_91
                                    
                                    if (var_18_3 u>= 8)
                                        j__free(var_2c)
                                        eax_91 = var_ed
                                    
                                    void** ecx_105 = &var_8c
                                    
                                    if (eax_91 == 0)
                                        sub_52e820(ecx_105, 0xaf47e8)
                                        int32_t var_8_18 = 0x24
                                        sub_684160(edi + 0x5569c, 5, &var_8c)
                                        int32_t var_8_19 = 0xffffffff
                                        sub_52e8a0(&var_8c)
                                        sub_5bcd90(edi + 0x556b8)
                                        sub_60d060()
                                        sub_67e390(edi + 0x4b0f8)
                                        sub_67d270(edi + 0x4b1e8)
                                        sub_6a5a60(edi + 0x4b2a0)
                                        sub_630b50(edi + 0x4b2a8, *(*(edi + 0x4afac) + 0x50))
                                        int32_t i_1 = 0
                                        int32_t eax_93
                                        int32_t edx_20
                                        edx_20:eax_93 = muls.dp.d(0x2aaaaaab, 
                                            *(edi + 0x4b2ac) - *(edi + 0x4b2a8))
                                        int32_t edx_21 = edx_20 s>> 1
                                        
                                        if ((edx_21 u>> 0x1f) + edx_21 s> 0)
                                            int32_t edx_22 = 0
                                            int32_t ecx_116 = 0
                                            int32_t var_f8_4 = 0
                                            int32_t var_fc_4 = 0
                                            int32_t edx_24
                                            
                                            do
                                                int32_t eax_97 = *(edi + 0x4aff0)
                                                var_ed = false
                                                sub_630a70(*(edi + 0x4b2a8) + edx_22, 
                                                    *(*(ecx_116 + eax_97 + 4) + 0x80), &var_ed)
                                                var_fc_4 += 0x54
                                                var_f8_4 += 0xc
                                                i_1 += 1
                                                int32_t eax_99
                                                int32_t edx_23
                                                edx_23:eax_99 = muls.dp.d(0x2aaaaaab, 
                                                    *(edi + 0x4b2ac) - *(edi + 0x4b2a8))
                                                ecx_116 = var_fc_4
                                                edx_24 = edx_23 s>> 1
                                                edx_22 = var_f8_4
                                            while (i_1 s< (edx_24 u>> 0x1f) + edx_24)
                                        
                                        sub_69e6e0(edi + 0x4b2b4)
                                        int32_t eax_104 = *(data_bac510 + 0x103f0)
                                        
                                        if (eax_104 s> 0)
                                            sub_630fa0(edi + 0x4b2c8, eax_104)
                                            void* edx_25 = data_bac510
                                            int32_t i_2 = 0
                                            
                                            if (*(edx_25 + 0x103f0) s> 0)
                                                int32_t esi_11 = 0
                                                void* ecx_123 = edi + 0x4b2c8
                                                void* eax_105 = nullptr
                                                void* var_fc_5 = nullptr
                                                
                                                do
                                                    void* eax_107 = eax_105 + 0xbbf0 + edx_25
                                                    int32_t* eax_109 = *ecx_123 + esi_11
                                                    
                                                    if (eax_109 != eax_107)
                                                        sub_52e3c0(eax_109, eax_107, 0, 0xffffffff)
                                                        edx_25 = data_bac510
                                                        ecx_123 = edi + 0x4b2c8
                                                    
                                                    int32_t eax_111 = *(var_fc_5 + edx_25 + 0xbc08)
                                                    
                                                    if (eax_111 == 0)
                                                        *(esi_11 + *ecx_123 + 0x18) = 0
                                                    else if (eax_111 == 1)
                                                        *(esi_11 + *ecx_123 + 0x18) = 1
                                                    else
                                                        int32_t eax_114 = *ecx_123
                                                        
                                                        if (eax_111 == 2)
                                                            *(esi_11 + eax_114 + 0x18) = 0
                                                        else
                                                            *(esi_11 + eax_114 + 0x18) = 1
                                                    
                                                    i_2 += 1
                                                    esi_11 += 0x1c
                                                    eax_105 = var_fc_5 + 0x48
                                                    edi = var_104
                                                    var_fc_5 = eax_105
                                                while (i_2 s< *(edx_25 + 0x103f0))
                                        
                                        sub_680d10(edi + 0x4b2d4)
                                        sub_6a6090(edi + 0x4b2e0)
                                        sub_67dd80(edi + 0x4b3ec)
                                        sub_67dde0(edi + 0x4b3f8)
                                        sub_5fd630(edi + 0x6217c)
                                        *(edi + 0x55650) = zx.o(0)
                                        sub_52e820(&var_2c, 0xaf4808)
                                        int32_t var_8_20 = 0x25
                                        sub_684160(edi + 0x5569c, 5, &var_2c)
                                        int32_t var_8_21 = 0xffffffff
                                        
                                        if (var_18_3 u>= 8)
                                            j__free(var_2c)
                                        
                                        if (sub_652780() == 0)
                                            result = false
                                        else if (sub_653c70() == 0)
                                            result = false
                                        else if (sub_654260() == 0)
                                            result = false
                                        else
                                            void* eax_117 = data_bac508
                                            
                                            if (*(eax_117 + 0x94) != 0)
                                                *(edi + 0x4a8b0) = 1
                                            
                                            if (*(eax_117 + 0x93) != 0)
                                                *(edi + 0x4a8b0) = 0
                                            
                                            sub_616260()
                                            sub_676f90(1)
                                            sub_52e820(&var_44, 0xaf4834)
                                            int32_t var_8_22 = 0x26
                                            sub_684160(data_bac424, 5, &var_44)
                                            int32_t var_8_23 = 0xffffffff
                                            
                                            if (var_30_3 u>= 8)
                                                j__free(var_44.d)
                                            
                                            int32_t var_30_4 = 7
                                            int32_t var_34_4 = 0
                                            var_44 = 0
                                            sub_682100()
                                            sub_6831c0()
                                            sub_6839f0()
                                            sub_683a70()
                                            SetActiveWindow(*(data_bac454 + 4))
                                            sub_52e820(&var_2c, 0xaf4850)
                                            int32_t var_8_24 = 0x27
                                            sub_684160(edi + 0x5569c, 5, &var_2c)
                                            int32_t var_8_25 = 0xffffffff
                                            
                                            if (var_18_3 u>= 8)
                                                j__free(var_2c)
                                            
                                            sub_52e820(&var_2c, 0xaf487c)
                                            int32_t var_8_26 = 0x28
                                            sub_684160(edi + 0x5569c, 5, &var_2c)
                                            int32_t var_8_27 = 0xffffffff
                                            
                                            if (var_18_3 u>= 8)
                                                j__free(var_2c)
                                            
                                            int32_t var_a4
                                            sub_52e820(&var_a4, 0xaf4850)
                                            int32_t var_8_28 = 0x29
                                            sub_684160(edi + 0x5569c, 5, &var_a4)
                                            
                                            if (var_90 u>= 8)
                                                j__free(var_a4)
                                            
                                            *(edi + 0x63104) = 1
                                            result = true
                                    else
                                        sub_52e820(ecx_105, 0xaf47ac)
                                        int32_t var_8_17 = 0x23
                                        sub_684160(edi + 0x5569c, 2, &var_8c)
                                        sub_52e8a0(&var_8c)
                                        result = false
                            else
                                sub_52e820(&var_2c, 0xaf4770)
                                int32_t var_8_14 = 0x21
                                sub_684160(data_bac424, 2, &var_2c)
                                
                                if (var_18_3 u>= 8)
                                    j__free(var_2c)
                                
                                result = false
                        else
                            int32_t edi_1 = 0
                            int32_t var_f8_2 = 0
                            
                            while (true)
                                var_48 = 7
                                var_5c = 0
                                int32_t var_4c_2 = 0
                                sub_52e3c0(&var_5c, eax_33 + 0x15b5c + edi_1, 0, 0xffffffff)
                                int32_t var_8_7 = 0xc
                                
                                if (var_4c_2 != 0)
                                    sub_60eaf0(&var_44, &var_5c)
                                    var_8_7.b = 0xd
                                    void* var_118_27
                                    
                                    if (var_34_1 == 0)
                                        int16_t* eax_70 =
                                            sub_548cb0(&var_5c, 0xaf4660, &var_8c, &var_5c)
                                        var_8_7.b = 0xe
                                        int16_t* eax_71 =
                                            sub_532b80(eax_70, eax_70, &var_2c, &data_af1b40)
                                        var_8_7.b = 0xf
                                        sub_684160(data_bac424, 9, eax_71)
                                        
                                        if (var_18 u>= 8)
                                            j__free(var_2c)
                                        
                                        int32_t var_18_2 = 7
                                        int32_t var_1c_2 = 0
                                        var_2c.w = 0
                                        
                                        if (var_78 u< 8)
                                            goto label_62a8a9
                                        
                                        var_118_27 = var_8c
                                    label_62a89d:
                                        j__free(var_118_27)
                                    label_62a8a9:
                                        
                                        if (var_30_1 u>= 8)
                                            j__free(var_44.d)
                                        
                                        int32_t var_30_2 = 7
                                        int32_t var_34_2 = 0
                                        var_44 = 0
                                        
                                        if (var_48 u>= 8)
                                            j__free(var_5c.d)
                                        
                                        break
                                    
                                    void* var_98 = nullptr
                                    int32_t var_94_1 = 0
                                    var_90 = 0
                                    var_8_7.b = 0x10
                                    void var_d4
                                    
                                    if (sub_6b7be0(&var_44, &var_98) == 0)
                                        void var_ec
                                        void** eax_63 = sub_6b9ed0(&var_ec)
                                        var_8_7.b = 0x11
                                        void** eax_65 =
                                            sub_548cb0(&var_5c, 0xaf4660, &var_2c, &var_5c)
                                        var_8_7.b = 0x12
                                        int16_t* eax_66 =
                                            sub_532b80(eax_65, eax_65, &var_8c, &data_af46b4)
                                        var_8_7.b = 0x13
                                        int16_t* eax_67 =
                                            sub_5327a0(eax_66, eax_66, &var_d4, eax_63)
                                        var_8_7.b = 0x14
                                        sub_684160(data_bac424, 2, eax_67)
                                        sub_52e8a0(&var_d4)
                                        sub_52e8a0(&var_8c)
                                        sub_52e8a0(&var_2c)
                                        sub_52e8a0(&var_ec)
                                    label_62a820:
                                        void* eax_68 = var_98
                                        
                                        if (eax_68 == 0)
                                            goto label_62a8a9
                                        
                                        var_118_27 = eax_68
                                        goto label_62a89d
                                    
                                    void* edi_2 = var_98
                                    void* ecx_31 = edi_2
                                    
                                    if (edi_2 == var_94_1)
                                        ecx_31 = nullptr
                                    
                                    sub_71cda0(ecx_31, var_94_1 - edi_2)
                                    void* ecx_32 = edi_2
                                    
                                    if (edi_2 == var_94_1)
                                        ecx_32 = nullptr
                                    
                                    char* pFileView_1
                                    sub_5b9470(&pFileView_1, sub_71cd20(ecx_32, nullptr))
                                    var_8_7.b = 0x15
                                    char* pFileView = pFileView_1
                                    char* pFileView_2 = pFileView
                                    int32_t var_ac
                                    
                                    if (pFileView == var_ac)
                                        pFileView_2 = nullptr
                                    
                                    void* eax_45 = var_98
                                    void* ecx_34 = eax_45
                                    
                                    if (eax_45 == var_94_1)
                                        ecx_34 = nullptr
                                    
                                    sub_71cd20(ecx_34, pFileView_2)
                                    numFonts = 0
                                    uint32_t cjSize = var_ac - pFileView
                                    
                                    if (pFileView == var_ac)
                                        pFileView = nullptr
                                    
                                    if (AddFontMemResourceEx(pFileView, cjSize, nullptr, &numFonts)
                                            == 0)
                                        int32_t var_18_1 = 7
                                        int32_t var_1c_1 = 0
                                        var_2c.w = 0
                                        sub_52e720(&var_2c, u"AddFontMemResourceEx", 0x14)
                                        var_8_7.b = 0x16
                                        sub_6b9eb0(&var_2c)
                                        var_8_7.b = 0x15
                                        sub_52e8a0(&var_2c)
                                        void** eax_58 = sub_6b9ed0(&var_d4)
                                        var_8_7.b = 0x17
                                        void** eax_60 =
                                            sub_548cb0(&var_5c, 0xaf4660, &var_74, &var_5c)
                                        var_8_7.b = 0x18
                                        int16_t* eax_61 =
                                            sub_532b80(eax_60, eax_60, &var_2c, 0xaf4698)
                                        var_8_7.b = 0x19
                                        int16_t* eax_62 =
                                            sub_5327a0(eax_61, eax_61, &var_8c, eax_58)
                                        var_8_7.b = 0x1a
                                        sub_684160(data_bac424, 2, eax_62)
                                        sub_52e8a0(&var_8c)
                                        sub_52e8a0(&var_2c)
                                        sub_52e8a0(&var_74)
                                        sub_52e8a0(&var_d4)
                                        sub_538150(&pFileView_1)
                                        goto label_62a820
                                    
                                    sub_538150(&pFileView_1)
                                    sub_538150(&var_98)
                                    sub_52e8a0(&var_44)
                                    esi_3 = var_fc_2
                                    edi_1 = var_f8_2
                                
                                int32_t var_8_8 = 0xffffffff
                                
                                if (var_48 u>= 8)
                                    j__free(var_5c.d)
                                
                                eax_33 = data_bac510
                                esi_3 += 1
                                edi_1 += 0x18
                                var_fc_2 = esi_3
                                var_f8_2 = edi_1
                                
                                if (esi_3 s>= *(eax_33 + 0x1735c))
                                    edi = var_104
                                    goto label_62a487
                            
                            result = false
                    else
                        int32_t ecx_10 = 0x14358
                        int32_t var_f8_1 = 0x14358
                        
                        while (true)
                            int32_t var_60_1 = 7
                            int32_t var_64_1 = 0
                            var_74 = 0
                            sub_52e3c0(&var_74, eax_33 + ecx_10, 0, 0xffffffff)
                            int32_t var_8_5 = 3
                            
                            if (var_64_1 != 0)
                                sub_60eaf0(&var_44, &var_74)
                                var_8_5.b = 4
                                
                                if (var_34_1 == 0)
                                    void** eax_56 = sub_548cb0(&var_74, 0xaf4660, &var_2c, &var_74)
                                    var_8_5.b = 5
                                    int16_t* eax_57 =
                                        sub_532b80(eax_56, eax_56, &var_8c, &data_af1b40)
                                    var_8_5.b = 6
                                    sub_684160(data_bac424, 9, eax_57)
                                    sub_52e8a0(&var_8c)
                                    sub_52e8a0(&var_2c)
                                    sub_52e8a0(&var_44)
                                    break
                                
                                int16_t* name = &var_44
                                
                                if (var_30_1 u>= 8)
                                    name = var_44.d
                                
                                int32_t eax_35 = AddFontResourceExW(name, FR_PRIVATE, nullptr)
                                
                                if (eax_35 == 0)
                                    var_48 = 7
                                    int32_t var_4c_1 = eax_35
                                    var_5c = eax_35.w
                                    sub_52e720(&var_5c, u"AddFontResourceEx", 0x11)
                                    var_8_5.b = 7
                                    sub_6b9eb0(&var_5c)
                                    var_8_5.b = 4
                                    sub_52e8a0(&var_5c)
                                    void var_bc
                                    int16_t* eax_36 = sub_6b9ed0(&var_bc)
                                    var_8_5.b = 8
                                    int16_t* eax_38 =
                                        sub_548cb0(&var_74, 0xaf4660, &var_5c, &var_74)
                                    var_8_5.b = 9
                                    int16_t* eax_39 = sub_532b80(eax_38, eax_38, &var_2c, 0xaf4698)
                                    var_8_5.b = 0xa
                                    int16_t* eax_40 = sub_5327a0(eax_39, eax_39, &var_8c, eax_36)
                                    var_8_5.b = 0xb
                                    sub_684160(data_bac424, 2, eax_40)
                                    sub_52e8a0(&var_8c)
                                    sub_52e8a0(&var_2c)
                                    sub_52e8a0(&var_5c)
                                    sub_52e8a0(&var_bc)
                                    esi_1 = var_fc_1
                                
                                sub_52e8a0(&var_44)
                            
                            int32_t var_8_6 = 0xffffffff
                            sub_52e8a0(&var_74)
                            eax_33 = data_bac510
                            esi_1 += 1
                            ecx_10 = var_f8_1 + 0x18
                            var_fc_1 = esi_1
                            var_f8_1 = ecx_10
                            
                            if (esi_1 s>= *(eax_33 + 0x15b58))
                                goto label_62a2cb
                        
                        sub_52e8a0(&var_74)
                        result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
