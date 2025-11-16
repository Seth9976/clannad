// 函数: sub_4d6174
// 地址: 0x4d6174
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_7c = edi
void var_48
sub_4c6bfc(&var_48, 0x47554244)
void* esi = nullptr
int32_t var_70
__builtin_memset(&var_70, 0, 0x28)
var_70 = 0x28
char* var_24_1
__builtin_memset(&var_24_1, 0, 0x14)
int32_t var_8 = 0
void* result_1 = sub_4c6c51(&var_48, &var_70, 0x28, 1, nullptr)
void* result = result_1
char* var_20_1
char* var_1c_1
char* var_18_1
uint32_t var_14_1

if (result_1 s>= 0)
    int32_t eax = *(arg1 + 0x128)
    
    if (eax == 0)
    label_4d6674:
        char* eax_67 = *(arg1 + 0xd0)
        void* result_9
        
        if (eax_67 != 0)
            void var_4c
            result_9 = sub_4c6c51(&var_48, eax_67, 0xffffffff, 7, &var_4c)
            result = result_9
        
        if (eax_67 == 0 || result_9 s>= 0)
            char* eax_68 = *(arg1 + 0x130)
            void var_68
            
            if (eax_68 == 0)
            label_4d66eb:
                void var_6c
                
                if (sub_4c6c51(&var_48, "Microsoft (R) D3DX9 Shader Compiler 5.04.00.3900", 
                        0xffffffff, 5, &var_6c) s>= 0)
                    void* eax_72 = sub_4c6d8a(&var_48)
                    
                    if (eax_72 u> 0x8000)
                        sub_4a4195(arg1, nullptr, 0x11c3, 
                            "debug info exceeds maximum comment size; no debug info emitted")
                        result = nullptr
                    else
                        void* result_10 = sub_4d19ed(arg1, eax_72)
                        result = result_10
                        
                        if (result_10 s>= 0)
                            void* eax_73 = *(arg1 + 0x10c)
                            _memcpy(eax_73 + (eax_72 << 2) + 4, eax_73 + 4, 
                                (*(arg1 + 0x110) << 2) + 0xfffffffc)
                            int32_t ecx_70 = 0
                            
                            if (eax u> 0)
                                void* eax_76 = &var_18_1[4]
                                
                                do
                                    *eax_76 += (*(arg1 + 0x120) + eax_72) << 2
                                    ecx_70 += 1
                                    eax_76 += 8
                                while (ecx_70 u< eax)
                            
                            void* result_11 = sub_4c6d96(&var_48, *(arg1 + 0x10c) + 4, eax_72)
                            result = result_11
                            
                            if (result_11 s>= 0)
                                *(arg1 + 0x110) += eax_72
                                int32_t eax_79 = *(arg1 + 0x110)
                                *(arg1 + 0x120) += eax_72
                                *(arg1 + 0x11c) = eax_79
                                result = nullptr
            else if (sub_4c6c51(&var_48, eax_68, *(arg1 + 0x134), 5, &var_68) s>= 0
                    && sub_4c6c51(&var_48, &data_b0018c, 1, 5, nullptr) s>= 0)
                goto label_4d66eb
    else
        char* eax_2 = sub_745f3f(eax << 2)
        var_20_1 = eax_2
        
        if (eax_2 == 0)
        labelid_41:
            result = 0x8007000e
        else
            __builtin_memset(eax_2, 0, eax << 2)
            char* eax_5 = sub_745f3f(eax << 3)
            var_18_1 = eax_5
            
            if (eax_5 == 0)
            label_4d679d:
                result = 0x8007000e
            else
                int32_t ecx_6 = eax << 3
                __builtin_memset(__builtin_memset(var_18_1, 0, ecx_6 u>> 2 << 2), 0, ecx_6 & 3)
                uint32_t eax_8 = sub_745f3f(eax << 4)
                var_14_1 = eax_8
                
                if (eax_8 == 0)
                label_4d679d_1:
                    result = 0x8007000e
                else
                    int32_t ecx_12 = eax << 4
                    __builtin_memset(__builtin_memset(var_14_1, 0, ecx_12 u>> 2 << 2), 0, 
                        ecx_12 & 3)
                    int32_t var_c_1 = 0
                    int32_t var_64
                    void* i_3
                    
                    if (eax u> 0)
                        void* edi_7 = &var_18_1[2]
                        
                        do
                            *edi_7 = 0xffff
                            *(edi_7 - 2) = 0
                            int32_t* ecx_16 = esi + 8
                            *(edi_7 + 2) = *(*(arg1 + 0x124) + esi + 4)
                            int32_t* var_2c_1 = ecx_16
                            int32_t i_4 = 4
                            int32_t i
                            
                            do
                                int32_t eax_12 = *(ecx_16 + *(arg1 + 0x124))
                                
                                if (eax_12 != 0xffffffff)
                                    void* eax_13 = *(*(arg1 + 0x14) + (eax_12 << 2))
                                    bool cond:11_1 = *(eax_13 + 0x60) == 0
                                    *(eax_13 + 0x74) = var_c_1
                                    
                                    if (not(cond:11_1))
                                        int32_t edx_5 = var_8
                                        var_8 += 1
                                        *(var_14_1 + (edx_5 << 2)) = *(ecx_16 + *(arg1 + 0x124))
                                        ecx_16 = var_2c_1
                                
                                ecx_16 = &ecx_16[1]
                                i = i_4
                                i_4 -= 1
                                var_2c_1 = ecx_16
                            while (i != 1)
                            void* eax_17 = *(esi + *(arg1 + 0x124))
                            
                            if (eax_17 != 0)
                                eax_17.w = *(eax_17 + 0x14)
                                *(edi_7 - 2) = eax_17.w
                                char* eax_20 = *(*(*(arg1 + 0x124) + esi) + 0x10)
                                
                                if (eax_20 != 0)
                                    if (sub_4c6c51(&var_48, eax_20, 0xffffffff, 7, &i_3) s< 0)
                                        goto label_4d67c0
                                    
                                    void* i_1 = i_3
                                    int32_t eax_22 = 0
                                    int32_t var_2c_2 = 0
                                    
                                    if (var_64 u> 0)
                                        while (*(var_20_1 + (eax_22 << 2)) != i_1)
                                            eax_22 += 1
                                            var_2c_2 = eax_22
                                            
                                            if (eax_22 u>= var_64)
                                                break
                                    
                                    if (eax_22 == var_64)
                                        *(var_20_1 + (var_64 << 2)) = i_1
                                        var_64 += 1
                                        eax_22 = var_2c_2
                                    
                                    *edi_7 = eax_22.w
                            
                            var_c_1 += 1
                            esi += 0x18
                            edi_7 += 8
                        while (var_c_1 u< eax)
                    
                    if (var_64 == 0)
                    label_4d6399:
                        void var_58
                        void* result_3 = sub_4c6c51(&var_48, var_18_1, ecx_6, 1, &var_58)
                        result = result_3
                        
                        if (result_3 s>= 0)
                            if (var_8 == 0)
                                goto label_4d6674
                            
                            sub_458e55(sub_4c70f1, var_14_1, var_8, arg1)
                            int32_t eax_27 = 1
                            int32_t var_54_1 = 1
                            int32_t ecx_21 = 1
                            
                            if (var_8 u> 1)
                                int32_t eax_28 = *(arg1 + 0x14)
                                
                                do
                                    if (*(*(eax_28 + (*(var_14_1 + (ecx_21 << 2) - 4) << 2)) + 0x60)
                                            != *
                                            (*(eax_28 + (*(var_14_1 + (ecx_21 << 2)) << 2)) + 0x60))
                                        var_54_1 += 1
                                    
                                    ecx_21 += 1
                                while (ecx_21 u< var_8)
                                
                                eax_27 = var_54_1
                            
                            char* eax_31 = sub_745f3f(eax_27 * 0x14)
                            var_24_1 = eax_31
                            
                            if (eax_31 == 0)
                            label_4d679d_2:
                                result = 0x8007000e
                            else
                                int32_t edx_13 = var_54_1 * 0x14
                                __builtin_memset(__builtin_memset(var_24_1, 0, edx_13 u>> 2 << 2), 
                                    0, edx_13 & 3)
                                int32_t i_2 = 0
                                int32_t var_2c_3 = 0
                                
                                if (var_54_1 u> 0)
                                    void* esi_4 = &var_24_1[0xc]
                                    
                                    do
                                        int32_t eax_33 = var_14_1 + (i_2 << 2)
                                        void* i_7 = *(*(*(arg1 + 0x14) + (*eax_33 << 2)) + 0x60)
                                        char* ecx_30 = *(i_7 + 0x20)
                                        int32_t var_28_1 = eax_33
                                        i_3 = i_7
                                        
                                        if (ecx_30 != 0)
                                            void* result_4 = sub_4c6c51(&var_48, ecx_30, 
                                                0xffffffff, 7, esi_4 - 0xc)
                                            result = result_4
                                            
                                            if (result_4 s< 0)
                                                goto label_4d67c0
                                            
                                            eax_33 = var_28_1
                                        
                                        char* ecx_33 = *(*(i_7 + 0x14) + 0x18)
                                        
                                        if (ecx_33 != 0)
                                            void* result_5 = sub_4c6c51(&var_48, ecx_33, 
                                                0xffffffff, 7, esi_4 - 8)
                                            result = result_5
                                            
                                            if (result_5 s< 0)
                                                goto label_4d67c0
                                            
                                            eax_33 = var_28_1
                                        
                                        int32_t ecx_35 = *(i_7 + 0x10)
                                        
                                        if (ecx_35 == 1 || ecx_35 == 2)
                                            void* result_6 = sub_4d16f4(&var_48, 
                                                *(*(i_7 + 0x18) + 0x20), 1, 
                                                *(*(*(arg1 + 0x14) + (*eax_33 << 2)) + 0x3c)
                                                    & 0xe00000, 
                                                esi_4 - 4)
                                            result = result_6
                                            
                                            if (result_6 s< 0)
                                                goto label_4d67c0
                                        
                                        int32_t i_5 = i_2
                                        
                                        while (i_2 u< var_8)
                                            int32_t ecx_37 = *(arg1 + 0x14)
                                            void* eax_43 =
                                                *(ecx_37 + (*(var_14_1 + (i_2 << 2)) << 2))
                                            
                                            if (i_7 != *(eax_43 + 0x60))
                                                break
                                            
                                            for (; i_2 u< var_8; i_2 += 1)
                                                void* eax_47 =
                                                    *(ecx_37 + (*(var_14_1 + (i_2 << 2)) << 2))
                                                
                                                if (i_7 != *(eax_47 + 0x60))
                                                    break
                                                
                                                if (*(eax_43 + 0x74) != *(eax_47 + 0x74))
                                                    break
                                            
                                            *esi_4 += 1
                                        
                                        char* eax_53 = sub_745f3f(*esi_4 * 0xc)
                                        var_1c_1 = eax_53
                                        
                                        if (eax_53 == 0)
                                            goto label_4d679d_2
                                        
                                        void* ecx_40 = *esi_4 * 0xc
                                        __builtin_memset(
                                            __builtin_memset(var_1c_1, 0, ecx_40 u>> 2 << 2), 0, 
                                            ecx_40 & 3)
                                        *esi_4 = 0
                                        i_2 = i_5
                                        
                                        if (i_5 u< var_8)
                                            do
                                                void* eax_58 = *(*(arg1 + 0x14)
                                                    + (*(var_14_1 + (i_2 << 2)) << 2))
                                                
                                                if (i_3 != *(eax_58 + 0x60))
                                                    break
                                                
                                                int32_t ecx_47 = *(eax_58 + 0x74)
                                                *(var_1c_1 + *esi_4 * 0xc) = ecx_47
                                                int32_t ecx_48 = *esi_4
                                                *(var_1c_1 + ecx_48 * 0xc + 4) = 0xffffffff
                                                *(var_1c_1 + ecx_48 * 0xc + 8) = 0xffffffff
                                                int32_t i_6 = i_2
                                                
                                                while (i_6 u< var_8)
                                                    int32_t ecx_51 = var_14_1 + (i_6 << 2)
                                                    int32_t eax_61 = *(arg1 + 0x14)
                                                    void* ecx_53 = *(eax_61 + (*ecx_51 << 2))
                                                    
                                                    if (i_3 != *(ecx_53 + 0x60))
                                                        break
                                                    
                                                    if (ecx_47 != *(ecx_53 + 0x74))
                                                        break
                                                    
                                                    void* eax_62 = *(eax_61 + (*ecx_51 << 2))
                                                    int32_t edi_19 = *(eax_62 + 0x10)
                                                    eax_62.w = *(eax_62 + 0x64)
                                                    *(var_1c_1 + ((edi_19 + *esi_4 * 6) << 1)
                                                        + 4) = eax_62.w
                                                    i_6 = i_2 + 1
                                                    i_2 = i_6
                                                
                                                *esi_4 += 1
                                            while (i_2 u< var_8)
                                        
                                        void* result_7 =
                                            sub_4c6c51(&var_48, var_1c_1, ecx_40, 0xb, esi_4 + 4)
                                        result = result_7
                                        
                                        if (result_7 s< 0)
                                            goto label_4d67c0
                                        
                                        var_1c_1 = nullptr
                                        var_2c_3 += 1
                                        esi_4 += 0x14
                                    while (var_2c_3 u< var_54_1)
                                
                                void var_50
                                void* result_8 = sub_4c6c51(&var_48, var_24_1, edx_13, 1, &var_50)
                                result = result_8
                                
                                if (result_8 s>= 0)
                                    goto label_4d6674
                    else
                        void var_60
                        void* result_2 = sub_4c6c51(&var_48, var_20_1, var_64 << 2, 1, &var_60)
                        result = result_2
                        
                        if (result_2 s>= 0)
                            goto label_4d6399

label_4d67c0:
j__free(var_20_1)
j__free(var_18_1)
j__free(var_24_1)
j__free(var_1c_1)
j__free(var_14_1)
sub_4c6c19(&var_48)
return result
