// 函数: sub_490670
// 地址: 0x490670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_498
int32_t eax_1 = __security_cookie ^ &var_498
int32_t eax_2

if (arg2 s< 0 || arg2 s>= data_63ecd8)
    int32_t var_4a4_5 = 0x10
    char var_490[0x80]
    eax_2 = sub_4c84d0(&var_490, 0x61ad7c)
    
    if (data_702fc0 != 0)
        sub_55ef70(&var_490, data_72d6ac, data_719b6c, 0x61adb0, &var_490)
        sub_55f1e0(&var_490, data_72d6ac, data_719b6c, 0x61adb0, &var_490)
        sub_55f390(&var_490, data_72d6ac, data_719b6c, 0x61adb0, &var_490)
        eax_2 = sub_4a1e40(3)
else
    eax_2 = *arg3
    
    if (eax_2 s> 0)
        void* eax_5 = eax_2 * 0x4ec - 0x4e8 + arg3
        
        if (arg4 == 0 || *arg4 == 0)
            eax_2 = sub_4d1ba0(eax_5, 0x40, (arg2 << 6) + 0xec + eax_5, 0)
        label_490819:
            
            if (data_702fc0 != 0 && arg5 != 0)
                HWND edx_6 = data_1af0a4c
                WPARAM ecx_9 = *arg3 - 1
                
                if (edx_6 != 0 && ecx_9 u<= 0x3f)
                    int32_t var_4a4_4 = 0
                    int32_t eax_11 = sub_55bf30(ecx_9 * 0x4ec + 0x719ba8, edx_6, ecx_9, ecx_9, 
                        ecx_9 * 0x4ec + 0x719ba8)
                    sub_5f02dd(eax_1 ^ &var_498)
                    return eax_11
        else
            eax_2 = sub_4cfdf0(eax_5, arg4, (arg2 << 6) + 0xec + eax_5, 0x40)
            
            if (data_702fc0 != 0)
                eax_2 = sub_4cfc80(arg4)
                
                if (eax_2 s> 0x40)
                    int32_t esi_1 = data_1af173c
                    eax_2 -= 1
                    
                    if (esi_1 s< 8)
                        int32_t var_4a4_1 = 0x3f
                        int32_t var_4a8_1 = 0x1f
                        char text[0x404]
                        sub_4c84d0(&text, 0x61b9b4)
                        
                        if (esi_1 s< 4)
                            MessageBoxA(data_7027bc, &text, 0x61ba34, MB_OK)
                            esi_1 = data_1af173c
                        
                        int32_t var_4a4_2 = 0x3f
                        int32_t var_4a8_2 = 0x1f
                        sub_4c84d0(&data_7027c0, 0x61ba54)
                        int32_t var_4b4_1 = eax_2
                        eax_2 = sub_4c84d0(&text, 0x61ba90)
                        
                        if (data_702fc0 != 0)
                            sub_55ef70(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            sub_55f1e0(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            sub_55f390(&text, data_72d6ac, data_719b6c, &data_7027c0, &text)
                            eax_2 = sub_4a1e40(3)
                            esi_1 = data_1af173c
                    
                    data_1af173c = esi_1 + 1
                
                goto label_490819

sub_5f02dd(eax_1 ^ &var_498)
return eax_2
