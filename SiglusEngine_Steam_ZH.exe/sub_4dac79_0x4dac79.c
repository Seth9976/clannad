// 函数: sub_4dac79
// 地址: 0x4dac79
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_59c = edi
int32_t var_8c
__builtin_memset(&var_8c, 0, 0x44)
int32_t* ecx = arg2
int32_t var_3c = 0
int32_t i_3 = arg3
int32_t __saved_ebp
int32_t i

do
    void* eax_1 = &(&__saved_ebp)[*ecx - 0x22]
    *eax_1 += 1
    ecx = &ecx[1]
    i = i_3
    i_3 -= 1
while (i != 1)

if (var_8c != arg3)
    int32_t eax_2 = *arg1
    int32_t var_8_1 = eax_2
    int32_t ecx_1 = 1
    
    while ((&var_8c)[ecx_1] == 0)
        ecx_1 += 1
        
        if (ecx_1 u> 0x10)
            break
    
    int32_t var_c_1 = ecx_1
    
    if (eax_2 u< ecx_1)
        var_8_1 = ecx_1
    
    int32_t eax_3 = 0x10
    
    while ((&var_8c)[eax_3] == 0)
        int32_t temp2_1 = eax_3
        eax_3 -= 1
        
        if (temp2_1 == 1)
            break
    
    if (var_8_1 u> eax_3)
        var_8_1 = eax_3
    
    *arg1 = var_8_1
    int32_t edx = 1 << ecx_1.b
    int32_t var_48_1
    int32_t edx_2
    int32_t edi_3
    
    while (true)
        if (ecx_1 u< eax_3)
            int32_t edx_1 = edx - (&var_8c)[ecx_1]
            
            if (edx - (&var_8c)[ecx_1] s>= 0)
                ecx_1 += 1
                edx = edx_1 << 1
                continue
        else
            edi_3 = (&__saved_ebp)[eax_3 - 0x22]
            edx_2 = edx - edi_3
            var_48_1 = edx_2
            
            if (edx - edi_3 s>= 0)
                break
        
        return 2
    
    (&__saved_ebp)[eax_3 - 0x22] = edi_3 + edx_2
    int32_t ecx_3 = 0
    int32_t i_2 = eax_3 - 1
    int32_t var_cc = 0
    
    if (eax_3 != 1)
        int32_t edi_5 = 0
        int32_t i_1
        
        do
            void var_88
            ecx_3 += *(&var_88 + edi_5)
            edi_5 += 4
            i_1 = i_2
            i_2 -= 1
            *(&var_cc + edi_5) = ecx_3
        while (i_1 != 1)
    
    int32_t* ebx_1 = arg2
    int32_t edi_6 = 0
    int32_t var_590[0x120]
    
    do
        int32_t eax_4 = *ebx_1
        ebx_1 = &ebx_1[1]
        
        if (eax_4 != 0)
            int32_t ecx_4 = (&__saved_ebp)[eax_4 - 0x33]
            var_590[ecx_4] = edi_6
            (&__saved_ebp)[eax_4 - 0x33] = ecx_4 + 1
        
        edi_6 += 1
    while (edi_6 u< arg3)
    
    int32_t var_10_1 = 0xffffffff
    arg2 = &var_590
    int32_t ebx_3 = neg.d(var_8_1)
    int32_t var_34_1 = 0
    int32_t var_d0 = 0
    int32_t var_110_1 = 0
    int32_t var_38_1 = 0
    int32_t var_1c_1 = 0
    
    if (var_c_1 s<= eax_3)
        int32_t var_2c_1 = var_c_1 - 1
        void* var_20_1 = &(&__saved_ebp)[var_c_1 - 0x22]
        
        do
            int32_t eax_9 = *var_20_1
            
            if (eax_9 != 0)
                while (true)
                    int32_t esi_1 = ebx_3 + var_8_1
                    int32_t var_28_1 = eax_9 - 1
                    int16_t var_14
                    
                    if (var_c_1 s> esi_1)
                        int32_t var_30_1 = esi_1
                        int32_t esi_3 = ebx_3 - var_8_1
                        
                        do
                            var_10_1 += 1
                            var_30_1 += var_8_1
                            ebx_3 += var_8_1
                            int32_t edi_8 = zx.d(eax_3.w) - ebx_3
                            esi_3 += var_8_1
                            
                            if (edi_8 u> var_8_1)
                                edi_8 = zx.d(var_8_1.w)
                            
                            int32_t ecx_9 = var_c_1 - ebx_3
                            int32_t eax_13 = 1 << ecx_9.b
                            
                            if (eax_13 u> eax_9)
                                int32_t eax_14 = eax_13 + 0xffffffff - var_28_1
                                void* edx_4 = var_20_1
                                ecx_9 += 1
                                
                                if (ecx_9 u< edi_8)
                                    while (true)
                                        int32_t edx_6 = *(edx_4 + 4)
                                        int32_t eax_15 = eax_14 << 1
                                        
                                        if (eax_15 u<= edx_6)
                                            break
                                        
                                        eax_14 = eax_15 - edx_6
                                        ecx_9 += 1
                                        
                                        if (ecx_9 u>= edi_8)
                                            break
                                        
                                        edx_4 += 4
                            
                            int32_t eax_16 = 1 << ecx_9.b
                            int32_t edx_8 = arg7 + (var_3c << 3)
                            var_38_1 = edx_8
                            int32_t edi_10 = var_3c + eax_16
                            var_1c_1 = eax_16
                            var_3c = edi_10
                            
                            if (edi_10 u> arg8)
                                return 3
                            
                            (&__saved_ebp)[var_10_1 - 0x43] = edx_8
                            
                            if (var_10_1 != 0)
                                ecx_9.b += 0x10
                                char var_18_1 = ecx_9.b
                                (&var_d0)[var_10_1] = var_34_1
                                int32_t eax_18
                                eax_18.b = var_8_1.b
                                uint32_t edx_10 = var_34_1 u>> esi_3.b
                                int32_t ecx_11 = (&__saved_ebp)[var_10_1 - 0x44]
                                char var_17_1 = eax_18.b
                                *(ecx_11 + (edx_10 << 3)) = var_18_1.d
                                var_14.d = var_38_1
                                *(ecx_11 + (edx_10 << 3) + 4) = var_38_1
                        while (var_c_1 s> var_30_1)
                    
                    char ecx_12 = var_c_1.b
                    int32_t eax_10
                    eax_10.b = ecx_12
                    eax_10.b -= ebx_3.b
                    char var_17_2 = eax_10.b
                    char var_18_2
                    
                    if (arg2 u< &(&__saved_ebp)[arg3 - 0x163])
                        int32_t eax_23 = *arg2
                        int32_t* eax_24
                        
                        if (eax_23 u>= arg4)
                            eax_24 = (eax_23 - arg4) << 1
                            int32_t edx_11
                            edx_11.b = *(eax_24 + arg6)
                            var_18_2 = edx_11.b
                            eax_24.w = *(eax_24 + arg5)
                        else
                            eax_23.b = eax_23 u< 0x100
                            eax_23.b += 0xf
                            var_18_2 = eax_23.b
                            eax_24.w = *arg2
                        
                        arg2 = &arg2[1]
                        var_14 = eax_24.w
                    else
                        var_18_2 = 0x63
                    
                    int32_t esi_4 = var_34_1
                    int32_t edx_13 = 1 << (ecx_12 - ebx_3.b)
                    uint32_t eax_27 = esi_4 u>> ebx_3.b
                    
                    if (eax_27 u< var_1c_1)
                        int32_t* ecx_16 = var_38_1 + (eax_27 << 3)
                        
                        do
                            *ecx_16 = var_18_2.d
                            ecx_16[1] = var_14.d
                            eax_27 += edx_13
                            ecx_16 = &ecx_16[edx_13 * 2]
                        while (eax_27 u< var_1c_1)
                    
                    int32_t eax_28 = 1 << var_2c_1.b
                    
                    while ((esi_4 & eax_28) != 0)
                        esi_4 ^= eax_28
                        eax_28 u>>= 1
                    
                    int32_t esi_5 = esi_4 ^ eax_28
                    int32_t eax_29 = var_10_1
                    var_34_1 = esi_5
                    
                    if ((((1 << ebx_3.b) - 1) & esi_5) != (&var_d0)[eax_29])
                        do
                            ebx_3 -= var_8_1
                            eax_29 -= 1
                        while ((((1 << ebx_3.b) - 1) & esi_5) != (&var_d0)[eax_29])
                        
                        var_10_1 = eax_29
                    
                    if (var_28_1 == 0)
                        break
                    
                    eax_9 = var_28_1
                
                edx_2 = var_48_1
            
            var_c_1 += 1
            var_20_1 += 4
            var_2c_1 += 1
        while (var_c_1 s<= eax_3)
    
    if (edx_2 != 0 && eax_3 != 1)
        return 1
else
    *arg1 = 0

return 0
