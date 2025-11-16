// 函数: sub_5fe506
// 地址: 0x5fe506
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = 0
int32_t eax_4
int32_t ecx
eax_4, ecx = EncodePointer(nullptr)
int32_t eax_5 = sub_5f3725(ecx)
int32_t result

if (data_6419fc != 0)
label_5fe5f9:
    
    if (IsDebuggerPresent() != 0)
        if (arg1 != 0)
            OutputDebugStringW(arg1)
        
        if (eax_5 == 0)
            goto label_5fe633
        
        result = 4
    else if (eax_5 == 0)
    label_5fe633:
        int32_t eax_21 = data_641a08
        int32_t edi_2
        
        if (eax_21 == eax_4 || data_641a0c == eax_4)
        label_5fe691:
            int32_t eax_26 = data_641a00
            
            if (eax_26 != eax_4)
                int32_t eax_27 = DecodePointer(eax_26)
                
                if (eax_27 != 0)
                    esi = eax_27()
                    
                    if (esi != 0)
                        int32_t eax_29 = data_641a04
                        
                        if (eax_29 != eax_4)
                            int32_t eax_30 = DecodePointer(eax_29)
                            
                            if (eax_30 != 0)
                                esi = eax_30(esi)
            
            edi_2 = arg3
        else
            int32_t eax_22 = DecodePointer(eax_21)
            int32_t eax_23 = DecodePointer(data_641a0c)
            
            if (eax_22 == 0 || eax_23 == 0)
                goto label_5fe691
            
            int32_t eax_24 = eax_22()
            int32_t eax_25
            void var_28
            void var_14
            
            if (eax_24 != 0)
                eax_25 = eax_23(eax_24, 1, &var_14, 0xc, &var_28)
            char var_c
            
            if (eax_24 != 0 && eax_25 != 0 && (var_c & 1) != 0)
                goto label_5fe691
            
            edi_2 = arg3 | 0x200000
        
        int32_t eax_32 = DecodePointer(data_6419fc)
        
        if (eax_32 == 0)
            result = 0
        else
            result = eax_32(esi, arg1, arg2, edi_2)
    else
        DecodePointer(data_6419fc)
        result = 3
else
    HMODULE hModule = LoadLibraryExW(u"USER32.DLL", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32)
    
    if (hModule != 0)
    label_5fe58c:
        int32_t eax_9 = GetProcAddress(hModule, "MessageBoxW")
        
        if (eax_9 != 0)
            data_6419fc = EncodePointer(eax_9)
            data_641a00 = EncodePointer(GetProcAddress(hModule, "GetActiveWindow"))
            data_641a04 = EncodePointer(GetProcAddress(hModule, "GetLastActivePopup"))
            int32_t eax_16 = EncodePointer(GetProcAddress(hModule, "GetUserObjectInformationW"))
            data_641a0c = eax_16
            
            if (eax_16 != 0)
                data_641a08 = EncodePointer(GetProcAddress(hModule, "GetProcessWindowStation"))
            
            goto label_5fe5f9
        
        result = 0
    else if (GetLastError() != ERROR_INVALID_PARAMETER)
        result = 0
    else
        hModule = LoadLibraryExW(u"USER32.DLL", nullptr, 0)
        
        if (hModule != 0)
            goto label_5fe58c
        
        result = 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
