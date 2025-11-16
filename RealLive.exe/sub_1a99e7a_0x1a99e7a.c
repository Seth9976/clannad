// 函数: sub_1a99e7a
// 地址: 0x1a99e7a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad4b78
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t* var_1c = &__saved_edi

if (data_1c078b4 != 0)
    goto label_1a99ef3

int32_t result

if (LCMapStringW(0, 0x100, &data_1ad4b74, 1, nullptr, 0) == 0)
    if (LCMapStringA(0, 0x100, &data_1ad4b70, 1, nullptr, 0) != 0)
        data_1c078b4 = 2
        goto label_1a99ef3
    
    result = 0
else
    data_1c078b4 = 1
label_1a99ef3:
    
    if (arg4 s> 0)
        arg4 = sub_1a9a09e(arg3, arg4)
    
    int32_t eax_4 = data_1c078b4
    
    if (eax_4 == 2)
        result = LCMapStringA(arg1, arg2, arg3, arg4, arg5, arg6)
    else if (eax_4 != 1)
        result = 0
    else
        if (arg7 == 0)
            arg7 = data_1c078d8
        
        int32_t eax_7 = neg.d(arg8)
        int32_t eax_11 = MultiByteToWideChar(arg7, (sbb.d(eax_7, eax_7, arg8 != 0) & 8) + 1, arg3, 
            arg4, nullptr, 0)
        
        if (eax_11 == 0)
            result = 0
        else
            int32_t var_8_1 = 0
            int32_t eax_13
            eax_13.b = (eax_11 * 2 + 3).b & 0xfc
            sub_1a92fc0(eax_13)
            int32_t* var_1c_1 = &__saved_edi
            int32_t* var_28_1 = &__saved_edi
            int32_t var_8_2 = 0xffffffff
            
            if (var_28_1 == 0)
                result = 0
            else if (MultiByteToWideChar(arg7, MB_PRECOMPOSED, arg3, arg4, var_28_1, eax_11) == 0)
                result = 0
            else
                int32_t result_1 = LCMapStringW(arg1, arg2, var_28_1, eax_11, nullptr, 0)
                int32_t result_2 = result_1
                
                if (result_1 == 0)
                    result = 0
                else if ((arg2:1.b & 4) == 0)
                    int32_t var_8_3 = 1
                    int32_t eax_18
                    eax_18.b = (result_1 * 2 + 3).b & 0xfc
                    sub_1a92fc0(eax_18)
                    int32_t* var_1c_2 = &__saved_edi
                    int32_t* var_24_1 = &__saved_edi
                    int32_t var_8_4 = 0xffffffff
                    
                    if (&__saved_edi == 0)
                        result = 0
                    else if (LCMapStringW(arg1, arg2, var_28_1, eax_11, &__saved_edi, result_1)
                            == 0)
                        result = 0
                    else
                        PSTR lpMultiByteStr
                        int32_t cbMultiByte
                        
                        if (arg6 != 0)
                            cbMultiByte = arg6
                            lpMultiByteStr = arg5
                        else
                            cbMultiByte = 0
                            lpMultiByteStr = nullptr
                        
                        result_1 = WideCharToMultiByte(arg7, 0x220, &__saved_edi, result_1, 
                            lpMultiByteStr, cbMultiByte, nullptr, nullptr)
                        
                        result = result_1 == 0 ? 0 : result_1
                else if (arg6 == 0)
                    result = result_1
                else if (result_1 s> arg6)
                    result = 0
                else if (LCMapStringW(arg1, arg2, var_28_1, eax_11, arg5, arg6) != 0)
                    result = result_1
                else
                    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
