// 函数: sub_1a9a17e
// 地址: 0x1a9a17e
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad4b90
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t* var_1c = &__saved_edi
int32_t eax_1 = data_1c078b8

if (eax_1 != 0)
    goto label_1a9a1ed

uint16_t charType
BOOL result

if (GetStringTypeW(1, &data_1ad4b74, 1, &charType) == 0)
    if (GetStringTypeA(0, 1, &data_1ad4b70, 1, &charType) != 0)
        eax_1 = 2
        goto label_1a9a1e8
    
    result = 0
else
    eax_1 = 1
label_1a9a1e8:
    data_1c078b8 = eax_1
label_1a9a1ed:
    
    if (eax_1 == 2)
        uint32_t Locale = arg6
        
        if (Locale == 0)
            Locale = data_1c078c8
        
        result = GetStringTypeA(Locale, arg1, arg2, arg3, arg4)
    else if (eax_1 != 1)
        result = 0
    else
        if (arg5 == 0)
            arg5 = data_1c078d8
        
        int32_t eax_6 = neg.d(arg7)
        int32_t cchWideChar = MultiByteToWideChar(arg5, (sbb.d(eax_6, eax_6, arg7 != 0) & 8) + 1, 
            arg2, arg3, nullptr, 0)
        
        if (cchWideChar == 0)
            result = 0
        else
            int32_t var_8_1 = 0
            int32_t edi_1 = cchWideChar * 2
            int32_t eax_11
            eax_11.b = (edi_1 + 3).b & 0xfc
            sub_1a92fc0(eax_11)
            int32_t* var_1c_1 = &__saved_edi
            int32_t* var_28_1 = &__saved_edi
            sub_1a917d0(&__saved_edi, 0, edi_1)
            int32_t var_8_2 = 0xffffffff
            
            if (&__saved_edi == 0)
                result = 0
            else
                int32_t cchSrc =
                    MultiByteToWideChar(arg5, MB_PRECOMPOSED, arg2, arg3, &__saved_edi, cchWideChar)
                
                if (cchSrc == 0)
                    result = 0
                else
                    result = GetStringTypeW(arg1, &__saved_edi, cchSrc, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
