// 函数: sub_4443c0
// 地址: 0x4443c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx
HWND hWnd_1
ecx, hWnd_1 = __chkstk(0x1420)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t ebx = 1
char* esi = ecx
void* var_418 = nullptr
int32_t result = 1

while (true)
    char* var_414 = esi
    
    while (true)
    label_444400:
        int32_t result_1
        result_1.b = *esi
        
        if (result_1.b == 0)
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return result
        
        if (result_1.b u>= 0x80 && (result_1.b u< 0xa0 || result_1.b u> 0xdf) && result_1.b u< 0xfe)
            break
        
        char const* const edx = "#MEMORY="
        char* ecx_1 = esi
        int32_t edi_1 = 0
        
        while (true)
            result_1.b = *ecx_1
            HWND hWnd
            int32_t result_2
            
            if (result_1.b != *edx)
            label_4444e8:
                char const* const edx_2 = "#DEBUG_MESSAGE_LOG="
                char* ecx_3 = esi
                int32_t edi_2 = 0
                
                while (true)
                    result_1.b = *ecx_3
                    
                    if (result_1.b == *edx_2)
                        if (result_1.b u< 0x80)
                        label_44451a:
                            ecx_3 = &ecx_3[1]
                            edx_2 = &edx_2[1]
                            edi_2 += 1
                        label_44451d:
                            
                            if (edi_2 == 0x13)
                                break
                            
                            if (*ecx_3 != 0)
                                continue
                            else if (*edx_2 == 0)
                                break
                        else
                            if (result_1.b u< 0xa0)
                                if (result_1.b u>= 0xfe)
                                    goto label_44451a
                            else if (result_1.b u<= 0xdf || result_1.b u>= 0xfe)
                                goto label_44451a
                            
                            result_1.b = ecx_3[1]
                            
                            if (result_1.b == edx_2[1])
                                ecx_3 = &ecx_3[2]
                                edx_2 = &edx_2[2]
                                edi_2 += 2
                                goto label_44451d
                    
                    int32_t eax_4 = sub_4d0fe0(result_1.b, "#DEBUG_GAMEEND_WARNING=", esi, 0x17)
                    
                    if (eax_4 == 0)
                        int32_t* var_14_4 = &result_2
                        var_414 = &esi[0x17]
                        
                        if (sub_4d11d0(&result_2, &var_414, &esi[0x17], var_14_4) != 0)
                            goto label_4448e5
                        
                        result = 1
                        esi = var_414
                        data_108f324 = result_2
                        goto label_444400
                    
                    int32_t eax_7 = sub_4d0fe0(eax_4.b, "#DEBUG_WINDOW_CAPTION=", esi, 0x16)
                    
                    if (eax_7 == 0)
                        int32_t* var_14_6 = &result_2
                        var_414 = &esi[0x16]
                        
                        if (sub_4d11d0(&result_2, &var_414, &esi[0x16], var_14_6) != 0)
                            goto label_4448e5
                        
                        result = 1
                        esi = var_414
                        data_108f328 = result_2
                        goto label_444400
                    
                    int32_t eax_10 = sub_4d0fe0(eax_7.b, "#DEBUG_SAVE_HISTORY_CNT=", esi, 0x18)
                    
                    if (eax_10 == 0)
                        int32_t* var_14_8 = &result_2
                        var_414 = &esi[0x18]
                        
                        if (sub_4d11d0(&result_2, &var_414, &esi[0x18], var_14_8) != 0)
                            goto label_4448e5
                        
                        result_1 = result_2
                        
                        if (result_1 s< 0)
                            result_1 = 0
                        else if (result_1 s> 0x64)
                            result_1 = 0x64
                        
                        esi = var_414
                        result = 1
                        result_2 = result_1
                        data_108f32c = result_1
                        goto label_444400
                    
                    int32_t eax_13 = sub_4d0fe0(eax_10.b, "#DEBUG_AUTO_READJUMP=", esi, 0x15)
                    char** edx_7 = &var_414
                    
                    if (eax_13 == 0)
                        int32_t* var_14_10 = &result_2
                        var_414 = &esi[0x15]
                        
                        if (sub_4d11d0(&result_2, edx_7, &esi[0x15], var_14_10) != 0)
                            goto label_4448e5
                        
                        result = 1
                        esi = var_414
                        data_108f330 = result_2
                        goto label_444400
                    
                    int32_t eax_16
                    int32_t ecx_14
                    eax_16, ecx_14 = sub_434540(eax_13.b, edx_7, esi, "#DEBUG_MEMORY_WARNING_SIZE=")
                    
                    if (eax_16 == 0)
                        if (sub_4d11d0(&result_2, &var_414, var_414, &result_2) != 0)
                            goto label_4448e5
                        
                        result_1 = result_2
                        
                        if (result_1 s< 0x40)
                            result_1 = 0x40
                        else if (result_1 s> 0x100)
                            result_1 = 0x100
                        
                        esi = var_414
                        result = 1
                        result_2 = result_1
                        data_108f334 = result_1
                        goto label_444400
                    
                    hWnd = hWnd_1
                    int32_t var_14_13 = ecx_14
                    
                    if (sub_437430(esi, &var_418, hWnd) == 0)
                        esi = var_414
                    else
                        int32_t ecx_18
                        result_1, ecx_18 = sub_439cd0(&var_418)
                        
                        if (result_1 == 0)
                            esi = var_414
                        else
                            int32_t var_14_14 = ecx_18
                            
                            if (sub_43e950(esi, &var_418, hWnd) == 0)
                                esi = var_414
                            else if (sub_440eb0(&var_418) == 0)
                                esi = var_414
                            else if (sub_442cc0(esi, &var_418) == 0)
                                esi = var_414
                            else
                                int32_t ecx_23
                                result_1, ecx_23 = sub_434580(&var_418)
                                
                                if (result_1 == 0)
                                    esi = var_414
                                else
                                    int32_t var_14_15 = ecx_23
                                    
                                    if (sub_43b510(esi, &var_418, hWnd) == 0)
                                        esi = var_414
                                    else if (sub_43c9f0(esi, &var_418) == 0)
                                        esi = var_414
                                    else if (sub_43d710(&var_418) == 0)
                                        esi = var_414
                                    else
                                        char* esi_7 = var_414
                                        result_1.b = *esi_7
                                        
                                        if (result_1.b != 0xd || esi_7[1] != 0xa)
                                            esi = &esi_7[1]
                                            var_414 = esi
                                            
                                            if (result_1.b == 0xa)
                                                ebx += 1
                                        else
                                            esi = &esi_7[2]
                                            ebx += 1
                                            var_414 = esi
                    
                    result = 1
                    
                    if (var_418 == 0)
                        goto label_444400
                    
                    goto label_4448eb
                
                int32_t* var_14_2 = &result_2
                var_414 = &esi[0x13]
                
                if (sub_4d11d0(&result_2, &var_414, &esi[0x13], var_14_2) == 0)
                    result = 1
                    esi = var_414
                    data_108f320 = result_2
                    break
            else
                if (result_1.b u>= 0x80)
                    if (result_1.b u< 0xa0)
                        if (result_1.b u>= 0xfe)
                            goto label_444461
                    else if (result_1.b u<= 0xdf || result_1.b u>= 0xfe)
                        goto label_444461
                    
                    result_1.b = ecx_1[1]
                    
                    if (result_1.b != edx[1])
                        goto label_4444e8
                    
                    ecx_1 = &ecx_1[2]
                    edx = &edx[2]
                    edi_1 += 2
                    goto label_444464
                
            label_444461:
                ecx_1 = &ecx_1[1]
                edx = &edx[1]
                edi_1 += 1
            label_444464:
                
                if (edi_1 != 8)
                    if (*ecx_1 != 0)
                        continue
                    else if (*edx != 0)
                        goto label_4444e8
                
                int32_t* var_14_1 = &result_2
                var_414 = &esi[8]
                result_1 = sub_4d11d0(&result_2, &var_414, &esi[8], var_14_1)
                
                if (result_1 == 0)
                    result = result_1 + 1
                    esi = var_414
                    
                    if (data_1392cc0 != result_1)
                        data_702fc0 = result_1
                        break
                    
                    if (data_1392cbc != 0)
                        data_702fc0 = 1
                        break
                    
                    result_1 = result_2
                    
                    if (data_1392cb8 != 0)
                        result_1 = result
                    
                    data_702fc0 = result_1
                    break
        label_4448e5:
            hWnd = hWnd_1
        label_4448eb:
            
            if (data_702fc0 != 0)
                int32_t var_14_16 = ebx
                void text
                sub_4c84d0(&text, "Gameexe.ini Err ( %d )")
                
                if (hWnd != 0)
                    MessageBoxA(hWnd, &text, "Gameexe.ini Err", MB_OK)
            
            sub_5f02dd(arg1 ^ &__saved_ebp)
            return 0
    
    esi = &esi[2]
