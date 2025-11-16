// 函数: sub_55f390
// 地址: 0x55f390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
char* result = __security_cookie ^ &__saved_ebp
char* result_1 = result

if (data_108f320 != 0)
    int32_t var_e98_1 = 0x1352c30
    void var_254
    enum MESSAGEBOX_RESULT eax_2
    int32_t ecx_1
    eax_2, ecx_1 =
        sub_4c3da0(sub_4c84d0(&var_254, "%s\_DebugMessageLog"), 0xffffffff, &var_254, 0xffffffff)
    char text
    
    if (eax_2 != IDCANCEL)
        int32_t var_e98_2 = ecx_1
        eax_2 = sub_4c3da0(sub_4c39b0(&var_254), 0xffffffff, &var_254, 0xffffffff)
        
        if (eax_2 == IDCANCEL)
            void* var_e98_3 = &var_254
            sub_4c84d0(&text, 0x621ce8)
            eax_2 = MessageBoxA(data_7027bc, &text, 0x617a88, MB_OK)
    
    int32_t ecx_5
    result, ecx_5 = sub_4c3da0(eax_2, 0xffffffff, &var_254, 0xffffffff)
    
    if (result == 2)
        if (data_20c6f04 != 0)
            int32_t var_e98_4 = ecx_5
            data_20c6f04 = 0
            int128_t var_e84
            __builtin_memset(&var_e84, 0, 0x14)
            sub_4c43b0(result, &var_254, &var_e84, 0xffffffff, 0xffffffff, "DB????_??????.txt")
            int32_t i_2 = var_e84:8.d - data_108f320 + 1
            
            if (i_2 s> 0)
                int32_t* esi_2 = var_e84:4.d + 4
                int32_t i_1 = i_2
                int32_t i
                
                do
                    int32_t var_e98_5 = *esi_2
                    void* var_e9c_1 = &var_254
                    void var_c5c
                    sub_4c84d0(&var_c5c, "%s\%s")
                    void fileName
                    sub_4cfd70(&fileName, &var_c5c)
                    DeleteFileA(&fileName)
                    esi_2 = &esi_2[4]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            sub_4d6c40(&var_e84, &var_e84:4)
            int32_t var_e74
            result = sub_4d6c40(&var_e84:0xc, &var_e74)
        
        text = 0
        int32_t ecx_10
        
        if (arg3 == 0xffffffff)
            if (arg4 != 0 && *arg4 != 0)
                if (arg5 == 0 || *arg5 == 0)
                    char* var_e98_13 = arg4
                    goto label_55f5fd
                
                char* var_e98_12 = arg5
                char* var_e9c_5 = arg4
            label_55f5be:
                result, ecx_10 = sub_4c84d0(&text, "%s\r\n%s\r\n\r\n")
                goto label_55f605
            
            if (arg5 != 0 && *arg5 != 0)
                char* var_e98_14 = arg5
            label_55f5fd:
                result, ecx_10 = sub_4c84d0(&text, "%s\r\n\r\n")
                goto label_55f605
        else
            int32_t var_e98_7 = arg2
            int32_t var_e9c_2 = arg3
            void var_4c
            sub_4c84d0(&var_4c, "Seen%04d(%05d)")
            void* var_e9c_4
            
            if (arg4 == 0 || *arg4 == 0)
                if (arg5 == 0 || *arg5 == 0)
                    void* var_e98_11 = &var_4c
                    goto label_55f5fd
                
                char* var_e98_10 = arg5
                var_e9c_4 = &var_4c
                goto label_55f5be
            
            if (arg5 == 0 || *arg5 == 0)
                char* var_e98_9 = arg4
                var_e9c_4 = &var_4c
                goto label_55f5be
            
            char* var_e98_8 = arg5
            char* var_e9c_3 = arg4
            void* var_ea0_4 = &var_4c
            result, ecx_10 = sub_4c84d0(&text, "%s\r\n%s\r\n%s\r\n\r\n")
        label_55f605:
            
            if (text != 0)
                if (data_1bfdd28 == 0xffffffff)
                    int32_t var_e98_15 = ecx_10
                    result = sub_4c4de0()
                    data_1bfdd28 = result
                
                if (data_1bfdd28 != 0xffffffff || result != 0xffffffff)
                    result = sub_4c4fe0(&text)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
