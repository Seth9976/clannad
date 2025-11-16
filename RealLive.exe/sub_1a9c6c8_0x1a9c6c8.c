// 函数: sub_1a9c6c8
// 地址: 0x1a9c6c8
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ebx = 0

if (data_1c079ac == 0)
    HMODULE hModule = LoadLibraryA("user32.dll")
    int32_t eax_1
    
    if (hModule != 0)
        eax_1 = GetProcAddress(hModule, "MessageBoxA")
        data_1c079ac = eax_1
    
    if (hModule == 0 || eax_1 == 0)
        return 0
    
    data_1c079b0 = GetProcAddress(hModule, "GetActiveWindow")
    data_1c079b4 = GetProcAddress(hModule, "GetLastActivePopup")

int32_t eax_4 = data_1c079b0

if (eax_4 != 0)
    ebx = eax_4()
    
    if (ebx != 0)
        int32_t eax_6 = data_1c079b4
        
        if (eax_6 != 0)
            ebx = eax_6(ebx)

return data_1c079ac(ebx, arg1, arg2, arg3)
