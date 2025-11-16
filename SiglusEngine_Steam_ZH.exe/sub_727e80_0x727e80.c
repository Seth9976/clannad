// 函数: sub_727e80
// 地址: 0x727e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1[7]
void* ebx_1 = *arg1 - 1
void* eax_2 = arg1[1] - 5 + ebx_1
uint8_t* esi_1 = arg1[3] - 1
void* eax_3 = arg1[4]
void* var_c = ebx_1
void* eax_5 = eax_3 - 0x101 + esi_1
uint32_t edx = result[0xe]
void* edi_3 = eax_3 - arg2 + esi_1
int32_t eax_6 = result[0xa]
int32_t eax_7 = result[0xb]
uint32_t i_10 = result[0xc]
int32_t eax_8 = result[0xd]
int32_t eax_9 = result[0x13]
int32_t eax_10 = result[0x14]
int32_t edi_4 = result[0xf]
int32_t var_18_1 = (1 << (result[0x15]).b) - 1
int32_t eax_13 = (1 << (result[0x16]).b) - 1
uint32_t var_8_1

while (true)
    if (edi_4 u< 0xf)
        var_c = ebx_1 + 2
        edx = edx + (zx.d(*(ebx_1 + 1)) << edi_4.b) + (zx.d(*(ebx_1 + 2)) << (edi_4.b + 8))
        edi_4 += 0x10
    
    int32_t ebx_3 = *(eax_9 + ((var_18_1 & edx) << 2))
    uint32_t ecx_5 = zx.d((ebx_3 u>> 8).b)
    edi_4 -= ecx_5
    var_8_1 = edx u>> ecx_5.b
    uint32_t edx_3 = zx.d(ebx_3.b)
    
    if (ebx_3.b == 0)
    label_727f91:
        esi_1 = &esi_1[1]
        *esi_1 = (ebx_3 u>> 0x10).b
    else
        while (true)
            int32_t* result_1
            
            if ((edx_3.b & 0x10) != 0)
                uint32_t i = ebx_3 u>> 0x10
                int32_t edx_6 = edx_3 & 0xf
                
                if (edx_6 != 0)
                    if (edi_4 u< edx_6)
                        void* eax_29 = var_c + 1
                        var_c = eax_29
                        var_8_1 += zx.d(*eax_29) << edi_4.b
                        edi_4 += 8
                    
                    char ecx_10 = edx_6.b
                    int32_t eax_34 = ((1 << ecx_10) - 1) & var_8_1
                    var_8_1 u>>= ecx_10
                    i += eax_34
                    edi_4 -= edx_6
                
                uint32_t edx_7 = var_8_1
                
                if (edi_4 u< 0xf)
                    uint32_t edx_8 = edx_7 + (zx.d(*(var_c + 1)) << edi_4.b)
                    void* eax_40 = var_c + 2
                    var_c = eax_40
                    edx_7 = edx_8 + (zx.d(*eax_40) << (edi_4.b + 8))
                    edi_4 += 0x10
                
                int32_t eax_45 = *(eax_10 + ((eax_13 & edx_7) << 2))
                int32_t var_10_1 = eax_45
                uint32_t ecx_14 = zx.d((eax_45 u>> 8).b)
                int32_t eax_47 = var_10_1
                edi_4 -= ecx_14
                var_8_1 = edx_7 u>> ecx_14.b
                uint32_t edx_10 = zx.d(eax_47.b)
                
                if ((edx_10.b & 0x10) != 0)
                label_728069:
                    int32_t edx_14 = edx_10 & 0xf
                    
                    if (edi_4 u< edx_14)
                        char ecx_20 = edi_4.b
                        void* eax_56 = var_c + 1
                        edi_4 += 8
                        var_c = eax_56
                        var_8_1 += zx.d(*eax_56) << ecx_20
                        
                        if (edi_4 u< edx_14)
                            void* eax_60 = var_c + 1
                            var_c = eax_60
                            var_8_1 += zx.d(*eax_60) << edi_4.b
                            edi_4 += 8
                    
                    char ecx_22 = edx_14.b
                    edi_4 -= edx_14
                    int32_t var_10_3 = (eax_47 u>> 0x10) + (((1 << ecx_22) - 1) & var_8_1)
                    void* eax_67 = esi_1 - edi_3
                    var_8_1 u>>= ecx_22
                    
                    if (var_10_3 u<= eax_67)
                        uint8_t* ecx_26 = esi_1 - var_10_3
                        
                        do
                            char eax_75 = ecx_26[1]
                            ecx_26 = &ecx_26[3]
                            esi_1[1] = eax_75
                            i -= 3
                            esi_1[2] = ecx_26[0xffffffff]
                            esi_1 = &esi_1[3]
                            *esi_1 = *ecx_26
                        while (i u> 2)
                        
                        if (i != 0)
                            esi_1 = &esi_1[1]
                            *esi_1 = ecx_26[1]
                            
                            if (i u> 1)
                                esi_1 = &esi_1[1]
                                *esi_1 = ecx_26[2]
                        
                        break
                    
                    void* i_6 = var_10_3 - eax_67
                    
                    if (i_6 u> eax_7)
                        result_1 = result
                    
                    if (i_6 u<= eax_7 || result_1[0x6f0] == 0)
                        uint32_t eax_70
                        void* edi_7
                        
                        if (i_10 == 0)
                            edi_7 = eax_8 - 1 + eax_6 - i_6
                            
                            if (i_6 u< i)
                                i -= i_6
                                void* i_1
                                
                                do
                                    eax_70.b = *(edi_7 + 1)
                                    edi_7 += 1
                                    esi_1 = &esi_1[1]
                                    *esi_1 = eax_70.b
                                    i_1 = i_6
                                    i_6 -= 1
                                while (i_1 != 1)
                                edi_7 = esi_1 - var_10_3
                        else if (i_10 u>= i_6)
                            edi_7 = eax_8 - 1 + i_10 - i_6
                            
                            if (i_6 u< i)
                                i -= i_6
                                void* i_2
                                
                                do
                                    eax_70.b = *(edi_7 + 1)
                                    edi_7 += 1
                                    esi_1 = &esi_1[1]
                                    *esi_1 = eax_70.b
                                    i_2 = i_6
                                    i_6 -= 1
                                while (i_2 != 1)
                                edi_7 = esi_1 - var_10_3
                        else
                            void* i_7 = i_6 - i_10
                            edi_7 = eax_8 - 1 + i_10 - i_6 + eax_6
                            
                            if (i_7 u< i)
                                i -= i_7
                                int32_t edi_8 = edi_7 - esi_1
                                void* i_3
                                
                                do
                                    eax_70.b = esi_1[edi_8 + 1]
                                    esi_1 = &esi_1[1]
                                    *esi_1 = eax_70.b
                                    i_3 = i_7
                                    i_7 -= 1
                                while (i_3 != 1)
                                edi_7 = eax_8 - 1
                                
                                if (i_10 u< i)
                                    uint32_t i_8 = i_10
                                    i -= i_10
                                    uint32_t i_4
                                    
                                    do
                                        eax_70.b = *(edi_7 + 1)
                                        edi_7 += 1
                                        esi_1 = &esi_1[1]
                                        *esi_1 = eax_70.b
                                        i_4 = i_8
                                        i_8 -= 1
                                    while (i_4 != 1)
                                    edi_7 = esi_1 - var_10_3
                        
                        if (i u> 2)
                            int32_t i_9 = (i - 3) u/ 3 + 1
                            int32_t i_5
                            
                            do
                                i -= 3
                                esi_1[1] = *(edi_7 + 1)
                                char eax_74 = *(edi_7 + 2)
                                edi_7 += 3
                                esi_1[2] = eax_74
                                esi_1 = &esi_1[3]
                                *esi_1 = *edi_7
                                i_5 = i_9
                                i_9 -= 1
                            while (i_5 != 1)
                        
                        if (i == 0)
                            break
                        
                        eax_70.b = *(edi_7 + 1)
                        esi_1 = &esi_1[1]
                        *esi_1 = eax_70.b
                        
                        if (i u> 1)
                            eax_70.b = *(edi_7 + 2)
                            esi_1 = &esi_1[1]
                            *esi_1 = eax_70.b
                        
                        break
                    
                    arg1[6] = "invalid distance too far back"
                else
                    while ((edx_10.b & 0x40) == 0)
                        int32_t ecx_18 = *(eax_10
                            + (((((1 << edx_10.b) - 1) & var_8_1) + (var_10_1 u>> 0x10)) << 2))
                        var_10_1 = ecx_18
                        uint32_t ecx_19 = zx.d((ecx_18 u>> 8).b)
                        eax_47 = var_10_1
                        edi_4 -= ecx_19
                        var_8_1 u>>= ecx_19.b
                        edx_10 = zx.d(eax_47.b)
                        
                        if ((edx_10.b & 0x10) != 0)
                            goto label_728069
                    
                    arg1[6] = "invalid distance code"
                    result_1 = result
                
                ebx_1 = var_c
            else if ((edx_3.b & 0x40) != 0)
                ebx_1 = var_c
                
                if ((edx_3.b & 0x20) != 0)
                    *result = 0xb
                    goto label_728261
                
                arg1[6] = "invalid literal/length code"
                result_1 = result
            else
                ebx_3 = *(eax_9 + (((((1 << edx_3.b) - 1) & var_8_1) + (ebx_3 u>> 0x10)) << 2))
                uint32_t ecx_8 = zx.d((ebx_3 u>> 8).b)
                edi_4 -= ecx_8
                var_8_1 u>>= ecx_8.b
                edx_3 = zx.d(ebx_3.b)
                
                if (ebx_3.b == 0)
                    goto label_727f91
                
                continue
            
            *result_1 = 0x1d
            goto label_728261
    
    ebx_1 = var_c
    
    if (ebx_1 u>= eax_2)
        break
    
    if (esi_1 u>= eax_5)
        break
    
    edx = var_8_1

label_728261:
uint32_t eax_82 = edi_4 u>> 3
void* ebx_6 = ebx_1 - eax_82
int32_t edi_11 = edi_4 - (eax_82 << 3)
*arg1 = ebx_6 + 1
arg1[3] = &esi_1[1]
arg1[1] = eax_2 - ebx_6 + 5
arg1[4] = eax_5 - esi_1 + 0x101
result[0xf] = edi_11
result[0xe] = var_8_1 & ((1 << edi_11.b) - 1)
return result
