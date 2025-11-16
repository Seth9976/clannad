// 函数: sub_69a6f0
// 地址: 0x69a6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0x80004003
else
    int16_t* ecx = arg2
    *arg3 = 0
    int32_t* eax_3
    
    do
        eax_3.w = *ecx
        ecx = &ecx[1]
    while (eax_3.w != 0)
    int32_t var_68 = 0
    int32_t ecx_3 = ((ecx - &ecx[1]) s>> 1) * 2
    
    if (ecx_3 s< 0x64)
        ecx_3 = 0x3e8
    
    int32_t var_64_1 = ecx_3
    int32_t ecx_4 = ecx_3 * 2
    int16_t* pv
    int16_t* pv_1
    
    if (ecx_3 u>> 0xffffffe1 != 0 || ecx_4 u> 0xffffffff)
        pv_1 = nullptr
        pv = nullptr
    else
        pv_1, ecx_4 = CoTaskMemAlloc(ecx_4)
        pv = pv_1
        
        if (pv_1 != 0)
            *pv_1 = 0
    
    int32_t var_8_1 = 0
    
    if (pv_1 == 0)
    label_69a8bf:
        CoTaskMemFree(pv)
        result = 0x8007000e
    else
        *arg1 = arg2
        int32_t edi_1 = 0
        pv_1.b = data_bac3fc
        ecx_4.b = 0
        char var_57_1 = pv_1.b
        int32_t var_5c_1 = 0
        char var_56_1 = 0
        char var_55_1 = 0
        
        if (*arg2 != 0)
            while (true)
                if (pv_1.b == 1)
                    if (edi_1 == 0)
                        int128_t* eax_5
                        eax_5, ecx_4 = _wcsstr(*arg1, u"HKCR")
                        
                        if (eax_5 != 0)
                            ecx_4 = *arg1
                            
                            if (eax_5 == ecx_4)
                                PWSTR lpsz = CharNextW(ecx_4)
                                *arg1 = lpsz
                                PWSTR lpsz_1 = CharNextW(lpsz)
                                *arg1 = lpsz_1
                                PWSTR lpsz_2 = CharNextW(lpsz_1)
                                *arg1 = lpsz_2
                                *arg1 = CharNextW(lpsz_2)
                                int32_t eax_7
                                eax_7, ecx_4 =
                                    sub_699970(&var_68, HKCU\r\n{\tSoftware\r\n\t{\r\n\t\tClasses")
                                
                                if (eax_7 == 0)
                                    goto label_69a8bf
                                
                                var_56_1 = 1
                        
                        ecx_4.b = var_55_1
                    
                    if (0x27 != **arg1)
                    label_69a85d:
                        
                        if (ecx_4.b == 0)
                            goto label_69a863
                    else if (ecx_4.b != 0)
                        if (sub_699880(arg1) == 0)
                            WCHAR* eax_10 = CharNextW(*arg1)
                            *arg1 = eax_10
                            int32_t eax_11
                            eax_11, ecx_4 = sub_6998c0(&var_68, eax_10, 1)
                            
                            if (eax_11 == 0)
                                goto label_69a8bf
                            
                            ecx_4.b = var_55_1
                            goto label_69a85d
                        
                        var_55_1 = 0
                    label_69a863:
                        uint32_t eax_13 = zx.d(**arg1)
                        
                        if (eax_13 == 0x7b)
                            edi_1 += 1
                            var_5c_1 = edi_1
                        
                        if (eax_13 == 0x7d)
                            int32_t temp1_1 = edi_1
                            edi_1 -= 1
                            var_5c_1 = edi_1
                            
                            if (temp1_1 == 1 && var_56_1 == 1)
                                if (sub_699970(&var_68, u"\r\n\t}\r\n}\r\n") == 0)
                                    goto label_69a8bf
                                
                                var_56_1 = 0
                    else
                        var_55_1 = 1
                
                WCHAR* lpsz_3 = *arg1
                
                if (*lpsz_3 != 0x25)
                label_69a8ae:
                    
                    if (sub_6998c0(&var_68, lpsz_3, 1) == 0)
                        goto label_69a8bf
                else
                    lpsz_3 = CharNextW(lpsz_3)
                    *arg1 = lpsz_3
                    
                    if (*lpsz_3 == 0x25)
                        goto label_69a8ae
                    
                    int16_t* eax_16 = sub_69a000(lpsz_3, 0x25)
                    
                    if (eax_16 == 0)
                    label_69a94c:
                        CoTaskMemFree(pv)
                        result = 0x80020009
                        goto label_69a98e
                    
                    int16_t* ecx_11 = *arg1
                    int32_t eax_18 = (eax_16 - ecx_11) s>> 1
                    
                    if (eax_18 s> 0x1f)
                        CoTaskMemFree(pv)
                        result = 0x80004005
                        goto label_69a98e
                    
                    void var_54
                    sub_5c49b0(_wcsncpy_s(&var_54, 0x20, ecx_11, eax_18))
                    int32_t* eax_20 = sub_699e40(arg1[1], &var_54)
                    
                    if (eax_20 == 0)
                        goto label_69a94c
                    
                    if (sub_699970(&var_68, eax_20) == 0)
                        goto label_69a8bf
                    
                    if (*arg1 != eax_16)
                        WCHAR* eax_22
                        
                        do
                            eax_22 = CharNextW(*arg1)
                            *arg1 = eax_22
                        while (eax_22 != eax_16)
                    
                    edi_1 = var_5c_1
                
                pv_1, ecx_4 = CharNextW(*arg1)
                *arg1 = pv_1
                
                if (*pv_1 == 0)
                    break
                
                ecx_4.b = var_55_1
                pv_1.b = var_57_1
        
        *arg3 = pv
        CoTaskMemFree(nullptr)
        result = 0

label_69a98e:
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
