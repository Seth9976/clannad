// 函数: sub_6a96e0
// 地址: 0x6a96e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca5b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x2070)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result

if (arg2 u> 0x514)
    if (arg2 u> 0x7d1)
        if (arg2 u> 0xbb9)
            if (arg2 - 0xbbb u> 0xc9)
                goto label_6aaaa3
            
            switch (arg2)
                case 0xbbb
                    char eax_71 = sub_6c7fa0(ecx + 0x40, 0xbbb)
                    void* ecx_204 = data_bac4d0
                    
                    if (eax_71 == 0)
                        result = (*(*(ecx_204 + 0x1e488) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_204 + 0x1e488)
                case 0xbbc
                    char eax_73 = sub_6c7fa0(ecx + 0x40, 0xbbc)
                    void* ecx_208 = data_bac4d0
                    
                    if (eax_73 == 0)
                        result = (*(*(ecx_208 + 0x21384) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_208 + 0x21384)
                case 0xbbd
                    char eax_75 = sub_6c7fa0(ecx + 0x40, 0xbbd)
                    void* ecx_212 = data_bac4d0
                    
                    if (eax_75 == 0)
                        result = (*(*(ecx_212 + 0x33e7c) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_212 + 0x33e7c)
                case 0xbbe
                    char eax_77 = sub_6c7fa0(ecx + 0x40, 0xbbe)
                    void* ecx_216 = data_bac4d0
                    
                    if (eax_77 == 0)
                        result = (*(*(ecx_216 + 0x1e814) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_216 + 0x1e814)
                case 0xbbf
                    char eax_79 = sub_6c7fa0(ecx + 0x40, 0xbbf)
                    void* ecx_220 = data_bac4d0
                    
                    if (eax_79 == 0)
                        result = (*(*(ecx_220 + 0x1ec60) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_220 + 0x1ec60)
                case 0xbc0, 0xbc8, 0xbc9, 0xbd1, 0xbd6, 0xbd7, 0xbd8, 0xbd9, 0xbda, 0xbdb, 0xbdc, 
                        0xbdd, 0xbde, 0xbdf, 0xbe0, 0xbe1, 0xbe2, 0xbe3, 0xbe4, 0xbe5, 0xbe6, 
                        0xbe7, 0xbe8, 0xbe9, 0xbea, 0xbeb, 0xbec, 0xbed, 0xbee, 0xbef, 0xbf0, 
                        0xbf1, 0xbf2, 0xbf3, 0xbf4, 0xbf5, 0xbf6, 0xbf7, 0xbf8, 0xbf9, 0xbfa, 
                        0xbfb, 0xbfc, 0xbfd, 0xbfe, 0xbff, 0xc00, 0xc01, 0xc02, 0xc03, 0xc04, 
                        0xc05, 0xc06, 0xc07, 0xc08, 0xc09, 0xc0a, 0xc0b, 0xc0c, 0xc0d, 0xc0e, 
                        0xc0f, 0xc10, 0xc11, 0xc12, 0xc13, 0xc14, 0xc15, 0xc16, 0xc17, 0xc18, 
                        0xc19, 0xc1a, 0xc1b, 0xc1e, 0xc1f, 0xc20, 0xc21, 0xc22, 0xc23, 0xc24, 
                        0xc25, 0xc26, 0xc27, 0xc28, 0xc29, 0xc2a, 0xc2b, 0xc2c, 0xc2d, 0xc2e, 
                        0xc2f, 0xc30, 0xc31, 0xc32, 0xc33, 0xc34, 0xc35, 0xc36, 0xc37, 0xc38, 
                        0xc39, 0xc3a, 0xc3b, 0xc3c, 0xc3d, 0xc3e, 0xc3f, 0xc40, 0xc41, 0xc42, 
                        0xc43, 0xc44, 0xc45, 0xc46, 0xc47, 0xc48, 0xc49, 0xc4a, 0xc4b, 0xc4c, 
                        0xc4d, 0xc4e, 0xc4f, 0xc50, 0xc51, 0xc52, 0xc53, 0xc54, 0xc55, 0xc56, 
                        0xc57, 0xc58, 0xc59, 0xc5a, 0xc5b, 0xc5c, 0xc5d, 0xc5e, 0xc5f, 0xc60, 
                        0xc61, 0xc62, 0xc63, 0xc64, 0xc65, 0xc66, 0xc67, 0xc68, 0xc69, 0xc6a, 
                        0xc6b, 0xc6c, 0xc6d, 0xc6e, 0xc6f, 0xc70, 0xc71, 0xc72, 0xc73, 0xc74, 
                        0xc75, 0xc76, 0xc77, 0xc78, 0xc79, 0xc7a, 0xc7b, 0xc7c, 0xc7d, 0xc7e, 
                        0xc7f, 0xc80
                    goto label_6aaaa3
                case 0xbc1
                    char eax_69 = sub_6c7fa0(ecx + 0x40, 0xbc1)
                    void* ecx_200 = data_bac4d0
                    
                    if (eax_69 == 0)
                        result = (*(*(ecx_200 + 0x1f928) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_200 + 0x1f928)
                case 0xbc2
                    char eax_81 = sub_6c7fa0(ecx + 0x40, 0xbc2)
                    void* ecx_224 = data_bac4d0
                    
                    if (eax_81 == 0)
                        result = (*(*(ecx_224 + 0x206e8) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_224 + 0x206e8)
                case 0xbc3
                    char eax_83 = sub_6c7fa0(ecx + 0x40, 0xbc3)
                    void* ecx_228 = data_bac4d0
                    
                    if (eax_83 == 0)
                        result = (*(*(ecx_228 + 0x217a4) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_228 + 0x217a4)
                case 0xbc4
                    char eax_89 = sub_6c7fa0(ecx + 0x40, 0xbc4)
                    void* ecx_240 = data_bac4d0
                    
                    if (eax_89 == 0)
                        result = (*(*(ecx_240 + 0x21bb8) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_240 + 0x21bb8)
                case 0xbc5
                    char eax_85 = sub_6c7fa0(ecx + 0x40, 0xbc5)
                    void* ecx_232 = data_bac4d0
                    
                    if (eax_85 == 0)
                        result = (*(*(ecx_232 + 0x224d0) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_232 + 0x224d0)
                case 0xbc6
                    char eax_87 = sub_6c7fa0(ecx + 0x40, 0xbc6)
                    void* ecx_236 = data_bac4d0
                    
                    if (eax_87 == 0)
                        result = (*(*(ecx_236 + 0x22c84) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_236 + 0x22c84)
                case 0xbc7
                    char eax_91 = sub_6c7fa0(ecx + 0x40, 0xbc7)
                    void* ecx_244 = data_bac4d0
                    
                    if (eax_91 == 0)
                        result = (*(*(ecx_244 + 0x230a4) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_244 + 0x230a4)
                case 0xbca
                    char eax_93 = sub_6c7fa0(ecx + 0x40, 0xbca)
                    void* ecx_248 = data_bac4d0
                    
                    if (eax_93 == 0)
                        result = (*(*(ecx_248 + 0x2ef98) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_248 + 0x2ef98)
                case 0xbcb
                    char eax_95 = sub_6c7fa0(ecx + 0x40, 0xbcb)
                    void* ecx_252 = data_bac4d0
                    
                    if (eax_95 == 0)
                        result = (*(*(ecx_252 + 0x2f3b8) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_252 + 0x2f3b8)
                case 0xbcc
                    char eax_97 = sub_6c7fa0(ecx + 0x40, 0xbcc)
                    void* ecx_256 = data_bac4d0
                    
                    if (eax_97 == 0)
                        result = (*(*(ecx_256 + 0x2f7d8) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_256 + 0x2f7d8)
                case 0xbcd
                    char eax_99 = sub_6c7fa0(ecx + 0x40, 0xbcd)
                    void* ecx_260 = data_bac4d0
                    
                    if (eax_99 == 0)
                        result = (*(*(ecx_260 + 0x2ffac) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_260 + 0x2ffac)
                case 0xbce
                    char eax_101 = sub_6c7fa0(ecx + 0x40, 0xbce)
                    void* ecx_264 = data_bac4d0
                    
                    if (eax_101 == 0)
                        result = (*(*(ecx_264 + 0x303c0) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_264 + 0x303c0)
                case 0xbcf
                    char eax_103 = sub_6c7fa0(ecx + 0x40, 0xbcf)
                    void* ecx_268 = data_bac4d0
                    
                    if (eax_103 == 0)
                        result = (*(*(ecx_268 + 0x307ec) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_268 + 0x307ec)
                case 0xbd0
                    char eax_105 = sub_6c7fa0(ecx + 0x40, 0xbd0)
                    void* ecx_272 = data_bac4d0
                    
                    if (eax_105 == 0)
                        result = (*(*(ecx_272 + 0x30c00) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_272 + 0x30c00)
                case 0xbd2
                    char eax_107 = sub_6c7fa0(ecx + 0x40, 0xbd2)
                    void* ecx_276 = data_bac4d0
                    
                    if (eax_107 == 0)
                        result = (*(*(ecx_276 + 0x328a4) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_276 + 0x328a4)
                case 0xbd3
                    char eax_109 = sub_6c7fa0(ecx + 0x40, 0xbd3)
                    void* ecx_280 = data_bac4d0
                    
                    if (eax_109 == 0)
                        result = (*(*(ecx_280 + 0x33078) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_280 + 0x33078)
                case 0xbd4
                    char eax_111 = sub_6c7fa0(ecx + 0x40, 0xbd4)
                    void* ecx_284 = data_bac4d0
                    
                    if (eax_111 == 0)
                        result = (*(*(ecx_284 + 0x33498) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_284 + 0x33498)
                case 0xbd5
                    char eax_113 = sub_6c7fa0(ecx + 0x40, 0xbd5)
                    void* ecx_288 = data_bac4d0
                    
                    if (eax_113 == 0)
                        result = (*(*(ecx_288 + 0x338b8) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_288 + 0x338b8)
                case 0xc1c
                    char eax_115 = sub_6c7fa0(ecx + 0x48, 0xc1c)
                    void* ecx_292 = data_bac4d0
                    
                    if (eax_115 == 0)
                        result = (*(*(ecx_292 + 0x1f0e0) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_292 + 0x1f0e0)
                case 0xc1d
                    char eax_117 = sub_6c7fa0(ecx + 0x48, 0xc1d)
                    void* ecx_296 = data_bac4d0
                    
                    if (eax_117 == 0)
                        result = (*(*(ecx_296 + 0x1f504) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_296 + 0x1f504)
                case 0xc81
                    char eax_119 = sub_6c7fa0(ecx + 0x50, 0xc81)
                    void* ecx_300 = data_bac4d0
                    
                    if (eax_119 == 0)
                        result = (*(*(ecx_300 + 0x1fd90) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_300 + 0x1fd90)
                case 0xc82
                    char eax_121 = sub_6c7fa0(ecx + 0x50, 0xc82)
                    void* ecx_304 = data_bac4d0
                    
                    if (eax_121 == 0)
                        result = (*(*(ecx_304 + 0x20270) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_304 + 0x20270)
                case 0xc83
                    char eax_123 = sub_6c7fa0(ecx + 0x50, 0xc83)
                    void* ecx_308 = data_bac4d0
                    
                    if (eax_123 == 0)
                        result = (*(*(ecx_308 + 0x20b44) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_308 + 0x20b44)
                case 0xc84
                    char eax_125 = sub_6c7fa0(ecx + 0x50, 0xc84)
                    void* ecx_312 = data_bac4d0
                    
                    if (eax_125 == 0)
                        result = (*(*(ecx_312 + 0x20f64) + 0x10))(data_4ebe3ac)
                    else
                        result = sub_6bfea0(ecx_312 + 0x20f64)
        else if (arg2 == 0xbb9)
            char eax_65 = sub_6c7fa0(ecx + 0x40, 0xbb9)
            void* ecx_196 = data_bac4d0
            
            if (eax_65 == 0)
                result = (*(*(ecx_196 + 0x1dec0) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_196 + 0x1dec0)
        else
            if (arg2 != 0x7d2)
                goto label_6aaaa3
            
            result = sub_65fbd0()
    else if (arg2 == 0x7d1)
        result = sub_65fc50()
    else
        if (arg2 - 0x515 u> 0x66)
            goto label_6aaaa3
        
        void var_430
        
        switch (arg2)
            case 0x515
                void var_cf8
                sub_6ab010(&var_cf8)
                int32_t var_8_2 = 1
                sub_545db0(&var_cf8, data_4ebe3ac)
                result = sub_6ab0b0(&var_cf8)
            case 0x516
                void var_820
                sub_69d9b0(&var_820)
                int32_t var_8_3 = 2
                sub_545db0(&var_820, data_4ebe3ac)
                result = sub_69da40(&var_820)
            case 0x517
                void var_588
                sub_6ab150(&var_588)
                int32_t var_8_4 = 3
                sub_545db0(&var_588, data_4ebe3ac)
                result = sub_6ab1e0(&var_588)
            case 0x518
                void var_1028
                sub_6ab230(&var_1028)
                int32_t var_8_5 = 4
                sub_545db0(&var_1028, data_4ebe3ac)
                result = sub_6ab330(&var_1028)
            case 0x519
                void var_ca8
                sub_6ab390(&var_ca8)
                int32_t var_8_6 = 5
                sub_545db0(&var_ca8, data_4ebe3ac)
                result = sub_6ab450(&var_ca8)
            case 0x51a
                sub_6ab4a0(&var_430)
                int32_t var_8_7 = 6
                sub_545db0(&var_430, data_4ebe3ac)
                result = sub_6ab560(&var_430)
            case 0x51b
                void var_860
                sub_6ab5b0(&var_860)
                int32_t var_8_8 = 7
                sub_545db0(&var_860, data_4ebe3ac)
                result = sub_6ab6d0(&var_860)
            case 0x51c
                sub_6ab740(&var_430)
                int32_t var_8_9 = 8
                sub_545db0(&var_430, data_4ebe3ac)
                result = sub_6ab560(&var_430)
            case 0x51d
                void var_4e0
                sub_6ab800(&var_4e0)
                int32_t var_8_10 = 9
                sub_545db0(&var_4e0, data_4ebe3ac)
                result = sub_6ab8e0(&var_4e0)
            case 0x51e
                void var_700
                sub_6ab940(&var_700)
                int32_t var_8_11 = 0xa
                sub_545db0(&var_700, data_4ebe3ac)
                result = sub_6aba00(&var_700)
            case 0x51f
                void var_790
                sub_6aba50(&var_790)
                int32_t var_8_12 = 0xb
                sub_545db0(&var_790, data_4ebe3ac)
                result = sub_6abb10(&var_790)
            case 0x520
                void var_670
                sub_6abb60(&var_670)
                int32_t var_8_13 = 0xc
                sub_545db0(&var_670, data_4ebe3ac)
                result = sub_6abc20(&var_670)
            case 0x521
                void var_1bd0
                sub_6abc70(&var_1bd0)
                int32_t var_8_14 = 0xd
                sub_545db0(&var_1bd0, data_4ebe3ac)
                int32_t var_8_15 = 0xffffffff
                result = sub_6abd30(&var_1bd0)
            case 0x522
                void var_8b0
                sub_6abdc0(&var_8b0)
                int32_t var_8_16 = 0xe
                sub_545db0(&var_8b0, data_4ebe3ac)
                result = sub_6abe80(&var_8b0)
            case 0x523
                void var_2080
                sub_5ca890(&var_2080)
                int32_t var_8_17 = 0xf
                sub_545de0(&var_2080, data_4ebe3ac)
                result = sub_5ca950(&var_2080)
            case 0x524, 0x525, 0x526, 0x527, 0x528, 0x529, 0x52a, 0x52b, 0x52c, 0x52d, 0x52e, 
                    0x52f, 0x530, 0x531, 0x532, 0x533, 0x534, 0x535, 0x536, 0x537, 0x538, 0x539, 
                    0x53a, 0x53b, 0x53c, 0x53d, 0x53e, 0x53f, 0x540, 0x541, 0x542, 0x543, 0x544, 
                    0x545, 0x546, 0x547, 0x548, 0x549, 0x54a, 0x54b, 0x54c, 0x54d, 0x54e, 0x54f, 
                    0x550, 0x551, 0x552, 0x553, 0x554, 0x555, 0x556, 0x557, 0x558, 0x559, 0x55a, 
                    0x55b, 0x55c, 0x55d, 0x55e, 0x55f, 0x560, 0x561, 0x562, 0x563, 0x564, 0x565, 
                    0x566, 0x567, 0x568, 0x569, 0x56a, 0x56b, 0x56c, 0x56d, 0x56e, 0x56f, 0x570, 
                    0x571, 0x572, 0x573, 0x574, 0x575, 0x576, 0x577, 0x578
                goto label_6aaaa3
            case 0x579
                char eax_59 = sub_6c7fa0(ecx + 8, 0x579)
                void* ecx_184 = data_bac4d0
                
                if (eax_59 == 0)
                    result = (*(*(ecx_184 + 0x9288) + 0x10))(data_4ebe3ac)
                else
                    result = sub_6bfea0(ecx_184 + 0x9288)
            case 0x57a
                char eax_61 = sub_6c7fa0(ecx + 8, 0x57a)
                void* ecx_188 = data_bac4d0
                
                if (eax_61 == 0)
                    result = (*(*(ecx_188 + 0x1cb2c) + 0x10))(data_4ebe3ac)
                else
                    result = sub_6bfea0(ecx_188 + 0x1cb2c)
            case 0x57b
                char eax_63 = sub_6c7fa0(ecx + 8, 0x57b)
                void* ecx_192 = data_bac4d0
                
                if (eax_63 == 0)
                    result = (*(*(ecx_192 + 0x1d2f8) + 0x10))(data_4ebe3ac)
                else
                    result = sub_6bfea0(ecx_192 + 0x1d2f8)
else if (arg2 == 0x514)
    int32_t var_1a30
    sub_6aaf00(&var_1a30)
    int32_t var_8_1 = 0
    int32_t esi_1 = data_4ebe3ac
    sub_683ad0(0)
    (*(var_1a30 + 8))(esi_1)
    sub_683ad0(1)
    result = sub_6aafc0(&var_1a30)
else if (arg2 - 0x3ea u> 0xf9)
label_6aaaa3:
    
    if (arg2 - 0xce4 u<= 0xc)
        void* ecx_316 = (arg2 - 0xce4) * 0x430
        bool cond:3_1 = sub_6c7fa0(ecx + 0x58, arg2) == 0
        int32_t eax_129 = data_bac4d0
        
        if (cond:3_1)
            (*(*(ecx_316 + eax_129 + 0x26748) + 0x10))(data_4ebe3ac)
        else
            sub_6bfea0(ecx_316 + eax_129 + 0x26748)
    
    if (arg2 - 0xcf8 u<= 0x13)
        void* ecx_320 = (arg2 - 0xcf8) * 0x418
        bool cond:4_1 = sub_6c7fa0(ecx + 0x60, arg2) == 0
        int32_t eax_135 = data_bac4d0
        
        if (cond:4_1)
            (*(*(ecx_320 + eax_135 + 0x29db8) + 0x10))(data_4ebe3ac)
        else
            sub_6bfea0(ecx_320 + eax_135 + 0x29db8)
    
    if (arg2 - 0xd16 u<= 5)
        void* ecx_324 = (arg2 - 0xd16) * 0x418
        bool cond:5_1 = sub_6c7fa0(ecx + 0x68, arg2) == 0
        int32_t eax_141 = data_bac4d0
        
        if (cond:5_1)
            (*(*(ecx_324 + eax_141 + 0x31014) + 0x10))(data_4ebe3ac)
        else
            sub_6bfea0(ecx_324 + eax_141 + 0x31014)
    
    result = arg2 - 0xc81
    
    if (result u<= 0xaee)
        result = sub_6a0780(arg2 - 0x1388)
else
    switch (arg2)
        case 0x3ea
            char eax_5 = sub_6c7fa0(ecx + 8, 0x3ea)
            void* ecx_2 = data_bac4d0
            
            if (eax_5 == 0)
                result = (*(*(ecx_2 + 0xc) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_2 + 0xc)
        case 0x3eb
            void* ecx_5 = data_bac504
            result = *(ecx_5 + 0x98)
            
            if (result != *(ecx_5 + 0x9c))
                ecx_5.b = 1
                result = sub_6601b0(ecx_5.b)
        case 0x3ec
            result = sub_660440()
        case 0x3ed, 0x3ee, 0x3ef, 0x3f0, 0x3f2, 0x3f3, 0x3f4, 0x3f5, 0x3f6, 0x3f7, 0x3f8, 0x3f9, 
                0x3fa, 0x3fb, 0x3fc, 0x3fd, 0x3fe, 0x3ff, 0x400, 0x401, 0x402, 0x403, 0x404, 0x405, 
                0x406, 0x407, 0x408, 0x409, 0x40a, 0x40b, 0x40c, 0x40d, 0x40e, 0x40f, 0x410, 0x411, 
                0x412, 0x413, 0x414, 0x415, 0x416, 0x417, 0x418, 0x419, 0x41a, 0x41b, 0x41c, 0x41d, 
                0x41e, 0x41f, 0x420, 0x421, 0x422, 0x423, 0x424, 0x425, 0x426, 0x427, 0x428, 0x429, 
                0x42a, 0x42b, 0x42c, 0x42d, 0x42e, 0x42f, 0x430, 0x431, 0x432, 0x433, 0x434, 0x435, 
                0x436, 0x437, 0x438, 0x439, 0x43a, 0x43b, 0x43c, 0x43d, 0x43e, 0x43f, 0x440, 0x441, 
                0x442, 0x443, 0x444, 0x445, 0x446, 0x447, 0x448, 0x449, 0x44a, 0x44b, 0x44c, 0x44d, 
                0x44e, 0x44f, 0x450, 0x451, 0x452, 0x453, 0x454, 0x455, 0x456, 0x457, 0x458, 0x459, 
                0x45a, 0x45b, 0x45c, 0x45d, 0x45e, 0x45f, 0x460, 0x461, 0x462, 0x463, 0x464, 0x465, 
                0x466, 0x467, 0x468, 0x469, 0x46a, 0x46b, 0x46c, 0x46d, 0x46e, 0x46f, 0x470, 0x471, 
                0x472, 0x473, 0x474, 0x475, 0x476, 0x477, 0x478, 0x479, 0x47a, 0x47b, 0x47c, 0x47d, 
                0x47e, 0x47f, 0x480, 0x481, 0x482, 0x483, 0x484, 0x485, 0x486, 0x487, 0x488, 0x489, 
                0x48a, 0x48b, 0x48c, 0x48d, 0x48e, 0x48f, 0x490, 0x491, 0x492, 0x493, 0x494, 0x495, 
                0x496, 0x497, 0x498, 0x499, 0x49a, 0x49b, 0x49c, 0x49d, 0x49e, 0x49f, 0x4a0, 0x4a1, 
                0x4a2, 0x4a3, 0x4a4, 0x4a5, 0x4a6, 0x4a7, 0x4a8, 0x4a9, 0x4aa, 0x4ab, 0x4ac, 0x4ad, 
                0x4ae, 0x4af, 0x4c0, 0x4c1, 0x4c2, 0x4c3, 0x4c4, 0x4c5, 0x4c6, 0x4c7, 0x4c8, 0x4c9, 
                0x4ca, 0x4cb, 0x4cc, 0x4cd, 0x4ce, 0x4cf, 0x4d0, 0x4d1, 0x4d2, 0x4d3, 0x4d4, 0x4d5, 
                0x4d6, 0x4d7, 0x4d8, 0x4d9, 0x4da, 0x4db, 0x4dc, 0x4dd, 0x4de, 0x4df, 0x4e0, 0x4e1
            goto label_6aaaa3
        case 0x3f1
            char eax_54 = sub_6c7fa0(ecx + 8, 0x3f1)
            void* ecx_133 = data_bac4d0
            
            if (eax_54 == 0)
                result = (*(*(ecx_133 + 0x1dac4) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_133 + 0x1dac4)
        case 0x4b0
            char eax_7 = sub_6c7fa0(ecx + 0x18, 0x4b0)
            void* ecx_7 = data_bac4d0
            
            if (eax_7 == 0)
                result = (*(*(ecx_7 + 0x12504) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_7 + 0x12504)
        case 0x4b1
            char eax_9 = sub_6c7fa0(ecx + 0x18, 0x4b1)
            void* ecx_11 = data_bac4d0
            
            if (eax_9 == 0)
                result = (*(*(ecx_11 + 0x13f40) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_11 + 0x13f40)
        case 0x4b2
            char eax_11 = sub_6c7fa0(ecx + 0x18, 0x4b2)
            void* ecx_15 = data_bac4d0
            
            if (eax_11 == 0)
                result = (*(*(ecx_15 + 0x14c40) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_15 + 0x14c40)
        case 0x4b3
            char eax_13 = sub_6c7fa0(ecx + 0x18, 0x4b3)
            void* ecx_19 = data_bac4d0
            
            if (eax_13 == 0)
                result = (*(*(ecx_19 + 0x15468) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_19 + 0x15468)
        case 0x4b4
            char eax_15 = sub_6c7fa0(ecx + 0x18, 0x4b4)
            void* ecx_23 = data_bac4d0
            
            if (eax_15 == 0)
                result = (*(*(ecx_23 + 0x159fc) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_23 + 0x159fc)
        case 0x4b5
            char eax_17 = sub_6c7fa0(ecx + 0x18, 0x4b5)
            void* ecx_27 = data_bac4d0
            
            if (eax_17 == 0)
                result = (*(*(ecx_27 + 0x16a2c) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_27 + 0x16a2c)
        case 0x4b6
            char eax_19 = sub_6c7fa0(ecx + 0x18, 0x4b6)
            void* ecx_31 = data_bac4d0
            
            if (eax_19 == 0)
                result = (*(*(ecx_31 + 0x176dc) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_31 + 0x176dc)
        case 0x4b7
            char eax_21 = sub_6c7fa0(ecx + 0x18, 0x4b7)
            void* ecx_35 = data_bac4d0
            
            if (eax_21 == 0)
                result = (*(*(ecx_35 + 0x17b18) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_35 + 0x17b18)
        case 0x4b8
            char eax_23 = sub_6c7fa0(ecx + 0x18, 0x4b8)
            void* ecx_39 = data_bac4d0
            
            if (eax_23 == 0)
                result = (*(*(ecx_39 + 0x18380) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_39 + 0x18380)
        case 0x4b9
            char eax_25 = sub_6c7fa0(ecx + 0x18, 0x4b9)
            void* ecx_43 = data_bac4d0
            
            if (eax_25 == 0)
                result = (*(*(ecx_43 + 0x187bc) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_43 + 0x187bc)
        case 0x4ba
            char eax_27 = sub_6c7fa0(ecx + 0x18, 0x4ba)
            void* ecx_47 = data_bac4d0
            
            if (eax_27 == 0)
                result = (*(*(ecx_47 + 0x18ca4) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_47 + 0x18ca4)
        case 0x4bb
            char eax_29 = sub_6c7fa0(ecx + 0x18, 0x4bb)
            void* ecx_51 = data_bac4d0
            
            if (eax_29 == 0)
                result = (*(*(ecx_51 + 0x193b0) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_51 + 0x193b0)
        case 0x4bc
            char eax_31 = sub_6c7fa0(ecx + 0x18, 0x4bc)
            void* ecx_55 = data_bac4d0
            
            if (eax_31 == 0)
                result = (*(*(ecx_55 + 0x19b4c) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_55 + 0x19b4c)
        case 0x4bd
            char eax_33 = sub_6c7fa0(ecx + 0x18, 0x4bd)
            void* ecx_59 = data_bac4d0
            
            if (eax_33 == 0)
                result = (*(*(ecx_59 + 0x1a1c8) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_59 + 0x1a1c8)
        case 0x4be
            char eax_35 = sub_6c7fa0(ecx + 0x18, 0x4be)
            void* ecx_63 = data_bac4d0
            
            if (eax_35 == 0)
                result = (*(*(ecx_63 + 0x1bda4) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_63 + 0x1bda4)
        case 0x4bf
            char eax_37 = sub_6c7fa0(ecx + 0x18, 0x4bf)
            void* ecx_67 = data_bac4d0
            
            if (eax_37 == 0)
                result = (*(*(ecx_67 + 0x1c65c) + 0x10))(data_4ebe3ac)
            else
                result = sub_6bfea0(ecx_67 + 0x1c65c)
        case 0x4e2
            (*(*(data_bac4d0 + 0x12504) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x13f40) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x14c40) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x15468) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x159fc) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x16a2c) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x176dc) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x17b18) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x18380) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x187bc) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x18ca4) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x193b0) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x19b4c) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x1a1c8) + 0x10))(data_4ebe3ac)
            (*(*(data_bac4d0 + 0x1bda4) + 0x10))(data_4ebe3ac)
            result = (*(*(data_bac4d0 + 0x1c65c) + 0x10))(data_4ebe3ac)
        case 0x4e3
            sub_6bfea0(data_bac4d0 + 0x12504)
            sub_6bfea0(data_bac4d0 + 0x13f40)
            sub_6bfea0(data_bac4d0 + 0x14c40)
            sub_6bfea0(data_bac4d0 + 0x15468)
            sub_6bfea0(data_bac4d0 + 0x159fc)
            sub_6bfea0(data_bac4d0 + 0x16a2c)
            sub_6bfea0(data_bac4d0 + 0x176dc)
            sub_6bfea0(data_bac4d0 + 0x17b18)
            sub_6bfea0(data_bac4d0 + 0x18380)
            sub_6bfea0(data_bac4d0 + 0x187bc)
            sub_6bfea0(data_bac4d0 + 0x18ca4)
            sub_6bfea0(data_bac4d0 + 0x193b0)
            sub_6bfea0(data_bac4d0 + 0x19b4c)
            sub_6bfea0(data_bac4d0 + 0x1a1c8)
            sub_6bfea0(data_bac4d0 + 0x1bda4)
            result = sub_6bfea0(data_bac4d0 + 0x1c65c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(arg1 ^ &__saved_ebp)
return result
