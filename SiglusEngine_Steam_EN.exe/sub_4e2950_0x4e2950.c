// 函数: sub_4e2950
// 地址: 0x4e2950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY ebp
HKEY var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* hKey_3)(void* arg1) = sub_605ae6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_18 = arg1
int32_t* ecx = __chkstk(0x115c)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t* entry_ebx
int32_t* var_1c = entry_ebx
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
int32_t arg_1148
fsbase->NtTib.ExceptionList = &arg_1148
var_18 = ecx
HKEY var_14 = arg3
hKey_3 = nullptr
int32_t var_c_1 = 0
int32_t var_8 = 0
int32_t arg_30 = arg4
int32_t arg_1150 = 0
PSTR result = sub_4e1e60(ecx, arg2)
PSTR hKey_2 = result

if (hKey_2 s>= 0)
    if (*arg2 != 0x7d)
        int32_t* ebx = entry_ebx
        
        do
            arg3 = 1
            int32_t ebx_2 = sbb.d(ebx, ebx, lstrcmpiA(arg2, "Delete") != 0) + 1
            
            if (lstrcmpiA(arg2, "ForceRemove") != 0 && ebx_2 == 0)
                goto label_4e2b1b
            
            hKey_2 = sub_4e1e60(var_18, arg2)
            
            if (hKey_2 s< 0)
                break
            
            PSTR hKey_4
            
            if (hKey_4 == 0)
                goto label_4e2b1b
            
            PSTR eax_9
            eax_9.b = *arg2
            char* lpsz = arg2
            var_4 = nullptr
            __builtin_memset(&__return_addr, 0, 8)
            
            if (eax_9.b != 0)
                while (eax_9.b != 0x5c)
                    lpsz = CharNextA(lpsz)
                    eax_9.b = *lpsz
                    
                    if (eax_9.b == 0)
                        goto label_4e2a7d
                
                if (lpsz != 0)
                    sub_4e0ab0(&var_4)
                label_4e2f2d:
                    hKey_2 = 0x80020009
                    break
                    break
                    break
            
        label_4e2a7d:
            char const (** const esi)[0x6] = &data_61d670
            
            while (lstrcmpiA(arg2, *esi) != 0)
                esi = &esi[1]
                
                if (esi s>= &data_61d6a0)
                    var_4 = var_14
                    __builtin_memset(&__return_addr, 0, 8)
                    sub_4e0d00(&var_4, arg2)
                    var_4 = nullptr
                    __builtin_memset(&__return_addr, 0, 8)
                    break
            
            if (ebx_2 != 0)
                ebx = var_18
                hKey_2 = sub_4e1e60(ebx, arg2)
                
                if (hKey_2 s< 0)
                    sub_4e0ab0(&var_4)
                    break
                
                hKey_2 = sub_4e24b0(hKey_2, arg2)
                
                if (hKey_2 s< 0)
                    sub_4e0ab0(&var_4)
                    break
                
                __return_addr = nullptr
                goto label_4e2d2d
            
            __return_addr = nullptr
        label_4e2b1b:
            int32_t eax_14 = lstrcmpiA(arg2, "NoRemove")
            ebx = var_18
            
            if (eax_14 == 0)
                arg3 = eax_14
                hKey_2 = sub_4e1e60(ebx, arg2)
                
                if (hKey_2 s< 0)
                    break
            
            if (lstrcmpiA(arg2, &data_61d720) != 0)
                int32_t eax_16
                eax_16.b = *arg2
                char* lpsz_1 = arg2
                
                if (eax_16.b != 0)
                    while (eax_16.b != 0x5c)
                        lpsz_1 = CharNextA(lpsz_1)
                        eax_16.b = *lpsz_1
                        
                        if (eax_16.b == 0)
                            goto label_4e2cb1
                    
                    if (lpsz_1 != 0)
                        goto label_4e2f2d
                
            label_4e2cb1:
                enum WIN32_ERROR eax_24
                enum WIN32_ERROR ecx_30
                
                if (hKey_4 == 0)
                    if (arg4 != 0)
                        ebx = 2
                        arg4 = 1
                    else
                        ebx = sub_4e0be0(&hKey_3, var_14, arg2, KEY_READ)
                        
                        if (ebx != 0)
                            arg4 = 1
                    
                    void arg_34
                    sub_4d9360(__mbsnbcpy_s(&arg_34, 0x104, arg2, 0xffffffff))
                    hKey_2 = sub_4e1e60(var_18, arg2)
                    
                    if (hKey_2 s< 0)
                        break
                    
                    PSTR hKey_5
                    uint32_t ecx_26
                    hKey_5, ecx_26 = sub_4e24b0(hKey_2, arg2)
                    hKey_2 = hKey_5
                    
                    if (hKey_2 s< 0)
                        break
                    
                    if (*arg2 == 0x7b)
                        char* ecx_27 = arg2
                        
                        do
                            hKey_5.b = *ecx_27
                            ecx_27 = &ecx_27[1]
                        while (hKey_5.b != 0)
                        
                        ecx_26 = ecx_27 - &ecx_27[1]
                        
                        if (ecx_26 == 1)
                            hKey_2 = sub_4e2950(arg2, hKey_3, 0, arg4)
                            
                            if (hKey_2 s< 0 && arg4 == 0)
                                break
                            
                            PSTR hKey_6
                            hKey_6, ecx_26 = sub_4e1e60(var_18, arg2)
                            hKey_2 = hKey_6
                            
                            if (hKey_2 s< 0)
                                break
                    
                    arg4 = arg_30
                    
                    if (ebx != 2)
                        if (ebx == 0)
                            if (arg_30 == 0)
                            label_4e2eaa:
                                int32_t eax_34 = sub_4e2460(ecx_26, hKey_3)
                                HKEY hKey_1 = hKey_3
                                ebx = eax_34
                                eax_24 = NO_ERROR
                                
                                if (hKey_1 != 0)
                                    eax_24 = RegCloseKey(hKey_1)
                                    hKey_3 = nullptr
                                
                                int32_t var_c_2 = 0
                                
                                if (eax_24 != NO_ERROR)
                                    goto label_4e2f72
                                
                                if (arg3 != eax_24 && ebx == 0)
                                    HKEY arg_18 = var_14
                                    int32_t* arg_1c = ebx
                                    int32_t* arg_20 = ebx
                                    enum WIN32_ERROR eax_36 = sub_4e0ad0(&arg_18, &arg_34)
                                    arg_18 = ebx
                                    arg_1c = ebx
                                    arg_20 = ebx
                                    
                                    if (eax_36 != NO_ERROR)
                                        hKey_2 = sub_4e0730(eax_36)
                                        sub_4e0ab0(&arg_18)
                                        break
                                    
                                    sub_4e0ab0(&arg_18)
                            else
                                int32_t eax_32
                                eax_32, ecx_26 = sub_4e2460(ecx_26, hKey_3)
                                
                                if (eax_32 == 0)
                                    goto label_4e2eaa
                                
                                if (sub_4e2420(&arg_34) != 0 && arg3 != 0)
                                    sub_4e0d00(&hKey_3, &arg_34)
                        else if (arg_30 == 0)
                            ecx_30 = ebx
                            goto label_4e2f79
                else
                    if (sub_4e0be0(&hKey_3, var_14, arg2, 0x2001f) != NO_ERROR
                            && sub_4e0be0(&hKey_3, var_14, arg2, KEY_READ) != NO_ERROR)
                        eax_24 = sub_4e0b60(&hKey_3, var_14, arg2)
                        
                        if (eax_24 != NO_ERROR)
                        label_4e2f72:
                            ecx_30 = eax_24
                        label_4e2f79:
                            hKey_2 = sub_4e0730(ecx_30)
                            break
                            break
                            break
                    
                    hKey_2 = sub_4e1e60(ebx, arg2)
                    
                    if (hKey_2 s< 0)
                        break
                    
                    if (*arg2 == 0x3d)
                        hKey_2 = sub_4e1fc0(hKey_2, &hKey_3, nullptr, arg2)
                        
                        if (hKey_2 s< 0)
                            break
                    
                label_4e2d2d:
                    
                    if (*arg2 == 0x7b)
                        char* ecx_19 = arg2
                        PSTR eax_13
                        
                        do
                            eax_13.b = *ecx_19
                            ecx_19 = &ecx_19[1]
                        while (eax_13.b != 0)
                        
                        if (ecx_19 - &ecx_19[1] == 1)
                            hKey_2 = sub_4e2950(arg2, hKey_3, hKey_4, 0)
                            
                            if (hKey_2 s< 0)
                                break
                            
                            hKey_2 = sub_4e1e60(ebx, arg2)
                            
                            if (hKey_2 s< 0)
                                break
            else
                void valueName
                hKey_2 = sub_4e1e60(ebx, &valueName)
                
                if (hKey_2 s< 0)
                    break
                
                hKey_2 = sub_4e1e60(ebx, arg2)
                
                if (hKey_2 s< 0)
                    break
                
                if (*arg2 != 0x3d)
                    goto label_4e2f2d
                
                if (hKey_4 != 0)
                    arg_1150.b = 1
                    HKEY arg_24 = var_14
                    int32_t arg_28 = 0
                    int32_t arg_2c = 0
                    hKey_2 = sub_4e1fc0(hKey_2, &arg_24, &valueName, arg2)
                    arg_24 = nullptr
                    arg_28 = 0
                    arg_2c = 0
                    
                    if (hKey_2 s< 0)
                        sub_4e0ab0(&arg_24)
                        break
                    
                    arg_1150.b = 0
                    arg_28 = 0
                    goto label_4e2d2d
                
                if (arg4 == 0 && arg3 != 0)
                    hKey_4 = nullptr
                    arg4 = 0
                    int32_t arg_14 = 0
                    enum WIN32_ERROR eax_20 = sub_4e0be0(&hKey_4, var_14, nullptr, KEY_WRITE)
                    
                    if (eax_20 != NO_ERROR)
                    label_4e2f55:
                        hKey_2 = sub_4e0730(eax_20)
                        sub_4e0ab0(&hKey_4)
                        break
                    
                    hKey_2 = hKey_4
                    eax_20 = RegDeleteValueA(hKey_2, &valueName)
                    
                    if (eax_20 != NO_ERROR && eax_20 != ERROR_FILE_NOT_FOUND)
                        goto label_4e2f55
                    
                    if (hKey_2 != 0)
                        RegCloseKey(hKey_2)
                        hKey_4 = nullptr
                    
                    arg4 = 0
                
                hKey_2 = sub_4e24b0(hKey_2, arg2)
                
                if (hKey_2 s< 0)
                    break
        while (*arg2 != 0x7d)
    
    int32_t (* hKey)(void* arg1) = hKey_3
    
    if (hKey != 0)
        RegCloseKey(hKey)
    
    result = hKey_2

fsbase->NtTib.ExceptionList = arg_1148
sub_5f02dd(eax_2 ^ &var_18)
return result
