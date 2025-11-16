// 函数: sub_45fa85
// 地址: 0x45fa85
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t* eax = arg4
int32_t ebx
int32_t var_530 = ebx
int32_t esi
int32_t var_534 = esi
int32_t ebx_1 = 0
int32_t edi
int32_t var_538 = edi
int16_t* i_15 = arg12
int16_t* i_17 = nullptr
int32_t* i_25 = nullptr
int32_t var_1c = 0
void* const var_18 = nullptr
int32_t* var_14 = eax
int32_t var_38 = 0
int32_t* i_24 = nullptr
int32_t var_34 = 0
void var_198
sub_4090b4(&var_198, i_15)
int16_t* i_18

if (arg7 == 0)
    i_15 = 2
    i_18 = i_15
else
    i_18 = *arg7

i_15 = i_18
int32_t var_b4
sub_4081c5(&var_b4, i_15)
int32_t var_d4[0x8]
i_15 = &var_d4
sub_4082be(&var_b4, i_15)
int32_t* esp_1 = &var_538
int32_t* i_12 = arg2
int32_t ecx_3 = 0
void* var_104
int32_t esi_11

if (i_12 u> 0)
    char* eax_4 = *arg1 + 0xc
    int32_t* i
    
    do
        if ((*eax_4 & 8) != 0)
            ecx_3 = 1
        
        eax_4 = &eax_4[0x2c]
        i = i_12
        i_12 -= 1
    while (i != 1)
    
    if (ecx_3 == 0 || var_104 == 0)
        goto label_45fcad
    
    int32_t var_8_1 = 0
    
    while (true)
        int32_t* edx_1 = *arg1 + ebx_1
        
        if ((edx_1[3].b & 8) != 0)
            int32_t esi_1 = *arg3
            float* eax_9 = *edx_1 * 0x44 + esi_1
            float* ecx_6 = edx_1[1] * 0x44 + esi_1
            float* edx_4 = edx_1[2] * 0x44 + esi_1
            float var_74_1 = fconvert.s(fconvert.t(*eax_9) - fconvert.t(*ecx_6))
            float var_70 = fconvert.s(fconvert.t(eax_9[1]) - fconvert.t(ecx_6[1]))
            float var_6c = fconvert.s(fconvert.t(eax_9[2]) - fconvert.t(ecx_6[2]))
            float var_40
            int32_t* edi_1 = &var_40
            float* esi_2 = &var_70
            long double x87_r7_8 = fconvert.t(*eax_9) - fconvert.t(*edx_4)
            *edi_1 = *esi_2
            float var_5c_1 = fconvert.s(x87_r7_8)
            long double x87_r7_9 = fconvert.t(eax_9[1])
            edi_1[1] = esi_2[1]
            float var_58 = fconvert.s(x87_r7_9 - fconvert.t(edx_4[1]))
            float var_54 = fconvert.s(fconvert.t(eax_9[2]) - fconvert.t(edx_4[2]))
            float var_4c
            float* edi_4 = &var_4c
            float* esi_5 = &var_58
            *edi_4 = *esi_5
            edi_4[1] = esi_5[1]
            float var_48
            float var_3c
            float var_68_1 = fconvert.s(fconvert.t(var_48) * fconvert.t(var_40)
                - fconvert.t(var_4c) * fconvert.t(var_3c))
            float var_64 = fconvert.s(fconvert.t(var_3c) * fconvert.t(var_5c_1)
                - fconvert.t(var_48) * fconvert.t(var_74_1))
            float var_60 = fconvert.s(fconvert.t(var_4c) * fconvert.t(var_74_1)
                - fconvert.t(var_40) * fconvert.t(var_5c_1))
            float var_30 = var_68_1
            float var_2c
            int32_t* edi_7 = &var_2c
            float* esi_8 = &var_64
            *edi_7 = *esi_8
            edi_7[1] = esi_8[1]
            float var_28
            long double x87_r7_27 = fconvert.t(1f) / sqrt(fconvert.t(var_30) * fconvert.t(var_30)
                + fconvert.t(var_28) * fconvert.t(var_28)
                + fconvert.t(var_2c) * fconvert.t(var_2c))
            var_30 = fconvert.s(fconvert.t(var_30) * x87_r7_27)
            var_2c = fconvert.s(fconvert.t(var_2c) * x87_r7_27)
            int32_t* edi_10 = nullptr
            var_28 = fconvert.s(fconvert.t(var_28) * x87_r7_27)
            
            while (true)
                void* eax_11 = *arg1
                i_15 = &var_14
                void* eax_12 = eax_11 + ebx_1
                esp_1 = &var_538
                esi_11 = sub_45f869(eax_12, edi_10, *(eax_12 + 0x28), &var_30, arg3, &arg4, i_15)
                
                if (esi_11 s< 0)
                    break
                
                edi_10 += 1
                
                if (edi_10 u>= 3)
                    goto label_45fc3f
            
            break
        
    label_45fc3f:
        var_8_1 += 1
        ebx_1 += 0x2c
        
        if (var_8_1 u>= arg2)
            if (arg4 u> 0)
                int32_t* i_13 = arg4
                int32_t ecx_8 = 0
                int32_t* i_1
                
                do
                    void* eax_17 = *arg3 + ecx_8
                    
                    if (*(eax_17 + 0x3c) u> 1)
                        *(eax_17 + 0x2c)
                        *(eax_17 + 0x28)
                        long double x87_r7_30 = fconvert.t(1f) / fconvert.t(*(eax_17 + 0x24))
                        *(eax_17 + 0x24) = fconvert.s(x87_r7_30 * fconvert.t(*(eax_17 + 0x24)))
                        *(eax_17 + 0x28) = fconvert.s(x87_r7_30 * fconvert.t(*(eax_17 + 0x28)))
                        *(eax_17 + 0x2c) = fconvert.s(x87_r7_30 * fconvert.t(*(eax_17 + 0x2c)))
                    
                    ecx_8 += 0x44
                    i_1 = i_13
                    i_13 -= 1
                while (i_1 != 1)
            
            goto label_45fcad
    
    goto label_460343

label_45fcad:
int32_t edi_11 = 0
void* var_100
int32_t var_8_2

if (var_100 != 0)
    var_8_2 = 0

if (var_100 != 0 && arg2 u> 0)
    while (true)
        if ((*(*arg1 + edi_11 + 0xc) & 1) != 0)
            int32_t* ebx_2 = nullptr
            
            while (true)
                void* eax_21 = *arg1
                i_15 = &var_14
                void* eax_22 = eax_21 + edi_11
                esp_1 = &var_538
                esi_11 = sub_45f5b4(eax_22, ebx_2, eax_22 + 0x10, arg3, &arg4, i_15)
                
                if (esi_11 s< 0)
                    break
                
                ebx_2 += 1
                
                if (ebx_2 u>= 3)
                    goto label_45fcfa
            
            break
        
    label_45fcfa:
        var_8_2 += 1
        edi_11 += 0x2c
        
        if (var_8_2 u>= arg2)
            goto label_45fd08
    
    goto label_460343

label_45fd08:
int32_t* i_11 = arg4

if (i_11 u> 0)
    int32_t eax_25 = 0
    int32_t* i_2
    
    do
        *(eax_25 + *arg3 + 0x38) = 0
        eax_25 += 0x44
        i_2 = i_11
        i_11 -= 1
    while (i_2 != 1)

int32_t var_8_3 = 0
void* var_f8

if (arg6 u> 0)
    int16_t* edi_13 = &arg5[2]
    
    while (true)
        int32_t* eax_26
        eax_26.w = *edi_13
        void* temp3_1 = eax_26 & 1
        arg5 = temp3_1
        
        if (temp3_1 != 0 || (eax_26.b & 2) != 0)
            int32_t eax_27 = *(edi_13 - 4)
            
            if (eax_27 u< arg2)
                int32_t* esi_12 = eax_27 * 0x2c + *arg1
                
                if (*esi_12 != 0xffffffff)
                    i_15 = *arg3
                    float* eax_29 = sub_45ec95(esi_12, *(edi_13 - 8), i_15)
                    void* edx_7 = nullptr
                    
                    if (arg5.w != 0 && var_104 != 0)
                        edx_7 = &edi_13[6]
                    
                    void* ecx_13 = nullptr
                    
                    if ((*edi_13 & 2) != 0 && var_f8 != 0)
                        ecx_13 = &edi_13[2]
                    
                    i_15 = &var_14
                    esp_1 = &var_538
                    esi_11 = sub_45f6f1(esi_12, eax_29, edx_7, ecx_13, arg3, &arg4, i_15)
                    
                    if (esi_11 s< 0)
                        break
        
        var_8_3 += 1
        edi_13 = &edi_13[0x10]
        
        if (var_8_3 u>= arg6)
            goto label_45fdcf
    
    goto label_460343

label_45fdcf:

if (arg2 u>= 0xffff || arg4 u>= 0xffff)
    arg11 |= 1

int32_t ecx_14 = 0
arg5 = nullptr

if (arg2 u<= 0)
label_460339:
    esi_11 = 0x88760b5a
label_460343:
    
    if (var_1c != 0)
        int32_t* i_33 = i_25
        int32_t ecx_69 = *i_33
        *(esp_1 - 4) = i_33
        (*(ecx_69 + 0x64))()
    
    if (var_18 != 0)
        int32_t* i_34 = i_25
        int32_t ecx_70 = *i_34
        *(esp_1 - 4) = i_34
        (*(ecx_70 + 0x48))()
    
    *(esp_1 - 4) = var_38
    j__free()
    *(esp_1 - 8) = var_34
    j__free()
    int32_t* i_35 = i_24
    *(esp_1 - 4)
    
    if (i_35 != 0)
        int32_t ecx_72 = *i_35
        *(esp_1 - 4) = i_35
        (*(ecx_72 + 8))()
        i_24 = nullptr
    
    if (i_17 != 0)
        int32_t* i_36 = i_25
        int32_t ecx_73 = *i_36
        *(esp_1 - 4) = i_36
        (*(ecx_73 + 0x40))()
    
    if (esi_11 s< 0)
        int32_t* i_37 = i_25
        
        if (i_37 != 0)
            int32_t ecx_74 = *i_37
            *(esp_1 - 4) = i_37
            (*(ecx_74 + 8))()
else
    arg6 = arg2
    int32_t* i_3
    
    do
        int32_t* eax_33 = *arg1 + ecx_14
        int32_t edx_9 = *eax_33
        int32_t edi_14 = eax_33[1]
        int32_t ebx_4
        
        if (edx_9 != edi_14)
            ebx_4 = eax_33[2]
        
        if (edx_9 == edi_14 || edx_9 == ebx_4 || edi_14 == ebx_4)
            *eax_33 = 0xffffffff
            *(*arg1 + ecx_14 + 4) = 0xffffffff
            *(*arg1 + ecx_14 + 8) = 0xffffffff
        else
            arg5 += 1
        
        ecx_14 += 0x2c
        i_3 = arg6
        arg6 -= 1
    while (i_3 != 1)
    
    if (arg5 == 0 || arg4 == 0)
        goto label_460339
    
    i_15 = &i_25
    esp_1 = &var_538
    esi_11 = sub_41237d(arg5, arg4, arg11, arg12, arg13, i_15)
    
    if (esi_11 s< 0)
        goto label_460343
    
    int32_t* i_28 = i_25
    int32_t ecx_15 = *i_28
    i_15 = &i_17
    int32_t var_540_6 = 0
    esp_1 = &var_538
    esi_11 = (*(ecx_15 + 0x3c))(i_28, 0, i_15)
    
    if (esi_11 s< 0)
        goto label_460343
    
    if (var_f8 == 0)
        var_14 = nullptr
    else
        i_15 = nullptr
        int32_t var_540_7 = 5
        bool cond:4_1 = sub_4085d9(&var_198, 5, i_15)[2].b == 1
        var_14 = 1
        
        if (not(cond:4_1))
            var_14 = nullptr
    
    int32_t* i_16 = arg4
    int16_t* i_27 = i_17
    
    if (i_16 u> 0)
        arg6 = nullptr
        int32_t* i_9 = i_16
        int32_t* i_4
        
        do
            int32_t* ecx_17 = arg3
            int32_t* eax_39 = arg6
            int32_t* esi_15 = *ecx_17 + eax_39
            void* var_110
            int32_t* edi_16 = zx.d(*(var_110 + 2)) + i_27
            *edi_16 = *esi_15
            void* edi_17 = &edi_16[1]
            void* esi_16 = &esi_15[1]
            *edi_17 = *esi_16
            *(edi_17 + 4) = *(esi_16 + 4)
            
            if (var_104 != 0)
                int32_t* esi_20 = *ecx_17 + eax_39 + 0x24
                int32_t* edi_21 = zx.d(*(var_104 + 2)) + i_27
                *edi_21 = *esi_20
                void* edi_22 = &edi_21[1]
                void* esi_21 = &esi_20[1]
                *edi_22 = *esi_21
                *(edi_22 + 4) = *(esi_21 + 4)
            
            if (var_100 != 0)
                i_15 = *arg3 + arg6 + 0xc
                *(zx.d(*(var_100 + 2)) + i_27) = sub_45ecc4(i_15)
                eax_39 = arg6
                ecx_17 = arg3
            
            if (var_14 != 0)
                int32_t ecx_20 = *ecx_17
                uint32_t edx_13 = zx.d(*(var_f8 + 2))
                *(edx_13 + i_27) = *(ecx_20 + eax_39 + 0x1c)
                *(edx_13 + i_27 + 4) = *(ecx_20 + eax_39 + 0x20)
            
            if (arg7 != 0)
                int32_t* edx_16 = arg7[2] + (((arg7[1] u>> 2) * *(*arg3 + arg6 + 0x40)) << 2)
                arg13 = edx_16
                int32_t var_7c
                
                if (var_7c u> 0)
                    int32_t eax_48 = var_b4 & 0x9000
                    i_15 = nullptr
                    int16_t* ecx_24
                    ecx_24.b = eax_48 != 0
                    void* eax_50 = var_7c - ecx_24
                    int32_t eax_51 = neg.d(eax_50)
                    int32_t eax_54 = neg.d(sbb.d(eax_51, eax_51, eax_50 != 0)) << 2
                    arg13 = eax_54
                    void* var_108
                    int32_t esi_28
                    int32_t edi_27
                    edi_27, esi_28 =
                        __builtin_memcpy(zx.d(*(var_108 + 2)) + i_27, edx_16, eax_54 u>> 2 << 2)
                    edx_16 = &edx_16[neg.d(sbb.d(eax_51, eax_51, eax_50 != 0))]
                    __builtin_memcpy(edi_27, esi_28, eax_54 & 3)
                    arg13 = edx_16
                    
                    if (eax_48 != 0)
                        *(zx.d(*(var_108 + 2)) + i_27) = *edx_16
                
                int32_t var_ac
                
                if (var_ac u> 0)
                    i_15 = arg13
                    sub_40b004(&var_198, i_27, i_15)
                    edx_16 = &arg13[3]
                
                int32_t var_a4
                
                if (var_a4 u> 0)
                    *(zx.d(*(var_100 + 2)) + i_27) = *edx_16
                    edx_16 = &edx_16[1]
                
                int32_t var_a0
                
                if (var_a0 u> 0)
                    void* var_fc
                    *(zx.d(*(var_fc + 2)) + i_27) = *edx_16
                    edx_16 = &edx_16[1]
                
                float var_78
                
                if (var_78 u> 0)
                    int32_t eax_60 = 0
                    int32_t var_8_5 = 0
                    
                    if (var_78 u> 0)
                        int32_t __saved_ebp
                        arg13 = &(&__saved_ebp)[arg7[3] - 0x3d]
                        bool cond:13_1
                        
                        do
                            int32_t ecx_37 = var_d4[eax_60]
                            uint32_t edi_28 = zx.d(*(*arg13 + 2))
                            arg13 = &arg13[1]
                            int32_t esi_32
                            int32_t edi_30
                            edi_30, esi_32 =
                                __builtin_memcpy(edi_28 + i_27, edx_16, ecx_37 u>> 2 << 2)
                            edx_16 += var_d4[var_8_5]
                            eax_60 = var_8_5 + 1
                            cond:13_1 = eax_60 u< var_78
                            __builtin_memcpy(edi_30, esi_32, ecx_37 & 3)
                            var_8_5 = eax_60
                        while (cond:13_1)
            
            arg6 = &arg6[0x11]
            int32_t var_d8
            i_27 += var_d8
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    if (arg8 != 0)
        i_15 = arg12
        void var_52c
        sub_409105(&var_52c, arg8, i_15)
        i_15 = i_17
        sub_408746(&var_52c, *(arg8 + 0x2cc), i_15)
        int32_t esi_34 = 0
        
        if (arg4 u> 0)
            do
                i_15 = nullptr
                sub_408771(&var_52c, esi_34, esi_34, i_15)
                esi_34 += 1
            while (esi_34 u< arg4)
    
    int32_t* i_29 = i_25
    int32_t ecx_44 = *i_29
    i_15 = &var_18
    int32_t var_540_12 = 0
    esp_1 = &var_538
    esi_11 = (*(ecx_44 + 0x44))(i_29, 0, i_15)
    
    if (esi_11 s< 0)
        goto label_460343
    
    int32_t* i_30 = i_25
    int32_t ecx_45 = *i_30
    i_15 = &var_1c
    int32_t var_540_13 = 0
    esp_1 = &var_538
    esi_11 = (*(ecx_45 + 0x60))(i_30, 0, i_15)
    
    if (esi_11 s< 0)
        goto label_460343
    
    int32_t* i_14 = arg2
    int32_t* esi_35 = nullptr
    int32_t edx_17 = 0
    arg7 = i_14
    int32_t* i_5
    
    do
        int32_t* ecx_47 = *arg1 + edx_17
        
        if (*ecx_47 != 0xffffffff)
            if ((ecx_47[3].b & 4) == 0)
                *(esi_35 + var_1c) = 0
            else
                *(esi_35 + var_1c) = ecx_47[9]
            
            esi_35 = &esi_35[1]
        
        edx_17 += 0x2c
        i_5 = arg7
        arg7 -= 1
    while (i_5 != 1)
    void* const ecx_50 = var_18
    
    if ((arg11.b & 1) == 0)
        void* ecx_52 = ecx_50 + 4
        int32_t edx_19 = 0
        int32_t* i_6
        
        do
            int32_t* esi_43 = *arg1 + edx_19
            
            if (*esi_43 != 0xffffffff)
                esi_43.w = *esi_43
                *(ecx_52 - 4) = esi_43.w
                int32_t esi_44
                esi_44.w = *(*arg1 + edx_19 + 4)
                *(ecx_52 - 2) = esi_44.w
                int32_t esi_45
                esi_45.w = *(*arg1 + edx_19 + 8)
                *ecx_52 = esi_45.w
                ecx_52 += 6
            
            edx_19 += 0x2c
            i_6 = i_14
            i_14 -= 1
        while (i_6 != 1)
    else
        void* ecx_51 = ecx_50 + 8
        int32_t* edx_18 = nullptr
        int32_t* i_7
        
        do
            int32_t esi_37 = *(edx_18 + *arg1)
            
            if (esi_37 != 0xffffffff)
                *(ecx_51 - 8) = esi_37
                *(ecx_51 - 4) = *(*arg1 + edx_18 + 4)
                *ecx_51 = *(*arg1 + edx_18 + 8)
                ecx_51 += 0xc
            
            edx_18 = &edx_18[0xb]
            i_7 = i_14
            i_14 -= 1
        while (i_7 != 1)
    
    int32_t* i_19 = i_25
    int32_t ecx_53 = *i_19
    i_15 = i_19
    (*(ecx_53 + 0x64))(i_15)
    int32_t* i_20 = i_25
    var_1c = 0
    int32_t ecx_54 = *i_20
    i_15 = i_20
    (*(ecx_54 + 0x48))(i_15)
    int32_t* i_21 = i_25
    var_18 = nullptr
    int32_t ecx_55 = *i_21
    i_15 = i_21
    (*(ecx_55 + 0x40))(i_15)
    esp_1 = &var_538
    i_17 = nullptr
    
    if (arg15 == 0)
        goto label_460307
    
    i_15 = &i_24
    int32_t edi_32 = arg5 * 0xc
    int32_t var_540_14 = edi_32
    esp_1 = &var_538
    esi_11 = sub_458de2()
    
    if (esi_11 s< 0)
        goto label_460343
    
    int32_t* i_22 = i_24
    int32_t ecx_56 = *i_22
    i_15 = i_22
    int32_t* i_23 = (*(ecx_56 + 0xc))(i_15)
    int32_t* esi_46 = arg4
    i_15 = esi_46 << 2
    int32_t eax_72 = sub_745f3f(i_15)
    esp_1 = &var_538
    var_38 = eax_72
    
    if (eax_72 == 0)
    label_460203:
        esi_11 = 0x8007000e
        goto label_460343
    
    int32_t ecx_58 = 0
    
    if (esi_46 u> 0)
        int32_t edx_20 = 0
        
        do
            *(eax_72 + (ecx_58 << 2)) = *(*arg3 + edx_20 + 0x30)
            ecx_58 += 1
            edx_20 += 0x44
        while (ecx_58 u< esi_46)
    
    if (arg10 != 0)
        if (arg5 == arg2)
            int32_t esi_48
            int32_t edi_34
            edi_34, esi_48 = __builtin_memcpy(i_23, arg10, edi_32 u>> 2 << 2)
            __builtin_memcpy(edi_34, esi_48, edi_32 & 3)
            goto label_4602f6
        
        i_15 = arg2 << 2
        int32_t eax_77 = sub_745f3f(i_15)
        esp_1 = &var_538
        var_34 = eax_77
        
        if (eax_77 == 0)
            goto label_460203
        
        int32_t esi_49 = 0
        int32_t ecx_64 = 0
        int32_t* edx_21 = nullptr
        
        do
            if (*(edx_21 + *arg1) != 0xffffffff)
                *(eax_77 + (ecx_64 << 2)) = esi_49
                esi_49 += 1
            else
                *(eax_77 + (ecx_64 << 2)) = 0xffffffff
            
            ecx_64 += 1
            edx_21 = &edx_21[0xb]
        while (ecx_64 u< arg2)
        
        int32_t* i_26 = i_23
        int32_t edi_36 = 0
        arg4 = arg10
        
        do
            if (*(eax_77 + (edi_36 << 2)) != 0xffffffff)
                int32_t* esi_50 = arg4
                i_15 = 3
                int16_t* i_10 = i_15
                esp_1 = &var_538
                int16_t* i_8
                
                do
                    int32_t edx_22 = *esi_50
                    
                    if (edx_22 == 0xffffffff)
                        *i_26 = 0xffffffff
                    else
                        *i_26 = *(eax_77 + (edx_22 << 2))
                    
                    esi_50 = &esi_50[1]
                    i_26 = &i_26[1]
                    i_8 = i_10
                    i_10 -= 1
                while (i_8 != 1)
            
            arg4 = &arg4[3]
            edi_36 += 1
        while (edi_36 u< arg2)
        
        goto label_4602f6
    
    i_15 = i_23
    int32_t eax_81
    
    if (arg9 == 0)
        int32_t* i_31 = i_25
        int32_t ecx_65 = *i_31
        int32_t var_540_16 = ecx_65
        eax_81 = (*(ecx_65 + 0x58))(i_31, fconvert.s(float.t(0)))
        esp_1 = &i_15
    else
        int32_t* i_38 = i_25
        eax_81 = (*(*i_38 + 0x50))(i_38, eax_72)
        esp_1 = &i_15
    
    esi_11 = eax_81
    
    if (esi_11 s< 0)
        goto label_460343
    
label_4602f6:
    int32_t* i_32 = i_24
    i_24 = nullptr
    *arg15 = i_32
label_460307:
    int32_t* eax_83 = *arg15
    int32_t eax_84
    
    if (eax_83 == 0)
        eax_84 = 0
    else
        int32_t ecx_67 = *eax_83
        *(esp_1 - 4) = eax_83
        eax_84 = (*(ecx_67 + 0xc))()
    
    int32_t* i_39 = i_25
    int32_t edx_25 = *i_39
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0
    *(esp_1 - 0xc) = eax_84
    *(esp_1 - 0x10) = eax_84
    *(esp_1 - 0x14) = 0x32000000
    *(esp_1 - 0x18) = i_39
    esi_11 = (*(edx_25 + 0x6c))()
    
    if (esi_11 s>= 0)
        *arg14 = i_25
        goto label_460343

*esp_1
esp_1[1]
esp_1[2]
