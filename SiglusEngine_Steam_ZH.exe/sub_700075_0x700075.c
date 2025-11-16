// 函数: sub_700075
// 地址: 0x700075
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    int32_t* arg_18 = arg3
    int32_t* ecx
    void* __return_addr_1 = sub_532910(ecx, 0xb086b4, __return_addr)
    void* eax = arg9
    void* arg_14
    void* arg_68
    int32_t entry_ebx
    
    do
        if (*(eax + 6) == 0xa)
            int32_t arg_3c = 0x100
            
            if (&arg_3c u>= arg3 || arg4 u> &arg_3c)
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 0x100
            else
                int32_t eax_2 = (&arg_3c - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_2 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            sub_532910(&arg_68, 0xb086d0, 2)
            eax = arg9
        
        eax += 8
        __return_addr_1 = 0xff
        arg9 = eax
        
        if (*eax == 0xff)
            int32_t arg_28
            void* arg_58
            
            if (*(arg11 + 0x48) != 0 && *(arg_28 + 0x44) != 0)
                sub_6ff730(&arg_58, "MESHTEXTURE")
                sub_532910(&arg_68, 0xb086e8, 3)
            
            if (*(arg11 + 0x3c) == 1)
                sub_6ff730(&arg_58, "SHADOWTEXTURE")
                sub_532910(&arg_68, 0xb086fc, 3)
            
            if (*(arg11 + 0x38) == 5)
                int32_t* eax_5 = *(arg11 + 0xa0)
                
                if (eax_5 != 0 && *eax_5 != 0)
                    sub_6ff730(&arg_58, "TOONTEXTURE")
                    sub_5329d0(&arg_68, 0xb08714)
            
            int32_t eax_6 = *(arg11 + 0x38)
            
            if (eax_6 == 8 || eax_6 == 9)
                int32_t* eax_7 = *(arg11 + 0xa8)
                
                if (eax_7 != 0 && *eax_7 != 0)
                    sub_6ff730(&arg_58, "NORMALTEXTURE")
                    sub_532910(&arg_68, 0xb08724, 3)
            
            void* arg_4c
            
            if (*(arg11 + 0x80) != 0)
                arg_28 = 0x10
                sub_530ba0(&arg_4c, &arg_28)
                sub_532910(&arg_68, 0xb0871c, 3)
            
            if (*(arg11 + 0x49) != 0)
                arg_28 = 1
                sub_530ba0(&arg_4c, &arg_28)
                sub_532910(&arg_68, u"_mrbd", 5)
            
            if (*(arg11 + 0x5c) != 0)
                arg_28 = 2
                sub_530ba0(&arg_4c, &arg_28)
                sub_532910(&arg_68, u"_rgb", 4)
            
            switch (*(arg11 + 0x38))
                case 0
                    sub_5329d0(&arg_68, u"_nolt")
                case 1
                    sub_532910(&arg_68, u"_lmbt", 5)
                case 2
                    sub_5329d0(&arg_68, u"_blph")
                case 3
                    sub_5329d0(&arg_68, u"_ppbp")
                case 4
                    sub_5329d0(&arg_68, u"_pphl")
                case 5
                    sub_5329d0(&arg_68, u"_toon")
                case 6
                    sub_5329d0(&arg_68, u"_ffp")
                case 7
                    sub_5329d0(&arg_68, u"_ppfp")
                case 8
                    sub_5329d0(&arg_68, u"_bump")
                case 9
                    sub_5329d0(&arg_68, u"_para")
            
            int32_t eax_9 = *(arg11 + 0x3c)
            
            if (eax_9 == 1)
                sub_532910(&arg_68, u"_dpbs", 5)
            else if (eax_9 == 0)
                sub_5329d0(&arg_68, u"_nost")
            
            int32_t eax_10 = *(arg11 + 0x40)
            
            if (eax_10 != 0 && (eax_10.b & 1) != 0)
                sub_532910(&arg_68, u"_rmlt", 5)
            
            int32_t ecx_24 = sub_532910(&arg_68, 0xb087bc, 3)
            void* eax_11 = &arg_68
            __return_addr = arg12
            
            if (arg13 u>= 8)
                eax_11 = arg_68
            
            int32_t result
            
            if (sub_536340(arg11, ecx_24, *(arg11 + 0x10), eax_11) != 0)
                if (arg11 != &arg_68)
                    sub_52e3c0(arg11, &arg_68, 0, 0xffffffff)
                
                int32_t* eax_13 = sub_6ffa90(&arg_68)
                
                if (eax_13 == 0)
                    int32_t arg_94 = 0xf
                    int32_t arg_90 = 0
                    char arg_80 = 0
                    char arg_107c = 4
                    void arg_98
                    sub_70a290(&arg_98)
                    arg_107c = 5
                    sub_710340(&arg_98, &arg_80, &arg_14, &arg_58, &arg_4c, *(arg11 + 0x38), 
                        *(arg11 + 0x3c), *(arg11 + 0x40))
                    int32_t* eax_14 = sub_6ff840(&arg_68, &arg_80)
                    
                    if (eax_14 == 0)
                        result = 0
                    else
                        result = *eax_14
                        *(arg11 + 0x18) = result
                    
                    arg_107c = 4
                    sub_70ade0(&arg_98)
                    
                    if (arg_94 u>= 0x10)
                        j__free(arg_80.d)
                    
                    arg4 = arg_14
                else
                    result = *eax_13
                    *(arg11 + 0x18) = result
            else
                result = *(arg11 + 0x18)
            
            if (arg13 u>= 8)
                j__free(arg_68)
            
            arg13 = 7
            arg_68.w = 0
            void* eax_15 = arg_4c
            arg12 = nullptr
            
            if (eax_15 != 0)
                j__free(eax_15)
                arg_4c = nullptr
                int32_t arg_50 = 0
                int32_t arg_54 = 0
            
            void* ebx_1 = arg_58
            
            if (ebx_1 != 0)
                sub_605410(ebx_1, arg10)
                j__free(ebx_1)
            
            if (arg4 != 0)
                j__free(arg4)
            
            TEB* fsbase
            fsbase->NtTib.ExceptionList = arg15
            sub_745f2b(arg14 ^ &arg_14)
            *arg2
            return result
        
        if (*(eax + 6) == 0)
            int32_t arg_44 = 1
            
            if (&arg_44 u>= arg3 || arg4 u> &arg_44)
                if (arg3 == entry_ebx)
                    __return_addr = 0xff
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 1
            else
                int32_t eax_18 = (&arg_44 - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = 0xff
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_18 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            __return_addr_1 = sub_532910(&arg_68, 0xb082d8, 2)
            eax = arg9
        
        if (*(eax + 6) == 1)
            int32_t arg_38 = 2
            
            if (&arg_38 u>= arg3 || arg4 u> &arg_38)
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 2
            else
                int32_t eax_21 = (&arg_38 - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_21 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            __return_addr_1 = sub_532910(&arg_68, 0xb0869c, 3)
            eax = arg9
        
        if (*(eax + 6) == 2)
            int32_t arg_30 = 4
            
            if (&arg_30 u>= arg3 || arg4 u> &arg_30)
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 4
            else
                int32_t eax_24 = (&arg_30 - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_24 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            __return_addr_1 = sub_532910(&arg_68, 0xb08694, 3)
            eax = arg9
        
        if (*(eax + 6) == 3)
            int32_t arg_48 = 8
            
            if (&arg_48 u>= arg3 || arg4 u> &arg_48)
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 8
            else
                int32_t eax_27 = (&arg_48 - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_27 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            __return_addr_1 = sub_532910(&arg_68, 0xb086ac, 2)
            eax = arg9
        
        if (*(eax + 6) == 5)
            int32_t arg_34 = 0x20
            
            if (&arg_34 u>= arg3 || arg4 u> &arg_34)
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 0x20
            else
                int32_t eax_30 = (&arg_34 - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_30 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            __return_addr_1 = sub_532910(&arg_68, 0xb086a4, 3)
            eax = arg9
        
        if (*(eax + 6) == 6)
            int32_t arg_40 = 0x40
            
            if (&arg_40 u>= arg3 || arg4 u> &arg_40)
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = 0x40
            else
                int32_t eax_33 = (&arg_40 - arg4) s>> 2
                
                if (arg3 == entry_ebx)
                    __return_addr = __return_addr_1
                    sub_530c10(&arg_14)
                    entry_ebx = arg8
                    arg3 = arg_18
                    arg4 = arg_14
                
                if (arg3 != 0)
                    *arg3 = *(arg4 + (eax_33 << 2))
            
            arg3 = &arg3[1]
            arg_18 = arg3
            __return_addr_1 = sub_532910(&arg_68, 0xb086bc, 2)
            eax = arg9
    while (*(eax + 6) != 7)
    
    int32_t arg_2c = 0x80
    
    if (&arg_2c u>= arg3 || arg4 u> &arg_2c)
        if (arg3 == entry_ebx)
            __return_addr = __return_addr_1
            sub_530c10(&arg_14)
            entry_ebx = arg8
            arg3 = arg_18
            arg4 = arg_14
        
        if (arg3 != 0)
            *arg3 = 0x80
    else
        int32_t eax_36 = (&arg_2c - arg4) s>> 2
        
        if (arg3 == entry_ebx)
            __return_addr = __return_addr_1
            sub_530c10(&arg_14)
            entry_ebx = arg8
            arg3 = arg_18
            arg4 = arg_14
        
        if (arg3 != 0)
            *arg3 = *(arg4 + (eax_36 << 2))
    
    __return_addr = 3
    arg3 = &arg3[1]
    ecx = &arg_68
