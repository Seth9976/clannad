// 函数: sub_4189dd
// 地址: 0x4189dd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int16_t* esi = arg2
void* var_230 = arg3
void* var_22c = esi

if (arg3 u> 0xa)
    int32_t edi
    int32_t var_280_1 = edi
    void* i = 5
    char const* const edi_1 = "#?RADIANCE"
    bool cond:2_1 = false
    
    while (i != 0)
        int16_t temp1_1 = *esi
        int16_t temp2_1 = *edi_1
        cond:2_1 = temp1_1 != temp2_1
        esi = &esi[1]
        edi_1 = &edi_1[2]
        i -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    if (not(cond:2_1))
        int32_t var_250_1 = 0
        float var_24c_1 = fconvert.s(float.t(1))
        
        if (arg3 s> 0)
            while (true)
                char var_128
                
                if (*var_22c == 0xa)
                    var_22c += 1
                    var_230 -= 1
                else
                    char const* const eax_3 = "FORMAT="
                    
                    do
                        i.b = *eax_3
                        eax_3 = &eax_3[1]
                    while (i.b != 0)
                    
                    bool cond:6_1
                    
                    if (var_230 s> eax_3 - "ORMAT=")
                        char const* const eax_5 = "FORMAT="
                        
                        do
                            i.b = *eax_5
                            eax_5 = &eax_5[1]
                        while (i.b != 0)
                        
                        char* esi_1 = var_22c
                        i = eax_5 - "ORMAT="
                        char const* const edi_2 = "FORMAT="
                        cond:6_1 = false
                        
                        while (i != 0)
                            char temp3_1 = *esi_1
                            char const temp4_1 = *edi_2
                            cond:6_1 = temp3_1 != temp4_1
                            esi_1 = &esi_1[1]
                            edi_2 = &edi_2[1]
                            i -= 1
                            
                            if (temp3_1 != temp4_1)
                                break
                    
                    if (var_230 s<= eax_3 - "ORMAT=" || cond:6_1)
                        char* eax_12 = "EXPOSURE="
                        
                        do
                            i.b = *eax_12
                            eax_12 = &eax_12[1]
                        while (i.b != 0)
                        
                        int32_t i_1
                        bool cond:10_1
                        
                        if (var_230 s> eax_12 - "XPOSURE=")
                            char* eax_14 = "EXPOSURE="
                            
                            do
                                i.b = *eax_14
                                eax_14 = &eax_14[1]
                            while (i.b != 0)
                            
                            void* esi_12 = var_22c
                            i_1 = eax_14 - "XPOSURE="
                            char const* const edi_13 = "EXPOSURE="
                            cond:10_1 = false
                            
                            while (i_1 != 0)
                                char temp5_1 = *esi_12
                                char const temp6_1 = *edi_13
                                cond:10_1 = temp5_1 != temp6_1
                                esi_12 += 1
                                edi_13 = &edi_13[1]
                                i_1 -= 1
                                
                                if (temp5_1 != temp6_1)
                                    break
                        
                        if (var_230 s<= eax_12 - "XPOSURE=" || cond:10_1)
                            char* eax_27 = sub_41658d(var_22c, var_230)
                            var_22c = var_22c + eax_27 + 1
                            var_230 += 0xffffffff - eax_27
                        else
                            char* eax_16 = "EXPOSURE="
                            
                            do
                                i_1.b = *eax_16
                                eax_16 = &eax_16[1]
                            while (i_1.b != 0)
                            
                            void* var_22c_2 = var_22c + eax_16 - "XPOSURE="
                            char* eax_18 = "EXPOSURE="
                            
                            do
                                i_1.b = *eax_18
                                eax_18 = &eax_18[1]
                            while (i_1.b != 0)
                            
                            void* var_230_2 = var_230 - (eax_18 - "XPOSURE=")
                            
                            while (true)
                                void* eax_20
                                eax_20.b = *var_22c_2
                                
                                if (eax_20.b != 0x20 && eax_20.b != 9)
                                    break
                                
                                void* temp8_1 = var_230_2
                                var_230_2 -= 1
                                
                                if (temp8_1 == 1)
                                    goto label_419392
                                
                                var_22c_2 += 1
                            
                            void* eax_21 = 0x100
                            
                            if (var_230_2 s< 0x100)
                                eax_21 = var_230_2
                            
                            char* eax_22 = sub_41658d(var_22c_2, eax_21)
                            
                            if (eax_22 == 0)
                                break
                            
                            void* var_284_2 = var_22c_2
                            void* var_288_2 = &eax_22[1]
                            sub_4186b1(&var_128)
                            void var_228
                            void* var_284_3 = &var_228
                            float var_268
                            int32_t* var_288_3 = &var_268
                            int32_t eax_24
                            eax_24, i = sub_7621fb(&var_128, "%f%s")
                            
                            if (eax_24 != 1)
                                break
                            
                            var_22c = var_22c_2 + eax_22 + 1
                            var_230 = var_230_2 + 0xffffffff - eax_22
                            var_24c_1 = fconvert.s(fconvert.t(var_268) * fconvert.t(var_24c_1))
                    else
                        char const* const eax_7 = "FORMAT="
                        
                        do
                            i.b = *eax_7
                            eax_7 = &eax_7[1]
                        while (i.b != 0)
                        
                        char* var_22c_1 = var_22c + eax_7 - "ORMAT="
                        char const* const eax_9 = "FORMAT="
                        
                        do
                            i.b = *eax_9
                            eax_9 = &eax_9[1]
                        while (i.b != 0)
                        
                        void* var_230_1 = var_230 - (eax_9 - "ORMAT=")
                        
                        while (true)
                            char* eax_11
                            eax_11.b = *var_22c_1
                            
                            if (eax_11.b != 0x20 && eax_11.b != 9)
                                break
                            
                            void* temp7_1 = var_230_1
                            var_230_1 -= 1
                            
                            if (temp7_1 == 1)
                                goto label_419392
                            
                            var_22c_1 = &var_22c_1[1]
                        
                        int32_t var_18
                        __builtin_strncpy(&var_18, "32-b", 4)
                        void var_14
                        void* edi_3 = &var_14
                        char const* const esi_2 = "it_rle_rgbe"
                        *edi_3 = *esi_2
                        void* edi_4 = edi_3 + 4
                        void* esi_3 = &esi_2[4]
                        *edi_4 = *esi_3
                        *(edi_4 + 4) = *(esi_3 + 4)
                        int32_t var_28
                        __builtin_strncpy(&var_28, "32-b", 4)
                        void var_24
                        void* edi_7 = &var_24
                        char const* const esi_6 = "it_rle_xyze"
                        *edi_7 = *esi_6
                        void* edi_8 = edi_7 + 4
                        void* esi_7 = &esi_6[4]
                        *edi_8 = *esi_7
                        *(edi_8 + 4) = *(esi_7 + 4)
                        
                        if (var_230_1 s< 0x10)
                            break
                        
                        char* esi_10 = var_22c_1
                        i = 0xf
                        int32_t* edi_11 = &var_18
                        bool cond:14_1 = true
                        
                        while (i != 0)
                            char temp9_1 = *esi_10
                            char temp10_1 = *edi_11
                            cond:14_1 = temp9_1 == temp10_1
                            esi_10 = &esi_10[1]
                            edi_11 += 1
                            i -= 1
                            
                            if (temp9_1 != temp10_1)
                                break
                        
                        if (not(cond:14_1))
                            char* esi_11 = var_22c_1
                            i = 0xf
                            int32_t* edi_12 = &var_28
                            bool cond:16_1 = false
                            
                            while (i != 0)
                                char temp12_1 = *esi_11
                                char temp13_1 = *edi_12
                                cond:16_1 = temp12_1 != temp13_1
                                esi_11 = &esi_11[1]
                                edi_12 += 1
                                i -= 1
                                
                                if (temp12_1 != temp13_1)
                                    break
                            
                            if (cond:16_1)
                                break
                        
                        var_22c = &var_22c_1[0x10]
                        var_230 = var_230_1 - 0x10
                        var_250_1 = 1
                    
                    if (var_230 s> 0)
                        continue
                
                if (var_250_1 == 0)
                    break
                
                void* eax_28 = 0x100
                
                if (var_230 s<= 0x100)
                    eax_28 = var_230
                
                char* eax_29 = sub_41658d(var_22c, eax_28)
                
                if (eax_29 u> 2)
                    void* var_284_6 = var_22c
                    void* var_288_6 = &eax_29[1]
                    sub_4186b1(&var_128)
                    char var_127
                    int32_t var_258
                    bool var_239
                    char var_232_1
                    int32_t* eax_31
                    
                    if (var_127 == 0x59)
                        var_232_1 = 1
                        int32_t var_254
                        eax_31 = &var_254
                        bool var_231
                        
                        if (var_128 == 0x2d)
                            var_231 = false
                        label_418d70:
                            int32_t* var_284_7 = eax_31
                            char var_126[0xfa]
                            
                            if (sub_7621fb(&var_126, 0xab6dc8) == 1)
                                char i_2 = var_126[0]
                                char (* eax_33)[0xfa] = &var_126
                                
                                if (i_2 != 0)
                                    while (i_2 != 0x2d)
                                        if (i_2 == 0x2b)
                                            break
                                        
                                        eax_33 = &(*eax_33)[1]
                                        i_2 = *eax_33
                                        
                                        if (i_2 == 0)
                                            break
                                    
                                    i_2 = *eax_33
                                    
                                    if (i_2 != 0)
                                        int32_t* edi_15
                                        
                                        if (var_232_1 == 0)
                                            var_231 = i_2 == 0x2b
                                            edi_15 = &var_254
                                        else
                                            var_239 = i_2 == 0x2b
                                            edi_15 = &var_258
                                        
                                        i_2 = (*eax_33)[1]
                                        
                                        if (i_2 != 0 && (i_2 == 0x59 || i_2 == 0x58))
                                            int32_t* var_284_8 = edi_15
                                            
                                            if (sub_7621fb(&(*eax_33)[2], 0xab6dc8) == 1)
                                                int32_t edx_1 = var_254
                                                arg1[0xd] = 0
                                                void* var_230_3 = var_230 + 0xffffffff - eax_29
                                                int32_t ecx_4 = var_258
                                                arg1[3] = ecx_4
                                                int32_t eax_39 = ecx_4 << 4
                                                *arg1 = 0x74
                                                arg1[0xc] = eax_39
                                                arg1[4] = edx_1
                                                arg1[5] = 1
                                                
                                                if (ecx_4 * edx_1 != 0)
                                                    arg1[0xe] = 1
                                                    uint32_t eax_41 = sub_745f3f(eax_39 * edx_1)
                                                    arg1[1] = eax_41
                                                    
                                                    if (eax_41 != 0)
                                                        int32_t edi_16 = var_254
                                                        int32_t esi_15 = var_258
                                                        int32_t var_250_2 = edi_16
                                                        int32_t var_244_1
                                                        
                                                        if (var_232_1 != 0)
                                                            var_244_1 = esi_15
                                                        else
                                                            var_250_2 = esi_15
                                                            var_244_1 = edi_16
                                                        
                                                        uint32_t eax_44
                                                        uint32_t ecx_7
                                                        uint32_t esi_16
                                                        
                                                        if (var_232_1 == 0)
                                                            int32_t esi_17 = arg1[0xc]
                                                            
                                                            if (var_239 != 0)
                                                                eax_44 = 4
                                                                
                                                                if (var_231 == 0)
                                                                    esi_16 = esi_17 u>> 2
                                                                    ecx_7 = eax_41
                                                                else
                                                                    ecx_7 = (edi_16 - 1) * esi_17 + eax_41
                                                                    esi_16 = neg.d(esi_17) u>> 2
                                                            else if (var_231 == 0)
                                                                ecx_7 = esi_17 + eax_41 - 0x10
                                                                eax_44 = 0xfffffffc
                                                                esi_16 = esi_17 u>> 2
                                                            else
                                                                ecx_7 = esi_17 * edi_16 + eax_41 - 0x10
                                                                eax_44 = 0xfffffffc
                                                                esi_16 = neg.d(esi_17) u>> 2
                                                        else
                                                            int32_t eax_43 = arg1[0xc]
                                                            
                                                            if (var_239 == 0)
                                                                esi_16 = 0xfffffffc
                                                                
                                                                if (var_231 != 0)
                                                                    ecx_7 = eax_43 * edi_16 + eax_41 - 0x10
                                                                    eax_44 = neg.d(eax_43) u>> 2
                                                                else
                                                                    ecx_7 = eax_43 + eax_41 - 0x10
                                                                    eax_44 = eax_43 u>> 2
                                                            else
                                                                esi_16 = 4
                                                                
                                                                if (var_231 != 0)
                                                                    ecx_7 = (edi_16 - 1) * eax_43 + eax_41
                                                                    eax_44 = neg.d(eax_43) u>> 2
                                                                else
                                                                    eax_44 = eax_43 u>> 2
                                                                    ecx_7 = eax_41
                                                        
                                                        int32_t var_264_1 = 0
                                                        void* var_22c_4 = var_22c + eax_29 + 1
                                                        
                                                        if (var_250_2 s> 0)
                                                            void* var_25c_1 = ecx_7
                                                            
                                                            while (true)
                                                                if (var_230_3 s>= 4)
                                                                    int32_t ecx_14 = *var_22c_4
                                                                    var_22c_4 += 4
                                                                    var_230_3 -= 4
                                                                    void* i_6
                                                                    
                                                                    if (ecx_14.b != 2 && (ecx_14:1.b != 2
                                                                            || ecx_14:2.b u>= 0x80))
                                                                        uint32_t var_248_1 = 0
                                                                        void* eax_49 = var_25c_1
                                                                        void* edi_17 = 1
                                                                        long double x87_r7_4 =
                                                                            float.t(zx.d(ecx_14.b))
                                                                        long double x87_r6_1 =
                                                                            float.t(zx.d(ecx_14:1.b))
                                                                        ecx_7 = zx.d(ecx_14:3.b)
                                                                        long double x87_r5_1 =
                                                                            float.t(zx.d(ecx_14:2.b))
                                                                        long double x87_r4_1 = float.t(ecx_7)
                                                                        
                                                                        if (var_244_1 s> 1)
                                                                            do
                                                                                if (var_230_3 s< 4)
                                                                                    goto label_41937d
                                                                                
                                                                                i_6 = *var_22c_4
                                                                                var_22c_4 += 4
                                                                                var_230_3 -= 4
                                                                                
                                                                                if (i_6.b != 1 || i_6:1.b != i_6.b
                                                                                        || i_6:2.b != i_6.b)
                                                                                    var_248_1 = 0
                                                                                    x87_r7_4 = float.t(zx.d(i_6.b))
                                                                                    *eax_49 = fconvert.s(x87_r7_4)
                                                                                    x87_r6_1 = float.t(zx.d(i_6:1.b))
                                                                                    ecx_7 = zx.d(i_6:3.b)
                                                                                    *(eax_49 + 4) = fconvert.s(x87_r6_1)
                                                                                    x87_r5_1 = float.t(zx.d(i_6:2.b))
                                                                                    edi_17 += 1
                                                                                    *(eax_49 + 8) = fconvert.s(x87_r5_1)
                                                                                    x87_r4_1 = float.t(ecx_7)
                                                                                    *(eax_49 + 0xc) = fconvert.s(x87_r4_1)
                                                                                    eax_49 += esi_16 << 2
                                                                                else
                                                                                    ecx_7 = var_248_1
                                                                                    i_6 = zx.d(i_6:3.b) << ecx_7.b
                                                                                    edi_17 += i_6
                                                                                    
                                                                                    if (edi_17 s> var_244_1)
                                                                                        goto label_41937d
                                                                                    
                                                                                    if (i_6 s> 0)
                                                                                        ecx_7 = esi_16 << 2
                                                                                        void* i_3
                                                                                        
                                                                                        do
                                                                                            *eax_49 = fconvert.s(x87_r7_4)
                                                                                            *(eax_49 + 4) = fconvert.s(x87_r6_1)
                                                                                            *(eax_49 + 8) = fconvert.s(x87_r5_1)
                                                                                            *(eax_49 + 0xc) = fconvert.s(x87_r4_1)
                                                                                            eax_49 += ecx_7
                                                                                            i_3 = i_6
                                                                                            i_6 -= 1
                                                                                        while (i_3 != 1)
                                                                                    
                                                                                    var_248_1 += 8
                                                                            while (edi_17 s< var_244_1)
                                                                        
                                                                    label_419127:
                                                                        var_264_1 += 1
                                                                        var_25c_1 += eax_44 << 2
                                                                        
                                                                        if (var_264_1 s< var_250_2)
                                                                            continue
                                                                        
                                                                        edi_16 = var_254
                                                                        break
                                                                    else if ((zx.d(ecx_14:2.b) << 8)
                                                                            + zx.d(ecx_14:3.b) == var_244_1)
                                                                        int32_t i_4 = 0
                                                                        void* var_248_2 = var_25c_1
                                                                        
                                                                        do
                                                                            ecx_7 = 0
                                                                            void* var_240_3 = var_248_2
                                                                            
                                                                            if (var_244_1 s> 0)
                                                                                do
                                                                                    if (var_230_3 s< 2)
                                                                                        goto label_41937d
                                                                                    
                                                                                    i_6.b = *var_22c_4
                                                                                    
                                                                                    if (i_6.b u<= 0x80)
                                                                                        uint32_t j_4 = zx.d(i_6.b)
                                                                                        
                                                                                        if (var_230_3 s< j_4 + 1)
                                                                                            goto label_41937d
                                                                                        
                                                                                        ecx_7 += j_4
                                                                                        
                                                                                        if (ecx_7 s> var_244_1)
                                                                                            goto label_41937d
                                                                                        
                                                                                        if (i_6.b u> 0)
                                                                                            char* edx_6 = var_22c_4 + 1
                                                                                            uint32_t j_2 = j_4
                                                                                            uint32_t j
                                                                                            
                                                                                            do
                                                                                                void* edi_24 = var_240_3
                                                                                                var_240_3 += esi_16 << 2
                                                                                                long double x87_r7_24 =
                                                                                                    float.t(zx.d(*edx_6))
                                                                                                edx_6 = &edx_6[1]
                                                                                                j = j_2
                                                                                                j_2 -= 1
                                                                                                *edi_24 = fconvert.s(x87_r7_24)
                                                                                            while (j != 1)
                                                                                        
                                                                                        var_230_3 += 0xffffffff - j_4
                                                                                        var_22c_4 = var_22c_4 + j_4 + 1
                                                                                    else
                                                                                        i_6.b &= 0x7f
                                                                                        uint32_t j_3 = zx.d(i_6.b)
                                                                                        ecx_7 += j_3
                                                                                        
                                                                                        if (ecx_7 s> var_244_1)
                                                                                            goto label_41937d
                                                                                        
                                                                                        long double x87_r7_23 =
                                                                                            float.t(zx.d(*(var_22c_4 + 1)))
                                                                                        
                                                                                        if (i_6.b u> 0)
                                                                                            uint32_t j_1
                                                                                            
                                                                                            do
                                                                                                float* edi_21 = var_240_3
                                                                                                var_240_3 += esi_16 << 2
                                                                                                *edi_21 = fconvert.s(x87_r7_23)
                                                                                                j_1 = j_3
                                                                                                j_3 -= 1
                                                                                            while (j_1 != 1)
                                                                                        
                                                                                        var_22c_4 += 2
                                                                                        var_230_3 -= 2
                                                                                while (ecx_7 s< var_244_1)
                                                                            
                                                                            i_4 += 1
                                                                            var_248_2 += 4
                                                                        while (i_4 s< 4)
                                                                        
                                                                        goto label_419127
                                                                
                                                            label_41937d:
                                                                j__free(arg1[1])
                                                                arg1[1] = 0
                                                                goto label_419392
                                                        
                                                        int32_t i_5 = 0
                                                        
                                                        if (var_258 * edi_16 u> 0)
                                                            void* esi_19 = arg1[1] + 8
                                                            float var_24c_2 = fconvert.s(float.t(1)
                                                                / fconvert.t(var_24c_1))
                                                            
                                                            do
                                                                int16_t x87control
                                                                int32_t eax_54 = __ftol(x87control, 
                                                                    fconvert.t(*(esi_19 + 4)))
                                                                uint32_t var_288_7 = ecx_7
                                                                uint32_t var_28c_5 = ecx_7
                                                                var_28c_5.q = fconvert.d(
                                                                    fconvert.t(*(esi_19 - 8))
                                                                    + fconvert.t(0.5f))
                                                                int32_t ecx_22
                                                                long double st0_1
                                                                st0_1, ecx_22 = sub_76097a(
                                                                    eax_54 - 0x88, var_28c_5, eax_54 - 0x88)
                                                                *(esi_19 - 8) = fconvert.s(st0_1
                                                                    * fconvert.t(var_24c_2))
                                                                int32_t var_288_8 = ecx_22
                                                                int32_t var_28c_6 = ecx_22
                                                                var_28c_6.q = fconvert.d(
                                                                    fconvert.t(*(esi_19 - 4))
                                                                    + fconvert.t(0.5f))
                                                                int32_t ecx_23
                                                                long double st0_2
                                                                st0_2, ecx_23 = sub_76097a(
                                                                    eax_54 - 0x88, var_28c_6, eax_54 - 0x88)
                                                                *(esi_19 - 4) = fconvert.s(st0_2
                                                                    * fconvert.t(var_24c_2))
                                                                int32_t var_288_9 = ecx_23
                                                                int32_t var_28c_7 = ecx_23
                                                                var_28c_7.q = fconvert.d(
                                                                    fconvert.t(*esi_19) + fconvert.t(0.5f))
                                                                long double st0_3
                                                                st0_3, ecx_7, x87control = sub_76097a(
                                                                    eax_54 - 0x88, var_28c_7, eax_54 - 0x88)
                                                                i_5 += 1
                                                                *esi_19 = fconvert.s(st0_3
                                                                    * fconvert.t(var_24c_2))
                                                                esi_19 += 0x10
                                                                *(esi_19 - 0xc) = fconvert.s(float.t(1))
                                                            while (i_5 u< var_258 * var_254)
                        else if (var_128 == 0x2b)
                            var_231 = true
                            goto label_418d70
                    else if (var_127 == 0x58)
                        var_232_1 = 0
                        eax_31 = &var_258
                        
                        if (var_128 == 0x2d)
                            var_239 = false
                            goto label_418d70
                        
                        if (var_128 == 0x2b)
                            var_239 = true
                            goto label_418d70
                
                break

label_419392:
sub_745f2b(__security_cookie_1)
