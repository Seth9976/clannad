// 函数: sub_699520
// 地址: 0x699520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
enum REG_SAM_FLAGS eax_3 = arg1[1] | 0x2001f
HKEY var_244 = *arg1
HKEY hKey = nullptr
int32_t var_21c = 0
int32_t var_218 = 0
enum WIN32_ERROR result = sub_699400(&hKey, var_244, arg2, eax_3)

if (result == NO_ERROR)
    uint32_t lpcchName = 0x100
    FILETIME lpftLastWriteTime
    wchar16 name[0x102]
    
    if (RegEnumKeyExW(hKey, result, &name, &lpcchName, result, result, result, &lpftLastWriteTime)
            == NO_ERROR)
        enum WIN32_ERROR i
        
        do
            result = sub_699520(&name)
            
            if (result != NO_ERROR)
                goto label_69963f
            
            lpcchName = 0x100
            i = RegEnumKeyExW(hKey, result, &name, &lpcchName, result, result, result, 
                &lpftLastWriteTime)
        while (i == NO_ERROR)
    
    HKEY hKey_1 = hKey
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        hKey = nullptr
    
    int32_t var_21c_1 = 0
    result = sub_6992f0(arg1, arg2)

label_69963f:
HKEY hKey_2 = hKey

if (hKey_2 != 0)
    RegCloseKey(hKey_2)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
