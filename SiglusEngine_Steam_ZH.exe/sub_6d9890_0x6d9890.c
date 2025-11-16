// 函数: sub_6d9890
// 地址: 0x6d9890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_544 = nullptr
int32_t var_554 = 0
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_2 & 6) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_140[0x50]
    sub_6d4690(eax_3, &var_140, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_140)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

int32_t esi = arg4
int32_t* eax_43

if (esi u>= 9)
    int32_t eax_5 = zx.d(*(arg3 + 0x306))
    
    if ((eax_5 & 0x8000) != 0)
        int32_t eax_6 = sub_6d8610(arg3, esi)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_6
    
    if ((eax_5.b & 4) != 0)
        var_544 = "too many profiles"
        sub_6d8610(arg3, esi)
    else
        int32_t edi_1 = 0x51
        
        if (esi u< 0x51)
            edi_1 = esi
        
        void var_68
        sub_6d85d0(eax_5, &var_68, arg3, edi_1)
        arg4 = esi - edi_1
        int32_t esi_2 = 0
        void var_67
        void var_66
        
        while (esi_2 u< edi_1)
            if (*(&var_68 + esi_2) == 0)
                break
            
            if (esi_2 + 1 u>= edi_1 || *(&var_67 + esi_2) == 0)
                esi_2 += 1
                break
            
            if (esi_2 + 2 u>= edi_1 || *(&var_66 + esi_2) == 0)
                esi_2 += 2
                break
            
            void var_65
            
            if (esi_2 + 3 u>= edi_1 || *(&var_65 + esi_2) == 0)
                esi_2 += 3
                break
            
            char var_64[0x58]
            
            if (esi_2 + 4 u>= edi_1 || var_64[esi_2] == 0)
                esi_2 += 4
                break
            
            esi_2 += 5
            
            if (esi_2 u>= 0x50)
                break
            
            continue
        
        if (esi_2 - 1 u> 0x4e)
            var_544 = "bad keyword"
            sub_6d8610(arg3, arg4)
        else if (esi_2 + 1 u>= edi_1 || *(&var_67 + esi_2) != 0)
            var_544 = "bad compression method"
            sub_6d8610(arg3, arg4)
        else
            void* eax_12
            int32_t* ecx_8
            eax_12, ecx_8 = sub_6d8850(arg3, 0x69434350)
            
            if (eax_12 != 0)
                var_544 = *(arg3 + 0x9c)
                sub_6d8610(arg3, arg4)
            else
                uint32_t var_548 = 0x84
                *(arg3 + 0x84) = &var_66 + esi_2
                int32_t var_574_2 = 0
                *(arg3 + 0x88) = edi_1 - esi_2 - 2
                void var_540
                char var_f0
                sub_6d8d30(&arg4, &var_540, arg3, ecx_8, &arg4, &var_f0, &var_548)
                
                if (var_548 != 0)
                    var_544 = *(arg3 + 0x9c)
                    esi = arg4
                else
                    char var_ef
                    char var_ee
                    char var_ed
                    uint32_t esi_9 = (((((zx.d(var_f0) << 8) + zx.d(var_ef)) << 8) + zx.d(var_ee))
                        << 8) + zx.d(var_ed)
                    
                    if (sub_6cc7a0(&var_68, esi_9) == 0)
                        esi = arg4
                    else if (sub_6cc7d0(&var_68, arg3 + 0x2bc, arg3, &var_68, esi_9, &var_f0, 
                            *(arg3 + 0x14f)) == 0)
                        esi = arg4
                    else
                        char var_6d
                        uint32_t eax_24 = zx.d(var_6d)
                        char var_70
                        char var_6f
                        char var_6e
                        var_548 = (((((zx.d(var_70) << 8) + zx.d(var_6f)) << 8) + zx.d(var_6e))
                            << 8) + eax_24
                        int32_t* eax_25 = sub_6d87a0(eax_24, esi_9, arg3, 2)
                        
                        if (eax_25 == 0)
                            var_544 = "out of memory"
                            esi = arg4
                        else
                            __builtin_memcpy(eax_25, &var_f0, 0x84)
                            uint32_t esi_10 = var_548
                            int32_t var_574_5 = 0
                            uint32_t ecx_21 = esi_10 * 0xc
                            var_548 = ecx_21
                            sub_6d8d30(&arg4, &var_540, arg3, &var_548, &arg4, &eax_25[0x21], 
                                &var_548)
                            
                            if (var_548 != 0)
                                var_544 = *(arg3 + 0x9c)
                                esi = arg4
                            else if (sub_6ccb00(&var_68, arg3 + 0x2bc, arg3, &var_68, esi_9, eax_25)
                                    == 0)
                                esi = arg4
                            else
                                var_548 = esi_9 - ecx_21 - 0x84
                                int32_t var_574_7 = 1
                                sub_6d8d30(&arg4, &var_540, arg3, eax_25, &arg4, 
                                    &eax_25[(esi_10 + 0xb) * 3], &var_548)
                                esi = arg4
                                
                                if (esi != 0 && (*(arg3 + 0x78) & 0x100000) == 0)
                                    var_544 = "extra compressed data"
                                else if (var_548 != 0)
                                    var_544 = "truncated"
                                else
                                    if (esi != 0)
                                        sub_6d47e0(arg3, "extra compressed data")
                                    
                                    var_554 = 1
                                    
                                    if (sub_6ccc20(sub_6d8610(arg3, esi), eax_25, arg3, 
                                            *(arg3 + 0xb4)) != 0)
                                        sub_6ccef0(eax_25)
                                    
                                    void* eax_41 = arg2
                                    
                                    if (eax_41 == 0)
                                    label_6d9d0e:
                                        *(arg3 + 0x80) = 0
                                        sub_745f2b(eax_1 ^ &__saved_ebp)
                                        return eax_41
                                    
                                    sub_6cafa0(eax_41, eax_41, arg3, 0x10, 0)
                                    uint32_t edx_18 = esi_2 + 1
                                    int32_t* eax_39
                                    
                                    if (edx_18 == 0)
                                        eax_39 = nullptr
                                    else
                                        eax_39 = sub_6d8210(arg3, edx_18)
                                        edx_18 = esi_2 + 1
                                    
                                    void* ecx_32 = arg2
                                    *(ecx_32 + 0x74) = eax_39
                                    char const* const edi_6
                                    
                                    if (eax_39 == 0)
                                        edi_6 = "out of memory"
                                        *(arg3 + 0x306) |= 0x8000
                                        var_544 = "out of memory"
                                    else
                                        sub_748840(eax_39, &var_68, edx_18)
                                        ecx_32 = arg2
                                        *(arg3 + 0x298) = 0
                                        *(ecx_32 + 0xe8) |= 0x10
                                        *(ecx_32 + 8) |= 0x1000
                                        *(ecx_32 + 0x7c) = esi_9
                                        edi_6 = nullptr
                                        *(ecx_32 + 0x78) = eax_25
                                    
                                    eax_41 = sub_6cba60(arg3, ecx_32)
                                    
                                    if (edi_6 == 0)
                                        goto label_6d9d0e
                
                *(arg3 + 0x80) = 0
                
                if (var_554 == 0)
                    sub_6d8610(arg3, esi)
    
    *(arg3 + 0x306) |= 0x8000
    sub_6cba60(arg3, arg2)
    eax_43 = var_544
    
    if (eax_43 != 0)
        eax_43 = sub_6d4840(arg3, eax_43)
else
    sub_6d8610(arg3, esi)
    eax_43 = sub_6d4840(arg3, "too short")

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_43
