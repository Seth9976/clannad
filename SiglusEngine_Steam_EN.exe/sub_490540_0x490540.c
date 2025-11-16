// 函数: sub_490540
// 地址: 0x490540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_94
int32_t eax_1 = __security_cookie ^ &var_94
char* eax_2

if (arg2 s< 0 || arg2 s>= data_63ecdc)
    int32_t var_9c_2 = 0x28
    char var_90[0x84]
    eax_2 = sub_4c84d0(&var_90, 0x61ad2c)
    
    if (data_702fc0 != 0)
        sub_55ef70(&var_90, data_72d6ac, data_719b6c, 0x61ad60, &var_90)
        sub_55f1e0(&var_90, data_72d6ac, data_719b6c, 0x61ad60, &var_90)
        sub_55f390(&var_90, data_72d6ac, data_719b6c, 0x61ad60, &var_90)
        eax_2 = sub_4a1e40(3)
else
    eax_2 = *arg3
    
    if (eax_2 s> 0)
        int32_t ecx = eax_2 * 0x13b
        eax_2 = arg4
        arg3[ecx + arg2 - 0x127] = eax_2
        
        if (data_702fc0 != 0 && arg5 != 0)
            HWND edx = data_1af0a4c
            WPARAM ecx_3 = *arg3 - 1
            
            if (edx != 0 && ecx_3 u<= 0x3f)
                int32_t var_9c_1 = 0
                int32_t eax_5 = sub_55bf30(ecx_3 * 0x4ec + 0x719ba8, edx, ecx_3, ecx_3, 
                    ecx_3 * 0x4ec + 0x719ba8)
                sub_5f02dd(eax_1 ^ &var_94)
                return eax_5

sub_5f02dd(eax_1 ^ &var_94)
return eax_2
