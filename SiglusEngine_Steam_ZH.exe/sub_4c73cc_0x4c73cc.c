// 函数: sub_4c73cc
// 地址: 0x4c73cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = *arg2
int32_t edx_1 = ecx_1 & 0xfffff
int32_t result = 0
int32_t var_14 = 0

if (edx_1 u> arg8 && arg9 == 0)
    return 1

int32_t* ebx_1 = arg3

if ((ecx_1 & 0xfff00000) != ebx_1[1])
    return 1

int32_t var_30_1 = 1

if (*ebx_1 == 0 && arg9 != 0)
    var_30_1 = 2

int32_t edi
int32_t var_1d4_1 = edi
int32_t var_2c_1 = 0
void var_1c8
int32_t var_128[0x28]
int32_t var_78[0x10]

if (var_30_1 u<= 0)
label_4c77cf:
    int32_t** eax_41 = var_14 << 2
    int32_t esi_14
    int32_t edi_7
    edi_7, esi_14 = __builtin_memcpy(arg4, &var_78, eax_41 u>> 2 << 2)
    __builtin_memcpy(edi_7, esi_14, eax_41 & 3)
    *(eax_41 + arg4) = arg2
    *arg5 = var_14 + 1
    
    for (int32_t* i = nullptr; i u< 0xa0; i = &i[1])
        int32_t ecx_33 = *(&var_128 + i)
        
        if (ecx_33 != 0xffffffff)
            *(i + arg6) = ecx_33
        else
            ecx_33 = *(&var_1c8 + i)
            
            if (ecx_33 != 0xffffffff)
                *(i + arg6) = ecx_33
    
    result = 0
else
    do
        int32_t i_1 = 0
        
        if (ebx_1[7] != 0xffffffff)
            do
                int32_t edx_2 = *arg5
                __builtin_memcpy(&var_78, arg4, edx_2 << 2)
                __builtin_memset(&var_128, 0xffffffff, 0xa0)
                __builtin_memset(&var_1c8, 0xffffffff, 0xa0)
                bool cond:4_1 = ebx_1[2] u<= 0
                var_14 = edx_2
                result = 0
                int32_t j = 0
                
                if (not(cond:4_1))
                    int32_t var_8_1 = 0
                    
                    do
                        int32_t j_5
                        
                        if (i_1 == 0)
                            j_5 = j
                        else
                            j_5 = 1 - j
                        
                        int32_t esi_2 = *arg7
                        
                        if (esi_2 u>= 4)
                            return 1
                        
                        int32_t edx_3 = arg2[2]
                        void* ebx_2 = *(*(arg1 + 0x14) + (*(edx_3 + ((esi_2 + var_8_1) << 2)) << 2))
                        int32_t ecx_6 = arg3[j_5 + 3]
                        
                        if (ecx_6 u>= 0x10)
                            int32_t k = 0
                            int32_t __saved_ebp
                            void* ecx_16 = &(&__saved_ebp)[(ecx_6 - 0x10) * 4 - 0x49]
                            
                            do
                                int32_t esi_8 = arg7[k]
                                
                                if (esi_8 u>= edx_1)
                                    *ecx_16 = 0xffffffff
                                else
                                    *ecx_16 = *(edx_3 + ((esi_8 + var_8_1) << 2))
                                
                                k += 1
                                ecx_16 += 4
                            while (k u< 4)
                        else
                            int32_t eax_6 = *(ebx_2 + 0x48)
                            void var_88
                            int32_t eax_7
                            int32_t esi_6
                            void* edi_3
                            
                            if (eax_6 != 0xffffffff)
                                edi_3 = &arg3[(ecx_6 - *arg3) * 8]
                                esi_6 = *(arg1 + 0x18)
                                eax_7 = sub_4c721b(arg1, *(esi_6 + (eax_6 << 2)), 
                                    edx_3 + (var_8_1 << 2), edx_1, arg7, &var_88, *(edi_3 + 0x18), 
                                    arg9)
                            
                            if (eax_6 == 0xffffffff || eax_7 != 0)
                                result = 1
                                break
                            
                            result = sub_4c73cc(*(esi_6 + (*(ebx_2 + 0x48) << 2)), edi_3, &var_78, 
                                &var_14, &var_1c8, &var_88, arg8, arg9)
                        
                        if (result == 1)
                            break
                        
                        j += 1
                        var_8_1 += edx_1
                    while (j u< arg3[2])
                
                int32_t* edx_4 = arg3
                int32_t j_1 = 0
                
                if (edx_4[2] u> 0)
                    int32_t var_1c_1 = 0
                    
                    do
                        int32_t j_6
                        
                        if (i_1 == 0)
                            j_6 = j_1
                        else
                            j_6 = 1 - j_1
                        
                        if (edx_4[j_6 + 3] u>= 0x10)
                            int32_t eax_12 = 0
                            int32_t var_28_1 = 0
                            
                            if (var_14 u> 0)
                                do
                                    int32_t edi_4 = 0
                                    
                                    if (edx_1 u> 0)
                                        void* edx_5 = var_78[eax_12]
                                        int32_t ebx_3 = *(edx_5 + 0xc)
                                        
                                        do
                                            int32_t var_8_2 = 0
                                            
                                            if (ebx_3 u> 0)
                                                int32_t* ecx_20 = *(edx_5 + 0x10)
                                                
                                                while (*(arg2[2] + ((var_1c_1 + edi_4) << 2))
                                                        != *ecx_20)
                                                    var_8_2 += 1
                                                    ecx_20 = &ecx_20[1]
                                                    
                                                    if (var_8_2 u>= ebx_3)
                                                        goto label_4c7601
                                                
                                                result = 1
                                                break
                                            
                                        label_4c7601:
                                            edi_4 += 1
                                        while (edi_4 u< edx_1)
                                    
                                    eax_12 = var_28_1 + 1
                                    var_28_1 = eax_12
                                while (eax_12 u< var_14)
                                
                                edx_4 = arg3
                        
                        j_1 += 1
                        var_1c_1 += edx_1
                    while (j_1 u< edx_4[2])
                
                if (result == 0)
                    if (var_2c_1 != 0)
                        goto label_4c77cf
                    
                    if (*arg3 != 0)
                        goto label_4c77cf
                    
                    int32_t var_c_1 = 0
                    
                    if (var_14 u> 0)
                        do
                            int32_t eax_21 = *(var_78[var_c_1] + 0xc)
                            int32_t var_8_3 = 0
                            
                            if (eax_21 u> 0)
                                do
                                    int32_t j_7 = *(arg1 + 0xc)
                                    
                                    if (j_7 u> 0)
                                        int32_t* var_1c_2 = *(arg1 + 0x18)
                                        int32_t j_4 = j_7
                                        int32_t j_2
                                        
                                        do
                                            int32_t* ecx_23 = *var_1c_2
                                            
                                            if (ecx_23 != 0 && *ecx_23 != 0)
                                                int32_t k_4 = ecx_23[1]
                                                int32_t var_28_2 = 0
                                                
                                                if (k_4 u> 0)
                                                    int32_t esi_12 = *(*(var_78[var_c_1] + 0x10)
                                                        + (var_8_3 << 2))
                                                    int32_t* edx_7 = ecx_23[2]
                                                    int32_t k_1
                                                    
                                                    do
                                                        int32_t ebx_4 = *edx_7
                                                        
                                                        if (ebx_4 == esi_12 || *(
                                                                *(*(arg1 + 0x14) + (ebx_4 << 2)) + 0x38)
                                                                == esi_12)
                                                            var_28_2 = 1
                                                        
                                                        edx_7 = &edx_7[1]
                                                        k_1 = k_4
                                                        k_4 -= 1
                                                    while (k_1 != 1)
                                                
                                                int32_t eax_30
                                                
                                                eax_30 = ecx_23 != arg2 ? var_28_2 : 0
                                                
                                                if (eax_30 != 0)
                                                    int32_t edx_8 = 0
                                                    
                                                    do
                                                        if (ecx_23 == var_78[edx_8])
                                                            eax_30 = 0
                                                        
                                                        edx_8 += 1
                                                    while (edx_8 u< var_14)
                                                    
                                                    if (eax_30 != 0)
                                                        result = 1
                                            
                                            var_1c_2 = &var_1c_2[1]
                                            j_2 = j_4
                                            j_4 -= 1
                                        while (j_2 != 1)
                                    
                                    var_8_3 += 1
                                while (var_8_3 u< eax_21)
                            
                            var_c_1 += 1
                        while (var_c_1 u< var_14)
                    
                    for (int32_t j_3 = 0; j_3 u< 0x28; j_3 += 1)
                        int32_t edi_5 = var_128[j_3]
                        
                        if (edi_5 != 0xffffffff)
                            int32_t ebx_5 = 0
                            
                            if (var_14 u> 0)
                                do
                                    void* ecx_24 = var_78[ebx_5]
                                    int32_t k_3 = *(ecx_24 + 0xc)
                                    
                                    if (k_3 u> 0)
                                        int32_t* ecx_25 = *(ecx_24 + 0x10)
                                        int32_t k_2
                                        
                                        do
                                            int32_t esi_13 = *ecx_25
                                            
                                            if (edi_5 == esi_13
                                                    || *(*(*(arg1 + 0x14) + (edi_5 << 2)) + 0x38)
                                                    == esi_13)
                                                result = 1
                                            
                                            ecx_25 = &ecx_25[1]
                                            k_2 = k_3
                                            k_3 -= 1
                                        while (k_2 != 1)
                                    
                                    ebx_5 += 1
                                while (ebx_5 u< var_14)
                    
                    if (result == 0)
                        goto label_4c77cf
                
                i_1 += 1
                ebx_1 = arg3
            while (i_1 u< arg3[7] + 1)
        
        if (result == 0)
            goto label_4c77cf
        
        var_2c_1 += 1
    while (var_2c_1 u< var_30_1)
return result
