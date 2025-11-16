// 函数: sub_459ba0
// 地址: 0x459ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_244
int32_t eax_1 = __security_cookie ^ &var_244
int32_t var_c = eax_1
char* var_230 = arg2

if (arg1 u<= 3)
    int32_t edi_1 = arg1 * 5
    void* esi_1 = (edi_1 << 3) + &data_7030e0:4
    uint32_t var_228 = (edi_1 << 3) + &data_7030e0
    sub_4d6c40((edi_1 << 3) + &data_7030e0, esi_1)
    char* edx_1 = var_230
    *((edi_1 << 3) + &data_7030e0:8) = 0
    *((edi_1 << 3) + &data_7030e0:0xc) = 0
    char var_218
    sub_4cfd70(&var_218, edx_1)
    char* var_234 = nullptr
    uint32_t var_240 = 0
    void* var_22c = nullptr
    int32_t var_224 = 0
    sub_4c3960(&var_218, &data_61953c)
    char* eax_3 = data_7031a4
    var_230 = eax_3
    int32_t eax_4
    char* ecx_4
    eax_4, ecx_4 = sub_4c3da0(eax_3, 5, &var_218, 0xe)
    char* eax_5
    void* eax_6
    
    if (eax_4 != 1)
        eax_5 = var_230
        
        if (eax_5 != 0xffffffff)
            eax_6, ecx_4 = sub_4c51f0(eax_5, &var_218, eax_5, nullptr)
    
    char const* const var_258_4
    void var_217
    
    if (eax_4 == 1 || (eax_5 != 0xffffffff && eax_6 != 0))
        char* var_254_12 = ecx_4
        int32_t var_258_8 = 0xe
        sub_4c5340(&var_240, &var_218, data_7031a4, &var_240, &var_234, ecx_4)
        
        if (var_240 != 0)
            char* edx_23 = var_234
            uint32_t eax_31 = zx.d(*(edx_23 + 2))
            *((edi_1 << 3) + &data_7030e0:8) = zx.d(*edx_23)
            *((edi_1 << 3) + &data_7030e0:0xc) = eax_31
            void** edi_2 = var_228
            BOOL eax_32 = sub_4bb540(eax_31, edi_2, &edx_23[4], esi_1)
            sub_4d6560(eax_32, eax_32, *edi_2, "AVGMASK")
        label_459fe0:
            int32_t eax_33 = sub_4d6c40(&var_240, &var_234)
            sub_5f02dd(var_c ^ &var_244)
            return eax_33
        
        void* esi_8 = &var_218
        int32_t eax_34 = sub_4d1610(&var_218, 0x5c)
        
        if (eax_34 != 0xffffffff)
            esi_8 = &var_217 + eax_34
        
        int32_t eax_35 = sub_4d1610(esi_8, 0x2e)
        
        if (eax_35 == 0xffffffff)
            eax_35 = sub_4cfc80(esi_8)
            esi_8 -= 1
        
        char* var_254_14 = &var_218
        var_258_4 = "%s.m00 "
        *(esi_8 + eax_35) = 0
    else
        int32_t eax_7 = sub_4c3960(&var_218, &data_61334c)
        int32_t esi_2 = data_703190:0xc
        int32_t eax_8
        char* ecx_8
        eax_8, ecx_8 = sub_4c3da0(eax_7, 5, &var_218, 0xd)
        uint32_t var_23c
        uint32_t var_238
        
        if (eax_8 != 1)
            void* eax_18
            
            if (esi_2 != 0xffffffff)
                eax_18 = sub_4c51f0(eax_8, &var_218, esi_2, nullptr)
            
            if (esi_2 != 0xffffffff && eax_18 != 0)
                goto label_459e16
            
            int32_t eax_22
            char* ecx_27
            eax_22, ecx_27 =
                sub_4c54e0(sub_4c3960(&var_218, &data_613350), &var_218, data_703190:8, 5, 0x19)
            
            if (eax_22 == 0)
                void* esi_7 = &var_218
                int32_t eax_28 = sub_4d1610(&var_218, 0x5c)
                
                if (eax_28 != 0xffffffff)
                    esi_7 = &var_217 + eax_28
                
                int32_t eax_29 = sub_4d1610(esi_7, 0x2e)
                
                if (eax_29 == 0xffffffff)
                    eax_29 = sub_4cfc80(esi_7)
                    esi_7 -= 1
                
                char* var_254_11 = &var_218
                var_258_4 = "%s.g00 ( pdt ) ( m00 ) "
                *(esi_7 + eax_29) = 0
            else
                char* var_254_7 = ecx_27
                int32_t var_258_5 = 0x19
                sub_4c5340(&var_240, &var_218, data_703190:8, &var_240, &var_234, ecx_27)
                
                if (var_240 != 0)
                    char* esi_6 = var_234
                    sub_459750(sub_4cea50(&var_23c, &var_238, esi_6, &var_23c, &var_230), var_238, 
                        arg1, var_23c)
                    
                    if (*esi_1 != 0)
                        sub_4cf6e0(esi_1, var_228, esi_6, esi_1, &var_238, &var_23c, &var_230)
                    
                    int32_t eax_27 = sub_4d6c40(&var_240, &var_234)
                    sub_5f02dd(var_c ^ &var_244)
                    return eax_27
                
                sub_4c3960(&var_218, 0)
                char* var_254_10 = &var_218
                var_258_4 = "%s.pdt "
        else
            char* var_254_1 = ecx_8
            int32_t var_258_1 = 0xd
            int32_t ecx_9 = data_703190:0xc
            var_23c = 0
            var_238 = 0
            char* eax_10
            int32_t ecx_10
            eax_10, ecx_10 = sub_4c5340(&var_23c, &var_218, ecx_9, &var_23c, &var_238, ecx_8)
            char* esi_3 = var_238
            
            if (esi_3 != 0)
                if (*esi_3 == 2)
                    int32_t var_254_2 = ecx_10
                    sub_426d50(esi_3)
                
                uint32_t eax_11 = var_23c
                var_240 = eax_11
                
                if (eax_11 == 0)
                    goto label_459e16
                
                if (sub_426f30(eax_11, esi_3, &var_218, eax_10) == 0)
                    goto label_459fe0
                
                sub_426bf0(&var_238, &var_228, esi_3, &var_238, &var_23c)
                BOOL eax_15 = sub_427180(&var_224, eax_10, esi_3, &var_224, &var_22c, 0, nullptr, 
                    &var_238, &var_23c, &var_230, "AVG_G00_EXPAND_TMP", 0, &var_218)
                uint32_t esi_4 = var_23c
                uint32_t ebx_2 = var_238
                sub_459750(eax_15, ebx_2, arg1, esi_4)
                int32_t ecx_16 = *((edi_1 << 3) + &data_7030e0:4)
                
                if (ecx_16 != 0)
                    void* eax_16 = var_228
                    
                    if (eax_16 != 0 && eax_16 != 1)
                        sub_4a4fa0(eax_16, *((edi_1 << 3) + &data_7030e0:8), ecx_16, 
                            *((edi_1 << 3) + &data_7030e0:0xc), var_22c, ebx_2, esi_4)
                    else
                        sub_4a5030(eax_16, var_22c, ecx_16, ebx_2, esi_4)
                
                sub_4d6c40(&var_224, &var_22c)
                int32_t eax_17 = sub_4d6c40(&var_240, &var_234)
                sub_5f02dd(var_c ^ &var_244)
                return eax_17
            
        label_459e16:
            char* esi_5 = &var_218
            int32_t eax_19 = sub_4d1610(&var_218, 0x5c)
            
            if (eax_19 != 0xffffffff)
                esi_5 = &var_217 + eax_19
            
            int32_t eax_20 = sub_4d1610(esi_5, 0x2e)
            
            if (eax_20 == 0xffffffff)
                eax_20 = sub_4cfc80(esi_5)
                esi_5 -= 1
            
            char* var_254_6 = &var_218
            var_258_4 = "%s.g00 "
            esi_5[eax_20] = 0
    char* eax_36 = sub_4c84d0(&data_7027c0, var_258_4)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_36, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
        sub_4a1e40(3)
    
    eax_1 = sub_446a50()

sub_5f02dd(var_c ^ &var_244)
return eax_1
