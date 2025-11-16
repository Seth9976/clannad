// 函数: sub_5b3210
// 地址: 0x5b3210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba5c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_20 = 0
int32_t result = *(arg1 + 0x2a8)

if (result == 1 || result == 2)
    int32_t* ecx = data_bac4e8
    int32_t var_24_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_40_1 = 0
    int32_t edx_1 = *ecx
    char var_1a_1 = 0xff
    char var_1c_1 = 0
    char var_1b_1 = 0
    int32_t ebx_2
    
    if (edx_1 == 0xffffffff)
        ebx_2 = 0
    else
        int32_t ebx_1 = *(arg1 + 0x2c0)
        
        if (edx_1 != ebx_1)
            ebx_2 = 0
        else if (ecx[3] == 1)
            ebx_2 = 1
        else if (edx_1 != ebx_1 || ecx[3] != 2)
            ebx_2 = 0
        else
            ebx_2 = 2
    
    if (result == 2)
        ebx_2 = 4
    
    int128_t var_38
    int32_t* var_2c
    
    if (arg4 s>= 0)
        int32_t* eax_4 = data_bac4c4
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = muls.dp.d(0x66666667, eax_4[1] - *eax_4)
        int32_t edx_3 = edx_2 s>> 5
        
        if (arg4 s< (edx_3 u>> 0x1f) + edx_3)
            int32_t ecx_5 = arg4 * 0x50 + *data_bac4c4
            
            if (ebx_2 u<= 4)
                int32_t eax_11 = ebx_2 << 4
                
                if (eax_11 != neg.d(ecx_5))
                    var_38 = *(eax_11 + ecx_5)
                    int128_t* eax_12
                    eax_12.b = var_2c:2.b
                    var_1b_1 = eax_12.b
                    eax_12.b = var_2c:1.b
                    var_1c_1 = eax_12.b
                    eax_12.b = var_2c.b
                    var_1a_1 = eax_12.b
                    int32_t var_30
                    var_40_1 = var_30
                    var_3c_1 = var_38:4.d
                    var_24_1 = var_38.d
    
    bool var_19_1 = *sub_6f12f0(arg1 + 0x320, &var_38:8, 0) != 0
    
    if (var_2c != 0)
        bool cond:0_1 = var_2c[1] != 1
        var_2c[1]
        var_2c[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_2c + 4))(eax_2)
            bool cond:1_1 = var_2c[2] != 1
            var_2c[2]
            var_2c[2] -= 1
            
            if (not(cond:1_1))
                (*(*var_2c + 8))()
    
    int32_t var_118
    
    if (var_19_1 != 0)
        FI::`default constructor closure'(&var_118)
        void* eax_22 = data_bac510
        var_118 = 1
        int32_t var_110_1 = 0
        int32_t eax_23 = *(eax_22 + 0xa2eba4)
        int32_t eax_29 = *(arg1 + 0x2b4) + var_40_1 + arg8
        int32_t var_104_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2b0) + var_3c_1 + arg7))
        uint32_t var_a0_1 = zx.d(var_1a_1)
        uint32_t var_94_1 = zx.d(var_1c_1)
        uint32_t var_90_1 = zx.d(var_1b_1)
        int32_t var_100_1 = _mm_cvtepi32_ps(zx.o(eax_29))
        sub_6289b0(&var_118, arg2)
        sub_628eb0(arg1 + 0x324, arg1 + 0x440, &var_118, arg1 + 0x324)
        int32_t* ecx_13 = *(arg1 + 0x310)
        int32_t ebx_4 = var_24_1
        *(arg1 + 0x325) = 1
        char var_1a_2
        char ecx_14
        
        if (ecx_13 == 0)
            ecx_14 = var_20
            var_1a_2 = 0
        else
            ecx_14 = 1
            
            if (*sub_54d980(ecx_13, &var_38:8, ebx_4) == 0)
                var_1a_2 = 0
            else
                var_1a_2 = 1
        
        if ((ecx_14 & 1) != 0)
            if (var_2c != 0)
                bool cond:5_1 = var_2c[1] != 1
                var_2c[1]
                var_2c[1] -= 1
                
                if (not(cond:5_1))
                    (*(*var_2c + 4))(eax_2)
                    bool cond:8_1 = var_2c[2] != 1
                    var_2c[2]
                    var_2c[2] -= 1
                    
                    if (not(cond:8_1))
                        (*(*var_2c + 8))()
            
            ebx_4 = var_24_1
        
        if (var_1a_2 != 0)
            sub_54d980(*(arg1 + 0x310), &var_38:8, ebx_4)
            int32_t var_8_1 = 0
            sub_5b17d0(arg1 + 0x3f8, &var_38:8)
            int32_t var_8_2 = 0xffffffff
            
            if (var_2c != 0)
                bool cond:7_1 = var_2c[1] != 1
                var_2c[1]
                var_2c[1] -= 1
                
                if (not(cond:7_1))
                    (*(*var_2c + 4))(eax_2)
                    bool cond:10_1 = var_2c[2] != 1
                    var_2c[2]
                    var_2c[2] -= 1
                    
                    if (not(cond:10_1))
                        (*(*var_2c + 8))()
            
            *(arg1 + 0x338) = 0
        
        bool var_19_2 = *sub_6f12f0(arg1 + 0x320, &var_38:8, 0) != 0
        
        if (var_2c != 0)
            bool cond:6_1 = var_2c[1] != 1
            var_2c[1]
            var_2c[1] -= 1
            
            if (not(cond:6_1))
                (*(*var_2c + 4))(eax_2)
                bool cond:9_1 = var_2c[2] != 1
                var_2c[2]
                var_2c[2] -= 1
                
                if (not(cond:9_1))
                    (*(*var_2c + 8))()
        
        if (var_19_2 != 0)
            void* eax_49 = *sub_6f12f0(arg1 + 0x320, &var_38:8, 0)
            int32_t var_4c_1 = *(eax_49 + 0x20)
            int32_t eax_52 = int.d(*(arg1 + 0x33c) f- *(arg1 + 0x348)) - *(eax_49 + 0x1c)
            
            if (var_2c != 0)
                bool cond:11_1 = var_2c[1] != 1
                var_2c[1]
                var_2c[1] -= 1
                
                if (not(cond:11_1))
                    (*(*var_2c + 4))(eax_2)
                    bool cond:13_1 = var_2c[2] != 1
                    var_2c[2]
                    var_2c[2] -= 1
                    
                    if (not(cond:13_1))
                        (*(*var_2c + 8))()
            
            void* ecx_33 = *sub_6f12f0(arg1 + 0x320, &var_38:8, 0)
            int32_t var_50_1 = *(ecx_33 + 0x1c)
            int32_t edx_12 = int.d(*(arg1 + 0x340) f- *(arg1 + 0x34c)) - *(ecx_33 + 0x20)
            
            if (var_2c != 0)
                bool cond:12_1 = var_2c[1] != 1
                var_2c[1]
                var_2c[1] -= 1
                
                if (not(cond:12_1))
                    (*(*var_2c + 4))(eax_2)
                    bool cond:16_1 = var_2c[2] != 1
                    var_2c[2]
                    var_2c[2] -= 1
                    
                    if (not(cond:16_1))
                        (*(*var_2c + 8))()
            
            int32_t edx_14 = edx_12 - var_40_1
            int32_t ebx_11 = eax_52 - var_3c_1
            int32_t var_54_1 = edx_14
            void* eax_64 = *sub_6f12f0(arg1 + 0x320, &var_38:8, 0)
            int32_t var_50_2 = ebx_11 + *(eax_64 + 4)
            int32_t var_4c_2 = *(eax_64 + 8) + edx_14
            *(arg1 + 0x2f0) = var_110_1
            *(arg1 + 0x2f4) = eax_23
            *(arg1 + 0x2c4) = ebx_11.o
            
            if (var_2c != 0)
                bool cond:15_1 = var_2c[1] != 1
                var_2c[1]
                var_2c[1] -= 1
                
                if (not(cond:15_1))
                    (*(*var_2c + 4))(eax_2)
                    bool cond:18_1 = var_2c[2] != 1
                    var_2c[2]
                    var_2c[2] -= 1
                    
                    if (not(cond:18_1))
                        (*(*var_2c + 8))()
    
    bool var_19_3 = *sub_6f12f0(arg1 + 0x450, &var_38:8, 0) != 0
    
    if (var_2c != 0)
        bool cond:4_1 = var_2c[1] != 1
        var_2c[1]
        var_2c[1] -= 1
        
        if (not(cond:4_1))
            (*(*var_2c + 4))(eax_2)
            int32_t edi_1 = var_2c[2]
            var_2c[2] -= 1
            
            if (edi_1 == 1)
                (*(*var_2c + 8))()
    
    int32_t* ecx_46 = &var_118
    int32_t edi_3 = arg8
    int32_t ebx_15 = arg7
    int32_t var_110_2 = 0
    int32_t var_10c_2 = 0
    
    if (var_19_3 == 0)
        FI::`default constructor closure'(ecx_46)
        var_118 = 1
        sub_6289b0(&var_118, arg2)
        sub_628eb0(arg1 + 0x454, arg1 + 0x570, &var_118, arg1 + 0x454)
        *(arg1 + 0x460) = 0x42c80000
        *(arg1 + 0x464) = 0x42c80000
        *(arg1 + 0x4f0) = 0
    else
        FI::`default constructor closure'(ecx_46)
        void* ecx_47 = data_bac4e4
        int32_t eax_81 = *(arg1 + 0x2b0) + var_3c_1 + ebx_15
        var_118 = 1
        int32_t var_60_1 = 0
        int32_t eax_84 = *(arg1 + 0x2b4) + var_40_1 + edi_3
        int32_t var_104_2 = _mm_cvtepi32_ps(zx.o(eax_81))
        uint32_t var_94_2 = zx.d(var_1c_1)
        uint32_t var_90_2 = zx.d(var_1b_1)
        uint32_t var_a0_2 = zx.d(*(ecx_47 + 0x118))
        uint32_t eax_88 = zx.d(*(ecx_47 + 0x115))
        int32_t xmm0_14 = _mm_cvtepi32_ps(zx.o(eax_84))
        uint32_t var_74_1 = eax_88
        uint32_t var_78_1 = zx.d(*(ecx_47 + 0x116))
        uint32_t var_7c_1 = zx.d(*(ecx_47 + 0x117))
        int32_t var_100_2 = xmm0_14
        sub_6289b0(&var_118, arg2)
        sub_628eb0(arg1 + 0x454, arg1 + 0x570, &var_118, arg1 + 0x454)
        *(arg1 + 0x455) = 1
        *(arg1 + 0x468) = 0
    
    if (arg3 == 0xffffffff)
        arg3 = *(arg1 + 0x2ac)
    
    if (ebx_2 == 0 || ebx_2 == 4)
        arg3 = *(arg1 + 0x2ac)
    
    int32_t i_1 = 0
    
    if ((*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4 s> 0)
        int32_t var_20_3 = 0
        int32_t i
        
        do
            int32_t* edi_4 = data_bac4c0
            void* ecx_57 = data_bac510
            int32_t eax_106 = ((edi_4[1] - *edi_4) s>> 2) - 1
            int32_t edx_24 = *(ecx_57 + 0xa2ebbc)
            
            if (edx_24 s< 0)
                edx_24 = 0
            else if (edx_24 s> eax_106)
                edx_24 = eax_106
            
            int32_t eax_107 = *edi_4
            int32_t ecx_58 = *(ecx_57 + 0xa2ebb8)
            int32_t eax_111 = ((edi_4[1] - *edi_4) s>> 2) - 1
            
            if (ecx_58 s< 0)
                ecx_58 = 0
            else if (ecx_58 s> eax_111)
                ecx_58 = eax_111
            
            int32_t eax_115 = ((edi_4[1] - *edi_4) s>> 2) - 1
            int32_t edi_5
            
            if (arg3 s>= 0)
                edi_5 = arg3
                
                if (arg3 s> eax_115)
                    edi_5 = eax_115
            else
                edi_5 = 0
            
            sub_5db450(*(arg1 + 0x304) + var_20_3, arg2, 0, 0xff, (*(eax_107 + (edi_5 << 2))).3, 
                (*(eax_107 + (ecx_58 << 2))).3, (*(eax_107 + (edx_24 << 2))).3, arg5, arg6, 
                *(arg1 + 0x2b0) + ebx_15 + var_3c_1, *(arg1 + 0x2b4) + edi_3 + var_40_1)
            i = i_1 + 1
            var_20_3 += 0x3b4
            ebx_15 = arg7
            i_1 = i
            edi_3 = arg8
        while (i s< (*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4)
    
    int32_t var_110_3 = 0
    int32_t var_10c_3 = 0
    FI::`default constructor closure'(&var_118)
    int32_t eax_123 = *(arg1 + 0x2b0) + var_3c_1 + ebx_15
    var_118 = 1
    int32_t eax_125 = *(arg1 + 0x2b4) + var_40_1
    int32_t var_104_3 = _mm_cvtepi32_ps(zx.o(eax_123))
    int32_t var_100_3 = _mm_cvtepi32_ps(zx.o(eax_125 + edi_3))
    sub_6289b0(&var_118, arg2)
    int32_t ebx_19 = 0
    result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc
    
    if (result s> 0)
        int32_t edi_7 = 0
        
        do
            *(arg1 + 0x144)
            std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
                &var_118, 0, 0)
            ebx_19 += 1
            edi_7 += 0x15fc
            result = (*(arg1 + 0x148) - *(arg1 + 0x144)) s/ 0x15fc
        while (ebx_19 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
