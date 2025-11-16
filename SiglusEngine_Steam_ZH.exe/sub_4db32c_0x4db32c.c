// 函数: sub_4db32c
// 地址: 0x4db32c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *(arg1 + 0x28)
int32_t edi
int32_t var_51c = edi
int32_t edi_1 = *(arg1 + 0x24)

for (; i u< 5; i += 8)
    int32_t eax_1 = *(arg1 + 0x18)
    int32_t ecx_1 = *(arg1 + 0x14)
    char ecx_3
    
    if (eax_1 u>= ecx_1)
        if (eax_1 != ecx_1)
            *(arg1 + 4) = 1
        
        ecx_3 = 0
    else
        ecx_3 = (*(arg1 + 8))[eax_1]
        *(arg1 + 0x18) = eax_1 + 1
    
    edi_1 |= zx.d(ecx_3) << i.b

int32_t i_1 = i - 5
uint32_t edi_2 = edi_1 u>> 5

if (i_1 u< 5)
    int32_t edx_1 = *(arg1 + 0x14)
    
    do
        int32_t eax_8 = *(arg1 + 0x18)
        char ecx_6
        
        if (eax_8 u>= edx_1)
            if (eax_8 != edx_1)
                *(arg1 + 4) = 1
            
            ecx_6 = 0
        else
            ecx_6 = (*(arg1 + 8))[eax_8]
            *(arg1 + 0x18) = eax_8 + 1
        
        uint32_t eax_11 = zx.d(ecx_6) << i_1.b
        i_1 += 8
        edi_2 |= eax_11
    while (i_1 u< 5)

uint32_t edi_3 = edi_2 u>> 5
int32_t i_2

for (i_2 = i_1 - 5; i_2 u< 4; i_2 += 8)
    int32_t eax_12 = *(arg1 + 0x18)
    int32_t ecx_8 = *(arg1 + 0x14)
    char ecx_10
    
    if (eax_12 u>= ecx_8)
        if (eax_12 != ecx_8)
            *(arg1 + 4) = 1
        
        ecx_10 = 0
    else
        ecx_10 = (*(arg1 + 8))[eax_12]
        *(arg1 + 0x18) = eax_12 + 1
    
    edi_3 |= zx.d(ecx_10) << i_2.b

int32_t i_4 = i_2 - 4
uint32_t var_8 = edi_3 u>> 4

if (*(arg1 + 4) == 0 && (edi_1 & 0x1f) + 0x101 u<= 0x11e && (edi_2 & 0x1f) + 1 u<= 0x1e)
    int32_t i_3 = 0
    
    if ((edi_3 & 0xf) + 4 u<= 0)
        goto label_4db445
    
    int32_t var_514[0x13c]
    
    while (true)
        if (i_4 u< 3)
            int32_t edi_5 = *(arg1 + 0x18)
            int32_t ecx_17 = *(arg1 + 0x14)
            char ecx_19
            
            if (edi_5 u>= ecx_17)
                if (edi_5 != ecx_17)
                    *(arg1 + 4) = 1
                
                ecx_19 = 0
            else
                ecx_19 = (*(arg1 + 8))[edi_5]
                *(arg1 + 0x18) = edi_5 + 1
            
            var_8 |= zx.d(ecx_19) << i_4.b
            i_4 += 8
        else
            uint32_t ecx_21 = var_8
            int32_t edi_9 = *((i_3 << 2) + &data_b59cd8)
            var_8 u>>= 3
            i_4 -= 3
            i_3 += 1
            var_514[edi_9] = ecx_21 & 7
            
            if (i_3 u>= (edi_3 & 0xf) + 4)
                break
    
    for (; i_3 u< 0x13; i_3 += 1)
    label_4db445:
        var_514[*((i_3 << 2) + &data_b59cd8)] = 0
    
    if (*(arg1 + 4) == 0)
        int32_t var_14 = 7
        int32_t result = sub_4dac79(&var_14, &var_514, 0x13, 0x13, 0, 0, arg1 + 0x54, 0x320)
        
        if (result != 0)
            return result
        
        int32_t eax_23 = (edi_2 & 0x1f) + 1 + (edi_1 & 0x1f) + 0x101
        uint32_t ecx_14 = zx.d(*((var_14 << 1) + &data_b59e1c))
        int32_t var_10 = eax_23
        uint32_t var_1c_1 = 0
        int32_t var_c_1 = 0
        int32_t __saved_ebp
        
        if (eax_23 u> 0)
            int32_t eax_31
            
            do
                if (i_4 u< var_14)
                    int32_t edx_5 = *(arg1 + 0x14)
                    
                    do
                        int32_t eax_24 = *(arg1 + 0x18)
                        char ecx_16
                        
                        if (eax_24 u>= edx_5)
                            if (eax_24 != edx_5)
                                *(arg1 + 4) = 1
                            
                            ecx_16 = 0
                        else
                            ecx_16 = (*(arg1 + 8))[eax_24]
                            *(arg1 + 0x18) = eax_24 + 1
                        
                        uint32_t eax_27 = zx.d(ecx_16) << i_4.b
                        i_4 += 8
                        var_8 |= eax_27
                    while (i_4 u< var_14)
                
                if (*(arg1 + 4) != 0)
                    return 1
                
                void* edx_6 = arg1 + ((ecx_14 & var_8) << 3) + 0x54
                uint32_t ecx_24 = zx.d(*(edx_6 + 1))
                var_8 u>>= ecx_24.b
                i_4 -= ecx_24
                uint32_t ecx_25 = zx.d(*(edx_6 + 4))
                
                if (ecx_25 u< 0x10)
                    var_514[var_c_1] = ecx_25
                    var_1c_1 = ecx_25
                    eax_31 = var_c_1 + 1
                    var_c_1 = eax_31
                else if (ecx_25 != 0x10)
                    int32_t ecx_38
                    
                    if (ecx_25 != 0x11)
                        if (i_4 u< 7)
                            int32_t edx_10 = *(arg1 + 0x14)
                            
                            do
                                int32_t eax_41 = *(arg1 + 0x18)
                                char ecx_40
                                
                                if (eax_41 u>= edx_10)
                                    if (eax_41 != edx_10)
                                        *(arg1 + 4) = 1
                                    
                                    ecx_40 = 0
                                else
                                    ecx_40 = (*(arg1 + 8))[eax_41]
                                    *(arg1 + 0x18) = eax_41 + 1
                                
                                uint32_t eax_44 = zx.d(ecx_40) << i_4.b
                                i_4 += 8
                                var_8 |= eax_44
                            while (i_4 u< 7)
                        
                        if (*(arg1 + 4) != 0)
                            return 1
                        
                        uint32_t ecx_42 = var_8
                        var_8 u>>= 7
                        ecx_38 = (ecx_42 & 0x7f) + 0xb
                        i_4 -= 7
                    else
                        if (i_4 u< 3)
                            int32_t edx_9 = *(arg1 + 0x14)
                            
                            do
                                int32_t eax_37 = *(arg1 + 0x18)
                                char ecx_34
                                
                                if (eax_37 u>= edx_9)
                                    if (eax_37 != edx_9)
                                        *(arg1 + 4) = 1
                                    
                                    ecx_34 = 0
                                else
                                    ecx_34 = (*(arg1 + 8))[eax_37]
                                    *(arg1 + 0x18) = eax_37 + 1
                                
                                uint32_t eax_40 = zx.d(ecx_34) << i_4.b
                                i_4 += 8
                                var_8 |= eax_40
                            while (i_4 u< 3)
                        
                        if (*(arg1 + 4) != 0)
                            return 1
                        
                        uint32_t ecx_36 = var_8
                        var_8 u>>= 3
                        ecx_38 = (ecx_36 & 7) + 3
                        i_4 -= 3
                    
                    eax_31 = var_c_1
                    int32_t edx_11 = eax_31 + ecx_38
                    
                    if (edx_11 u> var_10)
                        *(arg1 + 4) = 2
                        break
                    
                    if (ecx_38 != 0)
                        __builtin_memset(&(&__saved_ebp)[eax_31 - 0x144], 0, ecx_38 << 2)
                        eax_31 = edx_11
                        var_c_1 = eax_31
                    
                    var_1c_1 = 0
                else
                    if (i_4 u< 2)
                        int32_t edx_7 = *(arg1 + 0x14)
                        
                        do
                            int32_t eax_32 = *(arg1 + 0x18)
                            char ecx_27
                            
                            if (eax_32 u>= edx_7)
                                if (eax_32 != edx_7)
                                    *(arg1 + 4) = 1
                                
                                ecx_27 = 0
                            else
                                ecx_27 = (*(arg1 + 8))[eax_32]
                                *(arg1 + 0x18) = eax_32 + 1
                            
                            uint32_t eax_35 = zx.d(ecx_27) << i_4.b
                            i_4 += 8
                            var_8 |= eax_35
                        while (i_4 u< 2)
                    
                    if (*(arg1 + 4) != 0)
                        return 1
                    
                    uint32_t ecx_29 = var_8
                    var_8 u>>= 2
                    eax_31 = var_c_1
                    int32_t edx_8 = eax_31 + (ecx_29 & 3) + 3
                    i_4 -= 2
                    
                    if (edx_8 u> var_10)
                        *(arg1 + 4) = 2
                        break
                    
                    if ((ecx_29 & 3) != 0xfffffffd)
                        int32_t ecx_32
                        int32_t edi_11
                        edi_11, ecx_32 = __memfill_u32(&(&__saved_ebp)[eax_31 - 0x144], var_1c_1, 
                            (ecx_29 & 3) + 3)
                        eax_31 = edx_8
                        var_c_1 = eax_31
            while (eax_31 u< var_10)
        
        if (*(arg1 + 4) == 0)
            *(arg1 + 0x24) = var_8
            *(arg1 + 0x28) = i_4
            var_14 = 9
            result = sub_4dac79(&var_14, &var_514, (edi_1 & 0x1f) + 0x101, 0x101, 0xb59d24, 
                0xb59d64, arg1 + 0x54, 0x320)
            
            if (result == 0)
                var_10 = 6
                int32_t ecx_44
                result, ecx_44 = sub_4dac79(&var_10, &(&__saved_ebp)[(edi_1 & 0x1f) - 0x43], 
                    (edi_2 & 0x1f) + 1, result, 0xb59da4, 0xb59de0, arg1 + 0x1954, 0x96)
                
                if (result == 0)
                    return sub_4dafd5(ecx_44, arg1, arg1 + 0x54, arg1 + 0x1954, var_14, var_10, 
                        result.w)
            
            return result

return 1
