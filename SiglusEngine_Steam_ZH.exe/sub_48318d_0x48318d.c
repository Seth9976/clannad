// 函数: sub_48318d
// 地址: 0x48318d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_144 = edi
uint8_t var_10c[0x104]
int32_t result

if (GetTempFileNameA(&data_b00220, &data_ac79c8, 0, &var_10c) != 0)
    HANDLE hObject = CreateFileA(&var_10c, 0x40000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    
    if (hObject != 0xffffffff)
        HANDLE hObject_1 = CreateFileA(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
            SECURITY_ANONYMOUS, nullptr)
        int32_t result_1
        
        if (hObject_1 != 0xffffffff)
            void var_13c
            sub_482e9f(&var_13c)
            
            if (sub_482f46(&var_13c) != 0)
                result_1 = sub_482ffe(&var_13c, hObject_1, hObject)
            else
                result_1 = 0x8007000e
            
            CloseHandle(hObject_1)
            sub_482ebe(&var_13c)
        else
            result_1 = 0x8876038f
        
        CloseHandle(hObject)
        
        if (result_1 s>= 0)
            DeleteFileA(arg1)
            
            if (MoveFileA(&var_10c, arg1) == 0)
                result_1 = 0x8876038f
        else
            DeleteFileA(&var_10c)
        
        result = result_1
    else
        result = 0x8876038f
else
    result = 0x88760387

sub_745f2b(__security_cookie_1)
return result
