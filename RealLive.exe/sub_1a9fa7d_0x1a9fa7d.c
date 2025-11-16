// 函数: sub_1a9fa7d
// 地址: 0x1a9fa7d
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad5350
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t* var_1c = &__saved_edi

if (data_1c07a40 != 0)
    goto label_1a9faf0

enum COMPARESTRING_RESULT result

if (CompareStringW(0, 0, &data_1ad4b74, 1, &data_1ad4b74, 1) == 0)
    if (CompareStringA(0, 0, &data_1ad4b70, 1, &data_1ad4b70, 1) != 0)
        data_1c07a40 = 2
        goto label_1a9faf0
    
    result = 0
else
    data_1c07a40 = 1
label_1a9faf0:
    void* esi_1 = arg4
    
    if (esi_1 s> 0)
        esi_1 = sub_1a9fcfa(arg3, esi_1)
        arg4 = esi_1
    
    if (arg6 s> 0)
        arg6 = sub_1a9fcfa(arg5, arg6)
    
    int32_t eax_5 = data_1c07a40
    
    if (eax_5 == 2)
        result = CompareStringA(arg1, arg2, arg3, esi_1, arg5, arg6)
    else if (eax_5 != 1)
        result = 0
    else
        if (arg7 == 0)
            arg7 = data_1c078d8
        
        if (esi_1 != 0 && arg6 != 0)
        label_1a9fc06:
            int32_t eax_12 = MultiByteToWideChar(arg7, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg3, 
                esi_1, nullptr, 0)
            
            if (eax_12 == 0)
                result = 0
            else
                int32_t var_8_1 = 0
                int32_t eax_14
                eax_14.b = (eax_12 * 2 + 3).b & 0xfc
                sub_1a92fc0(eax_14)
                int32_t* var_1c_1 = &__saved_edi
                int32_t* var_28_1 = &__saved_edi
                int32_t var_8_2 = 0xffffffff
                
                if (var_28_1 == 0)
                    result = 0
                else if (MultiByteToWideChar(arg7, MB_PRECOMPOSED, arg3, esi_1, var_28_1, eax_12)
                        == 0)
                    result = 0
                else
                    int32_t eax_16 = MultiByteToWideChar(arg7, 
                        MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg5, arg6, nullptr, 0)
                    int32_t var_24_1 = eax_16
                    
                    if (eax_16 == 0)
                        result = 0
                    else
                        int32_t var_8_3 = 1
                        int32_t eax_18
                        eax_18.b = (eax_16 * 2 + 3).b & 0xfc
                        sub_1a92fc0(eax_18)
                        int32_t* var_1c_2 = &__saved_edi
                        int32_t* var_2c_1 = &__saved_edi
                        int32_t var_8_4 = 0xffffffff
                        
                        if (&__saved_edi == 0)
                            result = 0
                        else if (MultiByteToWideChar(arg7, MB_PRECOMPOSED, arg5, arg6, 
                                &__saved_edi, eax_16) == 0)
                            result = 0
                        else
                            result =
                                CompareStringW(arg1, arg2, var_28_1, eax_12, &__saved_edi, eax_16)
        else if (esi_1 == arg6)
        label_1a9fb68:
            result = CSTR_EQUAL
        else if (arg6 s> 1)
            result = CSTR_LESS_THAN
        else
            CPINFO cPInfo
            
            if (esi_1 s> 1)
                result = CSTR_GREATER_THAN
            else if (GetCPInfo(arg7, &cPInfo) == 0)
                result = 0
            else
                var_3a
                char edx_1
                
                if (esi_1 s<= 0)
                    if (arg6 s<= 0)
                        goto label_1a9fc06
                    
                    if (cPInfo.MaxCharSize u>= 2)
                        char* eax_10 = &var_3a
                        
                        if (cPInfo.LeadByte[0] != 0)
                            do
                                edx_1 = eax_10[1]
                                
                                if (edx_1 == 0)
                                    break
                                
                                uint8_t* ecx_4
                                ecx_4.b = *arg5
                                
                                if (ecx_4.b u>= *eax_10 && ecx_4.b u<= edx_1)
                                    goto label_1a9fb68
                                
                                eax_10 = &eax_10[2]
                            while (*eax_10 != 0)
                    
                    result = CSTR_LESS_THAN
                else
                    if (cPInfo.MaxCharSize u>= 2)
                        char* eax_8 = &var_3a
                        
                        if (cPInfo.LeadByte[0] != 0)
                            do
                                edx_1 = eax_8[1]
                                
                                if (edx_1 == 0)
                                    break
                                
                                char* ecx_3
                                ecx_3.b = *arg3
                                
                                if (ecx_3.b u>= *eax_8 && ecx_3.b u<= edx_1)
                                    goto label_1a9fb68
                                
                                eax_8 = &eax_8[2]
                            while (*eax_8 != 0)
                    
                    result = CSTR_GREATER_THAN

fsbase->NtTib.ExceptionList = ExceptionList
return result
