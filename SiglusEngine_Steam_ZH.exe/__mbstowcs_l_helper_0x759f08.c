// 函数: __mbstowcs_l_helper
// 地址: 0x759f08
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* lpWideCharStr = arg1
int32_t esi = 0

if (lpWideCharStr != 0)
    if (arg3 == 0)
        return arg3
    
    *lpWideCharStr = 0

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

void* var_18
sub_7470a1(&var_18, arg4)
void* eax_2 = var_18
int32_t eax_4

if (lpWideCharStr == 0)
    if (*(eax_2 + 0xa8) != 0)
        esi = 0xffffffff
        eax_4 = MultiByteToWideChar(*(eax_2 + 4), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 
            0xffffffff, nullptr, 0)
        
        if (eax_4 != 0)
            esi = eax_4 - 1
        else
            *__errno() = 0x2a
    else
        esi = _strlen(arg2)
else if (*(eax_2 + 0xa8) != 0)
    esi = 0xffffffff
    eax_4 = MultiByteToWideChar(*(eax_2 + 4), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 
        0xffffffff, lpWideCharStr, arg3)
    
    if (eax_4 != 0)
        esi = eax_4 - 1
    else
        enum WIN32_ERROR eax_5 = GetLastError()
        int32_t eax_12
        
        if (eax_5 == ERROR_INSUFFICIENT_BUFFER)
            int32_t i = arg3
            char* eax_6 = arg2
            
            while (i != 0)
                int32_t i_1 = i - 1
                int32_t ecx_2
                ecx_2.b = *eax_6
                
                if (ecx_2.b == 0)
                    break
                
                char* eax_9 = eax_6
                
                if (sub_75a22c(ecx_2.b, &var_18) != 0)
                    eax_9 = &eax_9[1]
                    
                    if (*eax_9 == 0)
                        goto label_75a00d
                
                i = i_1
                eax_6 = &eax_9[1]
            
            eax_12 = MultiByteToWideChar(*(var_18 + 4), MB_PRECOMPOSED, arg2, eax_6 - arg2, 
                lpWideCharStr, arg3)
        
        if (eax_5 == ERROR_INSUFFICIENT_BUFFER && eax_12 != 0)
            esi = eax_12
        else
        label_75a00d:
            *__errno() = 0x2a
            *lpWideCharStr = 0
else if (arg3 u> 0)
    do
        *lpWideCharStr = zx.w(arg2[esi])
        
        if (arg2[esi] == 0)
            break
        
        esi += 1
        lpWideCharStr = &lpWideCharStr[1]
    while (esi u< arg3)
char var_c
void* var_10

if (var_c != 0)
    *(var_10 + 0x70) &= 0xfffffffd
return esi
