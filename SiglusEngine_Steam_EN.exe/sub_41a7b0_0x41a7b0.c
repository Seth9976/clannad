// 函数: sub_41a7b0
// 地址: 0x41a7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void libFileName
char* eax_2

if (arg1 == 0)
    eax_2 = sub_4cfd70(&libFileName, &data_13517e0)
else
    int32_t var_220_1 = arg1
    void* var_224_1 = &data_13517e0
    eax_2 = sub_4c84d0(&libFileName, "%s\%s")

HMODULE eax_4

if (sub_4c3da0(eax_2, 0xffffffff, &libFileName, 0xffffffff) != 1)
label_41a909:
    eax_4 = data_1332b80
    
    if (eax_4 != 0)
        FreeLibrary(eax_4)
else
    eax_4 = LoadLibraryA(&libFileName)
    data_1332b80 = eax_4
    
    if (eax_4 != 0)
        int32_t eax_5 = GetProcAddress(eax_4, "d3d_dll_create")
        HMODULE hModule = data_1332b80
        data_1332b7c = eax_5
        int32_t eax_6 = GetProcAddress(hModule, "d3d_dll_free")
        HMODULE hModule_1 = data_1332b80
        data_1332b78 = eax_6
        int32_t eax_7 = GetProcAddress(hModule_1, "d3d_dll_draw")
        HMODULE hModule_2 = data_1332b80
        data_1332b74 = eax_7
        int32_t eax_8 = GetProcAddress(hModule_2, "d3d_dll_present")
        HMODULE hModule_3 = data_1332b80
        data_1332b70 = eax_8
        int32_t eax_9 = GetProcAddress(hModule_3, "d3d_dll_get_last_error")
        HMODULE hModule_4 = data_1332b80
        data_1332b6c = eax_9
        int32_t eax_10 = GetProcAddress(hModule_4, "d3d_dll_get_last_error_code")
        bool cond:0_1 = data_1332b7c == 0
        data_1332b68 = eax_10
        
        if (not(cond:0_1) && data_1332b78 != 0 && data_1332b74 != 0 && data_1332b70 != 0
                && data_1332b6c != 0 && eax_10 != 0)
            eax_10.b = 1
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_10
        
        HLOCAL var_218
        FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, nullptr, 
            GetLastError(), 0x400, &var_218, 0, nullptr)
        LocalFree(var_218)
        goto label_41a909

eax_4.b = 0
data_1332b80 = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_4
