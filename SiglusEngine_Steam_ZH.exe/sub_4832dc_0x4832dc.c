// 函数: sub_4832dc
// 地址: 0x4832dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_248 = edi
wchar16 var_210[0x104]
int32_t result

if (GetTempFileNameW(&data_ad7d2c, &data_ac79cc, 0, &var_210) != 0)
    HANDLE hObject = CreateFileW(&var_210, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    
    if (hObject != 0xffffffff)
        HANDLE hObject_1 = CreateFileW(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
            SECURITY_ANONYMOUS, nullptr)
        int32_t result_1
        
        if (hObject_1 != 0xffffffff)
            void var_240
            sub_482e9f(&var_240)
            
            if (sub_482f46(&var_240) != 0)
                result_1 = sub_482ffe(&var_240, hObject_1, hObject)
            else
                result_1 = 0x8007000e
            
            CloseHandle(hObject_1)
            sub_482ebe(&var_240)
        else
            result_1 = 0x8876038f
        
        CloseHandle(hObject)
        
        if (result_1 s>= 0)
            DeleteFileW(arg1)
            
            if (MoveFileW(&var_210, arg1) == 0)
                result_1 = 0x8876038f
        else
            DeleteFileW(&var_210)
        
        result = result_1
    else
        result = 0x8876038f
else
    result = 0x88760387

sub_745f2b(__security_cookie_1)
return result
