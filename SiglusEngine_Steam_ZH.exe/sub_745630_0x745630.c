// 函数: sub_745630
// 地址: 0x745630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg1[0x16]

if (eax_2 s< 2)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0xffffff7d

if (arg1[1] == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0xffffff76

if (arg3 s>= 0 && (arg3 s> 0 || arg2 u>= 0))
    int32_t temp1_1 = arg1[5]
    
    if (arg3 s<= temp1_1 && (arg3 s< temp1_1 || arg2 u<= arg1[4]))
        if (eax_2 s>= 3)
            int32_t eax_5 = arg1[0x18]
            int32_t ecx_5 = arg1[0xe]
            int32_t temp2_1 = *(ecx_5 + (eax_5 << 3) + 4)
            
            if (arg3 s< temp2_1 || (arg3 s<= temp2_1 && arg2 u< *(ecx_5 + (eax_5 << 3))))
                sub_7436f0(arg1)
            else
                int32_t temp3_1 = *(ecx_5 + (eax_5 << 3) + 0xc)
                
                if (arg3 s>= temp3_1 && (arg3 s> temp3_1 || arg2 u>= *(ecx_5 + (eax_5 << 3) + 8)))
                    sub_7436f0(arg1)
        
        int32_t var_1d8_2 = arg1[0x17]
        arg1[0x14] = 0xffffffff
        arg1[0x15] = 0xffffffff
        sub_6e51f0(&arg1[0x1e], var_1d8_2)
        sub_99c510(&arg1[0x78])
        int32_t var_170[0x5a]
        
        if (sub_744870(arg1, arg2, arg3) != 0)
            arg1[0x14] = 0xffffffff
            arg1[0x15] = 0xffffffff
            sub_6e4890(&var_170)
            sub_7436f0(arg1)
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return 0xffffff77
        
        int32_t ebx_1 = 0
        int32_t var_194 = 0
        int32_t var_174 = 0
        int32_t var_180 = 0
        int32_t var_178 = 0
        sub_6e4800(&var_170, arg1[0x17])
        sub_6e5160(&var_170)
        
        while (true)
            void var_1c8
            
            if (arg1[0x16] s>= 3 && sub_6e5340(&var_170, &var_1c8) s> 0)
                void* eax_12 = arg1[0x12] + (arg1[0x18] << 5)
                
                if (*(eax_12 + 0x1c) == 0)
                    sub_6e5340(&arg1[0x1e], nullptr)
                else
                    int32_t edi_2 = sub_99ce00(eax_12, &var_1c8)
                    
                    if (edi_2 s< 0)
                        sub_6e5340(&arg1[0x1e], nullptr)
                        edi_2 = 0
                    else if (var_174 != 0 && var_180 == 0)
                        sub_6e5340(&arg1[0x1e], nullptr)
                    else if (ebx_1 != 0)
                        var_194 += (edi_2 + ebx_1) s>> 2
                    
                    int32_t var_1b8
                    int32_t var_1b4
                    
                    if ((var_1b8 & var_1b4) == 0xffffffff)
                        ebx_1 = edi_2
                        var_178 = ebx_1
                        continue
                    
                    int32_t edi_4 = arg1[0x18]
                    int32_t edx_2 = arg1[0x11]
                    int32_t eax_30 = edi_4 << 4
                    int32_t ecx_15 = var_1b8 - *(eax_30 + edx_2)
                    int32_t ebx_4 =
                        sbb.d(var_1b4, *(eax_30 + edx_2 + 4), var_1b8 u< *(eax_30 + edx_2))
                    int32_t var_180_1 = ebx_4
                    
                    if (ebx_4 s<= 0 && (ebx_4 s< 0 || ecx_15 u< 0))
                        int64_t var_190_1 = 0
                        ebx_4 = 0
                        ecx_15 = 0
                        var_180_1 = 0
                    
                    int32_t edx_3 = 0
                    int64_t var_17c_1 = 0
                    int64_t var_190_2 = 0
                    int32_t var_188_2
                    int32_t var_178_1
                    int32_t var_174_1
                    int32_t edi_5
                    
                    if (edi_4 s< 2)
                        edi_5 = 0
                        var_188_2 = var_178
                        var_174_1 = 0
                        var_178_1 = 0
                    else
                        edi_5 = 0
                        void* eax_32 = arg1[0x11] + 0x18
                        int32_t esi_1 = var_178
                        int32_t ebx_5 = 0
                        int32_t i_2 = ((edi_4 - 2) u>> 1) + 1
                        int32_t edx_8 = 0
                        int32_t i
                        
                        do
                            int32_t temp9_1 = ebx_5
                            ebx_5 += *(eax_32 - 0x10)
                            esi_1 =
                                adc.d(esi_1, *(eax_32 - 0xc), temp9_1 + *(eax_32 - 0x10) u< temp9_1)
                            int32_t temp11_1 = edx_8
                            edx_8 += *eax_32
                            edi_5 = adc.d(edi_5, *(eax_32 + 4), temp11_1 + *eax_32 u< temp11_1)
                            eax_32 += 0x20
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                        var_174_1 = ebx_5
                        ebx_4 = var_180_1
                        var_188_2 = esi_1
                        var_178_1 = edx_8
                        edx_3 = (((edi_4 - 2) u>> 1) + 1) * 2
                    
                    if (edx_3 s< arg1[0x18])
                        int32_t eax_34 = arg1[0x11]
                        int32_t edx_9 = edx_3 << 4
                        int32_t temp19_1 = ecx_15
                        ecx_15 += *(edx_9 + eax_34 + 8)
                        ebx_4 = adc.d(ebx_4, *(edx_9 + eax_34 + 0xc), 
                            temp19_1 + *(edx_9 + eax_34 + 8) u< temp19_1)
                    
                    int32_t eax_36
                    int32_t edx_10
                    edx_10:eax_36 = sx.q(var_194)
                    int32_t var_178_2 = var_178_1 - eax_36
                    int32_t eax_38 = var_178_2 + var_174_1
                    int32_t eax_39 = eax_38 + ecx_15
                    arg1[0x14] = eax_39
                    int32_t edi_8 = adc.d(
                        adc.d(sbb.d(edi_5, edx_10, var_178_1 u< eax_36), var_188_2, 
                            var_178_2 + var_174_1 u< var_178_2), 
                        ebx_4, eax_38 + ecx_15 u< eax_38)
                    arg1[0x15] = edi_8
                    
                    if (edi_8 s<= 0 && (edi_8 s< 0 || eax_39 u< 0))
                        arg1[0x14] = 0
                        arg1[0x15] = 0
                    
                    break
            
            if (ebx_1 != 0)
                arg1[0x14] = 0xffffffff
                arg1[0x15] = 0xffffffff
                break
            
            void var_1a8
            int32_t eax_21
            int32_t edx_1
            eax_21, edx_1 = sub_743dc0(arg1, &var_1a8, 0xffffffff, 0xffffffff)
            
            if (edx_1 s< 0 || (edx_1 s<= 0 && eax_21 u< 0))
                void* eax_40
                int32_t edx_11
                eax_40, edx_11 = sub_745590(arg1, 0xffffffff)
                arg1[0x14] = eax_40
                arg1[0x15] = edx_11
                break
            
            if (arg1[0x16] s>= 3)
                uint32_t eax_22 = sub_6e47d0(&var_1a8)
                
                if (arg1[0x17] != eax_22 && sub_6e4700(&var_1a8) != 0)
                    sub_7436f0(arg1)
                    sub_6e4890(&var_170)
            
            if (arg1[0x16] s< 3 || arg1[0x16] s< 3)
                uint32_t i_1 = sub_6e47d0(&var_1a8)
                int32_t ecx_12 = arg1[0xd]
                int32_t edi_3 = 0
                
                if (ecx_12 s> 0)
                    int32_t* eax_24 = arg1[0x10]
                    
                    while (*eax_24 != i_1)
                        edi_3 += 1
                        eax_24 = &eax_24[1]
                        
                        if (edi_3 s>= ecx_12)
                            break
                
                if (edi_3 == ecx_12)
                    ebx_1 = var_178
                    continue
                else
                    arg1[0x18] = edi_3
                    arg1[0x17] = i_1
                    sub_6e51f0(&arg1[0x1e], i_1)
                    sub_6e51f0(&var_170, i_1)
                    int32_t eax_26 = arg1[0xf]
                    arg1[0x16] = 3
                    int32_t temp8_1 = *(eax_26 + (edi_3 << 3) + 4)
                    
                    if (edx_1 s> temp8_1
                            || (edx_1 s>= temp8_1 && eax_21 u> *(eax_26 + (edi_3 << 3))))
                        var_180 = 0
                    else
                        var_180 = 1
                    
                    ebx_1 = var_178
            
            sub_6e4e20(&arg1[0x1e], &var_1a8)
            sub_6e4e20(&var_170, &var_1a8)
            var_174 = sub_6e4720(&var_1a8)
            continue
        
        sub_6e4890(&var_170)
        *(arg1 + 0x68) = zx.o(0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return 0

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0xffffff7d
