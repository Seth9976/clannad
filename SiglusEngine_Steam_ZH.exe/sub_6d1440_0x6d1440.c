// 函数: sub_6d1440
// 地址: 0x6d1440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = zx.d(*(arg3 + 8))

if (eax_2 != 3)
    uint32_t esi_1 = zx.d(*(arg3 + 9))
    uint32_t var_18
    int32_t ebx_1
    
    if ((eax_2.b & 2) == 0)
        ebx_1 = 1
        var_18 = esi_1 - zx.d(arg4[3])
    else
        ebx_1 = 3
        uint32_t eax_4 = zx.d(arg4[1])
        var_18 = esi_1 - zx.d(*arg4)
        uint32_t var_14_1 = esi_1 - eax_4
        uint32_t var_10_1 = esi_1 - zx.d(arg4[2])
    
    int32_t var_24_1 = ebx_1
    
    if ((eax_2.b & 4) != 0)
        (&var_18)[ebx_1] = esi_1 - zx.d(arg4[4])
        ebx_1 += 1
        var_24_1 = ebx_1
    
    int32_t edi_2 = 0
    eax_2 = 0
    
    if (ebx_1 s> 0)
        do
            int32_t ecx_9 = (&var_18)[eax_2]
            
            if (ecx_9 s<= 0 || ecx_9 s>= esi_1)
                (&var_18)[eax_2] = 0
            else
                edi_2 = 1
            
            eax_2 += 1
        while (eax_2 s< ebx_1)
        
        if (edi_2 != 0 && esi_1 - 2 u<= 0xe)
            eax_2 = zx.d(*(esi_1 + &jump_table_6d1640[4]:2))
            
            switch (eax_2)
                case 0
                    int32_t ecx_10 = 0
                    eax_2 = *(arg3 + 4) + arg2
                    void* esi_4 = eax_2 - arg2
                    
                    if (arg2 u> eax_2)
                        esi_4 = nullptr
                    
                    if (esi_4 != 0)
                        do
                            eax_2.b = *arg2
                            arg2 += 1
                            eax_2.b u>>= 1
                            ecx_10 += 1
                            eax_2.b &= 0x55
                            *(arg2 - 1) = eax_2.b
                        while (ecx_10 u< esi_4)
                        
                        sub_745f2b(eax_1 ^ &__saved_ebp)
                        return eax_2
                case 1
                    uint8_t ecx_13 = var_18.b
                    int32_t edi_3 = 0
                    int32_t ebx_2 = 0xf s>> ecx_13
                    void* esi_6 = *(arg3 + 4) + arg2
                    eax_2 = esi_6 - arg2
                    
                    if (arg2 u> esi_6)
                        eax_2 = 0
                    
                    if (eax_2 != 0)
                        uint32_t esi_7 = eax_2
                        
                        do
                            eax_2.b = *arg2
                            arg2 += 1
                            eax_2.b u>>= ecx_13
                            edi_3 += 1
                            ecx_13 = var_18.b
                            eax_2.b &= ebx_2.b | (ebx_2 << 4).b
                            *(arg2 - 1) = eax_2.b
                        while (edi_3 u< esi_7)
                        
                        sub_745f2b(eax_1 ^ &__saved_ebp)
                        return eax_2
                case 2
                    int32_t esi_8 = 0
                    int32_t edi_4 = 0
                    eax_2 = *(arg3 + 4) + arg2
                    void* ecx_17 = eax_2 - arg2
                    
                    if (arg2 u> eax_2)
                        ecx_17 = nullptr
                    
                    void* var_1c_1 = ecx_17
                    
                    if (ecx_17 != 0)
                        uint8_t eax_17
                        
                        do
                            ecx_17.b = (&var_18)[esi_8].b
                            arg2 += 1
                            esi_8 += 1
                            eax_17 = (zx.d(*(arg2 - 1)) u>> ecx_17.b).b
                            *(arg2 - 1) = eax_17
                            
                            if (esi_8 s>= ebx_1)
                                esi_8 = 0
                            
                            edi_4 += 1
                        while (edi_4 u< var_1c_1)
                        
                        sub_745f2b(eax_1 ^ &__saved_ebp)
                        return eax_17
                case 3
                    int32_t edi_5 = 0
                    eax_2 = *(arg3 + 4) + arg2
                    uint32_t var_1c_2 = eax_2
                    
                    if (arg2 u< eax_2)
                        do
                            char ecx_20 = ((&var_18)[edi_5]).b
                            edi_5 += 1
                            int32_t ebx_7 = ((zx.d(*arg2) << 8) + zx.d(*(arg2 + 1))) s>> ecx_20
                            
                            if (edi_5 s>= var_24_1)
                                edi_5 = 0
                            
                            eax_2 = ebx_7 s>> 8
                            *arg2 = eax_2.b
                            *(arg2 + 1) = ebx_7.b
                            arg2 += 2
                        while (arg2 u< var_1c_2)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
