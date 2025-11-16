// 函数: sub_47f6c2
// 地址: 0x47f6c2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_48 = edi
void* result = nullptr
void var_24
sub_4c6bfc(&var_24, 0x464e4946)
void* ecx_1 = arg1[0x1e]
char* var_14 = nullptr
char* var_8 = nullptr
int32_t eax_3 = *(ecx_1 + 0xac) + *(ecx_1 + 0xa8) + *(ecx_1 + 0xa4) + *(ecx_1 + 0xa0)

if (eax_3 != neg.d(*(ecx_1 + 0x9c)))
    char* eax_6 = sub_745f3f((eax_3 + *(ecx_1 + 0x9c)) << 2)
    var_14 = eax_6
    
    if (eax_6 != 0)
        sub_47e150(arg1[0x1e], eax_6)
        void* eax_7 = arg1[0x1e]
        int32_t esi = *(eax_7 + 0xac)
        sub_47e150(eax_7 + 0x70, &eax_6[esi << 2])
        int32_t eax_8 = arg1[0x1e]
        int32_t esi_1 = esi + *(eax_8 + 0xa8)
        sub_47e150(eax_8 + 0x1c, &eax_6[esi_1 << 2])
        int32_t eax_9 = arg1[0x1e]
        int32_t esi_2 = esi_1 + *(eax_9 + 0x9c)
        sub_47e150(eax_9 + 0x38, &eax_6[esi_2 << 2])
        int32_t eax_10 = arg1[0x1e]
        int32_t esi_3 = esi_2 + *(eax_10 + 0xa0)
        sub_47e150(eax_10 + 0x54, &eax_6[esi_3 << 2])
        int32_t esi_4 = esi_3 + *(arg1[0x1e] + 0xa4)
        sub_761c30(eax_6, esi_4, 4, sub_47f5fb)
        int32_t eax_13 = esi_4 * 0x14
        char* eax_14 = sub_745f3f(eax_13)
        var_8 = eax_14
        
        if (eax_14 != 0)
            int32_t var_40
            __builtin_memset(&var_40, 0, 0x1c)
            int32_t var_38_1 = 0
            int32_t ecx_13 = arg1[0xf] | 4
            var_40 = 0x1c
            int32_t var_2c_1 = ecx_13
            int32_t var_34_1 = esi_4
            result = sub_4c6c51(&var_24, &var_40, 0x1c, 1, nullptr)
            
            if (result s>= 0)
                __builtin_memset(__builtin_memset(var_8, 0, eax_13 u>> 2 << 2), 0, eax_13 & 3)
                void var_30
                result = sub_4c6c51(&var_24, var_8, eax_13, 1, &var_30)
                
                if (result s>= 0)
                    int32_t var_c_1 = 0
                    
                    if (esi_4 u> 0)
                        char* var_10_2 = var_8
                        
                        do
                            char** eax_19 = *(var_14 + (var_c_1 << 2))
                            result = sub_481b72(arg1[0x1f], &var_24, var_10_2, *eax_19, 
                                (eax_19[1]).w, *arg1[0x16], arg2.b)
                            
                            if (result s< 0)
                                goto label_47f917
                            
                            var_c_1 += 1
                            var_10_2 = &var_10_2[0x14]
                        while (var_c_1 u< esi_4)
                    
                    void var_3c
                    result = sub_4c6c51(&var_24, 
                        "Microsoft (R) D3DX9 Shader Assembler 5.04.00.3900", 0xffffffff, 5, &var_3c)
                    
                    if (result s>= 0)
                        void* eax_22 = sub_4c6d8a(&var_24)
                        
                        if (eax_22 u> 0x8000)
                            sub_42aba3(*arg1, &arg1[4], 0x7ef, 
                                "fragment info exceeds maximum comment size")
                            result = 0x80004005
                        else
                            result = sub_47edc5(arg1, eax_22)
                            
                            if (result s>= 0)
                                void* eax_24 = arg1[0x16]
                                _memcpy(eax_24 + (eax_22 << 2) + 4, eax_24 + 4, 
                                    (arg1[0x17] << 2) + 0xfffffffc, arg2)
                                result = sub_4c6d96(&var_24, arg1[0x16] + 4, eax_22)
                                
                                if (result s>= 0)
                                    arg1[0x17] += eax_22
                                    int32_t eax_29 = arg1[0x17]
                                    arg1[0x1a] += eax_22
                                    arg1[0x19] = eax_29
                                    result = nullptr
        else
            result = 0x8007000e
    else
        result = 0x8007000e

label_47f917:
j__free(var_14)
j__free(var_8)
sub_4c6c19(&var_24)
return result
