// 函数: sub_41d5b0
// 地址: 0x41d5b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u<= 0xf)
    HMODULE hModule = *((arg1 << 2) + &data_1cd4550)
    
    if (hModule != 0)
        int32_t result = GetProcAddress(hModule, "reallive_dll_func_free")()
        FreeLibrary(*((arg1 << 2) + &data_1cd4550))
        *((arg1 << 2) + &data_1cd4550) = 0
        return result

return 0
