// 函数: sub_4122f0
// 地址: 0x4122f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_224
int32_t result = __security_cookie ^ &var_224
int32_t result_1 = result

if (arg3 s< 0x21)
    char var_218
    sub_4cfd70(&var_218, arg2)
    bool cond:0_1 = data_7037e8 == 0
    BOOL var_21c = 0
    int32_t var_220 = 0
    
    if (not(cond:0_1))
        sub_419520(arg2, 1)
    
    char* esi_1 = &var_218
    int32_t eax_1 = sub_4d1610(&var_218, 0x5c)
    void var_217
    
    if (eax_1 != 0xffffffff)
        esi_1 = &var_217 + eax_1
    
    int32_t eax_2 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_2 == 0xffffffff)
        eax_2 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    void* const var_234_1 = &data_61334c
    char* eax_3 = sub_4c84d0(&esi_1[eax_2], ".%s")
    int32_t esi_3 = data_703190:0xc
    int32_t eax_4
    char* ecx_6
    eax_4, ecx_6 = sub_4c3da0(eax_3, 5, &var_218, 0xd)
    char* var_238_3
    void* esi_8
    
    if (eax_4 != 1)
        void* eax_10
        
        if (esi_3 != 0xffffffff)
            eax_10 = sub_4c51f0(eax_4, &var_218, esi_3, nullptr)
        
        if (esi_3 != 0xffffffff && eax_10 != 0)
            goto label_412458
        
        int32_t eax_13 = sub_4c3960(&var_218, &data_613350)
        int32_t esi_6 = data_703190:8
        int32_t eax_14
        char* ecx_19
        eax_14, ecx_19 = sub_4c3da0(eax_13, 5, &var_218, 0x19)
        void* eax_15
        
        if (eax_14 != 1 && esi_6 != 0xffffffff)
            eax_15, ecx_19 = sub_4c51f0(eax_14, &var_218, esi_6, nullptr)
        
        if (eax_14 == 1 || (esi_6 != 0xffffffff && eax_15 != 0))
            char* var_234_7 = ecx_19
            int32_t var_238_4 = 0x19
            char* eax_9 = sub_4c5340(&var_220, &var_218, data_703190:8, &var_220, &var_21c, ecx_19)
            
            if (var_220 == 0)
                void* esi_7 = &var_218
                int32_t eax_17 = sub_4d1610(&var_218, 0x5c)
                
                if (eax_17 != 0xffffffff)
                    esi_7 = &var_217 + eax_17
                
                int32_t eax_18 = sub_4d1610(esi_7, 0x2e)
                
                if (eax_18 == 0xffffffff)
                    eax_18 = sub_4cfc80(esi_7)
                    esi_7 -= 1
                
                esi_8 = esi_7 + eax_18
                char* var_234_8 = &var_218
                var_238_3 = "%s.pdt "
                goto label_412564
            
            sub_411fd0(eax_9, var_21c, arg3, nullptr, arg4, 1, nullptr)
            result = sub_4d6c40(&var_220, &var_21c)
        else
            result = sub_4121e0(0, &var_218)
    else
        char* var_234_2 = ecx_6
        int32_t var_238_1 = 0xd
        int32_t ecx_7 = data_703190:0xc
        var_220 = 0
        var_21c = 0
        char* eax_6
        int32_t ecx_8
        eax_6, ecx_8 = sub_4c5340(&var_220, &var_218, ecx_7, &var_220, &var_21c, ecx_6)
        char* esi_4 = var_21c
        
        if (esi_4 == 0)
        label_412458:
            char* esi_5 = &var_218
            int32_t eax_11 = sub_4d1610(&var_218, 0x5c)
            
            if (eax_11 != 0xffffffff)
                esi_5 = &var_217 + eax_11
            
            int32_t eax_12 = sub_4d1610(esi_5, 0x2e)
            
            if (eax_12 == 0xffffffff)
                eax_12 = sub_4cfc80(esi_5)
                esi_5 -= 1
            
            esi_8 = &esi_5[eax_12]
            char* var_234_6 = &var_218
            var_238_3 = "%s.g00 "
        label_412564:
            *esi_8 = 0
            result = sub_4c84d0(&data_7027c0, var_238_3)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(result, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
                result = sub_4a1e40(3)
                
                if (data_702fc0 != 0 || data_641ad0 s< 6)
                    result = MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                    data_641ad0 += 1
            else if (data_641ad0 s< 6)
                result = MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
        else
            if (*esi_4 == 2)
                int32_t var_234_3 = ecx_8
                sub_426d50(esi_4)
            
            int32_t eax_7 = var_220
            var_220 = eax_7
            
            if (eax_7 == 0)
                goto label_412458
            
            if (sub_426f30(eax_7, esi_4, &var_218, eax_6) == 0)
                result = sub_4d6c40(&var_220, &var_21c)
            else
                sub_411fd0(&var_218, esi_4, arg3, eax_6, arg4, 0, &var_218)
                result = sub_4d6c40(&var_220, &var_21c)
    
    if (arg3 == 0)
        data_703008 = 1
        data_703004 = 1
    
    if (data_702fc0 != 0 && data_1af0a78 != 0)
        bool cond:1_1
        
        if (arg3 s<= 0x10)
            cond:1_1 = data_1318520 != 2
            *((arg3 << 2) + &data_20cc940) = 1
        label_412655:
            
            if (not(cond:1_1))
                result = sub_563b20(0)
        else if (arg3 == 0xffffffff)
            cond:1_1 = data_1318520 != 1
            goto label_412655

sub_5f02dd(result_1 ^ &var_224)
return result
