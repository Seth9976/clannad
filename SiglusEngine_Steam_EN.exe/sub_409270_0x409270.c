// 函数: sub_409270
// 地址: 0x409270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i_24 = arg1
long double x87_r7_1 = fconvert.t(data_632ff0) / float.t(arg2)
int32_t eax_1 = (arg2 + 1) s>> 1
int32_t eax_3 = (i_24 - 1) s>> 1
void* eax_5 = i_24 i* arg3
long double st0
bool c2
st0, c2 = __fcos(x87_r7_1)
float var_10 = fconvert.s(st0)
int32_t eax_7 = i_24 * arg2
long double st0_1
bool c2_1
st0_1, c2_1 = __fsin(x87_r7_1)
float var_14 = fconvert.s(st0_1)

if (i_24 != 1)
    void* i_17 = arg4
    
    if (i_17 s> 0)
        int32_t* eax_8 = arg9
        int32_t* ecx_2 = arg7 - eax_8
        void* i
        
        do
            *eax_8 = *(ecx_2 + eax_8)
            eax_8 = &eax_8[1]
            i = i_17
            i_17 -= 1
        while (i != 1)
    
    int32_t esi_1 = arg2
    float i_25
    
    if (esi_1 s<= 1)
        i_25 = arg3
    else
        int32_t* eax_9 = arg8
        i_25 = arg3
        int32_t var_28_1 = esi_1 - 1
        bool cond:4_1
        
        do
            eax_9 = &eax_9[eax_5]
            int32_t* var_c_1 = eax_9
            
            if (i_25 s> 0)
                float i_18 = i_25
                float i_1
                
                do
                    *eax_9 = *(arg6 i- arg8 + eax_9)
                    eax_9 = &eax_9[i_24]
                    i_1 = i_18
                    i_18 -= 1
                while (i_1 != 1)
                eax_9 = var_c_1
                esi_1 = arg2
            
            cond:4_1 = var_28_1 != 1
            var_28_1 -= 1
        while (cond:4_1)
    
    int32_t eax_11 = neg.d(i_24)
    
    if (eax_3 s<= i_25)
        if (esi_1 s> 1)
            int32_t* esi_6 = arg8
            void* ecx_21 = &arg10[eax_11 - 1]
            float* edi_6 = arg6 - 4
            int32_t var_28_2 = arg2 - 1
            bool cond:13_1
            
            do
                ecx_21 += i_24 << 2
                esi_6 = &esi_6[eax_5]
                edi_6 = &edi_6[eax_5]
                void* var_1c_1 = ecx_21
                int32_t* var_2c_2 = esi_6
                
                if (i_24 s> 2)
                    float* eax_28 = edi_6
                    arg10 = (i_24 - 1) u>> 1
                    bool cond:20_1
                    
                    do
                        ecx_21 += 8
                        esi_6 = &esi_6[2]
                        eax_28 = &eax_28[2]
                        int32_t* var_18_2 = esi_6
                        float* var_c_3 = eax_28
                        
                        if (arg3 s> 0)
                            float i_12 = arg3
                            float i_2
                            
                            do
                                *(eax_28 + arg8 i- arg6) = fconvert.s(
                                    fconvert.t(*eax_28) * fconvert.t(*(ecx_21 - 4))
                                    + fconvert.t(eax_28[1]) * fconvert.t(*ecx_21))
                                long double x87_r7_13 =
                                    fconvert.t(eax_28[1]) * fconvert.t(*(ecx_21 - 4))
                                long double x87_r6_9 = fconvert.t(*ecx_21) * fconvert.t(*eax_28)
                                eax_28 = &eax_28[i_24]
                                *esi_6 = fconvert.s(x87_r7_13 - x87_r6_9)
                                esi_6 = &esi_6[i_24]
                                i_2 = i_12
                                i_12 -= 1
                            while (i_2 != 1)
                            eax_28 = var_c_3
                            esi_6 = var_18_2
                        
                        cond:20_1 = arg10 != 1
                        arg10 -= 1
                    while (cond:20_1)
                    ecx_21 = var_1c_1
                    esi_6 = var_2c_2
                
                cond:13_1 = var_28_2 != 1
                var_28_2 -= 1
            while (cond:13_1)
    else if (esi_1 s> 1)
        int32_t edi_3 = 0
        int32_t var_34_1 = esi_1 - 1
        arg10 = &arg10[eax_11 - 1]
        bool cond:14_1
        
        do
            edi_3 += eax_5 << 2
            void* eax_15 = edi_3 - (i_24 << 2)
            arg10 = &arg10[i_24]
            
            if (i_25 s> 0)
                float i_28 = i_25
                void* ebp_4 = eax_15 + arg8
                void* var_2c_1 = eax_15 i+ arg6 - 4
                bool cond:22_1
                
                do
                    int32_t eax_17 = i_24 << 2
                    ebp_4 += eax_17
                    var_2c_1 += eax_17
                    
                    if (i_24 s> 2)
                        float* ecx_19 = arg10
                        void* eax_18 = var_2c_1
                        float* ebx_1 = ebp_4
                        uint32_t i_19 = (i_24 - 1) u>> 1
                        uint32_t i_3
                        
                        do
                            long double x87_r7_4 =
                                fconvert.t(*(eax_18 + 0xc)) * fconvert.t(ecx_19[2])
                            long double x87_r6_2 = fconvert.t(*(eax_18 + 8))
                            eax_18 += 8
                            ecx_19 = &ecx_19[2]
                            ebx_1 = &ebx_1[2]
                            i_3 = i_19
                            i_19 -= 1
                            *(arg8 i- arg6 + eax_18) =
                                fconvert.s(x87_r7_4 + x87_r6_2 * fconvert.t(ecx_19[-1]))
                            *ebx_1 = fconvert.s(fconvert.t(ecx_19[-1]) * fconvert.t(*(eax_18 + 4))
                                - fconvert.t(*eax_18) * fconvert.t(*ecx_19))
                        while (i_3 != 1)
                        i_25 = arg3
                    
                    cond:22_1 = i_28 != 1
                    i_28 -= 1
                while (cond:22_1)
            
            cond:14_1 = var_34_1 != 1
            var_34_1 -= 1
        while (cond:14_1)
    
    void* ebp_7 = eax_5 * arg2
    void* ebx_3 = nullptr
    
    if (eax_3 s>= arg3)
        if (eax_1 s> 1)
            float ebx_5 = arg6
            float* edi_17 = arg6 i+ (ebp_7 << 2)
            void* ecx_28 = &arg8[ebp_7 - 1]
            void* esi_8 = &arg8[-1]
            int32_t var_2c_4 = eax_1 - 1
            bool cond:27_1
            
            do
                int32_t eax_49 = eax_5 << 2
                ebx_5 += eax_49
                esi_8 += eax_49
                edi_17 -= eax_49
                ecx_28 -= eax_49
                float var_8_2 = ebx_5
                void* var_c_5 = ecx_28
                
                if (arg3 s> 0)
                    float* ebp_16 = edi_17
                    float var_18_4 = ebx_5
                    arg10 = esi_8
                    float* var_1c_3 = ebp_16
                    void* var_20_3 = ecx_28
                    float var_28_4 = arg3
                    bool cond:34_1
                    
                    do
                        if (i_24 s> 2)
                            float* eax_51 = arg10
                            float* esi_10 = arg6 i- arg8
                            uint32_t i_23 = (i_24 - 1) u>> 1
                            uint32_t i_4
                            
                            do
                                long double x87_r7_24 =
                                    fconvert.t(*(ecx_28 + 8)) + fconvert.t(eax_51[2])
                                ecx_28 += 8
                                eax_51 = &eax_51[2]
                                ebx_5 += 8
                                ebp_16 = &ebp_16[2]
                                i_4 = i_23
                                i_23 -= 1
                                *(esi_10 + eax_51) = fconvert.s(x87_r7_24)
                                *(ecx_28 + esi_10) =
                                    fconvert.s(fconvert.t(eax_51[1]) - fconvert.t(*(ecx_28 + 4)))
                                *ebx_5 =
                                    fconvert.s(fconvert.t(*(ecx_28 + 4)) + fconvert.t(eax_51[1]))
                                *ebp_16 = fconvert.s(fconvert.t(*ecx_28) - fconvert.t(*eax_51))
                            while (i_4 != 1)
                        
                        int32_t eax_52 = i_24 << 2
                        ebx_5 = var_18_4 i+ eax_52
                        arg10 = &arg10[i_24]
                        ebp_16 = &var_1c_3[i_24]
                        ecx_28 = var_20_3 + eax_52
                        var_18_4 = ebx_5
                        cond:34_1 = var_28_4 != 1
                        var_1c_3 = ebp_16
                        var_20_3 = ecx_28
                        var_28_4 -= 1
                    while (cond:34_1)
                    ebx_5 = var_8_2
                    ecx_28 = var_c_5
                
                cond:27_1 = var_2c_4 != 1
                var_2c_4 -= 1
            while (cond:27_1)
    else if (eax_1 s> 1)
        int32_t var_18_3 = eax_1 - 1
        bool cond:28_1
        
        do
            ebx_3 += eax_5
            ebp_7 -= eax_5
            void* var_2c_3 = ebx_3
            
            if (i_24 s> 2)
                void* ebp_8 = ebp_7 - ebx_3
                int32_t edi_14 = ebx_3 << 2
                int32_t esi_7 = i_24 << 2
                void* var_8_1 = ebp_8
                uint32_t var_1c_2 = (i_24 - 1) u>> 1
                bool cond:36_1
                
                do
                    ebx_3 += 2
                    edi_14 += 8
                    int32_t eax_38 = edi_14 - esi_7
                    
                    if (arg3 s> 0)
                        float* ebx_4 = eax_38 i+ arg6
                        float* var_28_3 = ((ebx_3 - i_24 + ebp_8) << 2) i+ arg6
                        void* edi_16 = arg6 i- arg8
                        float* eax_39 = eax_38 + arg8 - 4
                        void* ecx_27 = &arg8[ebx_3 - i_24 + ebp_8 - 1]
                        float var_20_2 = arg3
                        bool cond:42_1
                        
                        do
                            long double x87_r7_16 =
                                fconvert.t(eax_39[i_24]) + fconvert.t(*(ecx_27 + esi_7))
                            eax_39 = &eax_39[i_24]
                            ecx_27 += esi_7
                            ebx_4 = &ebx_4[i_24]
                            float* ebp_13 = &var_28_3[i_24]
                            *(edi_16 + eax_39) = fconvert.s(x87_r7_16)
                            var_28_3 = ebp_13
                            *(ecx_27 + edi_16) =
                                fconvert.s(fconvert.t(eax_39[1]) - fconvert.t(*(ecx_27 + 4)))
                            *ebx_4 = fconvert.s(fconvert.t(*(ecx_27 + 4)) + fconvert.t(eax_39[1]))
                            *ebp_13 = fconvert.s(fconvert.t(*ecx_27) - fconvert.t(*eax_39))
                            cond:42_1 = var_20_2 != 1
                            var_20_2 -= 1
                        while (cond:42_1)
                        ebp_8 = var_8_1
                    
                    cond:36_1 = var_1c_2 != 1
                    var_1c_2 -= 1
                while (cond:36_1)
                ebx_3 = var_2c_3
            
            cond:28_1 = var_18_3 != 1
            var_18_3 -= 1
        while (cond:28_1)

void* i_27 = arg4

if (i_27 s> 0)
    void* eax_57 = arg7
    int32_t* ecx_31 = arg9 - eax_57
    void* i_20 = i_27
    void* i_5
    
    do
        *eax_57 = *(ecx_31 + eax_57)
        eax_57 += 4
        i_5 = i_20
        i_20 -= 1
    while (i_5 != 1)

int32_t ebx_7 = eax_1
float* ecx_33 = arg2 * i_27
void* edi_21 = nullptr
arg10 = ecx_33

if (ebx_7 s> 1)
    void* esi_11 = eax_5
    int32_t ecx_34 = 0
    int32_t var_1c_4 = ebx_7 - 1
    
    while (true)
        edi_21 += esi_11
        int32_t ecx_35 = ecx_34 + (esi_11 << 2)
        arg10 -= esi_11
        
        if (arg3 s> 0)
            void* ecx_37 = ecx_35 - (i_24 << 2) + arg8
            void* esi_14 = arg6 i- arg8
            void* eax_65 = &arg8[0 - i_24 + arg10]
            float var_18_5 = arg3
            bool cond:12_1
            
            do
                int32_t ebx_13 = i_24 << 2
                eax_65 += ebx_13
                ecx_37 += ebx_13
                cond:12_1 = var_18_5 != 1
                var_18_5 -= 1
                *(ecx_37 + esi_14) = fconvert.s(fconvert.t(*eax_65) + fconvert.t(*ecx_37))
                *(eax_65 + esi_14) = fconvert.s(fconvert.t(*eax_65) - fconvert.t(*ecx_37))
            while (cond:12_1)
            esi_11 = eax_5
        
        bool cond:6_1 = var_1c_4 != 1
        var_1c_4 -= 1
        
        if (not(cond:6_1))
            break
        
        ecx_34 = ecx_35
    
    ebx_7 = eax_1

int32_t eax_70 = (arg2 - 1) * i_27
long double x87_r7_35 = fconvert.t(0f)

if (ebx_7 s> 1)
    long double x87_r6_10 = fconvert.t(1f)
    int32_t* var_34_4 = arg9
    arg10 = &arg9[ecx_33]
    int32_t var_c_6 = ebx_7 - 1
    bool cond:10_1
    
    do
        int32_t eax_72 = i_27 << 2
        arg6 = fconvert.s(x87_r6_10 * fconvert.t(var_10) - x87_r7_35 * fconvert.t(var_14))
        var_34_4 = &var_34_4[i_27]
        arg10 -= eax_72
        x87_r7_35 = x87_r6_10 * fconvert.t(var_14) + x87_r7_35 * fconvert.t(var_10)
        
        if (i_27 s> 0)
            void* ebx_17 = arg7
            float* edi_24 = arg10
            void* i_15 = arg4
            void* esi_17 = ebx_17 + (eax_70 << 2)
            int32_t* ecx_40 = var_34_4
            void* eax_73 = eax_72 + ebx_17
            void* i_6
            
            do
                long double x87_r5_5 = fconvert.t(arg6) * fconvert.t(*eax_73)
                eax_73 += 4
                ecx_40 = &ecx_40[1]
                esi_17 += 4
                edi_24 = &edi_24[1]
                long double x87_r5_6 = x87_r5_5 + fconvert.t(*ebx_17)
                ebx_17 += 4
                i_6 = i_15
                i_15 -= 1
                ecx_40[-1] = fconvert.s(x87_r5_6)
                edi_24[-1] = fconvert.s(x87_r7_35 * fconvert.t(*(esi_17 - 4)))
            while (i_6 != 1)
            i_27 = arg4
        
        long double x87_r5_9 = x87_r7_35
        
        if (eax_1 s> 2)
            long double x87_r4_3 = fconvert.t(arg6)
            int32_t var_20_4 = eax_1 - 2
            float* var_28_5 = arg7 + (i_27 << 2)
            void* var_2c_5 = arg7 + (eax_70 << 2)
            bool cond:18_1
            
            do
                float* esi_21 = &var_28_5[i_27]
                float var_1c_5 = fconvert.s(x87_r4_3 * fconvert.t(arg6) - x87_r5_9 * x87_r7_35)
                var_28_5 = esi_21
                var_2c_5 -= i_27 << 2
                x87_r5_9 = x87_r5_9 * fconvert.t(arg6) + x87_r4_3 * x87_r7_35
                x87_r4_3 = fconvert.t(var_1c_5)
                
                if (i_27 s> 0)
                    float* ecx_45 = arg10
                    void* edi_25 = var_2c_5
                    int32_t* eax_78 = var_34_4
                    void* i_13 = i_27
                    void* i_7
                    
                    do
                        long double x87_r3_5 = fconvert.t(var_1c_5) * fconvert.t(*esi_21)
                        esi_21 = &esi_21[1]
                        eax_78 = &eax_78[1]
                        edi_25 += 4
                        ecx_45 = &ecx_45[1]
                        i_7 = i_13
                        i_13 -= 1
                        eax_78[-1] = fconvert.s(x87_r3_5 + fconvert.t(eax_78[-1]))
                        ecx_45[-1] = fconvert.s(x87_r5_9 * fconvert.t(*(edi_25 - 4))
                            + fconvert.t(ecx_45[-1]))
                    while (i_7 != 1)
                
                cond:18_1 = var_20_4 != 1
                var_20_4 -= 1
            while (cond:18_1)
            x87_r5_9 = x87_r4_3
        
        cond:10_1 = var_c_6 != 1
        x87_r6_10 = x87_r5_9
        var_c_6 -= 1
    while (cond:10_1)

if (eax_1 s> 1)
    void* edi_26 = arg7
    arg6 = eax_1 - 1
    bool cond:9_1
    
    do
        edi_26 += i_27 << 2
        
        if (i_27 s> 0)
            float* eax_85 = arg9
            void* ecx_46 = edi_26
            void* i_21 = i_27
            void* i_8
            
            do
                long double x87_r7_38 = fconvert.t(*ecx_46) + fconvert.t(*eax_85)
                ecx_46 += 4
                eax_85 = &eax_85[1]
                i_8 = i_21
                i_21 -= 1
                eax_85[-1] = fconvert.s(x87_r7_38)
            while (i_8 != 1)
        
        cond:9_1 = arg6 != 1
        arg6 -= 1
    while (cond:9_1)

float i_26 = arg3
void* edi_27 = arg5

if (i_24 s>= i_26)
    if (i_26 s> 0)
        arg4 = i_26
        arg6 = arg8
        void* ecx_52 = edi_27
        arg7 = ecx_52
        bool cond:23_1
        
        do
            if (i_24 s> 0)
                float eax_92 = arg6
                void* i_22 = i_24
                void* i_9
                
                do
                    int32_t ebp_20 = *eax_92
                    eax_92 += 4
                    *ecx_52 = ebp_20
                    ecx_52 += 4
                    i_9 = i_22
                    i_22 -= 1
                while (i_9 != 1)
            
            ecx_52 = arg7 + (eax_7 << 2)
            cond:23_1 = arg4 != 1
            arg6 += i_24 << 2
            arg7 = ecx_52
            arg4 -= 1
        while (cond:23_1)
else if (i_24 s> 0)
    int32_t* esi_22 = arg8
    void* ecx_48 = edi_27 - esi_22
    arg6 = i_24
    arg7 = ecx_48
    bool cond:24_1
    
    do
        if (i_26 s> 0)
            int32_t* ecx_49 = ecx_48 + esi_22
            int32_t* eax_88 = esi_22
            float i_16 = i_26
            float i_10
            
            do
                *ecx_49 = *eax_88
                eax_88 = &eax_88[i_24]
                ecx_49 = &ecx_49[eax_7]
                i_10 = i_16
                i_16 -= 1
            while (i_10 != 1)
            ecx_48 = arg7
            edi_27 = arg5
        
        esi_22 = &esi_22[1]
        cond:24_1 = arg6 != 1
        arg6 -= 1
    while (cond:24_1)

void* ebp_23 = eax_5
void* eax_97 = ebp_23 * arg2

if (eax_1 s> 1)
    int32_t* ecx_56 = arg8
    void* esi_25 = &ecx_56[eax_97]
    void* eax_98 = edi_27
    arg2 = eax_1 - 1
    bool cond:32_1
    
    do
        eax_98 += i_24 * 8
        ecx_56 = &ecx_56[ebp_23]
        esi_25 -= ebp_23 << 2
        arg4 = eax_98
        arg9 = ecx_56
        arg10 = esi_25
        
        if (i_26 s> 0)
            arg6 = i_26
            bool cond:39_1
            
            do
                int32_t ebp_24 = *ecx_56
                ecx_56 = &ecx_56[i_24]
                *(eax_98 - 4) = ebp_24
                *eax_98 = *esi_25
                eax_98 += eax_7 << 2
                esi_25 += i_24 << 2
                cond:39_1 = arg6 != 1
                arg6 -= 1
            while (cond:39_1)
            eax_98 = arg4
            ecx_56 = arg9
            esi_25 = arg10
            ebp_23 = eax_5
        
        cond:32_1 = arg2 != 1
        arg2 -= 1
    while (cond:32_1)
    edi_27 = arg5

if (i_24 != 1)
    if (eax_3 s< i_26)
        int32_t ebx_20 = neg.d(i_24)
        int32_t var_34_5 = 0
        
        if (eax_1 s> 1)
            void* ebp_30 = nullptr
            arg6 = eax_97 << 2
            int32_t esi_27 = eax_5 << 2
            void* ecx_58 = ebx_20 + i_24 - 2
            int32_t var_10_1 = esi_27
            float* edi_39 = edi_27 + (ecx_58 << 2)
            int32_t var_c_7 = eax_1 - 1
            int32_t eax_110
            
            while (true)
                int32_t eax_104 = i_24 * 2
                ebp_30 += esi_27
                int32_t ebx_21 = ebx_20 + eax_104
                ecx_58 += eax_104
                edi_39 = &edi_39[i_24 * 2]
                var_34_5 += eax_104
                float* var_18_7 = edi_39
                void* var_8_4 = ebp_30
                arg6 -= esi_27
                
                if (i_24 s> 2)
                    arg2 = ecx_58
                    int32_t* eax_105 = ebp_30 + 8
                    arg7 = 4
                    arg9 = eax_105
                    arg10 = edi_39
                    arg1 = (i_24 - 1) u>> 1
                    bool cond:49_1
                    
                    do
                        if (arg3 s> 0)
                            float* ecx_63 = eax_105 + arg8
                            void* eax_108 = eax_105 - ebp_30 i+ arg6 + arg8
                            void* esi_34 = arg5 + ((arg2 - ebx_21 - i_24 + arg7 + var_34_5) << 2)
                            arg4 = arg3
                            bool cond:50_1
                            
                            do
                                *(esi_34 - 4) =
                                    fconvert.s(fconvert.t(ecx_63[-1]) + fconvert.t(*(eax_108 - 4)))
                                edi_39[-1] =
                                    fconvert.s(fconvert.t(ecx_63[-1]) - fconvert.t(*(eax_108 - 4)))
                                *esi_34 = fconvert.s(fconvert.t(*eax_108) + fconvert.t(*ecx_63))
                                long double x87_r7_46 = fconvert.t(*eax_108) - fconvert.t(*ecx_63)
                                eax_108 += i_24 << 2
                                ecx_63 = &ecx_63[i_24]
                                esi_34 += eax_7 << 2
                                *edi_39 = fconvert.s(x87_r7_46)
                                edi_39 = &edi_39[eax_7]
                                cond:50_1 = arg4 != 1
                                arg4 -= 1
                            while (cond:50_1)
                            ebp_30 = var_8_4
                            eax_105 = arg9
                        
                        eax_105 = &eax_105[2]
                        edi_39 = arg10 - 8
                        cond:49_1 = arg1 != 1
                        arg9 = eax_105
                        arg10 = edi_39
                        arg2 -= 2
                        arg7 += 4
                        arg1 -= 1
                    while (cond:49_1)
                    esi_27 = var_10_1
                    edi_39 = var_18_7
                
                eax_110 = var_c_7 - 1
                bool cond:47_1 = var_c_7 != 1
                var_c_7 = eax_110
                
                if (not(cond:47_1))
                    break
                
                ebx_20 = ebx_21
            
            return eax_110
    else if (eax_1 s> 1)
        int32_t ecx_67 = i_24 * 8
        float* ebp_40 = ebp_23 << 2
        void* ecx_69 = &arg8[2]
        arg8 = &arg8[eax_97 + 2]
        eax_97 = edi_27 + 8
        void* edi_41 = edi_27 + ((neg.d(i_24) + i_24) << 2) - 8
        arg10 = ebp_40
        arg9 = eax_1 - 1
        bool cond:43_1
        
        do
            ecx_69 += ebp_40
            edi_41 += ecx_67
            eax_97 += ecx_67
            void* esi_44 = arg8 - ebp_40
            arg8 = esi_44
            
            if (i_26 s> 0)
                arg2 = ecx_69
                arg6 = edi_41
                void* ebp_41 = eax_97
                arg7 = esi_44
                arg4 = i_26
                bool cond:46_1
                
                do
                    if (i_24 s> 2)
                        int32_t ecx_71 = arg2
                        void* eax_112 = arg7
                        float edi_42 = arg6
                        void* esi_45 = ebp_41
                        uint32_t i_14 = (i_24 - 1) u>> 1
                        uint32_t i_11
                        
                        do
                            long double x87_r7_48 =
                                fconvert.t(*(ecx_71 - 4)) + fconvert.t(*(eax_112 - 4))
                            esi_45 += 8
                            eax_112 += 8
                            ecx_71 += 8
                            edi_42 -= 8
                            i_11 = i_14
                            i_14 -= 1
                            *(esi_45 - 0xc) = fconvert.s(x87_r7_48)
                            *(edi_42 i+ 4) = fconvert.s(fconvert.t(*(ecx_71 - 0xc))
                                - fconvert.t(*(eax_112 - 0xc)))
                            *(esi_45 - 8) =
                                fconvert.s(fconvert.t(*(ecx_71 - 8)) + fconvert.t(*(eax_112 - 8)))
                            *(edi_42 i+ 8) =
                                fconvert.s(fconvert.t(*(eax_112 - 8)) - fconvert.t(*(ecx_71 - 8)))
                        while (i_11 != 1)
                    
                    int32_t eax_114 = eax_7 << 2
                    ebp_41 += eax_114
                    int32_t eax_115 = i_24 << 2
                    arg6 += eax_114
                    arg2 += eax_115
                    cond:46_1 = arg4 != 1
                    arg7 += eax_115
                    arg4 -= 1
                while (cond:46_1)
                i_26 = arg3
                ebp_40 = arg10
            
            cond:43_1 = arg9 != 1
            arg9 -= 1
        while (cond:43_1)

return eax_97
