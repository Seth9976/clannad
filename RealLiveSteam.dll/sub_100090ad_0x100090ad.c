// 函数: sub_100090ad
// 地址: 0x100090ad
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = 0
int32_t eax_4
int32_t ecx
eax_4, ecx = EncodePointer(nullptr)
int32_t eax_5 = sub_10005ba9(ecx)
int32_t result

if (data_1001b484 != 0)
label_100091a0:
    
    if (IsDebuggerPresent() != 0)
        if (arg1 != 0)
            OutputDebugStringW(arg1)
        
        if (eax_5 == 0)
            goto label_100091da
        
        result = 4
    else if (eax_5 == 0)
    label_100091da:
        int32_t eax_21 = data_1001b490
        int32_t edi_2
        
        if (eax_21 == eax_4 || data_1001b494 == eax_4)
        label_10009238:
            int32_t eax_26 = data_1001b488
            
            if (eax_26 != eax_4)
                int32_t eax_27 = DecodePointer(eax_26)
                
                if (eax_27 != 0)
                    esi = eax_27()
                    
                    if (esi != 0)
                        int32_t eax_29 = data_1001b48c
                        
                        if (eax_29 != eax_4)
                            int32_t eax_30 = DecodePointer(eax_29)
                            
                            if (eax_30 != 0)
                                esi = eax_30(esi)
            
            edi_2 = arg3
        else
            int32_t eax_22 = DecodePointer(eax_21)
            int32_t eax_23 = DecodePointer(data_1001b494)
            
            if (eax_22 == 0 || eax_23 == 0)
                goto label_10009238
            
            int32_t eax_24 = eax_22()
            int32_t eax_25
            void var_28
            void var_14
            
            if (eax_24 != 0)
                eax_25 = eax_23(eax_24, 1, &var_14, 0xc, &var_28)
            char var_c
            
            if (eax_24 != 0 && eax_25 != 0 && (var_c & 1) != 0)
                goto label_10009238
            
            edi_2 = arg3 | 0x200000
        
        int32_t eax_32 = DecodePointer(data_1001b484)
        
        if (eax_32 == 0)
            result = 0
        else
            result = eax_32(esi, arg1, arg2, edi_2)
    else
        DecodePointer(data_1001b484)
        result = 3
else
    HMODULE hModule = LoadLibraryExW(u"USER32.DLL", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)
    
    if (hModule != 0)
    label_10009133:
        int32_t eax_9 = GetProcAddress(hModule, "MessageBoxW")
        
        if (eax_9 != 0)
            data_1001b484 = EncodePointer(eax_9)
            data_1001b488 = EncodePointer(GetProcAddress(hModule, "GetActiveWindow"))
            data_1001b48c = EncodePointer(GetProcAddress(hModule, "GetLastActivePopup"))
            int32_t eax_16 = EncodePointer(GetProcAddress(hModule, "GetUserObjectInformationW"))
            data_1001b494 = eax_16
            
            if (eax_16 != 0)
                data_1001b490 = EncodePointer(GetProcAddress(hModule, "GetProcessWindowStation"))
            
            goto label_100091a0
        
        result = 0
    else if (GetLastError() != ERROR_INVALID_PARAMETER)
        result = 0
    else
        hModule = LoadLibraryExW(u"USER32.DLL", nullptr, 0)
        
        if (hModule != 0)
            goto label_10009133
        
        result = 0

sub_10002604(eax_1 ^ &__saved_ebp)
return result
