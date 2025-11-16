// 函数: sub_4e4ea0
// 地址: 0x4e4ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_44 = 0
uint32_t i_17 = arg2 + 1
int32_t edx = *(*(arg1 + 0x3c) + (arg2 << 2))
void* ecx_2 = *(arg1 + 4)
uint32_t i_5 = arg2
int32_t edi
int32_t var_64 = edi
int32_t eax_2 = edx << 2
int32_t var_58 = edx

if (*(eax_2 + *(arg1 + 0x34)) == 0)
    void* ecx_4 = *(*(ecx_2 + 0x14) + (**(*(eax_2 + *(ecx_2 + 0x18)) + 0x10) << 2))
    int32_t esi_4 = *(ecx_4 + 0x14)
    int32_t ecx_5 = *(ecx_4 + 0x18)
    int32_t edi_2 = *(arg1 + 0x14)
    int32_t i_14 = *(eax_2 + *(arg1 + 8))
    int32_t esi_7 = *(arg1 + 0x10) + (*(eax_2 + *(arg1 + 0xc)) << 2)
    int32_t i_8 = i_14
    __builtin_memcpy(edi_2, esi_7, i_14 << 2)
label_4e4f12:
    int32_t var_8_1 = 0
    *(arg1 + 0x48) += 1
    
    for (uint32_t i = i_5; i u< i_17; i += 1)
        void* eax_5 = *(*(*(arg1 + 4) + 0x18) + (*(*(arg1 + 0x3c) + (i << 2)) << 2))
        int32_t j = 0
        
        if (*(eax_5 + 0x14) u> 0)
            do
                void* esi_10 = *(*(*(arg1 + 4) + 0x18) + (*(*(eax_5 + 0x18) + (j << 2)) << 2))
                j += 1
                *(esi_10 + 0x24) = *(arg1 + 0x48)
            while (j u< *(eax_5 + 0x14))
        
        int32_t j_1 = 0
        
        if (*(eax_5 + 0x1c) u> 0)
            do
                void* esi_13 = *(*(*(arg1 + 4) + 0x18) + (*(*(eax_5 + 0x20) + (j_1 << 2)) << 2))
                j_1 += 1
                *(esi_13 + 0x24) = *(arg1 + 0x48)
            while (j_1 u< *(eax_5 + 0x1c))
        
        var_8_1 += *(*(arg1 + 0x28) + (*(*(arg1 + 0x3c) + (i << 2)) << 2))
    
    int32_t esi_15 = 0
    
    if (i_8 u> 0)
        bool cond:2_1
        
        do
            void* eax_9 = *(*(*(arg1 + 4) + 0x14) + (esi_15 << 2))
            *(eax_9 + 0x30) = *(arg1 + 0x48)
            int32_t ecx_14
            ecx_14.b = edx == *(eax_9 + 0x74)
            esi_15 += 1
            cond:2_1 = esi_15 u< i_8
            *(eax_9 + 0x54) = ecx_14
        while (cond:2_1)
    
    while (true)
        int32_t var_2c_1
        uint32_t i_13
        uint32_t i_10
        
        if (var_8_1 s< 0)
            i_10 = i_5
            var_2c_1 = 0xffffffff
            i_13 = i_10
            arg2 = i_10
        label_4e4fe1:
            int32_t i_9 = 0
            int32_t i_12 = 0
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            
            while (true)
                uint32_t i_15 = i_10 + var_2c_1
                
                if (i_15 u>= *(arg1 + 0x38))
                    break
                
                int32_t eax_12 = *(*(arg1 + 0x3c) + (i_15 << 2))
                int32_t eax_13 = eax_12 << 2
                void* var_50
                
                if (*(eax_13 + *(arg1 + 0x34)) == 0)
                    void* ecx_16 = *(arg1 + 4)
                    void* edi_10 =
                        *(*(ecx_16 + 0x14) + (**((*(ecx_16 + 0x18))[eax_12] + 0x10) << 2))
                    int32_t edx_5 = *(edi_10 + 0x14)
                    var_50 = edi_10
                    int32_t edi_11 = *(edi_10 + 0x18)
                    
                    while (true)
                        if (edx_5 == 0xffffffff)
                            if (esi_4 != edx_5)
                                goto label_4e52fd
                            
                            goto label_4e5044
                        
                        if (esi_4 == edx_5)
                        label_4e5044:
                            
                            if (ecx_5 != edi_11)
                                break
                            
                            i_9 = i_12
                            goto label_4e5050
                        
                        void* edx_6 = *(*(ecx_16 + 0x14) + (edx_5 << 2))
                        edi_11 = *(edx_6 + 0x18)
                        edx_5 = *(edx_6 + 0x14)
                    
                    goto label_4e52fd
                
            label_4e5050:
                
                if (i_13 u> i_15)
                    i_13 = i_15
                
                if (arg2 u<= i_15)
                    arg2 = i_15 + 1
                
                int32_t esi_18 = *(arg1 + 0x10) + (*(eax_13 + *(arg1 + 0xc)) << 2)
                int32_t ecx_20 = *(eax_13 + *(arg1 + 8))
                __builtin_memcpy(*(arg1 + 0x18) + (i_9 << 2), esi_18, ecx_20 << 2)
                i_9 += *(eax_13 + *(arg1 + 8))
                var_20_1 += (*(arg1 + 0x28))[eax_12]
                int32_t esi_20 = *(arg1 + 0x48) - *((*(*(arg1 + 4) + 0x18))[eax_12] + 0x24)
                i_12 = i_9
                int32_t esi_21 = neg.d(esi_20)
                var_1c_1 |= sbb.d(esi_21, esi_21, esi_20 != 0) + 1
                int32_t ecx_27 = 0
                int32_t var_30_1 = 0
                
                if (ecx_20 u> 0)
                    do
                        void* esi_27 = *(*(*(arg1 + 4) + 0x14) + (*(esi_18 + (ecx_27 << 2)) << 2))
                        int32_t ecx_29 = *(arg1 + 0x48)
                        
                        if (*(esi_27 + 0x30) != ecx_29 || eax_12 == *(esi_27 + 0x74))
                            *(esi_27 + 0x30) = ecx_29
                            int32_t ecx_30
                            ecx_30.b = eax_12 != *(esi_27 + 0x74)
                            *(esi_27 + 0x54) = ecx_30 - 1
                        
                        ecx_27 = var_30_1 + 1
                        var_30_1 = ecx_27
                    while (ecx_27 u< ecx_20)
                
                if (*(eax_13 + *(arg1 + 0x34)) == 0 && esi_4 == *(var_50 + 0x14)
                        && ecx_5 == *(var_50 + 0x18))
                    break
                
                i_10 = i_15
            
            if (i_13 u< arg2)
                if (i_13 + 1 u< arg2)
                    sub_4e4d3d(*(arg1 + 0x18), &i_12)
                    i_9 = i_12
                
                if (var_1c_1 == 0)
                    if (var_8_1 s>= 0)
                        int32_t i_7 = i_8
                        int32_t eax_21 = var_8_1
                        int32_t var_2c_3 = eax_21
                        
                        if (i_7 u> 0)
                            int32_t* eax_23 = *(arg1 + 0x14)
                            int32_t i_1
                            
                            do
                                if (*(*(*(*(arg1 + 4) + 0x14) + (*eax_23 << 2)) + 0x54)
                                        == 0xffffffff)
                                    var_2c_3 -= 1
                                
                                eax_23 = &eax_23[1]
                                i_1 = i_7
                                i_7 -= 1
                            while (i_1 != 1)
                            eax_21 = var_2c_3
                        
                        if (eax_21 s< var_20_1)
                            var_1c_1 = 1
                    else
                        int32_t var_2c_2 = var_20_1
                        
                        if (i_9 u> 0)
                            int32_t* eax_19 = *(arg1 + 0x18)
                            int32_t i_6 = i_9
                            int32_t i_2
                            
                            do
                                if (*(*(*(*(arg1 + 4) + 0x14) + (*eax_19 << 2)) + 0x54) == 1)
                                    var_2c_2 -= 1
                                
                                eax_19 = &eax_19[1]
                                i_2 = i_6
                                i_6 -= 1
                            while (i_2 != 1)
                        
                        if (var_8_1 s> var_2c_2)
                            var_1c_1 = 1
                
                uint32_t i_11 = i_5
                
                if (i_11 u>= i_13)
                    i_11 = i_13
                
                uint32_t i_19 = i_17
                
                if (i_19 u<= arg2)
                    i_19 = arg2
                
                if (var_1c_1 == 0)
                    sub_4e4c92(arg1, i_5, i_17)
                    sub_4e4c92(arg1, i_13, arg2)
                    sub_4e4c92(arg1, i_11, i_19)
                    int32_t var_54
                    int32_t var_40
                    sub_4e4d83(arg1, &var_40, &var_54)
                    int32_t eax_32 = *(arg1 + 0x50)
                    int32_t temp3_1 = var_40
                    bool cond:11_1 = temp3_1 u> eax_32
                    int32_t ecx_47 = var_54
                    
                    if (temp3_1 u< eax_32)
                        if (ecx_47 u<= *(arg1 + 0x4c))
                            return 0
                        
                        cond:11_1 = var_40 u> eax_32
                    
                    if (not(cond:11_1) && ecx_47 u< *(arg1 + 0x4c))
                        return 0
                    
                    uint32_t eax_34
                    
                    if (var_8_1 s>= 0)
                        eax_34 = arg2 - i_13
                    else
                        eax_34 = i_13 - arg2
                    
                    i_5 += eax_34
                    i_17 += eax_34
                    edx = var_58
                    var_44 = 1
                    goto label_4e4f12
                
                i_17 = i_19
                int32_t esi_28 = 0
                i_5 = i_11
                
                if (i_9 u> 0)
                    do
                        void* eax_26 =
                            *(*(*(arg1 + 4) + 0x14) + (*(*(arg1 + 0x18) + (esi_28 << 2)) << 2))
                        int32_t ecx_41
                        ecx_41.b = *(eax_26 + 0x54) != 0
                        esi_28 += 1
                        *(eax_26 + 0x54) = ecx_41
                    while (esi_28 u< i_9)
                
                int32_t eax_27 = *(arg1 + 0x14)
                int32_t i_16 = i_8
                int32_t esi_29 = *(arg1 + 0x18)
                i_8 += i_9
                var_8_1 += var_20_1
                __builtin_memcpy(eax_27 + (i_16 << 2), esi_29, i_9 << 2)
                sub_4e4d3d(*(arg1 + 0x14), &i_8)
                uint32_t i_18 = i_13
                
                do
                    void* eax_31 = *(*(*(arg1 + 4) + 0x18) + (*(*(arg1 + 0x3c) + (i_18 << 2)) << 2))
                    int32_t i_3 = 0
                    
                    if (*(eax_31 + 0x14) u> 0)
                        do
                            void* esi_32 =
                                *(*(*(arg1 + 4) + 0x18) + (*(*(eax_31 + 0x18) + (i_3 << 2)) << 2))
                            i_3 += 1
                            *(esi_32 + 0x24) = *(arg1 + 0x48)
                        while (i_3 u< *(eax_31 + 0x14))
                    
                    int32_t i_4 = 0
                    
                    if (*(eax_31 + 0x1c) u> 0)
                        do
                            void* esi_35 =
                                *(*(*(arg1 + 4) + 0x18) + (*(*(eax_31 + 0x20) + (i_4 << 2)) << 2))
                            i_4 += 1
                            *(esi_35 + 0x24) = *(arg1 + 0x48)
                        while (i_4 u< *(eax_31 + 0x1c))
                    
                    i_18 += 1
                while (i_18 u< arg2)
                
                continue
        else if (var_8_1 s> 0)
            i_10 = i_17 - 1
            i_13 = i_17
            arg2 = i_17
            var_2c_1 = 1
            goto label_4e4fe1
    label_4e52fd:
        
        if (var_44 == 0)
            break
        
        int32_t ecx_49 = *(arg1 + 0x38) << 2
        int32_t esi_37
        int32_t edi_28
        edi_28, esi_37 = __builtin_memcpy(*(arg1 + 0x3c), *(arg1 + 0x40), ecx_49 u>> 2 << 2)
        __builtin_memcpy(edi_28, esi_37, ecx_49 & 3)
        sub_4e4d83(arg1, nullptr, nullptr)
        break

return 1
