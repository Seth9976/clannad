// 函数: sub_47f95a
// 地址: 0x47f95a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_60 = edi
void var_2c
sub_4c6bfc(&var_2c, 0x47554244)
int32_t var_54
__builtin_memset(&var_54, 0, 0x28)
void* i_3 = nullptr
var_54 = 0x28
char* var_10 = nullptr
char* var_c = nullptr
int32_t result_1 = sub_4c6c51(&var_2c, &var_54, 0x28, 1, nullptr)
int32_t result = result_1

if (result_1 s>= 0)
    for (void* i = arg1[0xd]; i != 0; i = *(i + 0xc))
        void* ecx_2 = *(i + 8)
        
        if (ecx_2 != 0 && *(ecx_2 + 4) == 0x12)
            i_3 = *(i + 8)
            break
    
    void* i_1 = i_3
    char* var_40
    
    if (i_3 != 0)
        do
            var_40 = &var_40[1]
            i_1 = *(i_1 + 0xc)
        while (i_1 != 0)
    
    if (var_40 == 0)
    label_47fafd:
        char* eax_12 = arg1[0x1d]
        int32_t result_4
        
        if (eax_12 != 0)
            void var_30
            result_4 = sub_4c6c51(&var_2c, eax_12, 0xffffffff, 7, &var_30)
            result = result_4
        
        if (eax_12 == 0 || result_4 s>= 0)
            char* eax_13 = arg1[0x1b]
            void var_4c
            
            if (eax_13 == 0)
            label_47fb6c:
                void var_50
                
                if (sub_4c6c51(&var_2c, "Microsoft (R) D3DX9 Shader Assembler 5.04.00.3900", 
                        0xffffffff, 5, &var_50) s>= 0)
                    void* eax_17 = sub_4c6d8a(&var_2c)
                    
                    if (eax_17 u> 0x8000)
                        sub_42ac7a(*arg1, &arg1[4], 0x7ee, 
                            "debug info exceeds maximum comment size; no debug info emitted")
                        result = 0
                    else
                        int32_t result_5 = sub_47edc5(arg1, eax_17)
                        result = result_5
                        
                        if (result_5 s>= 0)
                            void* eax_18 = arg1[0x16]
                            _memcpy(eax_18 + (eax_17 << 2) + 4, eax_18 + 4, 
                                (arg1[0x17] << 2) + 0xfffffffc)
                            int32_t ecx_24 = 0
                            
                            if (var_40 u> 0)
                                void* eax_21 = &var_c[4]
                                
                                do
                                    *eax_21 += (arg1[0x1a] + eax_17) << 2
                                    ecx_24 += 1
                                    eax_21 += 8
                                while (ecx_24 u< var_40)
                            
                            int32_t result_6 = sub_4c6d96(&var_2c, arg1[0x16] + 4, eax_17)
                            result = result_6
                            
                            if (result_6 s>= 0)
                                arg1[0x17] += eax_17
                                int32_t eax_24 = arg1[0x17]
                                arg1[0x1a] += eax_17
                                arg1[0x19] = eax_24
                                result = 0
            else if (sub_4c6c51(&var_2c, eax_13, arg1[0x1c], 5, &var_4c) s>= 0
                    && sub_4c6c51(&var_2c, &data_b0018c, 1, 5, nullptr) s>= 0)
                goto label_47fb6c
    else
        char* eax_2 = sub_745f3f(var_40 << 2)
        var_10 = eax_2
        char* eax_5
        
        if (eax_2 != 0)
            __builtin_memset(eax_2, 0, var_40 << 2)
            eax_5 = sub_745f3f(var_40 << 3)
            var_c = eax_5
        
        if (eax_2 != 0 && eax_5 != 0)
            int32_t ecx_7 = var_40 << 3
            __builtin_memset(__builtin_memset(var_c, 0, ecx_7 u>> 2 << 2), 0, ecx_7 & 3)
            void* i_2 = i_3
            int32_t var_48
            
            if (i_3 != 0)
                void* ebx = &var_c[(var_40 << 3) - 6]
                
                do
                    *ebx = 0xffff
                    char* eax_6
                    eax_6.w = *(i_2 + 0x24)
                    *(ebx - 2) = eax_6.w
                    *(ebx + 2) = *(i_2 + 0x58)
                    eax_6 = *(i_2 + 0x20)
                    
                    if (eax_6 != 0)
                        int32_t j_1
                        
                        if (sub_4c6c51(&var_2c, eax_6, 0xffffffff, 7, &j_1) s< 0)
                            goto label_47fc21
                        
                        int32_t j = j_1
                        eax_6 = nullptr
                        char* var_14_1 = nullptr
                        
                        if (var_48 u> 0)
                            while (*(var_10 + (eax_6 << 2)) != j)
                                eax_6 = &eax_6[1]
                                var_14_1 = eax_6
                                
                                if (eax_6 u>= var_48)
                                    break
                        
                        if (eax_6 == var_48)
                            *(var_10 + (var_48 << 2)) = j
                            var_48 += 1
                            eax_6 = var_14_1
                        
                        *ebx = eax_6.w
                    
                    i_2 = *(i_2 + 0xc)
                    ebx -= 8
                while (i_2 != 0)
            
            if (var_48 == 0)
            label_47faed:
                void var_3c
                int32_t result_3 = sub_4c6c51(&var_2c, var_c, ecx_7, 1, &var_3c)
                result = result_3
                
                if (result_3 s>= 0)
                    goto label_47fafd
            else
                void var_44
                int32_t result_2 = sub_4c6c51(&var_2c, var_10, var_48 << 2, 1, &var_44)
                result = result_2
                
                if (result_2 s>= 0)
                    goto label_47faed
        else
            result = 0x8007000e

label_47fc21:
j__free(var_10)
j__free(var_c)
sub_4c6c19(&var_2c)
return result
