// 函数: sub_436ab7
// 地址: 0x436ab7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
void* var_1c
__builtin_memset(&var_1c, 0, 0x14)
int32_t* eax = sub_745f3f(0x1c)
int32_t* var_8

if (eax == 0)
    var_8 = nullptr
else
    var_8 = sub_42f3c6(eax)

int32_t* var_18_1
int32_t* var_14_1
int32_t* var_c_1
int32_t result

if (var_8 == 0)
label_436f88:
    result = 0x8007000e
label_436f8d:
    
    if (result s< 0)
        sub_42aba3(arg1 + 0x28, nullptr, 0, 
            "ID3DXEffectCompiler: There was an error initializing the compiler")
else
    int32_t* eax_2 = sub_745f3f(0x1c)
    
    if (eax_2 == 0)
        var_c_1 = nullptr
    else
        var_c_1 = sub_42f3c6(eax_2)
    
    if (var_c_1 == 0)
        goto label_436f88
    
    int32_t* eax_4 = sub_745f3f(0x1c)
    
    if (eax_4 == 0)
        var_14_1 = nullptr
    else
        var_14_1 = sub_42f3c6(eax_4)
    
    if (var_14_1 == 0)
        goto label_436f88
    
    int32_t* eax_6 = sub_745f3f(0x1c)
    
    if (eax_6 == 0)
        var_18_1 = nullptr
    else
        var_18_1 = sub_42f3c6(eax_6)
    
    if (var_18_1 == 0)
        goto label_436f88
    
    result = sub_42f442(var_c_1, &var_1c, 4, nullptr)
    
    if (result s< 0)
        sub_42aba3(arg1 + 0x28, nullptr, 0, 
            "ID3DXEffectCompiler: There was an error initializing the compiler")
    else if (arg2 == 0 || *(arg2 + 4) != 4)
    label_436c4a:
        result = 0x80004005
        sub_42aba3(arg1 + 0x28, nullptr, 0, 
            "ID3DXEffectCompiler: There was an error initializing the compiler")
    else
        *(arg1 + 4) = 0
        *(arg1 + 0x328) = 0
        *(arg1 + 0x324) = 0
        *(arg1 + 0x32c) = 0
        *(arg1 + 0x330) = 1
        *(arg1 + 0x334) = 0
        void* ebx = *(arg2 + 0x1c)
        void* var_20_1 = arg2
        
        if (ebx != 0)
            while (true)
                if (*(ebx + 4) == 1)
                    void* eax_10 = *(ebx + 8)
                    
                    if (eax_10 != 0)
                        int32_t ecx_9 = *(eax_10 + 4)
                        int32_t result_1
                        
                        if (ecx_9 == 0xc)
                        label_436c23:
                            ebx = *(ebx + 0xc)
                            
                            if (ebx != 0)
                                continue
                            
                            if (result_1 s>= 0)
                                goto label_436c5a
                            
                            result = result_1
                            break
                        else if (ecx_9 == 6)
                            int32_t ecx_10 = *(eax_10 + 0x10)
                            
                            if (ecx_10 != 0)
                                int32_t result_6
                                
                                if (ecx_10 == 1)
                                    int32_t* var_30_3 = var_c_1
                                    result_6 = sub_435d7f(arg1, eax_10, var_14_1)
                                    int16_t top = top - 1
                                    unimplemented  {call 0x435d7f}
                                else if (ecx_10 == 2)
                                    result_6 = sub_43360a(arg1, eax_10)
                                else
                                    if (ecx_10 != 3)
                                        goto label_436c4a
                                    
                                    int32_t* var_30_1 = var_c_1
                                    result_6 = sub_43682c(arg1, eax_10, var_18_1)
                                
                                if (result_6 s< 0 && result_1 s>= 0)
                                    result_1 = result_6
                            
                            goto label_436c23
                
                sub_42aba3(arg1 + 0x28, nullptr, 0, 
                    "ID3DXEffectCompiler: There was an unexpected error in the parse tree")
                goto label_436c4a
            
            goto label_436f8d
        
    label_436c5a:
        void* ecx_18 = *(arg1 + 0x358)
        
        if (ecx_18 != 0)
            sub_42f2da(ecx_18, 1)
            *(arg1 + 0x358) = 0
        
        result = sub_42f442(var_8, arg1 + 0x328, 4, nullptr)
        
        if (result s< 0)
            sub_42aba3(arg1 + 0x28, nullptr, 0, 
                "ID3DXEffectCompiler: There was an error initializing the compiler")
        else
            result = sub_42f442(var_8, arg1 + 0x324, 4, nullptr)
            
            if (result s< 0)
                sub_42aba3(arg1 + 0x28, nullptr, 0, 
                    "ID3DXEffectCompiler: There was an error initializing the compiler")
            else
                result = sub_42f442(var_8, arg1 + 0x334, 4, nullptr)
                
                if (result s< 0)
                    sub_42aba3(arg1 + 0x28, nullptr, 0, 
                        "ID3DXEffectCompiler: There was an error initializing the compiler")
                else
                    result = sub_42f442(var_8, arg1 + 0x330, 4, nullptr)
                    
                    if (result s< 0)
                        sub_42aba3(arg1 + 0x28, nullptr, 0, 
                            "ID3DXEffectCompiler: There was an error initializing the compiler")
                    else
                        sub_42f5d6(var_8, var_14_1)
                        var_14_1 = nullptr
                        sub_42f5d6(var_8, var_18_1)
                        var_18_1 = nullptr
                        *(arg1 + 0x338) = 0
                        *(arg1 + 0x340) = 0
                        sub_42f5f6(var_8, 0, arg1 + 0x338)
                        sub_42f5f6(var_c_1, 0, arg1 + 0x340)
                        
                        for (void* i = *(arg1 + 0x34c); i != 0; i = *(i + 0x34))
                            *(i + 0x40) = *(*(i + 0x40) + 0x18)
                            *(i + 0x3c) = *(*(i + 0x3c) + 0x18)
                            *(i + 0x44) = *(*(i + 0x44) + 0x18)
                            
                            for (void* j = *(i + 0x30); j != 0; j = *(j + 0x34))
                                *(j + 0x40) = *(*(j + 0x40) + 0x18)
                                *(j + 0x3c) = *(*(j + 0x3c) + 0x18)
                                *(j + 0x44) = 0
                        
                        for (void* i_1 = *(arg1 + 0x348); i_1 != 0; i_1 = *(i_1 + 0x34))
                            for (void* j_1 = *(i_1 + 0x30); j_1 != 0; j_1 = *(j_1 + 0x34))
                                *(j_1 + 0x40) = *(*(j_1 + 0x40) + 0x18)
                                *(j_1 + 0x3c) = *(*(j_1 + 0x3c) + 0x18)
                                *(j_1 + 0x44) = 0
                            
                            for (void* j_2 = *(i_1 + 0x2c); j_2 != 0; j_2 = *(j_2 + 0x2c))
                                for (void* k = *(j_2 + 0x28); k != 0; k = *(k + 0x34))
                                    *(k + 0x40) = *(*(k + 0x40) + 0x18)
                                    *(k + 0x3c) = *(*(k + 0x3c) + 0x18)
                                    *(k + 0x44) = 0
                        
                        for (void* i_2 = *(arg1 + 0x354); i_2 != 0; i_2 = *(i_2 + 0x18))
                            *(i_2 + 0x20) = *(*(i_2 + 0x20) + 0x18)
                            *(i_2 + 0x1c) = *(*(i_2 + 0x1c) + 0x18)
                        
                        int32_t eax_22 = sub_745f3f(*(arg1 + 0x338))
                        *(arg1 + 0x33c) = eax_22
                        int32_t eax_23
                        
                        if (eax_22 != 0)
                            eax_23 = sub_745f3f(*(arg1 + 0x340))
                            *(arg1 + 0x344) = eax_23
                        
                        if (eax_22 != 0 && eax_23 != 0)
                            sub_42f5f6(var_8, *(arg1 + 0x33c), nullptr)
                            int32_t ecx_39 = sub_42f5f6(var_c_1, *(arg1 + 0x344), nullptr)
                            result = 0
                            void* eax_24 = *(arg1 + 0x34c)
                        label_436eb9:
                            char* var_30_12
                            
                            if (eax_24 != 0)
                                void* var_30_10 = eax_24
                                int32_t result_2
                                result_2, ecx_39 = sub_4334bf(ecx_39, *(arg1 + 0x344))
                                result = result_2
                                
                                if (result s< 0)
                                    var_30_12 = "ID3DXEffectCompiler: There was an error "
                                    "initializing parameter handles"
                                else
                                    void* eax_26 = *(eax_24 + 0x30)
                                    
                                    while (true)
                                        if (eax_26 == 0)
                                            eax_24 = *(eax_24 + 0x34)
                                            goto label_436eb9
                                        
                                        void* var_30_11 = eax_26
                                        int32_t result_3
                                        result_3, ecx_39 = sub_4334bf(ecx_39, *(arg1 + 0x344))
                                        result = result_3
                                        
                                        if (result s< 0)
                                            var_30_12 = "ID3DXEffectCompiler: There was an error "
                                            "initializing parameter annotation handles"
                                            break
                                        
                                        eax_26 = *(eax_26 + 0x34)
                                
                            label_436ed6:
                                sub_42aba3(arg1 + 0x28, nullptr, 0, var_30_12)
                            else
                                void* eax_29 = *(arg1 + 0x348)
                                
                                while (true)
                                    void* var_10_2 = eax_29
                                    
                                    if (eax_29 == 0)
                                        break
                                    
                                    void* ecx_40 = *(eax_29 + 0x30)
                                    arg2 = ecx_40
                                    
                                    if (ecx_40 != 0)
                                        void* i_3
                                        
                                        do
                                            void* var_30_13 = arg2
                                            int32_t result_4
                                            result_4, ecx_40 = sub_4334bf(ecx_40, *(arg1 + 0x344))
                                            result = result_4
                                            
                                            if (result s< 0)
                                                var_30_12 = "ID3DXEffectCompiler: There was an error "
                                                "initializing technique annotation handles"
                                                goto label_436ed6
                                            
                                            i_3 = *(arg2 + 0x34)
                                            arg2 = i_3
                                        while (i_3 != 0)
                                        eax_29 = var_10_2
                                    
                                    void* ecx_41 = *(eax_29 + 0x2c)
                                    
                                    while (true)
                                        var_1c = ecx_41
                                        
                                        if (ecx_41 == 0)
                                            break
                                        
                                        void* edx_9 = *(ecx_41 + 0x28)
                                        arg2 = edx_9
                                        
                                        if (edx_9 != 0)
                                            void* i_4
                                            
                                            do
                                                void* var_30_14 = arg2
                                                int32_t result_5
                                                result_5, ecx_41 =
                                                    sub_4334bf(ecx_41, *(arg1 + 0x344))
                                                result = result_5
                                                
                                                if (result s< 0)
                                                    var_30_12 = "ID3DXEffectCompiler: There was an "
                                                    "error initializing pass annotation handles"
                                                    goto label_436ed6
                                                
                                                i_4 = *(arg2 + 0x34)
                                                arg2 = i_4
                                            while (i_4 != 0)
                                            ecx_41 = var_1c
                                            eax_29 = var_10_2
                                        
                                        ecx_41 = *(ecx_41 + 0x2c)
                                    
                                    eax_29 = *(eax_29 + 0x34)
                                
                                *(arg1 + 0x320) = var_20_1
                            goto label_436f8d
                        
                        result = 0x8007000e
                        sub_42aba3(arg1 + 0x28, nullptr, 0, 
                            "ID3DXEffectCompiler: There was an error initializing the compiler")

if (var_14_1 != 0)
    sub_42f421(var_14_1, 1)

if (var_18_1 != 0)
    sub_42f421(var_18_1, 1)

if (var_8 != 0)
    sub_42f421(var_8, 1)

if (var_c_1 != 0)
    sub_42f421(var_c_1, 1)

return result
