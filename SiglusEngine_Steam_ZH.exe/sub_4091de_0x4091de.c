// 函数: sub_4091de
// 地址: 0x4091de
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_35c = edi
int32_t** var_12c = arg8
int32_t var_a4_1
__builtin_memset(&var_a4_1, 0, 0x18)
int32_t var_104 = 0
int32_t var_e4 = 0
void* var_48 = nullptr
void* var_30 = nullptr
int32_t* var_78 = nullptr
int32_t* var_50 = nullptr
int32_t* var_74 = nullptr
void* i_39 = nullptr
int16_t* var_68 = nullptr
int32_t var_c0 = 0
int32_t var_ec = 0
void*** var_84 = nullptr
void*** var_88 = nullptr
int32_t* var_60 = nullptr
void* var_fc = nullptr
int32_t var_7c = 0
int32_t var_64 = 0
int32_t var_dc = 0

if (arg4 != 0)
    *arg4 = 0

if (arg5 != 0)
    *arg5 = 0

if (arg6 != 0)
    *arg6 = 0

int32_t result

if (arg8 == 0)
    result = 0x8876086c
else
    *arg8 = 0
    
    if (arg9 != 0)
        *arg9 = 0
    
    if (arg10 != 0)
        *arg10 = 0
    
    if (arg11 != 0)
        *arg11 = 0
    
    if (arg12 != 0)
        *arg12 = 0
    
    if (arg13 != 0)
        *arg13 = 0
    
    if (arg14 != 0)
        *arg14 = 0
    
    char* esi_2 = __strdup(sub_761a44(4, nullptr))
    char* var_118_1 = esi_2
    
    if (esi_2 == 0)
        sub_761a44(4, &data_ab55ec)
    else
        void* const edi_9 = &data_ab55ec
        int32_t i = 2
        bool cond:4_1 = true
        
        while (i != 0)
            char temp3_1 = *esi_2
            char temp4_1 = *edi_9
            cond:4_1 = temp3_1 == temp4_1
            esi_2 = &esi_2[1]
            edi_9 += 1
            i -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        if (not(cond:4_1))
            sub_761a44(4, &data_ab55ec)
    
    int32_t* var_80
    uint32_t var_24
    int32_t result_2 = (*(*arg1 + 0x18))(arg1, &var_24, &var_80)
    int32_t result_1 = result_2
    void* var_a0_1
    void** var_98_1
    int32_t* var_94
    int32_t* var_90
    
    if (result_2 s>= 0)
        if (var_24 u< 4)
        labelid_28f:
            result_1 = 0x80004005
        else
            int32_t* ecx_3 = var_80
            void* i_40 = *ecx_3
            int32_t esi_4 = i_40 * 0xc
            int32_t eax_12 = esi_4 + 8
            int32_t var_3c_1 = esi_4
            
            if (var_24 u< eax_12)
            label_40a56a:
                result_1 = 0x80004005
            else
                void* eax_13 = esi_4 + ecx_3
                int32_t edi_10 = *(eax_13 + 4)
                int32_t* var_d4_1 = nullptr
                
                if (i_40 == 0 || edi_10 == 0)
                    result_1 = 0x88760b5a
                label_40a57a:
                    
                    if (var_60 != 0)
                        sub_409190(var_60, 3)
                else
                    uint32_t edx_1 = var_24
                    
                    if (edx_1 u< ((i_40 * 3 + edi_10) << 2) + 8)
                    label_40a56a_1:
                        result_1 = 0x80004005
                    else
                        void* ecx_4 = ecx_3 + edx_1
                        int32_t edx_2 = edi_10
                        void* eax_14 = eax_13 + 8
                        int32_t* i_38 = nullptr
                        int32_t var_1c_1 = 0
                        
                        if (edx_2 u> 0)
                            while (eax_14 u< ecx_4)
                                if (eax_14 - ecx_4 u< 4)
                                    goto label_40a56a_2
                                
                                int32_t edx_5 = *eax_14
                                
                                if (edx_5 u< 3)
                                    goto label_40a56a_2
                                
                                var_1c_1 += 1
                                eax_14 = eax_14 + (edx_5 << 2) + 4
                                edx_2 = edi_10
                                i_38 = i_38 + edx_5 - 2
                                
                                if (var_1c_1 u>= edx_2)
                                    break
                        
                        if (var_1c_1 != edx_2 || eax_14 != ecx_4)
                        label_40a56a_2:
                            result_1 = 0x80004005
                        else
                            int32_t result_3 = sub_45f2ab(&var_30, i_40)
                            result_1 = result_3
                            
                            if (result_3 s>= 0)
                                int32_t* ecx_6 = &var_80[1]
                                float var_b0
                                
                                if (i_40 u> 0)
                                    void* i_30 = i_40
                                    float var_b4_1 = fconvert.s(float.t(1))
                                    void* eax_15 = nullptr
                                    var_b0 = fconvert.s(float.t(1))
                                    float var_ac_1 = fconvert.s(float.t(1))
                                    float var_a8_1 = fconvert.s(float.t(0))
                                    void* i_1
                                    
                                    do
                                        int32_t* edi_16 = eax_15 + var_30
                                        *edi_16 = *ecx_6
                                        void* edi_17 = &edi_16[1]
                                        void* esi_7 = &ecx_6[1]
                                        *edi_17 = *esi_7
                                        *(edi_17 + 4) = *(esi_7 + 4)
                                        float* edi_20 = eax_15 + var_30 + 0xc
                                        *edi_20 = var_b4_1
                                        void* edi_21 = &edi_20[1]
                                        float* esi_11 = &var_b0
                                        *edi_21 = *esi_11
                                        void* edi_22 = edi_21 + 4
                                        void* esi_12 = &esi_11[1]
                                        *edi_22 = *esi_12
                                        eax_15 += 0x44
                                        ecx_6 = &ecx_6[3]
                                        i_1 = i_30
                                        i_30 -= 1
                                        *(edi_22 + 4) = *(esi_12 + 4)
                                    while (i_1 != 1)
                                    esi_4 = var_3c_1
                                
                                int32_t result_4 = sub_45f3ae(&var_48, i_38)
                                result_1 = result_4
                                
                                if (result_4 s>= 0)
                                    int32_t* eax_17 = esi_4 + var_80 + 8
                                    int32_t* var_54_1 = eax_17
                                    int32_t var_1c_2 = 0
                                    int32_t var_34_1 = 0
                                    int32_t var_110
                                    
                                    if (edi_10 u> 0)
                                        do
                                            int32_t edx_6 = *eax_17
                                            var_110 = eax_17[1]
                                            int32_t var_44_1 = edx_6
                                            int32_t var_28_1 = 0
                                            
                                            if (edx_6 - 2 u> 0)
                                                int32_t* edx_8 = var_34_1 * 0x2c
                                                int32_t* var_5c_1 = edx_8
                                                void* ecx_9 = &eax_17[3]
                                                
                                                while (true)
                                                    int32_t var_10c_1 = *(ecx_9 - 4)
                                                    int32_t var_108_1 = *ecx_9
                                                    
                                                    for (int32_t i_2 = 0; i_2 u< 3; )
                                                        int32_t esi_18 = (&var_110)[i_2]
                                                        *(edx_8 + var_48) = esi_18
                                                        
                                                        if (esi_18 u>= i_40)
                                                            goto label_40a56a_2
                                                        
                                                        i_2 += 1
                                                        edx_8 = &edx_8[1]
                                                    
                                                    var_34_1 += 1
                                                    var_5c_1 = &var_5c_1[0xb]
                                                    edx_6 = var_44_1
                                                    var_28_1 += 1
                                                    ecx_9 += 4
                                                    
                                                    if (var_28_1 u>= edx_6 - 2)
                                                        break
                                                    
                                                    edx_8 = var_5c_1
                                                
                                                esi_4 = var_3c_1
                                            
                                            var_1c_2 += 1
                                            eax_17 = &eax_17[edx_6 + 1]
                                            var_54_1 = eax_17
                                        while (var_1c_2 u< edi_10)
                                    
                                    uint32_t eax_21 = (eax_17 - esi_4 - var_80 - 8) u>> 2
                                    int32_t var_f4
                                    (*(*arg1 + 0x28))(arg1, &var_f4)
                                    int32_t var_5c_2 = 0
                                    int32_t* esi_87
                                    
                                    if (var_f4 u<= 0)
                                        esi_87 = var_90
                                    label_40a327:
                                        int32_t* i_34 = i_38
                                        
                                        if (i_34 u> 0)
                                            int32_t ecx_118 = 0
                                            int32_t* i_3
                                            
                                            do
                                                int32_t* eax_157 = var_48 + ecx_118
                                                
                                                if (*eax_157 != 0xffffffff)
                                                    eax_157[3].b |= 8
                                                    *(ecx_118 + var_48 + 0x28) = 1
                                                
                                                ecx_118 += 0x2c
                                                i_3 = i_34
                                                i_34 -= 1
                                            while (i_3 != 1)
                                    else
                                        while (true)
                                            int32_t result_5 =
                                                (*(*arg1 + 0x2c))(arg1, var_5c_2, &var_50)
                                            result_1 = result_5
                                            
                                            if (result_5 s< 0)
                                                goto label_40a57a
                                            
                                            int32_t* eax_24 = var_50
                                            void var_18
                                            int32_t result_6 = (*(*eax_24 + 0x20))(eax_24, &var_18)
                                            result_1 = result_6
                                            
                                            if (result_6 s< 0)
                                                goto label_40a57a
                                            
                                            int32_t* eax_25 = var_50
                                            int32_t* var_20
                                            int32_t result_7 =
                                                (*(*eax_25 + 0x18))(eax_25, &var_24, &var_20)
                                            result_1 = result_7
                                            
                                            if (result_7 s< 0)
                                                goto label_40a57a
                                            
                                            int32_t i_4 = 4
                                            void* const edi_26 = &data_ab5548
                                            void* esi_20 = &var_18
                                            bool cond:28_1 = false
                                            
                                            while (i_4 != 0)
                                                int32_t temp10_1 = *esi_20
                                                int32_t temp11_1 = *edi_26
                                                cond:28_1 = temp10_1 != temp11_1
                                                esi_20 += 4
                                                edi_26 += 4
                                                i_4 -= 1
                                                
                                                if (temp10_1 != temp11_1)
                                                    break
                                            
                                            if (not(cond:28_1))
                                                var_104 = 1
                                                
                                                if (var_24 u< 4)
                                                label_40a2fd:
                                                    result_1 = 0x80004005
                                                    goto label_40a57a
                                                
                                                void* i_28 = i_40
                                                
                                                if (*var_20 != i_28)
                                                    goto label_40a2fd
                                                
                                                var_20 = &var_20[1]
                                                
                                                if (var_24 u< (i_28 << 3) + 4)
                                                    goto label_40a2fd
                                                
                                                if (i_28 u> 0)
                                                    int32_t eax_28 = 0
                                                    void* i_5
                                                    
                                                    do
                                                        int32_t* edx_9 = var_20
                                                        *(eax_28 + var_30 + 0x1c) = *edx_9
                                                        *(eax_28 + var_30 + 0x20) = edx_9[1]
                                                        var_20 = &var_20[2]
                                                        eax_28 += 0x44
                                                        i_5 = i_28
                                                        i_28 -= 1
                                                    while (i_5 != 1)
                                                
                                                goto label_40a2bd
                                            
                                            int32_t i_6 = 4
                                            void* const edi_28 = &data_ab5578
                                            void* esi_23 = &var_18
                                            bool cond:32_1 = false
                                            
                                            while (i_6 != 0)
                                                int32_t temp12_1 = *esi_23
                                                int32_t temp13_1 = *edi_28
                                                cond:32_1 = temp12_1 != temp13_1
                                                esi_23 += 4
                                                edi_28 += 4
                                                i_6 -= 1
                                                
                                                if (temp12_1 != temp13_1)
                                                    break
                                            
                                            if (not(cond:32_1))
                                                int32_t eax_30 = *var_20
                                                var_20 = &var_20[1]
                                                int32_t var_28_2 = 0
                                                var_e4 = 1
                                                
                                                if (eax_30 u> 0)
                                                    long double x87_r7_5 = fconvert.t(1f)
                                                    long double x87_r6_1 = fconvert.t(0f)
                                                    long double x87_r5_1 = fconvert.t(255f)
                                                    long double x87_r4_1 = fconvert.t(0.5f)
                                                    long double x87_r3_1 =
                                                        fconvert.t(0.00392156886f)
                                                    
                                                    do
                                                        int32_t* ecx_15 = var_20
                                                        int32_t esi_24 = *ecx_15
                                                        var_20 = &ecx_15[1]
                                                        long double x87_r2_1 = fconvert.t(ecx_15[1])
                                                        var_20 = &ecx_15[2]
                                                        float edx_11 = ecx_15[2]
                                                        var_20 = &ecx_15[3]
                                                        var_b0 = edx_11
                                                        float edx_12 = ecx_15[3]
                                                        var_20 = &ecx_15[4]
                                                        float edx_13 = ecx_15[4]
                                                        var_20 = &ecx_15[5]
                                                        
                                                        if (esi_24 u>= i_40)
                                                            goto label_40a2fd
                                                        
                                                        x87_r2_1 - x87_r7_5
                                                        int32_t eax_31
                                                        eax_31.w =
                                                            (x87_r2_1 < x87_r7_5 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r2_1, x87_r7_5) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r2_1 == x87_r7_5 ? 1 : 0) << 0xe
                                                            | 0x1000
                                                        int32_t var_44_2
                                                        int16_t x87control
                                                        
                                                        if ((eax_31:1.b & 1) != 0)
                                                            x87_r2_1 - x87_r6_1
                                                            eax_31.w =
                                                                (x87_r2_1 < x87_r6_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r2_1, x87_r6_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r2_1 == x87_r6_1 ? 1 : 0) << 0xe
                                                                | 0x1000
                                                            bool p_1 =
                                                                unimplemented  {test ah, 0x41}
                                                            
                                                            if (p_1)
                                                                eax_31, x87control = __ftol(x87control, 
                                                                    x87_r2_1 * x87_r5_1 + x87_r4_1)
                                                                var_44_2 = eax_31
                                                            else
                                                                var_44_2 = 0
                                                                x87_r3_1 = x87_r2_1
                                                        else
                                                            x87_r3_1 = x87_r2_1
                                                            var_44_2 = 0xff
                                                        
                                                        long double x87_r2_4 = fconvert.t(var_b0)
                                                        x87_r2_4 - x87_r7_5
                                                        eax_31.w =
                                                            (x87_r2_4 < x87_r7_5 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r2_4, x87_r7_5) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r2_4 == x87_r7_5 ? 1 : 0) << 0xe
                                                            | 0x1800
                                                        int32_t ebx_1
                                                        
                                                        if ((eax_31:1.b & 1) != 0)
                                                            long double x87_r2_5 =
                                                                fconvert.t(var_b0)
                                                            x87_r2_5 - x87_r6_1
                                                            eax_31.w =
                                                                (x87_r2_5 < x87_r6_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r2_5, x87_r6_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r2_5 == x87_r6_1 ? 1 : 0) << 0xe
                                                                | 0x1800
                                                            bool p_2 =
                                                                unimplemented  {test ah, 0x41}
                                                            
                                                            if (p_2)
                                                                eax_31, x87control = __ftol(x87control, 
                                                                    fconvert.t(var_b0) * x87_r5_1
                                                                        + x87_r4_1)
                                                                ebx_1 = eax_31
                                                            else
                                                                ebx_1 = 0
                                                        else
                                                            ebx_1 = 0xff
                                                        
                                                        long double x87_r2_9 = fconvert.t(edx_12)
                                                        x87_r2_9 - x87_r7_5
                                                        eax_31.w =
                                                            (x87_r2_9 < x87_r7_5 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r2_9, x87_r7_5) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r2_9 == x87_r7_5 ? 1 : 0) << 0xe
                                                            | 0x1800
                                                        int32_t edi_29
                                                        
                                                        if ((eax_31:1.b & 1) != 0)
                                                            long double x87_r2_10 =
                                                                fconvert.t(edx_12)
                                                            x87_r2_10 - x87_r6_1
                                                            eax_31.w =
                                                                (x87_r2_10 < x87_r6_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r2_10, x87_r6_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r2_10 == x87_r6_1 ? 1 : 0)
                                                                << 0xe | 0x1800
                                                            bool p_3 =
                                                                unimplemented  {test ah, 0x41}
                                                            
                                                            if (p_3)
                                                                eax_31, x87control = __ftol(x87control, 
                                                                    fconvert.t(edx_12) * x87_r5_1
                                                                        + x87_r4_1)
                                                                edi_29 = eax_31
                                                            else
                                                                edi_29 = 0
                                                        else
                                                            edi_29 = 0xff
                                                        
                                                        long double x87_r2_14 = fconvert.t(edx_13)
                                                        x87_r2_14 - x87_r7_5
                                                        eax_31.w =
                                                            (x87_r2_14 < x87_r7_5 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r2_14, x87_r7_5) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r2_14 == x87_r7_5 ? 1 : 0)
                                                            << 0xe | 0x1800
                                                        int32_t eax_32
                                                        
                                                        if ((eax_31:1.b & 1) != 0)
                                                            long double x87_r2_15 =
                                                                fconvert.t(edx_13)
                                                            x87_r2_15 - x87_r6_1
                                                            eax_31.w =
                                                                (x87_r2_15 < x87_r6_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r2_15, x87_r6_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r2_15 == x87_r6_1 ? 1 : 0)
                                                                << 0xe | 0x1800
                                                            bool p_4 =
                                                                unimplemented  {test ah, 0x41}
                                                            
                                                            if (p_4)
                                                                eax_32, x87control = __ftol(x87control, 
                                                                    fconvert.t(edx_13) * x87_r5_1
                                                                        + x87_r4_1)
                                                            else
                                                                eax_32 = 0
                                                        else
                                                            eax_32 = 0xff
                                                        
                                                        int32_t eax_38 = (
                                                            (eax_32 << 8 | var_44_2) << 8 | ebx_1) << 8
                                                            | edi_29
                                                        float var_148_1 = fconvert.s(
                                                            float.t(zx.d((eax_38 u>> 0x10).b))
                                                            * x87_r3_1)
                                                        var_28_2 += 1
                                                        float var_144 = fconvert.s(
                                                            float.t(zx.d((eax_38 u>> 8).b))
                                                            * x87_r3_1)
                                                        float* edi_30 = esi_24 * 0x44 + var_30 + 0xc
                                                        float var_140_1 = fconvert.s(
                                                            float.t(zx.d(eax_38.b)) * x87_r3_1)
                                                        float var_13c_1 = fconvert.s(
                                                            float.t(eax_38 u>> 0x18) * x87_r3_1)
                                                        *edi_30 = var_148_1
                                                        void* edi_31 = &edi_30[1]
                                                        float* esi_26 = &var_144
                                                        *edi_31 = *esi_26
                                                        void* edi_32 = edi_31 + 4
                                                        void* esi_27 = &esi_26[1]
                                                        *edi_32 = *esi_27
                                                        *(edi_32 + 4) = *(esi_27 + 4)
                                                    while (var_28_2 u< eax_30)
                                                
                                                goto label_40a2bd
                                            
                                            int32_t i_7 = 4
                                            void* const edi_35 = &data_ab5558
                                            void* esi_30 = &var_18
                                            bool cond:36_1 = false
                                            
                                            while (i_7 != 0)
                                                int32_t temp15_1 = *esi_30
                                                int32_t temp16_1 = *edi_35
                                                cond:36_1 = temp15_1 != temp16_1
                                                esi_30 += 4
                                                edi_35 += 4
                                                i_7 -= 1
                                                
                                                if (temp15_1 != temp16_1)
                                                    break
                                            
                                            if (not(cond:36_1) && arg9 != 0 && *arg9 != 0)
                                                if (var_24 u< 4)
                                                    goto label_40a2fd
                                                
                                                int32_t* edx_14 = var_20
                                                int32_t ecx_29 = *edx_14
                                                bool cond:52_1 = var_24 u< ecx_29 * 0xc + 8
                                                var_a4_1 = 1
                                                
                                                if (cond:52_1 || edi_10 != edx_14[ecx_29 * 3 + 1]
                                                        || ecx_29 != i_40)
                                                    goto label_40a2fd
                                                
                                                void* ecx_30 = &edx_14[1]
                                                
                                                if (i_40 u> 0)
                                                    void* i_31 = i_40
                                                    int32_t eax_44 = 0
                                                    void* i_8
                                                    
                                                    do
                                                        int32_t* edi_36 = eax_44 + var_30 + 0x24
                                                        *edi_36 = *ecx_30
                                                        void* edi_37 = &edi_36[1]
                                                        void* esi_35 = ecx_30 + 4
                                                        *edi_37 = *esi_35
                                                        ecx_30 += 0xc
                                                        eax_44 += 0x44
                                                        i_8 = i_31
                                                        i_31 -= 1
                                                        *(edi_37 + 4) = *(esi_35 + 4)
                                                    while (i_8 != 1)
                                                
                                                goto label_40a2bd
                                            
                                            void* const edi_40 = &data_ab5558
                                            int32_t i_9 = 4
                                            void* esi_38 = &var_18
                                            bool cond:39_1 = false
                                            
                                            while (i_9 != 0)
                                                int32_t temp19_1 = *esi_38
                                                int32_t temp20_1 = *edi_40
                                                cond:39_1 = temp19_1 != temp20_1
                                                esi_38 += 4
                                                edi_40 += 4
                                                i_9 -= 1
                                                
                                                if (temp19_1 != temp20_1)
                                                    break
                                            
                                            int32_t var_130
                                            
                                            if (not(cond:39_1))
                                                void* eax_46 = i_38 * 3
                                                var_d4_1 = eax_46
                                                int32_t result_8 = sub_45f9d1(&var_78, eax_46)
                                                result_1 = result_8
                                                
                                                if (result_8 s< 0)
                                                    goto label_40a57a
                                                
                                                if (var_24 u< 4)
                                                    goto label_40a2fd
                                                
                                                int32_t* esi_39 = var_20
                                                int32_t ecx_31 = *esi_39
                                                bool cond:51_1 = var_24 u< ecx_31 * 0xc + 8
                                                var_a4_1 = 1
                                                
                                                if (cond:51_1)
                                                    goto label_40a2fd
                                                
                                                void* eax_49 = &esi_39[ecx_31 * 3]
                                                
                                                if (edi_10 != *(eax_49 + 4) || var_24
                                                        u< ((ecx_31 * 3 + eax_21) << 2) + 8)
                                                    goto label_40a2fd
                                                
                                                var_130 = ecx_31
                                                var_fc = &esi_39[1]
                                                void* ecx_33 = var_80 + eax_12
                                                void* edx_22 = eax_49 + 8
                                                void* var_2c_5 = ecx_33
                                                int32_t var_1c_3 = 0
                                                int32_t var_34_2 = 0
                                                float var_b8 = 0f
                                                
                                                if (edi_10 u> 0)
                                                    do
                                                        int32_t eax_50 = *edx_22
                                                        
                                                        if (eax_50 u< 3)
                                                            goto label_40a2fd
                                                        
                                                        if (eax_50 != *ecx_33)
                                                            goto label_40a2fd
                                                        
                                                        int32_t i_10 = 0
                                                        var_110 = *(edx_22 + 4)
                                                        
                                                        if (eax_50 != 2)
                                                            int32_t var_bc_1 = var_34_2 * 0xb
                                                            void* var_3c_3 = edx_22 + 0xc
                                                            
                                                            do
                                                                int32_t var_108_2 = *var_3c_3
                                                                int32_t j = 0
                                                                int32_t var_10c_2 = *(var_3c_3 - 4)
                                                                int32_t eax_58 = var_b8 << 5
                                                                
                                                                do
                                                                    int32_t esi_40 = (&var_110)[j]
                                                                    
                                                                    if (esi_40 u>= ecx_31)
                                                                        goto label_40a2fd
                                                                    
                                                                    *(eax_58 + var_78 + 4) = var_34_2
                                                                    *(eax_58 + var_78) =
                                                                        *(var_48 + ((var_bc_1 + j) << 2))
                                                                    *(eax_58 + var_78 + 8) |= 1
                                                                    var_b8 += 1
                                                                    void* esi_42 = &esi_39[1 + esi_40 * 3]
                                                                    void* edi_45 = eax_58 + var_78 + 0x14
                                                                    *edi_45 = *esi_42
                                                                    void* edi_46 = edi_45 + 4
                                                                    void* esi_43 = esi_42 + 4
                                                                    *edi_46 = *esi_43
                                                                    eax_58 += 0x20
                                                                    j += 1
                                                                    *(edi_46 + 4) = *(esi_43 + 4)
                                                                while (j u< 3)
                                                                
                                                                var_34_2 += 1
                                                                var_bc_1 += 0xb
                                                                i_10 += 1
                                                                var_3c_3 += 4
                                                            while (i_10 u< eax_50 - 2)
                                                        
                                                        int32_t eax_62 = eax_50 << 2
                                                        var_1c_3 += 1
                                                        var_54_1 += 1
                                                        ecx_33 = var_2c_5 + eax_62 + 4
                                                        edx_22 = edx_22 + eax_62 + 4
                                                        var_2c_5 = ecx_33
                                                    while (var_1c_3 u< edi_10)
                                                
                                                goto label_40a2bd
                                            
                                            int32_t i_11 = 4
                                            void* const edi_49 = &data_ac3864
                                            void* esi_46 = &var_18
                                            bool cond:42_1 = false
                                            
                                            while (i_11 != 0)
                                                int32_t temp21_1 = *esi_46
                                                int32_t temp22_1 = *edi_49
                                                cond:42_1 = temp21_1 != temp22_1
                                                esi_46 += 4
                                                edi_49 += 4
                                                i_11 -= 1
                                                
                                                if (temp21_1 != temp22_1)
                                                    break
                                            
                                            if (not(cond:42_1))
                                                void* i_43 = i_40
                                                
                                                if (var_24 u< (i_43 << 2) + 8)
                                                    goto label_40a2fd
                                                
                                                int32_t eax_66 = *var_20
                                                var_20 = &var_20[1]
                                                var_ec = 1
                                                
                                                if (eax_66 != i_43)
                                                    goto label_40a309
                                                
                                                if (*var_20 u> eax_66)
                                                    goto label_40a309
                                                
                                                var_20 = &var_20[1]
                                                void* edx_23 = var_30
                                                void* ecx_46 = nullptr
                                                int32_t var_28_3 = 0
                                                
                                                if (i_43 u> 0)
                                                    do
                                                        *(ecx_46 + edx_23 + 0x30) = *var_20
                                                        edx_23 = var_30
                                                        var_20 = &var_20[1]
                                                        void* esi_47 = ecx_46 + edx_23
                                                        int32_t eax_69 = *(esi_47 + 0x30)
                                                        
                                                        if (eax_69 u>= i_43)
                                                            goto label_40a2fd
                                                        
                                                        if (eax_69 != var_28_3)
                                                            *(esi_47 + 0x34) =
                                                                *(eax_69 * 0x44 + edx_23 + 0x34)
                                                            void* eax_72 = var_30
                                                            *(*(ecx_46 + eax_72 + 0x30) * 0x44
                                                                + eax_72 + 0x34) = var_28_3
                                                            edx_23 = var_30
                                                        
                                                        var_28_3 += 1
                                                        i_43 = i_40
                                                        ecx_46 += 0x44
                                                    while (var_28_3 u< i_43)
                                                
                                                int32_t esi_49 = 0
                                                
                                                if (i_43 u<= 0)
                                                    goto label_40a2bd
                                                
                                                int32_t* ecx_47 = edx_23 + 0x30
                                                
                                                while (true)
                                                    int32_t eax_73 = *ecx_47
                                                    
                                                    if (eax_73 != *(eax_73 * 0x44 + edx_23 + 0x30))
                                                        break
                                                    
                                                    esi_49 += 1
                                                    ecx_47 = &ecx_47[0x11]
                                                    
                                                    if (esi_49 u>= i_43)
                                                        goto label_40a2bd
                                                
                                                goto label_40a309
                                            
                                            int32_t i_12 = 4
                                            void* const edi_50 = &data_ac3854
                                            void* esi_50 = &var_18
                                            bool cond:46_1 = false
                                            
                                            while (i_12 != 0)
                                                int32_t temp23_1 = *esi_50
                                                int32_t temp24_1 = *edi_50
                                                cond:46_1 = temp23_1 != temp24_1
                                                esi_50 += 4
                                                edi_50 += 4
                                                i_12 -= 1
                                                
                                                if (temp23_1 != temp24_1)
                                                    break
                                            
                                            void* eax_77
                                            void* ecx_98
                                            void* esi_52
                                            
                                            if (not(cond:46_1))
                                                if (var_24 u< 4)
                                                    goto label_40a2fd
                                                
                                                int32_t eax_75 = *var_20
                                                var_20 = &var_20[1]
                                                
                                                if (eax_75 != i_38 * 3)
                                                    goto label_40a309
                                                
                                                esi_52 = eax_75 << 2
                                                
                                                if (var_24 u< esi_52 + 4)
                                                    goto label_40a2fd
                                                
                                                j__free(var_a0_1)
                                                eax_77 = sub_745f3f(esi_52)
                                                var_a0_1 = eax_77
                                            label_40a0a0:
                                                
                                                if (eax_77 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                ecx_98 = esi_52
                                            label_40a23b:
                                                int32_t esi_85
                                                int32_t edi_81
                                                edi_81, esi_85 = __builtin_memcpy(eax_77, var_20, 
                                                    ecx_98 u>> 2 << 2)
                                                __builtin_memcpy(edi_81, esi_85, ecx_98 & 3)
                                                goto label_40a2bd
                                            
                                            int32_t i_13 = 4
                                            void* const edi_51 = &data_ab5538
                                            void* esi_53 = &var_18
                                            bool cond:49_1 = false
                                            
                                            while (i_13 != 0)
                                                int32_t temp25_1 = *esi_53
                                                int32_t temp26_1 = *edi_51
                                                cond:49_1 = temp25_1 != temp26_1
                                                esi_53 += 4
                                                edi_51 += 4
                                                i_13 -= 1
                                                
                                                if (temp25_1 != temp26_1)
                                                    break
                                            
                                            if (not(cond:49_1))
                                                if (var_24 u< 4)
                                                    goto label_40a2fd
                                                
                                                void** eax_78 = var_20
                                                void* i_42 = *eax_78
                                                i_39 = i_42
                                                
                                                if (i_42 u<= 0 || (arg5 == 0 && arg6 == 0))
                                                    goto label_40a2bd
                                                
                                                if (var_24 u< 8)
                                                    goto label_40a2fd
                                                
                                                int32_t eax_79 = eax_78[1]
                                                uint32_t esi_55 = i_42 * 0x48
                                                void** eax_80 = sub_745f3f(esi_55)
                                                var_98_1 = eax_80
                                                
                                                if (eax_80 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                __builtin_memset(
                                                    __builtin_memset(var_98_1, 0, 
                                                        esi_55 u>> 2 << 2), 
                                                    0, esi_55 & 3)
                                                
                                                if (arg6 != 0)
                                                    int32_t esi_57 = i_42 * 0xc
                                                    int32_t* eax_81 = sub_745f3f(esi_57)
                                                    var_74 = eax_81
                                                    
                                                    if (eax_81 == 0)
                                                        result_1 = 0x8007000e
                                                        goto label_40a57a
                                                    
                                                    __builtin_memset(
                                                        __builtin_memset(var_74, 0, 
                                                            esi_57 u>> 2 << 2), 
                                                        0, esi_57 & 3)
                                                
                                                if (var_24 u< (eax_79 << 2) + 8)
                                                    goto label_40a2fd
                                                
                                                int32_t var_1c_4 = 0
                                                int32_t var_34_3 = 0
                                                int32_t* eax_84 = var_80 + eax_12
                                                var_54_1 = eax_84
                                                
                                                if (eax_79 u> 0)
                                                    void* var_3c_4 = &var_20[2]
                                                    
                                                    do
                                                        int32_t ecx_63 = *eax_84
                                                        int32_t i_14 = 0
                                                        
                                                        if (ecx_63 - 2 u> 0)
                                                            int32_t edx_31 = var_34_3 * 0x2c
                                                            
                                                            do
                                                                int32_t esi_60 = *var_3c_4
                                                                
                                                                if (esi_60 u>= i_42)
                                                                    goto label_40a2fd
                                                                
                                                                var_34_3 += 1
                                                                *(edx_31 + var_48 + 0x20) = esi_60
                                                                edx_31 += 0x2c
                                                                i_14 += 1
                                                            while (i_14 u< ecx_63 - 2)
                                                        
                                                        var_1c_4 += 1
                                                        var_3c_4 += 4
                                                        eax_84 = &eax_84[ecx_63 + 1]
                                                        var_54_1 = eax_84
                                                    while (var_1c_4 u< eax_79)
                                                
                                                if (var_34_3 u< i_38)
                                                    int32_t eax_86 = var_34_3 * 0x2c
                                                    void* i_29 = i_38 - var_34_3
                                                    void* i_15
                                                    
                                                    do
                                                        *(eax_86 + var_48 + 0x20) = 0
                                                        eax_86 += 0x2c
                                                        i_15 = i_29
                                                        i_29 -= 1
                                                    while (i_15 != 1)
                                                
                                                int32_t result_9 =
                                                    sub_408304(var_50, var_98_1, var_74, i_42)
                                                result_1 = result_9
                                                
                                                if (result_9 s< 0)
                                                    goto label_40a57a
                                                
                                                int32_t* i_32 = i_38
                                                
                                                if (i_32 u> 0)
                                                    int32_t ecx_66 = 0
                                                    int32_t* i_16
                                                    
                                                    do
                                                        void* eax_88 = var_48 + ecx_66
                                                        *(eax_88 + 0x24) = *(eax_88 + 0x20)
                                                        *(ecx_66 + var_48 + 0xc) |= 4
                                                        ecx_66 += 0x2c
                                                        i_16 = i_32
                                                        i_32 -= 1
                                                    while (i_16 != 1)
                                                
                                                goto label_40a2bd
                                            
                                            int32_t i_17 = 4
                                            void* const edi_57 = &data_ac3834
                                            void* esi_63 = &var_18
                                            bool cond:54_1 = false
                                            
                                            while (i_17 != 0)
                                                int32_t temp29_1 = *esi_63
                                                int32_t temp30_1 = *edi_57
                                                cond:54_1 = temp29_1 != temp30_1
                                                esi_63 += 4
                                                edi_57 += 4
                                                i_17 -= 1
                                                
                                                if (temp29_1 != temp30_1)
                                                    break
                                            
                                            if (not(cond:54_1) && arg9 != 0)
                                                uint32_t eax_91 = var_24
                                                *arg10 = eax_91
                                                int32_t eax_92 = sub_745f3f(eax_91)
                                                *arg9 = eax_92
                                                
                                                if (eax_92 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                uint32_t ecx_69 = var_24
                                                int32_t esi_65
                                                int32_t edi_59
                                                edi_59, esi_65 = __builtin_memcpy(eax_92, var_20, 
                                                    ecx_69 u>> 2 << 2)
                                                __builtin_memcpy(edi_59, esi_65, ecx_69 & 3)
                                                void* ecx_73 = var_fc
                                                
                                                if (ecx_73 == 0)
                                                    goto label_40a2bd
                                                
                                                void* i_33 = i_40
                                                
                                                if (var_130 != i_33)
                                                    goto label_40a2fd
                                                
                                                if (i_33 u> 0)
                                                    int32_t eax_94 = 0
                                                    void* i_18
                                                    
                                                    do
                                                        int32_t* edi_60 = eax_94 + var_30 + 0x24
                                                        *edi_60 = *ecx_73
                                                        int32_t* edi_61 = &edi_60[1]
                                                        void* esi_68 = ecx_73 + 4
                                                        *edi_61 = *esi_68
                                                        ecx_73 += 0xc
                                                        eax_94 += 0x44
                                                        i_18 = i_33
                                                        i_33 -= 1
                                                        edi_61[1] = *(esi_68 + 4)
                                                    while (i_18 != 1)
                                                
                                                goto label_40a2bd
                                            
                                            int32_t i_19 = 4
                                            void* const edi_64 = &data_ac3874
                                            void* esi_71 = &var_18
                                            bool cond:57_1 = false
                                            
                                            while (i_19 != 0)
                                                int32_t temp31_1 = *esi_71
                                                int32_t temp32_1 = *edi_64
                                                cond:57_1 = temp31_1 != temp32_1
                                                esi_71 += 4
                                                edi_64 += 4
                                                i_19 -= 1
                                                
                                                if (temp31_1 != temp32_1)
                                                    break
                                            
                                            if (not(cond:57_1) && arg13 != 0)
                                                if (var_24 u< 6)
                                                    goto label_40a2fd
                                                
                                                int32_t* edi_65 = var_20
                                                
                                                if (arg14 != 0)
                                                    *arg14 = zx.d(edi_65[1].w)
                                                
                                                uint32_t esi_72 = zx.d(edi_65[1].w)
                                                int32_t* eax_99 = sub_745f3f(esi_72 * 0x50 + 4)
                                                
                                                if (eax_99 == 0)
                                                    var_60 = nullptr
                                                else
                                                    *eax_99 = esi_72
                                                    sub_61cdd0(&eax_99[1], 0x50, esi_72, sub_40afc6)
                                                    var_60 = &eax_99[1]
                                                
                                                if (var_60 == 0)
                                                    goto label_40a58a
                                                
                                                int32_t result_10 =
                                                    sub_458d80(zx.d(edi_65[1].w) << 5, &var_84)
                                                result_1 = result_10
                                                
                                                if (result_10 s< 0)
                                                    goto label_40a57a
                                                
                                                int32_t result_11 =
                                                    sub_458ded(zx.d(edi_65[1].w) << 6, &var_88)
                                                result_1 = result_11
                                                
                                                if (result_11 s< 0)
                                                    goto label_40a57a
                                                
                                                void*** eax_104 = var_88
                                                var_c0 = (*eax_104)[3](eax_104)
                                                goto label_40a2bd
                                            
                                            int32_t i_20 = 4
                                            void* const edi_67 = &data_ac3844
                                            void* esi_73 = &var_18
                                            bool cond:62_1 = false
                                            
                                            while (i_20 != 0)
                                                int32_t temp33_1 = *esi_73
                                                int32_t temp34_1 = *edi_67
                                                cond:62_1 = temp33_1 != temp34_1
                                                esi_73 += 4
                                                edi_67 += 4
                                                i_20 -= 1
                                                
                                                if (temp33_1 != temp34_1)
                                                    break
                                            
                                            if (not(cond:62_1) && var_c0 != 0)
                                                (*var_84)[7](var_20)
                                                int32_t* eax_107 = var_20
                                                void* ecx_78 = eax_107 + 1
                                                char i_21
                                                
                                                do
                                                    i_21 = *eax_107
                                                    eax_107 += 1
                                                while (i_21 != 0)
                                                var_20 += eax_107 - ecx_78 + 1
                                                
                                                if (var_24 u< eax_107 - ecx_78 + 5)
                                                    goto label_40a2fd
                                                
                                                int32_t var_9c_1
                                                void* ebx_5 = &var_60[var_9c_1 * 0x14]
                                                int32_t eax_115 = *var_20
                                                *ebx_5 = eax_115
                                                
                                                if (var_24 != eax_107 - ecx_78 + 1 + (eax_115 << 3)
                                                        + 0x44)
                                                    goto label_40a2fd
                                                
                                                int32_t eax_117 = sub_745f3f(eax_115 << 2)
                                                *(ebx_5 + 4) = eax_117
                                                
                                                if (eax_117 == 0)
                                                    goto label_40a57a
                                                
                                                int32_t ecx_84 = *ebx_5 << 2
                                                int32_t esi_76
                                                int32_t edi_69
                                                edi_69, esi_76 = __builtin_memcpy(eax_117, 
                                                    &var_20[1], ecx_84 u>> 2 << 2)
                                                __builtin_memcpy(edi_69, esi_76, ecx_84 & 3)
                                                int32_t eax_121 = sub_745f3f(*ebx_5 << 2)
                                                *(ebx_5 + 8) = eax_121
                                                
                                                if (eax_121 == 0)
                                                    goto label_40a57a
                                                
                                                int32_t ecx_90 = *ebx_5 << 2
                                                int32_t esi_78
                                                int32_t edi_71
                                                edi_71, esi_78 = __builtin_memcpy(eax_121, 
                                                    &var_20[*ebx_5 + 1], ecx_90 u>> 2 << 2)
                                                __builtin_memcpy(edi_71, esi_78, ecx_90 & 3)
                                                __builtin_memcpy((var_9c_1 << 6) + var_c0, 
                                                    &var_20[*ebx_5 * 2 + 1], 0x40)
                                                var_20 -= eax_107 - ecx_78 + 1
                                                var_9c_1 += 1
                                                goto label_40a2bd
                                            
                                            int32_t i_22 = 4
                                            void* const edi_75 = &data_ac3804
                                            void* esi_80 = &var_18
                                            bool cond:67_1 = false
                                            
                                            while (i_22 != 0)
                                                int32_t temp35_1 = *esi_80
                                                int32_t temp36_1 = *edi_75
                                                cond:67_1 = temp35_1 != temp36_1
                                                esi_80 += 4
                                                edi_75 += 4
                                                i_22 -= 1
                                                
                                                if (temp35_1 != temp36_1)
                                                    break
                                            
                                            if (not(cond:67_1))
                                                if (var_24 u< 8)
                                                    goto label_40a2fd
                                                
                                                int32_t* eax_125 = sub_745f3f(0x10)
                                                var_90 = eax_125
                                                
                                                if (eax_125 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                *eax_125 = *var_20
                                                var_20 = &var_20[1]
                                                int32_t ecx_96 = *var_20
                                                esi_52 = ecx_96 << 2
                                                var_20 = &var_20[1]
                                                eax_125[1] = divu.dp.d(0:esi_52, i_40)
                                                
                                                if (var_24 u< (ecx_96 << 2) + 8)
                                                    goto label_40a2fd
                                                
                                                eax_77 = sub_745f3f(esi_52)
                                                eax_125[2] = eax_77
                                                goto label_40a0a0
                                            
                                            int32_t i_23 = 4
                                            char const* const edi_77 = "S"
                                            void* esi_82 = &var_18
                                            bool cond:71_1 = false
                                            
                                            while (i_23 != 0)
                                                int32_t temp37_1 = *esi_82
                                                int32_t temp38_1 = *edi_77
                                                cond:71_1 = temp37_1 != temp38_1
                                                esi_82 += 4
                                                edi_77 = &edi_77[4]
                                                i_23 -= 1
                                                
                                                if (temp37_1 != temp38_1)
                                                    break
                                            
                                            if (not(cond:71_1))
                                                if (var_24 u< 4)
                                                    goto label_40a2fd
                                                
                                                int32_t eax_132 = sub_745f3f(0x2d0)
                                                uint32_t ecx_99
                                                int16_t* esi_83
                                                
                                                if (eax_132 == 0)
                                                    esi_83 = nullptr
                                                else
                                                    int16_t* eax_133
                                                    eax_133, ecx_99 = sub_40893c(eax_132)
                                                    esi_83 = eax_133
                                                
                                                var_68 = esi_83
                                                
                                                if (esi_83 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                int32_t edi_78 = *var_20
                                                var_20 = &var_20[1]
                                                int32_t var_2c_8 = edi_78
                                                
                                                if (var_24 u< (edi_78 << 4) + 4)
                                                    goto label_40a2fd
                                                
                                                if (edi_78 == 0)
                                                    goto label_40a309
                                                
                                                if (edi_78 + 1 u> 0x41)
                                                    goto label_40a309
                                                
                                                int32_t var_3c_5 = 0
                                                int32_t var_44_4 = 0
                                                char var_3d_1 = 0
                                                
                                                if (edi_78 u> 0)
                                                    void* eax_139 = &esi_83[2]
                                                    
                                                    do
                                                        ecx_99.w = zx.w(var_3d_1)
                                                        int32_t edx_36 = 0
                                                        *(eax_139 - 4) = 0
                                                        *(eax_139 - 2) = ecx_99.w
                                                        int32_t* ecx_101 = var_20
                                                        
                                                        while (ecx_101[edx_36] u<= 0xff)
                                                            edx_36 += 1
                                                            
                                                            if (edx_36 u>= 4)
                                                                break
                                                        
                                                        ecx_101.b = *ecx_101
                                                        *eax_139 = ecx_101.b
                                                        var_20 = &var_20[1]
                                                        int32_t* ecx_102
                                                        ecx_102.b = *var_20
                                                        *(eax_139 + 1) = ecx_102.b
                                                        var_20 = &var_20[1]
                                                        int32_t* ecx_103
                                                        ecx_103.b = *var_20
                                                        *(eax_139 + 2) = ecx_103.b
                                                        var_20 = &var_20[1]
                                                        int32_t* ecx_104
                                                        ecx_104.b = *var_20
                                                        *(eax_139 + 3) = ecx_104.b
                                                        var_20 = &var_20[1]
                                                        ecx_104.b = *eax_139
                                                        
                                                        if (ecx_104.b u> 0x10)
                                                            break
                                                        
                                                        ecx_99.b = *(zx.d(ecx_104.b) + 0xab5598)
                                                        uint32_t edx_37 = zx.d(ecx_99.b)
                                                        char var_6d_1 = ecx_99.b
                                                        ecx_99.b = var_3d_1
                                                        edi_78 = var_2c_8
                                                        
                                                        if (edx_37 + zx.d(ecx_99.b) u> 0xff)
                                                            var_3c_5 = 1
                                                            break
                                                        
                                                        ecx_99.b += var_6d_1
                                                        var_44_4 += 1
                                                        eax_139 += 8
                                                        var_3d_1 = ecx_99.b
                                                    while (var_44_4 u< edi_78)
                                                
                                                esi_83[var_44_4 * 4] = 0xff
                                                
                                                if (var_3c_5 != 0)
                                                label_40a251:
                                                    j__free(esi_83)
                                                    var_68 = nullptr
                                                    goto label_40a2bd
                                                
                                                int32_t var_360_21 = 0
                                                
                                                if (sub_40b60c(esi_83) == 0)
                                                    goto label_40a251
                                                
                                                sub_408645(&esi_83[0x104], esi_83)
                                                int32_t ecx_106 = *var_20
                                                void* ebx_7 = ecx_106 << 2
                                                var_20 = &var_20[1]
                                                
                                                if (divu.dp.d(0:ebx_7, i_40) u< *(esi_83 + 0x2c8))
                                                    goto label_40a309
                                                
                                                if (var_24 u< ((ecx_106 + (edi_78 << 2)) << 2) + 4)
                                                    goto label_40a2fd
                                                
                                                eax_77 = sub_745f3f(ebx_7)
                                                *(esi_83 + 0x2cc) = eax_77
                                                
                                                if (eax_77 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                ecx_98 = ebx_7
                                                goto label_40a23b
                                            
                                            if (arg15 == 0)
                                                goto label_40a2bd
                                            
                                            if (var_64 == var_dc)
                                                int32_t eax_149 = var_dc * 2 + 2
                                                var_dc = eax_149
                                                int32_t eax_151 = sub_745f3f(eax_149 << 2)
                                                
                                                if (eax_151 == 0)
                                                    result_1 = 0x8007000e
                                                    goto label_40a57a
                                                
                                                __builtin_memcpy(eax_151, var_7c, var_64 << 2)
                                                j__free(var_7c)
                                                var_7c = eax_151
                                            
                                            *(var_7c + (var_64 << 2)) = var_50
                                            int32_t* eax_153 = var_50
                                            (*(*eax_153 + 4))(eax_153)
                                            var_64 += 1
                                        label_40a2bd:
                                            int32_t* eax_154 = var_50
                                            
                                            if (eax_154 != 0)
                                                (*(*eax_154 + 8))(eax_154)
                                                var_50 = nullptr
                                            
                                            var_5c_2 += 1
                                            
                                            if (var_5c_2 u>= var_f4)
                                                esi_87 = var_90
                                                
                                                if (var_a4_1 != 0)
                                                    break
                                                
                                                goto label_40a327
                                    
                                    int32_t eax_159
                                    
                                    if (esi_87 == 0)
                                        eax_159 = 2
                                    else
                                        eax_159 = *esi_87
                                        esi_87[3] = 0
                                        
                                        if ((eax_159.w & 0x400e) == 0)
                                            eax_159 |= 2
                                    
                                    if (var_a4_1 != 0)
                                        eax_159 |= 0x10
                                    
                                    if (var_e4 != 0)
                                        eax_159 |= 0x40
                                    
                                    if (var_104 == 0)
                                        goto label_40a3c5
                                    
                                    if (esi_87 != 0)
                                        esi_87[3] = 1
                                    
                                    if ((eax_159 & 0xf00) == 0x800)
                                    label_40a309:
                                        result_1 = 0x8876086c
                                    else
                                        eax_159 =
                                            (eax_159 & 0xffff0000) << 2 | (zx.d(eax_159.w) + 0x100)
                                    label_40a3c5:
                                        int16_t var_350[0x102]
                                        int32_t result_12 = sub_40b224(eax_159, &var_350)
                                        result_1 = result_12
                                        
                                        if (result_12 s>= 0)
                                            if (var_68 == 0)
                                            label_40a3fd:
                                                
                                                if (arg9 != 0)
                                                    int32_t* eax_163 = *arg9
                                                    
                                                    if (eax_163 != 0)
                                                        int32_t i_41 = *eax_163
                                                        void* eax_164 = &eax_163[1]
                                                        int32_t esi_88 = 0
                                                        int32_t ecx_124 = 0
                                                        
                                                        if (i_41 s> 0)
                                                            int32_t i_35 = i_41
                                                            int32_t i_24
                                                            
                                                            do
                                                                ecx_124 += *(eax_164 + 8)
                                                                int32_t edx_42 = *(eax_164 + 0x14)
                                                                eax_164 += 0x18
                                                                esi_88 += edx_42
                                                                i_24 = i_35
                                                                i_35 -= 1
                                                            while (i_24 != 1)
                                                            
                                                            if (esi_88 s>= 0xffff
                                                                    || ecx_124 s>= 0xffff)
                                                                arg2 |= 1
                                                
                                                int32_t result_14
                                                int80_t st0_1
                                                st0_1, result_14 = sub_45fa85(&var_48, i_38, 
                                                    &var_30, i_40, var_78, var_d4_1, var_90, 
                                                    var_68, var_ec, var_a0_1, arg2, &var_350, arg3, 
                                                    &var_94, arg4)
                                                result_1 = result_14
                                                
                                                if (result_14 s>= 0)
                                                    int32_t** eax_167 = arg5
                                                    
                                                    if (eax_167 == 0)
                                                        goto label_40a4bc
                                                    
                                                    if (i_39 != 0)
                                                        int32_t result_15 =
                                                            sub_45edd0(var_98_1, i_39, eax_167)
                                                        result_1 = result_15
                                                        
                                                        if (result_15 s>= 0)
                                                            goto label_40a4bc
                                                    else
                                                        *eax_167 = nullptr
                                                    label_40a4bc:
                                                        int32_t** eax_168 = arg6
                                                        
                                                        if (eax_168 == 0)
                                                            goto label_40a4f0
                                                        
                                                        if (i_39 != 0)
                                                            int32_t result_16 =
                                                                sub_45efa3(var_74, i_39, eax_168)
                                                            result_1 = result_16
                                                            
                                                            if (result_16 s>= 0)
                                                                goto label_40a4f0
                                                        else
                                                            *eax_168 = nullptr
                                                        label_40a4f0:
                                                            
                                                            if (arg7 != 0)
                                                                *arg7 = i_39
                                                            
                                                            if (arg13 != 0)
                                                                *arg13 = var_60
                                                                var_60 = nullptr
                                                            
                                                            if (arg11 != 0)
                                                                *arg11 = var_84
                                                                var_84 = nullptr
                                                            
                                                            if (arg12 != 0)
                                                                *arg12 = var_88
                                                                var_88 = nullptr
                                                            
                                                            if (arg15 != 0)
                                                                *arg15 = var_7c
                                                                var_7c = 0
                                                            
                                                            if (arg16 != 0)
                                                                *arg16 = var_64
                                                            
                                                            *var_12c = var_94
                                                            var_94 = nullptr
                                            else
                                                int32_t result_13 = sub_4089cc(var_68, &var_350)
                                                result_1 = result_13
                                                
                                                if (result_13 s>= 0)
                                                    goto label_40a3fd
                                    
                                    goto label_40a57a
    
label_40a58a:
    void*** eax_176 = var_84
    
    if (eax_176 != 0)
        (*eax_176)[2](eax_176)
        var_84 = nullptr
    
    void*** eax_177 = var_88
    
    if (eax_177 != 0)
        (*eax_177)[2](eax_177)
        var_88 = nullptr
    
    if (var_7c != 0)
        int32_t esi_89 = 0
        
        if (var_64 u> 0)
            do
                int32_t* eax_178 = *(var_7c + (esi_89 << 2))
                (*(*eax_178 + 8))(eax_178)
                esi_89 += 1
            while (esi_89 u< var_64)
        
        j__free(var_7c)
    
    j__free(var_a0_1)
    j__free(var_48)
    j__free(var_30)
    j__free(var_78)
    
    if (var_90 != 0)
        j__free(var_90[2])
    
    j__free(var_90)
    
    if (var_68 != 0)
        j__free(*(var_68 + 0x2cc))
    
    j__free(var_68)
    
    if (var_98_1 != 0 && i_39 u> 0)
        void* i_36 = i_39
        void* esi_92 = &var_98_1[0x11]
        void* i_25
        
        do
            j__free(*esi_92)
            esi_92 += 0x48
            i_25 = i_36
            i_36 -= 1
        while (i_25 != 1)
    
    if (var_74 != 0 && i_39 u> 0)
        int32_t* esi_93 = var_74
        void* i_37 = i_39
        void* i_26
        
        do
            sub_407a15(esi_93)
            esi_93 = &esi_93[3]
            i_26 = i_37
            i_37 -= 1
        while (i_26 != 1)
    
    j__free(var_98_1)
    j__free(var_74)
    int32_t* eax_179 = var_50
    
    if (eax_179 != 0)
        (*(*eax_179 + 8))(eax_179)
        var_50 = nullptr
    
    int32_t* eax_180 = var_94
    
    if (eax_180 != 0)
        (*(*eax_180 + 8))(eax_180)
        var_94 = nullptr
    
    if (var_118_1 != 0)
        void* const edi_84 = &data_ab55ec
        char* esi_94 = var_118_1
        int32_t i_27 = 2
        bool cond:16_1 = true
        
        while (i_27 != 0)
            char temp7_1 = *esi_94
            char temp8_1 = *edi_84
            cond:16_1 = temp7_1 == temp8_1
            esi_94 = &esi_94[1]
            edi_84 += 1
            i_27 -= 1
            
            if (temp7_1 != temp8_1)
                break
        
        if (not(cond:16_1))
            sub_761a44(4, var_118_1)
        
        _free(var_118_1)
    
    result = result_1

sub_745f2b(__security_cookie_1)
return result
