// 函数: sub_431869
// 地址: 0x431869
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_12c = edi
void* var_68
sub_42f25e(&var_68, arg1 + 0x10)
int32_t* var_2c = nullptr
int32_t* var_34 = nullptr
int32_t* var_4c = nullptr
int32_t* var_54 = nullptr
int32_t var_50 = 0

if (arg3 != 0)
    *arg3 = 0

void* var_3c
float result

if (*(arg1 + 0x324) != 0)
    var_3c = arg1 + 0x28
    sub_42a55f(arg1 + 0x28)
    int32_t* eax_2 = sub_745f3f(0x1c)
    
    if (eax_2 == 0)
        var_2c = nullptr
    else
        var_2c = sub_42f3c6(eax_2)
    
    if (var_2c != 0)
        void* i = *(arg1 + 0x34c)
        int32_t* var_58 = nullptr
        int32_t* var_38
        int16_t x87control
        
        for (; i != 0; i = *(i + 0x34))
            int32_t** var_130_1 = arg2
            float result_2
            result_2, x87control = sub_4315f9(arg1, i, var_2c, &var_58)
            result = result_2
            
            if (result s< 0)
                goto label_431ef2_2
            
            int32_t* eax_4 = *(i + 0x30)
            
            while (true)
                var_38 = eax_4
                
                if (eax_4 == 0)
                    break
                
                int32_t** var_130_2 = arg2
                float result_3
                result_3, x87control = sub_4315f9(arg1, var_38, var_2c, &var_58)
                result = result_3
                
                if (result s< 0)
                    goto label_431ef2_2
                
                eax_4 = var_38[0xd]
        
        int32_t* eax_11 = *(arg1 + 0x348)
        int32_t* var_30
        
        while (true)
            var_38 = eax_11
            
            if (eax_11 == 0)
                break
            
            void* esi_1 = var_38[0xc]
            
            while (true)
                if (esi_1 == 0)
                    int32_t* eax_7 = var_38
                    
                    while (true)
                        int32_t* eax_9 = eax_7[0xb]
                        var_30 = eax_9
                        
                        if (eax_9 == 0)
                            break
                        
                        for (void* i_1 = var_30[0xa]; i_1 != 0; i_1 = *(i_1 + 0x34))
                            int32_t** var_130_4 = arg2
                            float result_5
                            result_5, x87control = sub_4315f9(arg1, i_1, var_2c, &var_58)
                            result = result_5
                            
                            if (result s< 0)
                                goto label_431ef2_2
                        
                        eax_7 = var_30
                    
                    eax_11 = var_38[0xd]
                    break
                
                int32_t** var_130_3 = arg2
                float result_4
                result_4, x87control = sub_4315f9(arg1, esi_1, var_2c, &var_58)
                result = result_4
                
                if (result s< 0)
                    goto label_431ef2_2
                
                esi_1 = *(esi_1 + 0x34)
        
        int32_t var_5c
        void* var_5c_1 = var_5c & eax_11
        int32_t* eax_12 = *(arg1 + 0x354)
        int32_t* var_48 = eax_12
        float result_1
        
        if (eax_12 != 0)
            while (true)
                void var_120
                sub_46cade(&var_120)
                int32_t* eax_13 = var_48
                void* esi_2 = eax_13[5]
                int32_t ecx_9 = *(esi_2 + 0x1c)
                int32_t eax_16
                
                if (ecx_9 == 0x17 || ecx_9 == 0x16)
                    eax_16 = *(*eax_13 * 0x1c + 0xab87a4)
                
                if ((ecx_9 == 0x17 || ecx_9 == 0x16)
                        && (eax_16 == 0xa000000 || eax_16 == 0xb000000))
                    void* eax_19 = *(esi_2 + 0x20)
                    
                    while (*(eax_19 + 4) == 0xd)
                        if (*(eax_19 + 0x1c) != 0)
                            break
                        
                        eax_19 = *(eax_19 + 0x20)
                    
                    void* var_138_16
                    char* var_130_32
                    
                    if (*(eax_19 + 4) != 1)
                        var_130_32 =
                            "ID3DXEffectCompiler::CompileEffect: Only 1-d shader arrays allowed"
                        int32_t var_134_14 = 0
                        var_138_16 = esi_2 + 0x30
                    label_431fc1:
                        sub_42aba3(var_3c, var_138_16, 0, var_130_32)
                        result = -2.29658805e-41f
                        sub_46e503(&var_120)
                        goto label_431ef2_2
                    
                    int32_t* edi_2 = *(eax_19 + 8)
                    bool cond:11_1 = edi_2[4] != 6
                    var_30 = edi_2
                    
                    if (cond:11_1)
                        var_130_32 = "ID3DXEffectCompiler::CompileEffect: Shader arrays must be a "
                        "previously defined parameter"
                    label_431fb8:
                        int32_t var_134_15 = 0
                        var_138_16 = &var_30[8]
                        goto label_431fc1
                    
                    void* ecx_13 = *(esi_2 + 0x24)
                    void* eax_20 = ecx_13
                    
                    while (*(eax_20 + 4) == 0xd)
                        if (*(eax_20 + 0x1c) != 0)
                            break
                        
                        eax_20 = *(eax_20 + 0x20)
                    
                    if (*(eax_20 + 4) != 0xe)
                        if (*(ecx_13 + 4) != 0xd)
                            var_130_32 = "ID3DXEffectCompiler::CompileEffect: Could not compile "
                            "expression containing shader array"
                            goto label_431fb8
                        
                        float result_7
                        result_7, x87control = sub_47dc65(&var_120, arg1 + 0x10, *(arg1 + 0x320), 
                            ecx_13, 0, arg2, &var_34, &var_38)
                        result = result_7
                        
                        if (result s< 0)
                            sub_42aba3(var_3c, esi_2 + 0x30, 0, 
                                "ID3DXEffectCompiler::CompileEffect: There was an error compiling "
                            "expression")
                        else
                            char* edi_3 = var_30[0xa]
                            char* ecx_17 = edi_3
                            int32_t* eax_32
                            
                            do
                                eax_32.b = *ecx_17
                                ecx_17 = &ecx_17[1]
                            while (eax_32.b != 0)
                            char* eax_33 = edi_3
                            void* ecx_18
                            
                            do
                                ecx_18.b = *eax_33
                                eax_33 = &eax_33[1]
                            while (ecx_18.b != 0)
                            void* eax_36 = (eax_33 - &eax_33[1] + 1) & 3
                            char temp1_1 = eax_36.b
                            eax_36.b = neg.b(eax_36.b)
                            float result_8 = (neg.d(sbb.d(eax_36, eax_36, temp1_1 != 0))
                                + ((ecx_17 - &ecx_17[1] + 1) u>> 2)) << 2
                            int32_t* eax_40 = var_34
                            int32_t ecx_19 = *eax_40
                            result_1 = result_8
                            int32_t esi_10 = (*(ecx_19 + 0x10))(eax_40) i+ result_8 + 4
                            int32_t** var_130_12 = &var_4c
                            int32_t var_134_9 = esi_10
                            result = sub_458de2()
                            
                            if (result s>= 0)
                                int32_t* eax_43 = var_4c
                                float* eax_44 = (*(*eax_43 + 0xc))(eax_43)
                                __builtin_memset(__builtin_memset(eax_44, 0, esi_10 u>> 2 << 2), 0, 
                                    esi_10 & 3)
                                void* var_44_2 = &eax_44[1]
                                *eax_44 = result_1
                                _strncpy(var_44_2, var_30[0xa], esi_10 - 4)
                                int32_t* eax_47 = var_34
                                var_30 = (*(*eax_47 + 0x10))(eax_47)
                                int32_t* eax_49 = var_34
                                int32_t eax_50 = (*(*eax_49 + 0xc))(eax_49)
                                int32_t* eax_52 = var_30
                                int32_t esi_13
                                int32_t edi_8
                                edi_8, esi_13 = __builtin_memcpy(var_44_2 i+ result_1, eax_50, 
                                    eax_52 u>> 2 << 2)
                                __builtin_memcpy(edi_8, esi_13, eax_52 & 3)
                                int32_t* eax_53 = var_38
                                
                                if (eax_53 != 0)
                                    (*(*eax_53 + 8))(eax_53)
                                    var_38 = nullptr
                                
                                int32_t* eax_54 = var_34
                                
                                if (eax_54 != 0)
                                    (*(*eax_54 + 8))(eax_54)
                                
                                int32_t* eax_55 = var_4c
                                var_4c = nullptr
                                var_34 = eax_55
                                var_30 = 2
                                goto label_431cc4
                    else
                        int32_t ecx_14 = *(eax_20 + 0x20)
                        
                        if (ecx_14 s< 2)
                            var_130_32 = "ID3DXEffectCompiler::CompileEffect: Shader arrays index "
                            "was not float or int"
                            goto label_431fb8
                        
                        int32_t eax_21
                        
                        if (ecx_14 s<= 4)
                            eax_21 = *(eax_20 + 0x28)
                        else
                            if (ecx_14 s> 8)
                                var_130_32 = "ID3DXEffectCompiler::CompileEffect: Shader arrays "
                                "index was not float or int"
                                goto label_431fb8
                            
                            eax_21, x87control = __ftol(x87control, 
                                fconvert.t(*(eax_20 + 0x28)) + fconvert.t(1.0000000000000001e-05))
                        
                        int32_t var_130_7 = eax_21
                        void var_28
                        sub_749803(&var_28, "%d")
                        char* eax_22 = edi_2[0xa]
                        char i_2
                        
                        do
                            i_2 = *eax_22
                            eax_22 = &eax_22[1]
                        while (i_2 != 0)
                        
                        void* eax_24 = &var_28
                        
                        do
                            i_2 = *eax_24
                            eax_24 += 1
                        while (i_2 != 0)
                        
                        int32_t** var_130_8 = &var_34
                        void var_27
                        void* var_134_6 = eax_24 - &var_27 + eax_22 - &eax_22[1] + 3
                        result = sub_458de2()
                        
                        if (result s>= 0)
                            void* var_130_9 = &var_28
                            int32_t var_134_7 = var_30[0xa]
                            int32_t* eax_29 = var_34
                            sub_749803((*(*eax_29 + 0xc))(eax_29), "%s[%s]")
                            var_30 = 1
                        label_431cc4:
                            int32_t* eax_56 = var_34
                            int32_t eax_57 = (*(*eax_56 + 0xc))(eax_56)
                            int32_t* eax_58 = var_34
                            float result_9 = (*(*eax_58 + 0x10))(eax_58)
                            int32_t* esi_14 = var_48
                            result_1 = result_9
                            result = sub_42f442(var_2c, &esi_14[1], 4, nullptr)
                            
                            if (result s>= 0)
                                result = sub_42f442(var_2c, &esi_14[2], 4, nullptr)
                                
                                if (result s>= 0)
                                    result = sub_42f442(var_2c, &esi_14[3], 4, nullptr)
                                    
                                    if (result s>= 0)
                                        result = sub_42f442(var_2c, &esi_14[4], 4, nullptr)
                                        
                                        if (result s>= 0)
                                            result = sub_42f442(var_2c, &var_30, 4, nullptr)
                                            
                                            if (result s>= 0)
                                                result = sub_42f442(var_2c, &result_1, 4, nullptr)
                                                
                                                if (result s>= 0)
                                                    result = sub_42f442(var_2c, eax_57, result_1, 
                                                        nullptr)
                                                    
                                                    if (result s>= 0)
                                                        int32_t* eax_70 = var_34
                                                        var_5c_1 += 1
                                                        
                                                        if (eax_70 != 0)
                                                            (*(*eax_70 + 8))(eax_70)
                                                            var_34 = nullptr
                                                        
                                                        sub_46e503(&var_120)
                                                        int32_t* esi_15 = esi_14[6]
                                                        var_48 = esi_15
                                                        
                                                        if (esi_15 == 0)
                                                            goto label_431dc5
                                                        
                                                        continue
                else
                    float result_6
                    result_6, x87control = sub_47dc65(&var_120, arg1 + 0x10, *(arg1 + 0x320), 
                        esi_2, 0, arg2, &var_34, &var_38)
                    result = result_6
                    
                    if (result s>= 0)
                        int32_t* eax_18 = var_38
                        int32_t* ecx_11
                        ecx_11.b = eax_18 == 1
                        var_30 = ecx_11
                        
                        if (eax_18 != 1 && eax_18 != 0)
                            (*(*eax_18 + 8))(eax_18)
                            var_38 = nullptr
                        
                        goto label_431cc4
                    
                    sub_42aba3(var_3c, esi_2 + 0x30, 0, 
                        "ID3DXEffectCompiler::CompileEffect: There was an error compiling expression")
                
                sub_46e503(&var_120)
                break
            
            goto label_431ecd
        
    label_431dc5:
        var_48 = nullptr
        sub_42f5f6(var_2c, 0, &var_48)
        result = 0f
        int32_t* esi_16 = var_48
        int32_t eax_71 = sub_745f3f(esi_16)
        var_50 = eax_71
        
        if (eax_71 == 0)
        label_431ecd:
            
            if (result s< 0)
            labelid_13:
                sub_42aba3(var_3c, nullptr, 0, "ID3DXEffectCompiler: Compilation failed")
            else
                if (sub_699170(var_3c) u> 0)
                    result = -7.40412713e-34f
                
                if (result s< 0)
                labelid_13:
                    sub_42aba3(var_3c, nullptr, 0, "ID3DXEffectCompiler: Compilation failed")
        else
            sub_42f5f6(var_2c, eax_71, nullptr)
            int32_t** var_130_24 = &var_54
            void* var_134_13 = *(arg1 + 0x338) + *(arg1 + 0x340) + esi_16 + 0x10
            result = sub_458de2()
            result_1 = result
            
            if (result s>= 0)
                int32_t* eax_76 = var_54
                int32_t* eax_77 = (*(*eax_76 + 0xc))(eax_76)
                *eax_77 = 0xfeff0901
                eax_77[1] = *(arg1 + 0x340)
                int32_t ecx_51 = *(arg1 + 0x340)
                int32_t esi_18
                int32_t edi_10
                edi_10, esi_18 = __builtin_memcpy(&eax_77[2], *(arg1 + 0x344), ecx_51 u>> 2 << 2)
                __builtin_memcpy(edi_10, esi_18, ecx_51 & 3)
                void* eax_80 = &eax_77[2] + *(arg1 + 0x340)
                int32_t ecx_55 = *(arg1 + 0x338)
                int32_t esi_20
                int32_t edi_12
                edi_12, esi_20 = __builtin_memcpy(eax_80, *(arg1 + 0x33c), ecx_55 u>> 2 << 2)
                __builtin_memcpy(edi_12, esi_20, ecx_55 & 3)
                void* eax_81 = eax_80 + *(arg1 + 0x338)
                *eax_81 = var_58
                *(eax_81 + 4) = var_5c_1
                int32_t* ecx_61 = var_48
                int32_t esi_22
                int32_t edi_14
                edi_14, esi_22 = __builtin_memcpy(eax_81 + 8, var_50, ecx_61 u>> 2 << 2)
                __builtin_memcpy(edi_14, esi_22, ecx_61 & 3)
                
                if (arg3 != 0)
                    int32_t* eax_84 = var_54
                    *arg3 = eax_84
                    (*(*eax_84 + 4))(eax_84)
                
                result = result_1
                goto label_431ecd
            
        label_431ef2:
            sub_42aba3(var_3c, nullptr, 0, "ID3DXEffectCompiler: Compilation failed")
    else
        result = -6.42868091e-40f
    label_431ef2_1:
        sub_42aba3(var_3c, nullptr, 0, "ID3DXEffectCompiler: Compilation failed")
else
    var_3c = arg1 + 0x28
    sub_42aba3(arg1 + 0x28, nullptr, 0, "ID3DXEffectCompiler: There were no techniques")
    result = -2.29658805e-41f
label_431ef2_2:
    sub_42aba3(var_3c, nullptr, 0, "ID3DXEffectCompiler: Compilation failed")

if (arg4 != 0)
    sub_42a5fc(var_3c, arg4)

if (var_50 != 0)
    j__free(var_50)

if (var_2c != 0)
    sub_42f421(var_2c, 1)

int32_t* eax_86 = var_54

if (eax_86 != 0)
    (*(*eax_86 + 8))(eax_86)
    var_54 = nullptr

int32_t* eax_87 = var_34

if (eax_87 != 0)
    (*(*eax_87 + 8))(eax_87)
    var_34 = nullptr

int32_t* eax_88 = var_4c

if (eax_88 != 0)
    (*(*eax_88 + 8))(eax_88)
    var_4c = nullptr

sub_42d09d(var_68)
sub_745f2b(__security_cookie_1)
return result
