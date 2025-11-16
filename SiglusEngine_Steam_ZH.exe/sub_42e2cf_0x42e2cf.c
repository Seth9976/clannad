// 函数: sub_42e2cf
// 地址: 0x42e2cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_74 = edi
int32_t eax = *(arg1 + 0x26c)
int32_t var_30
__builtin_memset(&var_30, 0, 0x20)
char** eax_1 = sub_745f3f(0x14)
int32_t* var_8

if (eax_1 == 0)
    var_8 = nullptr
else
    *eax_1 = "DIRECT3D"
    eax_1[1] = 0
    eax_1[2] = 0
    eax_1[3] = 0
    eax_1[4] = 0
    var_8 = eax_1

int32_t result

if (var_8 == 0)
    result = 0x8007000e
else
    sub_42d1cf(arg1, var_8)
    char** eax_2 = sub_745f3f(0x14)
    
    if (eax_2 == 0)
        var_8 = nullptr
    else
        *eax_2 = "D3DX"
        eax_2[1] = 0
        eax_2[2] = 0
        eax_2[3] = 0
        eax_2[4] = 0
        var_8 = eax_2
    
    if (var_8 == 0)
        result = 0x8007000e
    else
        sub_42d1cf(arg1, var_8)
        var_30 = 2
        int32_t var_28_1 = 0x900
        char** eax_3 = sub_745f3f(0x14)
        
        if (eax_3 == 0)
            var_8 = nullptr
        else
            *eax_3 = "DIRECT3D_VERSION"
            eax_3[1] = 0
            eax_3[2] = 0
            eax_3[3] = 0
            eax_3[4] = 0
            var_8 = eax_3
        
        if (var_8 == 0)
            result = 0x8007000e
        else
            void*** eax_4 = sub_42cfa1(0x30)
            void*** eax_5
            
            if (eax_4 == 0)
                eax_5 = nullptr
            else
                eax_5 = sub_46b809(eax_4, &var_30)
            
            var_8[2] = eax_5
            
            if (eax_5 == 0)
                result = 0x8007000e
            else
                sub_42d1cf(arg1, var_8)
                var_30 = 2
                int32_t var_28_2 = 0x902
                char** eax_6 = sub_745f3f(0x14)
                
                if (eax_6 == 0)
                    var_8 = nullptr
                else
                    *eax_6 = "D3DX_VERSION"
                    eax_6[1] = 0
                    eax_6[2] = 0
                    eax_6[3] = 0
                    eax_6[4] = 0
                    var_8 = eax_6
                
                if (var_8 == 0)
                    result = 0x8007000e
                else
                    void*** eax_7 = sub_42cfa1(0x30)
                    void*** eax_8
                    
                    if (eax_7 == 0)
                        eax_8 = nullptr
                    else
                        eax_8 = sub_46b809(eax_7, &var_30)
                    
                    var_8[2] = eax_8
                    
                    if (eax_8 != 0)
                        sub_42d1cf(arg1, var_8)
                        void* esi_1 = arg2
                        var_8 = nullptr
                        
                        if (esi_1 != 0)
                            void var_68
                            sub_42a66a(&var_68)
                            void* edi_1 = arg1
                            *(edi_1 + 0x26c) = &var_68
                            
                            if (*esi_1 != 0)
                                while (true)
                                    char* edx_1 = *(esi_1 + 4)
                                    void* eax_12
                                    
                                    if (edx_1 == 0)
                                        eax_12 = nullptr
                                    else
                                        char* eax_11 = edx_1
                                        void* ecx_15
                                        
                                        do
                                            ecx_15.b = *eax_11
                                            eax_11 = &eax_11[1]
                                        while (ecx_15.b != 0)
                                        eax_12 = eax_11 - &eax_11[1]
                                    
                                    result = sub_42a684(&var_68, edx_1, eax_12, 0, 0, edi_1, 
                                        edi_1 + 0x18)
                                    
                                    if (result s< 0)
                                        goto label_42e490
                                    
                                    result = sub_42e02a(arg1, *esi_1, nullptr)
                                    
                                    if (result s< 0)
                                        goto label_42e490
                                    
                                    esi_1 += 8
                                    
                                    if (*esi_1 == 0)
                                        break
                                    
                                    edi_1 = arg1
                        
                        result = 0
                    else
                        result = 0x8007000e

label_42e490:
*(arg1 + 0x26c) = eax

if (var_8 != 0)
    sub_42b93a(var_8, 1)

return result
