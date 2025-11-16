// 函数: sub_4e8682
// 地址: 0x4e8682
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg5
char* ecx = *(esi + 0x34)
int32_t i_1 = *(esi + 0x1c)
int32_t edi
int32_t var_28 = edi
int32_t* edi_1 = arg6
char* var_c = *edi_1
int32_t var_8 = edi_1[1]
arg6 = *(esi + 0x20)
int32_t eax_3 = *(esi + 0x30)
char* var_10 = ecx
void* eax_5

if (ecx u>= eax_3)
    eax_5 = *(esi + 0x2c) - ecx
else
    eax_5 = eax_3 - ecx - 1

void* var_14 = eax_5
int32_t eax_8 = *((arg1 << 2) + &data_ad00f8)
int32_t eax_10 = *((arg2 << 2) + &data_ad00f8)

while (true)
    if (i_1 u< 0x14)
        var_8 -= 1
        arg6 |= zx.d(*var_c) << i_1.b
        var_c = &var_c[1]
        i_1 += 8
    else
        char* eax_16 = arg3 + ((eax_8 & arg6) << 3)
        uint32_t ecx_3 = zx.d(*eax_16)
        arg1 = ecx_3
        bool cond:1_1 = ecx_3 == 0
        
        while (true)
            char ecx_8 = eax_16[1]
            int32_t result
            uint32_t ecx_29
            
            if (cond:1_1)
                arg6 u>>= ecx_8
                uint32_t ecx_26 = zx.d(eax_16[1])
                eax_16.b = eax_16[4]
                i_1 -= ecx_26
                char* ecx_27 = var_10
                var_10 = &var_10[1]
                var_14 -= 1
                *ecx_27 = eax_16.b
            label_4e889f:
                
                if (var_14 u>= 0x102 && var_8 u>= 0xa)
                    break
                
                ecx_29 = edi_1[1] - var_8
                uint32_t eax_32 = i_1 u>> 3
                
                if (eax_32 u< ecx_29)
                    ecx_29 = eax_32
                
                result = 0
            else
                arg6 u>>= ecx_8
                i_1 -= zx.d(eax_16[1])
                
                if ((arg1.b & 0x10) != 0)
                    int32_t ecx_11 = arg1 & 0xf
                    void* esi_2 = *((ecx_11 << 2) + &data_ad00f8) & arg6
                    arg6 u>>= ecx_11.b
                    int32_t i = i_1 - ecx_11
                    arg1 = esi_2 + *(eax_16 + 4)
                    
                    for (; i u< 0xf; i += 8)
                        var_8 -= 1
                        arg6 |= zx.d(*var_c) << i.b
                        var_c = &var_c[1]
                    
                    char* eax_22 = arg4 + ((eax_10 & arg6) << 3)
                    arg6 u>>= eax_22[1]
                    i_1 = i - zx.d(eax_22[1])
                    
                    while (true)
                        uint32_t ebx_1 = zx.d(*eax_22)
                        
                        if ((ebx_1.b & 0x10) != 0)
                            int32_t ebx_2
                            
                            for (ebx_2 = ebx_1 & 0xf; i_1 u< ebx_2; i_1 += 8)
                                var_8 -= 1
                                arg6 |= zx.d(*var_c) << i_1.b
                                var_c = &var_c[1]
                            
                            void* esi_8 = (*((ebx_2 << 2) + &data_ad00f8) & arg6) + *(eax_22 + 4)
                            arg6 u>>= ebx_2.b
                            var_14 -= arg1
                            char* ecx_23 = var_10
                            i_1 -= ebx_2
                            void* eax_25 = ecx_23 - esi_8
                            int32_t esi_9 = *(arg5 + 0x28)
                            
                            if (eax_25 u>= esi_9)
                                void* ebx_3
                                ebx_3.b = *eax_25
                                *ecx_23 = ebx_3.b
                                ebx_3.b = *(eax_25 + 1)
                                ecx_23[1] = ebx_3.b
                                ecx_23 = &ecx_23[2]
                                char* eax_30 = eax_25 + 2
                                arg1 -= 2
                                uint32_t i_2
                                
                                do
                                    ebx_3.b = *eax_30
                                    *ecx_23 = ebx_3.b
                                    ecx_23 = &ecx_23[1]
                                    eax_30 = &eax_30[1]
                                    i_2 = arg1
                                    arg1 -= 1
                                while (i_2 != 1)
                            else
                                int32_t ebx_4 = *(arg5 + 0x2c)
                                
                                do
                                    eax_25 += ebx_4 - esi_9
                                while (eax_25 u< esi_9)
                                
                                void* i_6 = ebx_4 - eax_25
                                int32_t ebx_5
                                
                                if (arg1 u<= i_6)
                                    ebx_5.b = *eax_25
                                    *ecx_23 = ebx_5.b
                                    ebx_5.b = *(eax_25 + 1)
                                    ecx_23[1] = ebx_5.b
                                    ecx_23 = &ecx_23[2]
                                    void* eax_28 = eax_25 + 2
                                    arg1 -= 2
                                    uint32_t i_3
                                    
                                    do
                                        ebx_5.b = *eax_28
                                        *ecx_23 = ebx_5.b
                                        ecx_23 = &ecx_23[1]
                                        eax_28 += 1
                                        i_3 = arg1
                                        arg1 -= 1
                                    while (i_3 != 1)
                                else
                                    arg1 -= i_6
                                    void* i_4
                                    
                                    do
                                        ebx_5.b = *eax_25
                                        *ecx_23 = ebx_5.b
                                        ecx_23 = &ecx_23[1]
                                        eax_25 += 1
                                        i_4 = i_6
                                        i_6 -= 1
                                    while (i_4 != 1)
                                    char* esi_11 = *(arg5 + 0x28)
                                    uint32_t i_5
                                    
                                    do
                                        void* eax_26
                                        eax_26.b = *esi_11
                                        *ecx_23 = eax_26.b
                                        ecx_23 = &ecx_23[1]
                                        esi_11 = &esi_11[1]
                                        i_5 = arg1
                                        arg1 -= 1
                                    while (i_5 != 1)
                            
                            esi = arg5
                            var_10 = ecx_23
                            goto label_4e889f
                        
                        if ((ebx_1.b & 0x40) != 0)
                            ecx_29 = edi_1[1] - var_8
                            uint32_t eax_34 = i_1 u>> 3
                            edi_1[6] = "invalid distance code"
                            
                            if (eax_34 u< ecx_29)
                                ecx_29 = eax_34
                            
                            esi = arg5
                            break
                        
                        eax_22 =
                            &eax_22[((*((ebx_1 << 2) + &data_ad00f8) & arg6) + *(eax_22 + 4)) << 3]
                        uint32_t ecx_19 = zx.d(eax_22[1])
                        arg6 u>>= ecx_19.b
                        uint32_t var_1c_1 = ecx_19
                        i_1 -= ecx_19
                    
                    result = 0xfffffffd
                else if ((arg1.b & 0x40) != 0)
                    uint32_t eax_36 = i_1 u>> 3
                    int32_t ecx_31 = edi_1[1]
                    
                    if ((arg1.b & 0x20) == 0)
                        ecx_29 = ecx_31 - var_8
                        edi_1[6] = "invalid literal/length code"
                        
                        if (eax_36 u< ecx_29)
                            ecx_29 = eax_36
                        
                        result = 0xfffffffd
                    else
                        ecx_29 = ecx_31 - var_8
                        
                        if (eax_36 u< ecx_29)
                            ecx_29 = eax_36
                        
                        result = 1
                else
                    eax_16 = &eax_16[((*((arg1 << 2) + &data_ad00f8) & arg6) + *(eax_16 + 4)) << 3]
                    uint32_t ecx_7 = zx.d(*eax_16)
                    arg1 = ecx_7
                    cond:1_1 = ecx_7 == 0
                    continue
            
            void* var_c_1 = var_c - ecx_29
            *(esi + 0x20) = arg6
            *(esi + 0x1c) = i_1 - (ecx_29 << 3)
            edi_1[1] = ecx_29 + var_8
            void* edx_3 = var_c_1 - *edi_1
            *edi_1 = var_c_1
            edi_1[2] += edx_3
            *(esi + 0x34) = var_10
            return result
