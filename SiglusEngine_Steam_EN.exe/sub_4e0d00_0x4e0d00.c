// 函数: sub_4e0d00
// 地址: 0x4e0d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
enum REG_SAM_FLAGS eax_3 = arg1[1] | 0x2001f
HKEY var_144 = *arg1
HKEY hKey = nullptr
int32_t var_11c = 0
int32_t var_118 = 0
enum WIN32_ERROR result = sub_4e0be0(&hKey, var_144, arg2, eax_3)

if (result == NO_ERROR)
    uint32_t lpcchName = 0x100
    FILETIME lpftLastWriteTime
    uint8_t name[0x104]
    
    if (RegEnumKeyExA(hKey, result, &name, &lpcchName, result, result, result, &lpftLastWriteTime)
            == NO_ERROR)
        enum WIN32_ERROR i
        
        do
            result = sub_4e0d00(&name)
            
            if (result != NO_ERROR)
                goto label_4e0e1f
            
            lpcchName = 0x100
            i = RegEnumKeyExA(hKey, result, &name, &lpcchName, result, result, result, 
                &lpftLastWriteTime)
        while (i == NO_ERROR)
    
    HKEY hKey_1 = hKey
    
    if (hKey_1 != 0)
        RegCloseKey(hKey_1)
        hKey = nullptr
    
    int32_t var_11c_1 = 0
    result = sub_4e0ad0(arg1, arg2)

label_4e0e1f:
HKEY hKey_2 = hKey

if (hKey_2 != 0)
    RegCloseKey(hKey_2)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
