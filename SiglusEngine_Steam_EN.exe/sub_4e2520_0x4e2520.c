// 函数: sub_4e2520
// 地址: 0x4e2520
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605aa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_4c = arg3
int32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0x80004003
else
    char* ecx = arg2
    *arg3 = 0
    int32_t* eax_3
    
    do
        eax_3.b = *ecx
        ecx = &ecx[1]
    while (eax_3.b != 0)
    int32_t var_48 = 0
    CHAR* ecx_2 = (ecx - &ecx[1]) * 2
    
    if (ecx_2 s< 0x64)
        ecx_2 = 0x3e8
    
    CHAR* var_44_1 = ecx_2
    char* pv
    char* pv_1
    void* edx_1
    
    if (ecx_2 u> 0xffffffff)
        pv_1 = nullptr
        pv = nullptr
    else
        pv_1, ecx_2, edx_1 = CoTaskMemAlloc(ecx_2)
        pv = pv_1
        
        if (pv_1 != 0)
            *pv_1 = 0
    
    int32_t var_8_1 = 0
    
    if (pv_1 == 0)
    label_4e27bd:
        CoTaskMemFree(pv)
        result = 0x8007000e
    else
        *arg1 = arg2
        ecx_2.b = 0
        edx_1.b = data_20f33fc
        int32_t edi_1 = 0
        char var_37_1 = edx_1.b
        int32_t var_3c_1 = 0
        char var_36_1 = 0
        char var_35_1 = 0
        
        if (*arg2 != 0)
            while (true)
                if (edx_1.b == 1)
                    if (edi_1 == 0)
                        void* eax_4
                        eax_4, ecx_2 = __mbsstr(*arg1, "HKCR")
                        
                        if (eax_4 != 0)
                            ecx_2 = *arg1
                            
                            if (eax_4 == ecx_2)
                                PSTR lpsz_1 = CharNextA(ecx_2)
                                *arg1 = lpsz_1
                                PSTR lpsz_2 = CharNextA(lpsz_1)
                                *arg1 = lpsz_2
                                PSTR lpsz_3 = CharNextA(lpsz_2)
                                *arg1 = lpsz_3
                                *arg1 = CharNextA(lpsz_3)
                                int16_t* eax_6
                                eax_6, ecx_2 =
                                    sub_4e1170(&var_48, HKCU\r\n{\tSoftware\r\n\t{\r\n\t\tClasses")
                                
                                if (eax_6 == 0)
                                    goto label_4e27bd
                                
                                var_36_1 = 1
                        
                        ecx_2.b = var_35_1
                    
                    CHAR* lpsz_4 = *arg1
                    
                    if (*lpsz_4 != 0x27)
                    label_4e268b:
                        
                        if (ecx_2.b == 0)
                            goto label_4e2691
                    else if (ecx_2.b != 0)
                        if (*CharNextA(lpsz_4) == 0x27)
                            int32_t* lpsz_5 = CharNextA(*arg1)
                            *arg1 = lpsz_5
                            int32_t eax_10
                            eax_10, ecx_2 = sub_4e10d0(&var_48, lpsz_5, CharNextA(lpsz_5) - lpsz_5)
                            
                            if (eax_10 == 0)
                                goto label_4e27bd
                            
                            edi_1 = var_3c_1
                            ecx_2.b = var_35_1
                            goto label_4e268b
                        
                        var_35_1 = 0
                    label_4e2691:
                        CHAR* eax_11
                        eax_11.b = **arg1
                        
                        if (eax_11.b == 0x7b)
                            edi_1 += 1
                            var_3c_1 = edi_1
                        
                        if (eax_11.b == 0x7d)
                            var_3c_1 = edi_1 - 1
                            
                            if (edi_1 == 1 && var_36_1 == 1)
                                if (sub_4e1170(&var_48, u"\r\n\t}\r\n}\r\n") == 0)
                                    goto label_4e27bd
                                
                                var_36_1 = 0
                    else
                        var_35_1 = 1
                
                CHAR* lpsz_6 = *arg1
                CHAR* lpsz = lpsz_6
                
                if (*lpsz_6 != 0x25)
                    goto label_4e26e2
                
                lpsz_6 = CharNextA(lpsz)
                *arg1 = lpsz_6
                
                if (*lpsz_6 != 0x25)
                    char* eax_18 = sub_4e1dd0(lpsz_6, 0x25)
                    
                    if (eax_18 == 0)
                    label_4e277b:
                        CoTaskMemFree(pv)
                        result = 0x80020009
                        goto label_4e27cf
                    
                    char* ecx_8 = *arg1
                    void* eax_19 = eax_18 - ecx_8
                    
                    if (eax_19 s> 0x1f)
                        CoTaskMemFree(pv)
                        result = 0x80004005
                        goto label_4e27cf
                    
                    void var_34
                    sub_4d9360(__mbsnbcpy_s(&var_34, 0x20, ecx_8, eax_19))
                    void* ecx_9 = arg1[1]
                    void* var_50 = &var_34
                    wchar16* eax_21 = sub_4e7160(ecx_9 + 4, &var_50)
                    
                    if (eax_21 == 0)
                        goto label_4e277b
                    
                    if (sub_4e1170(&var_48, eax_21) == 0)
                        goto label_4e27bd
                    
                    if (*arg1 != eax_18)
                        CHAR* eax_23
                        
                        do
                            eax_23 = CharNextA(*arg1)
                            *arg1 = eax_23
                        while (eax_23 != eax_18)
                else
                    lpsz = lpsz_6
                label_4e26e2:
                    
                    if (sub_4e10d0(&var_48, lpsz_6, CharNextA(lpsz) - lpsz_6) == 0)
                        goto label_4e27bd
                
                PSTR eax_17
                eax_17, ecx_2, edx_1 = CharNextA(*arg1)
                *arg1 = eax_17
                
                if (*eax_17 == 0)
                    break
                
                edi_1 = var_3c_1
                ecx_2.b = var_35_1
                edx_1.b = var_37_1
        
        *var_4c = pv
        CoTaskMemFree(nullptr)
        result = 0

label_4e27cf:
fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
