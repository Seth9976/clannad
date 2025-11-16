// 函数: sub_7625db
// 地址: 0x7625db
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg3
int32_t result_2 = 0
BOOL usedDefaultChar = 0
int16_t* lpWideCharStr_1 = arg2
wchar16* lpWideCharStr_2 = lpWideCharStr_1
int32_t result

if (arg1 != 0 && ebx == 0)
    result = 0
else if (lpWideCharStr_1 != 0)
    void* var_30
    sub_7470a1(&var_30, arg4)
    void* eax_4 = var_30
    int32_t result_1
    
    if (arg1 == 0)
        if (*(eax_4 + 0xa8) != 0)
            int32_t eax_15 = WideCharToMultiByte(*(eax_4 + 4), 0, lpWideCharStr_1, 0xffffffff, 
                nullptr, 0, nullptr, &usedDefaultChar)
            
            if (eax_15 == 0 || usedDefaultChar != 0)
            label_762819:
                result_1 = 0xffffffff
                *__errno() = 0x2a
            else
                result_1 = eax_15 - 1
        else
            for (int16_t i = *lpWideCharStr_1; i != 0; i = *lpWideCharStr_1)
                if (i u> 0xff)
                    goto label_762819
                
                lpWideCharStr_1 = &lpWideCharStr_1[1]
                result_2 += 1
            
        labelid_7:
            result_1 = result_2
    else if (*(eax_4 + 0xa8) == 0)
        if (ebx != 0)
            while (*lpWideCharStr_1 u<= 0xff)
                eax_4.b = *lpWideCharStr_1
                arg1[result_2] = eax_4.b
                eax_4.w = *lpWideCharStr_1
                lpWideCharStr_1 = &lpWideCharStr_1[1]
                
                if (eax_4.w == 0)
                    goto label_7627ee_2
                
                result_2 += 1
                
                if (result_2 u>= ebx)
                    goto label_7627ee_2
            
            goto label_7627bd
        
    labelid_7:
        result_1 = result_2
    else if (*(eax_4 + 0x74) != 1)
        result_1 = WideCharToMultiByte(*(eax_4 + 4), 0, lpWideCharStr_1, 0xffffffff, arg1, ebx, 
            nullptr, &usedDefaultChar)
        
        if (result_1 != 0)
            if (usedDefaultChar != 0)
                goto label_7627bd
            
        label_7627ee:
            result_1 -= 1
        else if (usedDefaultChar != 0)
        label_7627bd:
            *__errno() = 0x2a
        label_7627ee_1:
            result_1 = 0xffffffff
        else
            if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
                goto label_7627bd
            
            if (ebx != 0)
                wchar16* lpWideCharStr = lpWideCharStr_2
                
                do
                    void* ecx_3 = var_30
                    char multiByteStr[0x8]
                    int32_t eax_9 = WideCharToMultiByte(*(ecx_3 + 4), 0, lpWideCharStr, 1, 
                        &multiByteStr, *(ecx_3 + 0x74), nullptr, &usedDefaultChar)
                    
                    if (eax_9 == 0)
                        goto label_762819
                    
                    if (usedDefaultChar != 0)
                        goto label_762819
                    
                    if (eax_9 s< 0)
                        goto label_762819
                    
                    if (eax_9 u> 5)
                        goto label_762819
                    
                    if (eax_9 + result_1 u> ebx)
                        break
                    
                    int32_t eax_11 = 0
                    int32_t var_20_1 = 0
                    
                    if (eax_9 s> 0)
                        while (true)
                            eax_11.b = multiByteStr[eax_11]
                            arg1[result_1] = eax_11.b
                            
                            if (eax_11.b == 0)
                                break
                            
                            eax_11 = var_20_1 + 1
                            result_1 += 1
                            var_20_1 = eax_11
                            
                            if (eax_11 s>= eax_9)
                                goto label_7627ac
                        
                        break
                    
                label_7627ac:
                    lpWideCharStr = &lpWideCharStr_2[1]
                    lpWideCharStr_2 = lpWideCharStr
                while (result_1 u< ebx)
    else
        if (ebx != 0)
            int16_t* lpWideCharStr_3 = lpWideCharStr_1
            int32_t edx_1 = ebx
            
            while (*lpWideCharStr_3 != 0)
                lpWideCharStr_3 = &lpWideCharStr_3[1]
                int32_t temp0_1 = edx_1
                edx_1 -= 1
                
                if (temp0_1 == 1)
                    break
            
            if (edx_1 != 0 && *lpWideCharStr_3 == 0)
                ebx = ((lpWideCharStr_3 - lpWideCharStr_1) s>> 1) + 1
            
            eax_4 = var_30
        
        result_2 = WideCharToMultiByte(*(eax_4 + 4), 0, lpWideCharStr_1, ebx, arg1, ebx, nullptr, 
            &usedDefaultChar)
        
        if (result_2 == 0 || usedDefaultChar != 0)
            goto label_7627bd
        
        if (arg1[result_2 - 1] == 0)
            result_2 -= 1
        
    label_7627ee_2:
        result_1 = result_2
    
    char var_24
    void* var_28
    
    if (var_24 != 0)
        *(var_28 + 0x70) &= 0xfffffffd
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
