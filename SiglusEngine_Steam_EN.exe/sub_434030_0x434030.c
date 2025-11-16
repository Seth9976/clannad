// 函数: sub_434030
// 地址: 0x434030
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL var_414 = 0
int32_t var_428 = 0
void text

if (sub_4c3da0(arg4, 0, "gameexe.ini", 0xffffffff) != 1)
label_4340e7:
    char const* const var_44c_1 = "gameexe.ini"
    sub_4c84d0(&text, "[ %s ] ")
    
    if (arg5 != 0)
        int32_t var_44c_2 = 0
        MessageBoxA(arg5, &text, 0x6147d0, MB_OK)
else
    BOOL eax_5 = sub_4c4810(&var_414, &var_428, "gameexe.ini", &var_414, "GEI", 0, 0xffffffff)
    BOOL esi_1
    
    if (var_428 != 0)
        esi_1 = var_414
    else
        eax_5 = sub_4d6960(eax_5, &var_414, &var_428, 1, "NullGameexe.ini")
        esi_1 = var_414
        bool cond:0_1 = var_428 != 0
        *esi_1 = 0
        
        if (not(cond:0_1))
            goto label_4340e7
    
    void* var_418_1 = 0x40000
    BOOL var_41c = 0
    int32_t var_420 = 0
    sub_4d6960(eax_5, &var_41c, &var_420, 0x40000, "GAMEEXEINI_ERASE_COMMENT")
    BOOL ecx_4 = var_41c
    void* edi_1 = nullptr
    BOOL ebx_1 = 1
    int32_t var_424_1 = 0
    void* edx_3 = 0x40000
label_434186:
    var_414 = ebx_1
    HWND hWnd
    void* lpText
    PSTR lpCaption
    
    while (true)
        if (edi_1 + 0x20000 s>= edx_3)
            var_418_1 = edx_3 + 0x40000
            sub_4d6ae0(edi_1 + 0x20000, &var_41c, &var_420, edx_3 + 0x40000)
            edx_3 = var_418_1
            ecx_4 = edi_1 + var_41c
        
        BOOL eax_7
        eax_7.b = *esi_1
        
        if (eax_7.b == 0)
            *ecx_4 = 0
            edi_1 += 1
        else
            if (eax_7.b u>= 0x80 && (eax_7.b u< 0xa0 || eax_7.b u> 0xdf) && eax_7.b u< 0xfe)
                *ecx_4 = eax_7.b
                eax_7.b = *(esi_1 + 1)
                esi_1 += 2
                *(ecx_4 + 1) = eax_7.b
                ecx_4 += 2
                edi_1 += 2
                continue
            
            if (eax_7.b == 0xd && *(esi_1 + 1) == 0xa)
                *ecx_4 = eax_7.b
                edx_3 = var_418_1
                edi_1 += 2
                eax_7.b = *(esi_1 + 1)
                esi_1 += 2
                *(ecx_4 + 1) = eax_7.b
                ecx_4 += 2
                ebx_1 += 1
                goto label_434186
            
            if (eax_7.b == 0xa)
                edx_3 = var_418_1
                esi_1 += 1
                *ecx_4 = eax_7.b
                edi_1 += 1
                ecx_4 += 1
                ebx_1 += 1
                goto label_434186
            
            void* const var_450_1
            
            if (eax_7.b == 0x22)
                char* esi_3 = esi_1 + 1
                *ecx_4 = eax_7.b
                char* ecx_6 = ecx_4 + 1
                edi_1 += 1
                eax_7.b = *esi_3
                
                if (eax_7.b == 0)
                label_43428c:
                    BOOL var_44c_4 = ebx_1
                    var_450_1 = &data_6147dc
                else
                    while (true)
                        if (eax_7.b u>= 0x80)
                            if (eax_7.b u>= 0xa0)
                                if (eax_7.b u<= 0xdf || eax_7.b u>= 0xfe)
                                    goto label_434267
                                
                            label_434254:
                                *ecx_6 = eax_7.b
                                eax_7.b = esi_3[1]
                                esi_3 = &esi_3[2]
                                ecx_6[1] = eax_7.b
                                ecx_6 = &ecx_6[2]
                                edi_1 += 2
                            label_434286:
                                eax_7.b = *esi_3
                                
                                if (eax_7.b == 0)
                                    goto label_43428c
                                
                                continue
                            else if (eax_7.b u< 0xfe)
                                goto label_434254
                        
                    label_434267:
                        
                        if ((eax_7.b == 0xd && esi_3[1] == 0xa) || eax_7.b == 0xa)
                            BOOL var_44c_6 = ebx_1
                            var_450_1 = &data_614810
                            goto label_434412
                        
                        if (eax_7.b != 0x22)
                            *ecx_6 = eax_7.b
                            esi_3 = &esi_3[1]
                            ecx_6 = &ecx_6[1]
                            edi_1 += 1
                            goto label_434286
                        
                        eax_7.b = *esi_3
                        esi_1 = &esi_3[1]
                        edx_3 = var_418_1
                        *ecx_6 = eax_7.b
                        ecx_4 = &ecx_6[1]
                        edi_1 += 1
                        break
                    
                    continue
            else if (eax_7.b == 0x3b)
                eax_7.b = *(esi_1 + 1)
                esi_1 += 1
                edx_3 = var_418_1
                
                if (eax_7.b == 0)
                    continue
                else
                    do
                        if (eax_7.b u< 0x80)
                        label_4342dd:
                            
                            if (eax_7.b == 0xd && *(esi_1 + 1) == 0xa)
                                goto label_4342fc
                            
                            if (eax_7.b == 0xa)
                                goto label_434375
                            
                            esi_1 += 1
                        else if (eax_7.b u< 0xa0)
                            if (eax_7.b u>= 0xfe)
                                goto label_4342dd
                            
                            esi_1 += 2
                        else
                            if (eax_7.b u<= 0xdf || eax_7.b u>= 0xfe)
                                goto label_4342dd
                            
                            esi_1 += 2
                        
                        eax_7.b = *esi_1
                    while (eax_7.b != 0)
                    
                    edx_3 = var_418_1
                    continue
            else if (eax_7.b != 0x2f)
            label_434440:
                
                if (eax_7.b == 0x20 || eax_7.b == 9)
                    edx_3 = var_418_1
                    esi_1 += 1
                    continue
                
                edx_3 = var_418_1
                esi_1 += 1
                *ecx_4 = eax_7.b
                ecx_4 += 1
                edi_1 += 1
                continue
            else
                edx_3.b = *(esi_1 + 1)
                
                if (edx_3.b != eax_7.b)
                    if (edx_3.b != 0x2a)
                        goto label_434440
                    
                    eax_7.b = *(esi_1 + 2)
                    char* esi_4 = esi_1 + 2
                    BOOL edx_6 = var_414
                    BOOL ebx_2 = edx_6
                    
                    if (eax_7.b == 0)
                    label_434405:
                        BOOL var_44c_5 = ebx_2
                        var_450_1 = &data_613bd8
                    else
                        while (true)
                            if (eax_7.b u< 0x80)
                            label_4343ba:
                                
                                if (eax_7.b == 0xd)
                                    edx_6 = var_414
                                
                                if (eax_7.b == 0xd && esi_4[1] == 0xa)
                                    *ecx_4 = eax_7.b
                                    edi_1 += 2
                                    eax_7.b = esi_4[1]
                                    esi_4 = &esi_4[2]
                                    *(ecx_4 + 1) = eax_7.b
                                    ecx_4 += 2
                                    edx_6 += 1
                                    var_414 = edx_6
                                else if (eax_7.b != 0xa)
                                    if (eax_7.b == 0x2a && esi_4[1] == 0x2f)
                                        ebx_1 = var_414
                                        esi_1 = &esi_4[2]
                                        edx_3 = var_418_1
                                        break
                                    
                                    esi_4 = &esi_4[1]
                                else
                                    *ecx_4 = eax_7.b
                                    esi_4 = &esi_4[1]
                                    ecx_4 += 1
                                    edi_1 += 1
                                    edx_6 += 1
                                    var_414 = edx_6
                            else if (eax_7.b u< 0xa0)
                                if (eax_7.b u>= 0xfe)
                                    goto label_4343ba
                                
                                esi_4 = &esi_4[2]
                            else
                                if (eax_7.b u<= 0xdf || eax_7.b u>= 0xfe)
                                    goto label_4343ba
                                
                                esi_4 = &esi_4[2]
                            
                            eax_7.b = *esi_4
                            
                            if (eax_7.b == 0)
                                goto label_434405
                        
                        continue
                else
                    eax_7.b = *(esi_1 + 2)
                    esi_1 += 2
                    edx_3 = var_418_1
                    
                    if (eax_7.b == 0)
                        continue
                    else
                        do
                            if (eax_7.b u< 0x80)
                            label_43435d:
                                
                                if (eax_7.b == 0xd && *(esi_1 + 1) == 0xa)
                                label_4342fc:
                                    edi_1 += 2
                                    edx_3 = var_418_1
                                    *ecx_4 = *esi_1
                                    char eax_9 = *(esi_1 + 1)
                                    esi_1 += 2
                                    *(ecx_4 + 1) = eax_9
                                    ecx_4 += 2
                                    ebx_1 += 1
                                    goto label_434186
                                
                                if (eax_7.b == 0xa)
                                label_434375:
                                    eax_7.b = *esi_1
                                    edi_1 += 1
                                    edx_3 = var_418_1
                                    esi_1 += 1
                                    *ecx_4 = eax_7.b
                                    ecx_4 += 1
                                    ebx_1 += 1
                                    goto label_434186
                                
                                esi_1 += 1
                            else if (eax_7.b u< 0xa0)
                                if (eax_7.b u>= 0xfe)
                                    goto label_43435d
                                
                                esi_1 += 2
                            else
                                if (eax_7.b u<= 0xdf || eax_7.b u>= 0xfe)
                                    goto label_43435d
                                
                                esi_1 += 2
                            
                            eax_7.b = *esi_1
                        while (eax_7.b != 0)
                        
                        edx_3 = var_418_1
                        continue
            
        label_434412:
            sub_4c84d0(&text, var_450_1)
            var_424_1 = 1
        
        int32_t eax_10 = sub_4d6c40(&var_428, &var_414)
        BOOL* edx_8 = &var_41c
        int32_t* ecx_8 = &var_420
        
        if (var_424_1 != 0)
            sub_4d6c40(ecx_8, edx_8)
            *arg4 = nullptr
            
            if (arg5 == 0)
                goto label_434123
            
            int32_t var_44c_9 = 0
            lpCaption = "gameexe.ini"
            lpText = &text
            hWnd = arg5
            break
        
        if (edi_1 != 0)
            sub_4d6ae0(eax_10, edx_8, ecx_8, edi_1)
            *arg3 = var_420
            *arg2 = var_41c
            *arg4 = edi_1
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 1
        
        sub_4d6c40(ecx_8, edx_8)
        *arg4 = nullptr
        
        if (arg5 == 0)
            goto label_434123
        
        int32_t var_44c_8 = 0
        lpCaption = "gameexe.ini"
        lpText = &data_61484c
        hWnd = arg5
        break
    
    MessageBoxA(hWnd, lpText, lpCaption, MB_OK)
label_434123:
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
