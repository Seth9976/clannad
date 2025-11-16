// 函数: sub_4e8035
// 地址: 0x4e8035
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg2
int32_t edi
int32_t var_108 = edi
int32_t var_80
__builtin_memset(&var_80, 0, 0x40)
int32_t i_5 = arg3
int32_t __saved_ebp
int32_t i

do
    void* eax_1 = &(&__saved_ebp)[*ecx - 0x1f]
    *eax_1 += 1
    ecx = &ecx[1]
    i = i_5
    i_5 -= 1
while (i != 1)

if (var_80 != arg3)
    int32_t ebx_1 = *arg1
    int32_t var_8_1 = ebx_1
    int32_t ecx_1 = 1
    int32_t eax_4 = 0xf
    
    while ((&var_80)[ecx_1] == 0)
        ecx_1 += 1
        
        if (ecx_1 u> 0xf)
            break
    
    int32_t var_c_1 = ecx_1
    
    if (ebx_1 u< ecx_1)
        var_8_1 = ecx_1
    
    while ((&var_80)[eax_4] == 0)
        int32_t temp2_1 = eax_4
        eax_4 -= 1
        
        if (temp2_1 == 1)
            break
    
    if (var_8_1 u> eax_4)
        var_8_1 = eax_4
    
    *arg1 = var_8_1
    int32_t edx = 1 << ecx_1.b
    int32_t var_38_1
    int32_t edx_2
    int32_t ebx_3
    
    while (true)
        if (ecx_1 u< eax_4)
            int32_t edx_1 = edx - (&var_80)[ecx_1]
            
            if (edx - (&var_80)[ecx_1] s>= 0)
                ecx_1 += 1
                edx = edx_1 << 1
                continue
        else
            ebx_3 = (&__saved_ebp)[eax_4 - 0x1f]
            edx_2 = edx - ebx_3
            var_38_1 = edx_2
            
            if (edx - ebx_3 s>= 0)
                break
        
        return 0xfffffffd
    
    (&__saved_ebp)[eax_4 - 0x1f] = ebx_3 + edx_2
    int32_t ecx_3 = 0
    int32_t i_3 = eax_4 - 1
    int32_t var_bc = 0
    
    if (eax_4 != 1)
        int32_t ebx_5 = 0
        int32_t i_1
        
        do
            int32_t var_7c
            ecx_3 += *(&var_7c + ebx_5)
            ebx_5 += 4
            i_1 = i_3
            i_3 -= 1
            *(&var_bc + ebx_5) = ecx_3
        while (i_1 != 1)
    
    int32_t* ecx_4 = arg2
    int32_t ebx_6 = 0
    
    do
        int32_t eax_5 = *ecx_4
        ecx_4 = &ecx_4[1]
        
        if (eax_5 != 0)
            int32_t ecx_5 = (&__saved_ebp)[eax_5 - 0x2f]
            arg10[ecx_5] = ebx_6
            edx_2 = var_38_1
            (&__saved_ebp)[eax_5 - 0x2f] = ecx_5 + 1
        
        ebx_6 += 1
    while (ebx_6 u< arg3)
    
    int32_t var_c0
    int32_t eax_7 = (&var_c0)[eax_4]
    int32_t var_10_1 = 0xffffffff
    arg2 = arg10
    int32_t ebx_8 = neg.d(var_8_1)
    int32_t var_24_1 = 0
    var_c0 = 0
    int32_t var_fc_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_14_1 = 0
    
    if (var_c_1 s<= eax_4)
        int32_t var_34_1 = var_c_1 - 1
        void* var_28_1 = &(&__saved_ebp)[var_c_1 - 0x1f]
        
        do
            int32_t i_4 = *var_28_1
            int32_t i_2 = i_4
            
            if (i_4 != 0)
                do
                    i_2 -= 1
                    int32_t eax_13 = var_8_1 + ebx_8
                    int32_t var_18
                    
                    if (var_c_1 s> eax_13)
                        int32_t ecx_9 = ebx_8 - var_8_1
                        
                        while (true)
                            var_10_1 += 1
                            ebx_8 += var_8_1
                            int32_t ecx_10 = ecx_9 + var_8_1
                            int32_t esi_4 = eax_4 - ebx_8
                            
                            if (esi_4 u> var_8_1)
                                esi_4 = var_8_1
                            
                            int32_t ecx_12 = var_c_1 - ebx_8
                            int32_t eax_15 = 1 << ecx_12.b
                            
                            if (eax_15 u> i_2 + 1)
                                int32_t eax_16 = eax_15 + 0xffffffff - i_2
                                void* edx_8 = var_28_1
                                
                                if (ecx_12 u< esi_4)
                                    ecx_12 += 1
                                    
                                    if (ecx_12 u< esi_4)
                                        while (true)
                                            int32_t edx_10 = *(edx_8 + 4)
                                            int32_t eax_17 = eax_16 << 1
                                            
                                            if (eax_17 u<= edx_10)
                                                break
                                            
                                            eax_16 = eax_17 - edx_10
                                            ecx_12 += 1
                                            
                                            if (ecx_12 u>= esi_4)
                                                break
                                            
                                            edx_8 += 4
                            
                            int32_t eax_19 = *arg9
                            int32_t edx_11 = 1 << ecx_12.b
                            int32_t esi_5 = eax_19 + edx_11
                            var_14_1 = edx_11
                            
                            if (esi_5 u> 0x5a0)
                                return 0xfffffffd
                            
                            int32_t eax_20 = arg8 + (eax_19 << 3)
                            var_2c_1 = eax_20
                            (&__saved_ebp)[var_10_1 - 0x3e] = eax_20
                            *arg9 = esi_5
                            
                            if (var_10_1 == 0)
                                *arg7 = var_2c_1
                            else
                                (&var_c0)[var_10_1] = var_24_1
                                int32_t eax_22
                                eax_22.b = var_8_1.b
                                char var_1b_1 = eax_22.b
                                uint32_t eax_24 = var_24_1 u>> ecx_10.b
                                int32_t ecx_14 = (&__saved_ebp)[var_10_1 - 0x3f]
                                int32_t edx_18 = ((var_2c_1 - ecx_14) s>> 3) - eax_24
                                *(ecx_14 + (eax_24 << 3)) = ecx_12.b.d
                                var_18 = edx_18
                                *(ecx_14 + (eax_24 << 3) + 4) = edx_18
                            
                            eax_13 += var_8_1
                            
                            if (var_c_1 s<= eax_13)
                                break
                            
                            ecx_9 = ecx_10
                        
                        edx_2 = var_38_1
                    
                    eax_13.b = var_c_1.b
                    eax_13.b -= ebx_8.b
                    char var_1b_2 = eax_13.b
                    char var_1c_2
                    
                    if (arg2 u< &arg10[eax_7])
                        int32_t eax_28 = *arg2
                        
                        if (eax_28 u>= arg4)
                            int32_t* eax_30 = (eax_28 - arg4) << 2
                            int32_t ecx_19
                            ecx_19.b = *(eax_30 + arg6)
                            ecx_19.b += 0x50
                            var_1c_2 = ecx_19.b
                            eax_28 = *(eax_30 + arg5)
                        else
                            void* ecx_17
                            ecx_17.b = eax_28 u< 0x100
                            ecx_17.b -= 1
                            var_1c_2 = ecx_17.b & 0x60
                        
                        arg2 = &arg2[1]
                        var_18 = eax_28
                    else
                        var_1c_2 = 0xc0
                    
                    int32_t esi_8 = 1 << (var_c_1.b - ebx_8.b)
                    uint32_t eax_32 = var_24_1 u>> ebx_8.b
                    
                    if (eax_32 u< var_14_1)
                        void* ecx_25 = var_2c_1 + (eax_32 << 3)
                        
                        do
                            *ecx_25 = var_1c_2.d
                            *(ecx_25 + 4) = var_18
                            eax_32 += esi_8
                            ecx_25 += esi_8 << 3
                        while (eax_32 u< var_14_1)
                        
                        edx_2 = var_38_1
                    
                    int32_t esi_9 = var_24_1
                    int32_t eax_33 = 1 << var_34_1.b
                    
                    while ((esi_9 & eax_33) != 0)
                        esi_9 ^= eax_33
                        eax_33 u>>= 1
                    
                    int32_t esi_10 = esi_9 ^ eax_33
                    var_24_1 = esi_10
                    int32_t eax_37 = var_10_1
                    
                    if ((((1 << ebx_8.b) - 1) & esi_10) != (&var_c0)[eax_37])
                        do
                            ebx_8 -= var_8_1
                            eax_37 -= 1
                        while ((((1 << ebx_8.b) - 1) & var_24_1) != (&var_c0)[eax_37])
                        
                        var_10_1 = eax_37
                while (i_2 != 0)
            
            var_c_1 += 1
            var_28_1 += 4
            var_34_1 += 1
        while (var_c_1 s<= eax_4)
    
    if (edx_2 != 0 && eax_4 != 1)
        return 0xfffffffb
else
    *arg7 = 0
    *arg1 = 0

return 0
