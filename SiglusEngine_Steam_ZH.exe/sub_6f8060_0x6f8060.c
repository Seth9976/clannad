// 函数: sub_6f8060
// 地址: 0x6f8060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cdcff
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_b8 = 0
int32_t* edx = *arg2
int32_t result = (arg2[1] - edx) s>> 2
int32_t result_1 = result

if (result != 0)
    void* eax_6 = *edx
    int32_t esi_1 = 1
    int32_t var_a8_1 = 0
    int32_t ecx_2 = *(eax_6 + 0xb8)
    int32_t edi_1 = *(eax_6 + 0xc4)
    
    while (true)
        if (esi_1 s>= result_1)
        label_6f8a31:
            
            if ((*(*arg1 + 0xc))(*(*arg2 + (var_a8_1 << 2)), ecx_2, edi_1).b == 0)
                result.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            ecx_2 = 0
            var_a8_1 = esi_1
            edi_1 = 0
        else
            int32_t* edi_2 = edx[esi_1]
            int32_t* ecx_3 = edx[var_a8_1]
            char var_b1_1
            
            if (*(ecx_3 + 6) != 0 || *(edi_2 + 6) != 0 || *ecx_3 != *edi_2)
                var_b1_1 = 1
            else
                result.b = ecx_3[1].b
                
                if (result.b != edi_2[1].b)
                    var_b1_1 = 1
                else
                    result.b = *(ecx_3 + 5)
                    
                    if (result.b != *(edi_2 + 5))
                        var_b1_1 = 1
                    else
                        result.b = ecx_3[2].b
                        
                        if (result.b != edi_2[2].b || ecx_3[0x17] != edi_2[0x17]
                                || ecx_3[0x18] != edi_2[0x18] || ecx_3[0x19] != edi_2[0x19]
                                || ecx_3[0x1a] != edi_2[0x1a])
                            var_b1_1 = 1
                        else
                            result.b = ecx_3[0x1f].b
                            
                            if (result.b != edi_2[0x1f].b)
                                var_b1_1 = 1
                            else
                                result.b = *(ecx_3 + 0x7d)
                                
                                if (result.b != *(edi_2 + 0x7d))
                                    var_b1_1 = 1
                                else
                                    result.b = *(ecx_3 + 0x7e)
                                    
                                    if (result.b != *(edi_2 + 0x7e))
                                        var_b1_1 = 1
                                    else
                                        result.b = *(ecx_3 + 0x7f)
                                        
                                        if (result.b != *(edi_2 + 0x7f))
                                            var_b1_1 = 1
                                        else
                                            result.b = ecx_3[0x20].b
                                            
                                            if (result.b != edi_2[0x20].b)
                                                var_b1_1 = 1
                                            else
                                                result.b = *(ecx_3 + 0x81)
                                                
                                                if (result.b != *(edi_2 + 0x81))
                                                    var_b1_1 = 1
                                                else
                                                    result.b = *(ecx_3 + 0x82)
                                                    
                                                    if (result.b != *(edi_2 + 0x82))
                                                        var_b1_1 = 1
                                                    else
                                                        result.b = *(ecx_3 + 0x83)
                                                        
                                                        if (result.b != *(edi_2 + 0x83))
                                                            var_b1_1 = 1
                                                        else
                                                            result.b = ecx_3[0x21].b
                                                            
                                                            if (result.b != edi_2[0x21].b)
                                                                var_b1_1 = 1
                                                            else
                                                                result.b = *(ecx_3 + 0x85)
                                                                
                                                                if (result.b != *(edi_2 + 0x85))
                                                                    var_b1_1 = 1
                                                                else
                                                                    result.b = *(ecx_3 + 0x86)
                                                                    
                                                                    if (result.b != *(edi_2 + 0x86)
                                                                            || ecx_3[0x22] != edi_2[0x22])
                                                                        var_b1_1 = 1
                                                                    else
                                                                        result.b = ecx_3[0x23].b
                                                                        
                                                                        if (result.b != edi_2[0x23].b
                                                                                || ecx_3[0x24] != edi_2[0x24])
                                                                            var_b1_1 = 1
                                                                        else
                                                                            result.b = *(ecx_3 + 0xa)
                                                                            
                                                                            if (result.b != *(edi_2 + 0xa))
                                                                                var_b1_1 = 1
                                                                            else
                                                                                result.b = *(ecx_3 + 0xd)
                                                                                
                                                                                if (result.b != *(edi_2 + 0xd))
                                                                                    var_b1_1 = 1
                                                                                else
                                                                                    result.b = *(ecx_3 + 0xe)
                                                                                    
                                                                                    if (result.b != *(edi_2 + 0xe))
                                                                                        var_b1_1 = 1
                                                                                    else
                                                                                        result.b = *(ecx_3 + 0xb)
                                                                                        
                                                                                        if (result.b != *(edi_2 + 0xb))
                                                                                            var_b1_1 = 1
                                                                                        else
                                                                                            result.b = ecx_3[3].b
                                                                                            
                                                                                            if (result.b != edi_2[3].b
                                                                                                    || ecx_3[0x27] != edi_2[0x27])
                                                                                                var_b1_1 = 1
                                                                                            else
                                                                                                void var_20
                                                                                                int32_t* eax_7 =
                                                                                                    sub_6f7ff0(edi_2, &var_20)
                                                                                                int32_t var_c_1 = 1
                                                                                                ebx = ebx | 1 | 2
                                                                                                void var_30
                                                                                                
                                                                                                if (*sub_6f7ff0(ecx_3, &var_30)
                                                                                                        != *eax_7)
                                                                                                    var_b1_1 = 1
                                                                                                else
                                                                                                    void var_40
                                                                                                    int32_t* eax_9 =
                                                                                                        sub_6f8020(edi_2, &var_40)
                                                                                                    int32_t var_c_2 = 3
                                                                                                    ebx = ebx | 4 | 8
                                                                                                    void var_50
                                                                                                    
                                                                                                    if (*sub_6f8020(ecx_3, &var_50)
                                                                                                            != *eax_9)
                                                                                                        var_b1_1 = 1
                                                                                                    else
                                                                                                        void var_60
                                                                                                        int32_t* eax_11 =
                                                                                                            sub_5f3150(edi_2, &var_60)
                                                                                                        int32_t var_c_3 = 5
                                                                                                        ebx = ebx | 0x10 | 0x20
                                                                                                        void var_70
                                                                                                        
                                                                                                        if (*sub_5f3150(ecx_3, &var_70)
                                                                                                                != *eax_11)
                                                                                                            var_b1_1 = 1
                                                                                                        else
                                                                                                            void var_80
                                                                                                            int32_t* eax_13 =
                                                                                                                sub_6f5a20(edi_2, &var_80)
                                                                                                            int32_t var_c_4 = 7
                                                                                                            ebx = ebx | 0x40 | 0x80
                                                                                                            void var_90
                                                                                                            
                                                                                                            if (*sub_6f5a20(ecx_3, &var_90)
                                                                                                                    != *eax_13)
                                                                                                                var_b1_1 = 1
                                                                                                            else
                                                                                                                void var_58
                                                                                                                int32_t* eax_15 =
                                                                                                                    sub_6f12f0(edi_2, &var_58, 0)
                                                                                                                int32_t var_c_5 = 9
                                                                                                                ebx = ebx | 0x100 | 0x200
                                                                                                                void var_28
                                                                                                                
                                                                                                                if (*sub_6f12f0(ecx_3, &var_28, 0)
                                                                                                                        != *eax_15)
                                                                                                                    var_b1_1 = 1
                                                                                                                else
                                                                                                                    void var_68
                                                                                                                    int32_t* eax_17 =
                                                                                                                        sub_6f12f0(edi_2, &var_68, 1)
                                                                                                                    int32_t var_c_6 = 0xb
                                                                                                                    ebx = ebx | 0x400 | 0x800
                                                                                                                    void var_48
                                                                                                                    
                                                                                                                    if (*sub_6f12f0(ecx_3, &var_48, 1)
                                                                                                                            != *eax_17)
                                                                                                                        var_b1_1 = 1
                                                                                                                    else
                                                                                                                        void var_98
                                                                                                                        int32_t* eax_19 =
                                                                                                                            sub_6f12f0(edi_2, &var_98, 2)
                                                                                                                        int32_t var_c_7 = 0xd
                                                                                                                        ebx = ebx | 0x1000 | 0x2000
                                                                                                                        void var_38
                                                                                                                        
                                                                                                                        if (*sub_6f12f0(ecx_3, &var_38, 2)
                                                                                                                                != *eax_19)
                                                                                                                            var_b1_1 = 1
                                                                                                                        else
                                                                                                                            void var_88
                                                                                                                            int32_t* eax_21 =
                                                                                                                                sub_6f12f0(edi_2, &var_88, 3)
                                                                                                                            int32_t var_c_8 = 0xe
                                                                                                                            ebx |= 0xc000
                                                                                                                            void var_78
                                                                                                                            
                                                                                                                            if (*sub_6f12f0(ecx_3, &var_78, 3)
                                                                                                                                    != *eax_21
                                                                                                                                    || ecx_3[0x3e] != edi_2[0x3e]
                                                                                                                                    || ecx_3[0x3f] != edi_2[0x3f])
                                                                                                                                var_b1_1 = 1
                                                                                                                            else
                                                                                                                                float xmm0_1 = ecx_3[0x40]
                                                                                                                                float temp33_1 = edi_2[0x40]
                                                                                                                                xmm0_1 - temp33_1
                                                                                                                                result:1.b =
                                                                                                                                    (xmm0_1 == temp33_1 ? 1 : 0) << 6 | (
                                                                                                                                    is_unordered.d(xmm0_1, temp33_1) ? 1
                                                                                                                                    : 0) << 2 | (xmm0_1 < temp33_1 ? 1 : 0)
                                                                                                                                bool p_2 =
                                                                                                                                    unimplemented  {test ah, 0x44}
                                                                                                                                
                                                                                                                                if (p_2)
                                                                                                                                    var_b1_1 = 1
                                                                                                                                else
                                                                                                                                    float xmm0_2 = ecx_3[0x41]
                                                                                                                                    float temp34_1 = edi_2[0x41]
                                                                                                                                    xmm0_2 - temp34_1
                                                                                                                                    result:1.b =
                                                                                                                                        (xmm0_2 == temp34_1 ? 1 : 0) << 6 | (
                                                                                                                                        is_unordered.d(xmm0_2, temp34_1) ? 1
                                                                                                                                        : 0) << 2 | (xmm0_2 < temp34_1 ? 1 : 0)
                                                                                                                                    bool p_4 =
                                                                                                                                        unimplemented  {test ah, 0x44}
                                                                                                                                    
                                                                                                                                    if (p_4)
                                                                                                                                        var_b1_1 = 1
                                                                                                                                    else
                                                                                                                                        float xmm0_3 = ecx_3[0x42]
                                                                                                                                        float temp35_1 = edi_2[0x42]
                                                                                                                                        xmm0_3 - temp35_1
                                                                                                                                        result:1.b =
                                                                                                                                            (xmm0_3 == temp35_1 ? 1 : 0) << 6 | (
                                                                                                                                            is_unordered.d(xmm0_3, temp35_1) ? 1
                                                                                                                                            : 0) << 2 | (xmm0_3 < temp35_1 ? 1 : 0)
                                                                                                                                        bool p_6 =
                                                                                                                                            unimplemented  {test ah, 0x44}
                                                                                                                                        
                                                                                                                                        if (p_6)
                                                                                                                                            var_b1_1 = 1
                                                                                                                                        else
                                                                                                                                            float xmm0_4 = ecx_3[0x43]
                                                                                                                                            float temp36_1 = edi_2[0x43]
                                                                                                                                            xmm0_4 - temp36_1
                                                                                                                                            result:1.b =
                                                                                                                                                (xmm0_4 == temp36_1 ? 1 : 0) << 6 | (
                                                                                                                                                is_unordered.d(xmm0_4, temp36_1) ? 1
                                                                                                                                                : 0) << 2 | (xmm0_4 < temp36_1 ? 1 : 0)
                                                                                                                                            bool p_8 =
                                                                                                                                                unimplemented  {test ah, 0x44}
                                                                                                                                            
                                                                                                                                            if (p_8)
                                                                                                                                                var_b1_1 = 1
                                                                                                                                            else
                                                                                                                                                float xmm0_5 = ecx_3[0x44]
                                                                                                                                                float temp37_1 = edi_2[0x44]
                                                                                                                                                xmm0_5 - temp37_1
                                                                                                                                                result:1.b =
                                                                                                                                                    (xmm0_5 == temp37_1 ? 1 : 0) << 6 | (
                                                                                                                                                    is_unordered.d(xmm0_5, temp37_1) ? 1
                                                                                                                                                    : 0) << 2 | (xmm0_5 < temp37_1 ? 1 : 0)
                                                                                                                                                bool p_10 =
                                                                                                                                                    unimplemented  {test ah, 0x44}
                                                                                                                                                
                                                                                                                                                if (p_10)
                                                                                                                                                    var_b1_1 = 1
                                                                                                                                                else
                                                                                                                                                    float xmm0_6 = ecx_3[0x45]
                                                                                                                                                    float temp38_1 = edi_2[0x45]
                                                                                                                                                    xmm0_6 - temp38_1
                                                                                                                                                    result:1.b =
                                                                                                                                                        (xmm0_6 == temp38_1 ? 1 : 0) << 6 | (
                                                                                                                                                        is_unordered.d(xmm0_6, temp38_1) ? 1
                                                                                                                                                        : 0) << 2 | (xmm0_6 < temp38_1 ? 1 : 0)
                                                                                                                                                    bool p_12 =
                                                                                                                                                        unimplemented  {test ah, 0x44}
                                                                                                                                                    
                                                                                                                                                    if (p_12)
                                                                                                                                                        var_b1_1 = 1
                                                                                                                                                    else
                                                                                                                                                        float xmm0_7 = ecx_3[0x46]
                                                                                                                                                        float temp39_1 = edi_2[0x46]
                                                                                                                                                        xmm0_7 - temp39_1
                                                                                                                                                        result:1.b =
                                                                                                                                                            (xmm0_7 == temp39_1 ? 1 : 0) << 6 | (
                                                                                                                                                            is_unordered.d(xmm0_7, temp39_1) ? 1
                                                                                                                                                            : 0) << 2 | (xmm0_7 < temp39_1 ? 1 : 0)
                                                                                                                                                        bool p_14 =
                                                                                                                                                            unimplemented  {test ah, 0x44}
                                                                                                                                                        
                                                                                                                                                        if (p_14)
                                                                                                                                                            var_b1_1 = 1
                                                                                                                                                        else
                                                                                                                                                            float xmm0_8 = ecx_3[0x47]
                                                                                                                                                            float temp40_1 = edi_2[0x47]
                                                                                                                                                            xmm0_8 - temp40_1
                                                                                                                                                            var_b1_1 = 0
                                                                                                                                                            result:1.b =
                                                                                                                                                                (xmm0_8 == temp40_1 ? 1 : 0) << 6 | (
                                                                                                                                                                is_unordered.d(xmm0_8, temp40_1) ? 1
                                                                                                                                                                : 0) << 2 | (xmm0_8 < temp40_1 ? 1 : 0)
                                                                                                                                                            bool p_16 =
                                                                                                                                                                unimplemented  {test ah, 0x44}
                                                                                                                                                            
                                                                                                                                                            if (p_16)
                                                                                                                                                                var_b1_1 = 1
            
            if ((ebx & 0x8000) != 0)
                ebx &= 0xffff7fff
                int32_t var_b8_2 = ebx
                int32_t* var_74
                
                if (var_74 != 0)
                    bool cond:0_1 = var_74[1] != 1
                    var_74[1] -= 1
                    
                    if (not(cond:0_1))
                        (*(*var_74 + 4))(eax_2)
                        bool cond:2_1 = var_74[2] != 1
                        var_74[2]
                        var_74[2] -= 1
                        
                        if (not(cond:2_1))
                            (*(*var_74 + 8))()
            
            int32_t var_c_9 = 0xd
            
            if ((ebx & 0x4000) != 0)
                ebx &= 0xffffbfff
                int32_t var_b8_3 = ebx
                int32_t* var_84
                
                if (var_84 != 0)
                    bool cond:1_1 = var_84[1] != 1
                    var_84[1] -= 1
                    
                    if (not(cond:1_1))
                        (*(*var_84 + 4))(eax_2)
                        bool cond:4_1 = var_84[2] != 1
                        var_84[2]
                        var_84[2] -= 1
                        
                        if (not(cond:4_1))
                            (*(*var_84 + 8))()
            
            int32_t var_c_10 = 0xc
            
            if ((ebx & 0x2000) != 0)
                ebx &= 0xffffdfff
                int32_t var_b8_4 = ebx
                int32_t* var_34
                
                if (var_34 != 0)
                    bool cond:3_1 = var_34[1] != 1
                    var_34[1] -= 1
                    
                    if (not(cond:3_1))
                        (*(*var_34 + 4))(eax_2)
                        bool cond:6_1 = var_34[2] != 1
                        var_34[2]
                        var_34[2] -= 1
                        
                        if (not(cond:6_1))
                            (*(*var_34 + 8))()
            
            int32_t var_c_11 = 0xb
            
            if ((ebx & 0x1000) != 0)
                ebx &= 0xffffefff
                int32_t var_b8_5 = ebx
                int32_t* var_94
                
                if (var_94 != 0)
                    bool cond:5_1 = var_94[1] != 1
                    var_94[1] -= 1
                    
                    if (not(cond:5_1))
                        (*(*var_94 + 4))(eax_2)
                        bool cond:8_1 = var_94[2] != 1
                        var_94[2]
                        var_94[2] -= 1
                        
                        if (not(cond:8_1))
                            (*(*var_94 + 8))()
            
            int32_t var_c_12 = 0xa
            
            if ((ebx & 0x800) != 0)
                ebx &= 0xfffff7ff
                int32_t var_b8_6 = ebx
                int32_t* var_44
                
                if (var_44 != 0)
                    bool cond:7_1 = var_44[1] != 1
                    var_44[1] -= 1
                    
                    if (not(cond:7_1))
                        (*(*var_44 + 4))(eax_2)
                        bool cond:10_1 = var_44[2] != 1
                        var_44[2]
                        var_44[2] -= 1
                        
                        if (not(cond:10_1))
                            (*(*var_44 + 8))()
            
            int32_t var_c_13 = 9
            
            if ((ebx & 0x400) != 0)
                ebx &= 0xfffffbff
                int32_t var_b8_7 = ebx
                int32_t* var_64
                
                if (var_64 != 0)
                    bool cond:9_1 = var_64[1] != 1
                    var_64[1] -= 1
                    
                    if (not(cond:9_1))
                        (*(*var_64 + 4))(eax_2)
                        bool cond:12_1 = var_64[2] != 1
                        var_64[2]
                        var_64[2] -= 1
                        
                        if (not(cond:12_1))
                            (*(*var_64 + 8))()
            
            int32_t var_c_14 = 8
            
            if ((ebx & 0x200) != 0)
                ebx &= 0xfffffdff
                int32_t var_b8_8 = ebx
                int32_t* var_24
                
                if (var_24 != 0)
                    bool cond:11_1 = var_24[1] != 1
                    var_24[1] -= 1
                    
                    if (not(cond:11_1))
                        (*(*var_24 + 4))(eax_2)
                        bool cond:14_1 = var_24[2] != 1
                        var_24[2]
                        var_24[2] -= 1
                        
                        if (not(cond:14_1))
                            (*(*var_24 + 8))()
            
            int32_t var_c_15 = 7
            
            if ((ebx & 0x100) != 0)
                ebx &= 0xfffffeff
                int32_t var_b8_9 = ebx
                int32_t* var_54
                
                if (var_54 != 0)
                    bool cond:13_1 = var_54[1] != 1
                    var_54[1] -= 1
                    
                    if (not(cond:13_1))
                        (*(*var_54 + 4))(eax_2)
                        bool cond:16_1 = var_54[2] != 1
                        var_54[2]
                        var_54[2] -= 1
                        
                        if (not(cond:16_1))
                            (*(*var_54 + 8))()
            
            int32_t var_c_16 = 6
            
            if (ebx.b s< 0)
                ebx &= 0xffffff7f
                int32_t var_b8_10 = ebx
                int32_t* var_8c
                
                if (var_8c != 0)
                    bool cond:15_1 = var_8c[1] != 1
                    var_8c[1] -= 1
                    
                    if (not(cond:15_1))
                        (*(*var_8c + 4))(eax_2)
                        bool cond:18_1 = var_8c[2] != 1
                        var_8c[2]
                        var_8c[2] -= 1
                        
                        if (not(cond:18_1))
                            (*(*var_8c + 8))()
            
            int32_t var_c_17 = 5
            
            if ((ebx.b & 0x40) != 0)
                ebx &= 0xffffffbf
                int32_t var_b8_11 = ebx
                int32_t* var_7c
                
                if (var_7c != 0)
                    bool cond:17_1 = var_7c[1] != 1
                    var_7c[1] -= 1
                    
                    if (not(cond:17_1))
                        (*(*var_7c + 4))(eax_2)
                        bool cond:20_1 = var_7c[2] != 1
                        var_7c[2]
                        var_7c[2] -= 1
                        
                        if (not(cond:20_1))
                            (*(*var_7c + 8))()
            
            int32_t var_c_18 = 4
            
            if ((ebx.b & 0x20) != 0)
                ebx &= 0xffffffdf
                int32_t var_b8_12 = ebx
                int32_t* var_6c
                
                if (var_6c != 0)
                    bool cond:19_1 = var_6c[1] != 1
                    var_6c[1] -= 1
                    
                    if (not(cond:19_1))
                        (*(*var_6c + 4))(eax_2)
                        bool cond:22_1 = var_6c[2] != 1
                        var_6c[2]
                        var_6c[2] -= 1
                        
                        if (not(cond:22_1))
                            (*(*var_6c + 8))()
            
            int32_t var_c_19 = 3
            
            if ((ebx.b & 0x10) != 0)
                ebx &= 0xffffffef
                int32_t var_b8_13 = ebx
                int32_t* var_5c
                
                if (var_5c != 0)
                    bool cond:21_1 = var_5c[1] != 1
                    var_5c[1] -= 1
                    
                    if (not(cond:21_1))
                        (*(*var_5c + 4))(eax_2)
                        bool cond:24_1 = var_5c[2] != 1
                        var_5c[2]
                        var_5c[2] -= 1
                        
                        if (not(cond:24_1))
                            (*(*var_5c + 8))()
            
            int32_t var_c_20 = 2
            
            if ((ebx.b & 8) != 0)
                ebx &= 0xfffffff7
                int32_t var_b8_14 = ebx
                int32_t* var_4c
                
                if (var_4c != 0)
                    bool cond:23_1 = var_4c[1] != 1
                    var_4c[1] -= 1
                    
                    if (not(cond:23_1))
                        (*(*var_4c + 4))(eax_2)
                        bool cond:26_1 = var_4c[2] != 1
                        var_4c[2]
                        var_4c[2] -= 1
                        
                        if (not(cond:26_1))
                            (*(*var_4c + 8))()
            
            int32_t var_c_21 = 1
            
            if ((ebx.b & 4) != 0)
                ebx &= 0xfffffffb
                int32_t var_b8_15 = ebx
                int32_t* var_3c
                
                if (var_3c != 0)
                    bool cond:25_1 = var_3c[1] != 1
                    var_3c[1] -= 1
                    
                    if (not(cond:25_1))
                        (*(*var_3c + 4))(eax_2)
                        bool cond:29_1 = var_3c[2] != 1
                        var_3c[2]
                        var_3c[2] -= 1
                        
                        if (not(cond:29_1))
                            (*(*var_3c + 8))()
            
            int32_t var_c_22 = 0
            
            if ((ebx.b & 2) != 0)
                ebx &= 0xfffffffd
                int32_t var_b8_16 = ebx
                int32_t* var_2c
                
                if (var_2c != 0)
                    bool cond:28_1 = var_2c[1] != 1
                    var_2c[1] -= 1
                    
                    if (not(cond:28_1))
                        (*(*var_2c + 4))(eax_2)
                        bool cond:31_1 = var_2c[2] != 1
                        var_2c[2]
                        var_2c[2] -= 1
                        
                        if (not(cond:31_1))
                            (*(*var_2c + 8))()
            
            int32_t var_c_23 = 0xffffffff
            
            if ((ebx.b & 1) != 0)
                ebx &= 0xfffffffe
                int32_t* var_1c
                
                if (var_1c != 0)
                    bool cond:30_1 = var_1c[1] != 1
                    var_1c[1]
                    var_1c[1] -= 1
                    
                    if (not(cond:30_1))
                        (*(*var_1c + 4))(eax_2)
                        bool cond:32_1 = var_1c[2] != 1
                        var_1c[2]
                        var_1c[2] -= 1
                        
                        if (not(cond:32_1))
                            (*(*var_1c + 8))()
            
            if (var_b1_1 != 0)
                goto label_6f8a31
        
        if (esi_1 s>= result_1)
            break
        
        edx = *arg2
        int32_t eax_59 = edx[esi_1]
        ecx_2 += *(eax_59 + 0xb8)
        edi_1 += *(eax_59 + 0xc4)
        esi_1 += 1

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
