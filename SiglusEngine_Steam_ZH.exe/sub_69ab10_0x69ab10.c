// 函数: sub_69ab10
// 地址: 0x69ab10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebp
int32_t* var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* hKey_3)(void* arg1) = sub_9c93b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_18 = arg1
int32_t* ecx = __chkstk(0x225c)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t* entry_ebx
int32_t* var_1c = entry_ebx
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
int32_t arg_2248
fsbase->NtTib.ExceptionList = &arg_2248
var_18 = ecx
int32_t* var_14 = arg3
hKey_3 = nullptr
int32_t var_c_1 = 0
int32_t var_8 = 0
int32_t arg_30 = arg4
int32_t arg_2250 = 0
HKEY result = sub_69a090(ecx, arg2)
HKEY hKey_2 = result

if (hKey_2 s>= 0)
    while (*arg2 != 0x7d)
        arg3 = 1
        int32_t ebx_1 = sbb.d(entry_ebx, entry_ebx, lstrcmpiW(arg2, u"Delete") != 0) + 1
        
        if (lstrcmpiW(arg2, u"ForceRemove") != 0 && ebx_1 == 0)
            goto label_69ace0
        
        hKey_2 = sub_69a090(var_18, arg2)
        
        if (hKey_2 s< 0)
            break
        
        HKEY hKey_4
        
        if (hKey_4 == 0)
            goto label_69ace0
        
        int16_t i = *arg2
        int16_t* lpsz = arg2
        var_4 = nullptr
        __builtin_memset(&__return_addr, 0, 8)
        
        if (i != 0)
            while (i != 0x5c)
                lpsz = CharNextW(lpsz)
                i = *lpsz
                
                if (i == 0)
                    goto label_69ac42
            
            if (lpsz != 0)
                sub_6992d0(&var_4)
            label_69b109:
                hKey_2 = 0x80020009
                break
                break
                break
        
    label_69ac42:
        wchar16 const (** const esi)[0x6] = &data_af25d0
        
        while (lstrcmpiW(arg2, *esi) != 0)
            esi = &esi[1]
            
            if (esi s>= &data_af2600)
                var_4 = var_14
                __builtin_memset(&__return_addr, 0, 8)
                sub_699520(&var_4, arg2)
                var_4 = nullptr
                __builtin_memset(&__return_addr, 0, 8)
                break
        
        if (ebx_1 != 0)
            entry_ebx = var_18
            hKey_2 = sub_69a090(entry_ebx, arg2)
            
            if (hKey_2 s< 0)
                sub_6992d0(&var_4)
                break
            
            hKey_2 = sub_69a680(hKey_2, arg2)
            
            if (hKey_2 s< 0)
                sub_6992d0(&var_4)
                break
            
            __return_addr = nullptr
            goto label_69aefe
        
        __return_addr = nullptr
    label_69ace0:
        int32_t eax_15 = lstrcmpiW(arg2, u"NoRemove")
        entry_ebx = var_18
        
        if (eax_15 == 0)
            arg3 = eax_15
            hKey_2 = sub_69a090(entry_ebx, arg2)
            
            if (hKey_2 s< 0)
                break
        
        if (lstrcmpiW(arg2, &data_af2690) != 0)
            int16_t i_1 = *arg2
            int16_t* lpsz_1 = arg2
            
            if (i_1 != 0)
                while (i_1 != 0x5c)
                    lpsz_1 = CharNextW(lpsz_1)
                    i_1 = *lpsz_1
                    
                    if (i_1 == 0)
                        goto label_69ae81
                
                if (lpsz_1 != 0)
                    goto label_69b109
            
        label_69ae81:
            enum WIN32_ERROR eax_26
            enum WIN32_ERROR ecx_33
            
            if (hKey_4 == 0)
                if (arg4 != 0)
                    entry_ebx = 2
                    arg4 = 1
                else
                    entry_ebx = sub_699400(&hKey_3, var_14, arg2, KEY_READ)
                    
                    if (entry_ebx != 0)
                        arg4 = 1
                
                void arg_34
                sub_5c49b0(_wcsncpy_s(&arg_34, 0x104, arg2, 0xffffffff))
                hKey_2 = sub_69a090(var_18, arg2)
                
                if (hKey_2 s< 0)
                    break
                
                HKEY hKey_5
                uint32_t ecx_28
                hKey_5, ecx_28 = sub_69a680(hKey_2, arg2)
                hKey_2 = hKey_5
                
                if (hKey_2 s< 0)
                    break
                
                if (*arg2 == 0x7b)
                    int16_t* ecx_29 = arg2
                    
                    do
                        hKey_5.w = *ecx_29
                        ecx_29 = &ecx_29[1]
                    while (hKey_5.w != 0)
                    
                    ecx_28 = (ecx_29 - &ecx_29[1]) s>> 1
                    
                    if (ecx_28 == 1)
                        hKey_2 = sub_69ab10(arg2, hKey_3, 0, arg4)
                        
                        if (hKey_2 s< 0 && arg4 == 0)
                            break
                        
                        HKEY hKey_6
                        hKey_6, ecx_28 = sub_69a090(var_18, arg2)
                        hKey_2 = hKey_6
                        
                        if (hKey_2 s< 0)
                            break
                
                arg4 = arg_30
                
                if (entry_ebx != 2)
                    if (entry_ebx == 0)
                        if (arg_30 == 0)
                        label_69b085:
                            int32_t eax_36 = sub_69a630(ecx_28, hKey_3)
                            HKEY hKey_1 = hKey_3
                            entry_ebx = eax_36
                            eax_26 = NO_ERROR
                            
                            if (hKey_1 != 0)
                                eax_26 = RegCloseKey(hKey_1)
                                hKey_3 = nullptr
                            
                            int32_t var_c_2 = 0
                            
                            if (eax_26 != NO_ERROR)
                                goto label_69b14e
                            
                            if (arg3 != eax_26 && entry_ebx == 0)
                                int32_t* arg_18 = var_14
                                int32_t* arg_1c = entry_ebx
                                int32_t* arg_20 = entry_ebx
                                enum WIN32_ERROR eax_38 = sub_6992f0(&arg_18, &arg_34)
                                arg_18 = entry_ebx
                                arg_1c = entry_ebx
                                arg_20 = entry_ebx
                                
                                if (eax_38 != NO_ERROR)
                                    hKey_2 = sub_698f50(eax_38)
                                    sub_6992d0(&arg_18)
                                    break
                                
                                sub_6992d0(&arg_18)
                        else
                            int32_t eax_34
                            eax_34, ecx_28 = sub_69a630(ecx_28, hKey_3)
                            
                            if (eax_34 == 0)
                                goto label_69b085
                            
                            if (sub_69a5f0(&arg_34) != 0 && arg3 != 0)
                                sub_699520(&hKey_3, &arg_34)
                    else if (arg_30 == 0)
                        ecx_33 = entry_ebx
                        goto label_69b155
            else
                if (sub_699400(&hKey_3, var_14, arg2, 0x2001f) != NO_ERROR
                        && sub_699400(&hKey_3, var_14, arg2, KEY_READ) != NO_ERROR)
                    eax_26 = sub_699380(&hKey_3, var_14, arg2)
                    
                    if (eax_26 != NO_ERROR)
                    label_69b14e:
                        ecx_33 = eax_26
                    label_69b155:
                        hKey_2 = sub_698f50(ecx_33)
                        break
                        break
                        break
                
                hKey_2 = sub_69a090(entry_ebx, arg2)
                
                if (hKey_2 s< 0)
                    break
                
                if (*arg2 == 0x3d)
                    hKey_2 = sub_69a220(&hKey_3, nullptr, arg2)
                    
                    if (hKey_2 s< 0)
                        break
                
            label_69aefe:
                
                if (*arg2 == 0x7b)
                    int16_t* ecx_20 = arg2
                    HRESULT eax_14
                    
                    do
                        eax_14.w = *ecx_20
                        ecx_20 = &ecx_20[1]
                    while (eax_14.w != 0)
                    
                    if ((ecx_20 - &arg2[1]) s>> 1 == 1)
                        hKey_2 = sub_69ab10(arg2, hKey_3, hKey_4, 0)
                        
                        if (hKey_2 s< 0)
                            break
                        
                        hKey_2 = sub_69a090(entry_ebx, arg2)
                        
                        if (hKey_2 s< 0)
                            break
        else
            int16_t valueName[0x1002]
            hKey_2 = sub_69a090(entry_ebx, &valueName)
            
            if (hKey_2 s< 0)
                break
            
            hKey_2 = sub_69a090(entry_ebx, arg2)
            
            if (hKey_2 s< 0)
                break
            
            if (*arg2 != 0x3d)
                goto label_69b109
            
            if (hKey_4 != 0)
                arg_2250.b = 1
                int32_t* arg_24 = var_14
                int32_t arg_28 = 0
                int32_t arg_2c = 0
                hKey_2 = sub_69a220(&arg_24, &valueName, arg2)
                arg_24 = nullptr
                arg_28 = 0
                arg_2c = 0
                
                if (hKey_2 s< 0)
                    sub_6992d0(&arg_24)
                    break
                
                arg_2250.b = 0
                arg_28 = 0
                goto label_69aefe
            
            if (arg4 == 0 && arg3 != 0)
                hKey_4 = nullptr
                arg4 = 0
                int32_t arg_14 = 0
                enum WIN32_ERROR eax_21 = sub_699400(&hKey_4, var_14, nullptr, KEY_WRITE)
                
                if (eax_21 != NO_ERROR)
                label_69b131:
                    hKey_2 = sub_698f50(eax_21)
                    sub_6992d0(&hKey_4)
                    break
                
                hKey_2 = hKey_4
                eax_21 = RegDeleteValueW(hKey_2, &valueName)
                
                if (eax_21 != NO_ERROR && eax_21 != ERROR_FILE_NOT_FOUND)
                    goto label_69b131
                
                if (hKey_2 != 0)
                    RegCloseKey(hKey_2)
                    hKey_4 = nullptr
                
                arg4 = 0
            
            hKey_2 = sub_69a680(hKey_2, arg2)
            
            if (hKey_2 s< 0)
                break
    
    int32_t (* hKey)(void* arg1) = hKey_3
    
    if (hKey != 0)
        RegCloseKey(hKey)
    
    result = hKey_2

fsbase->NtTib.ExceptionList = arg_2248
sub_745f2b(eax_2 ^ &var_18)
return result
