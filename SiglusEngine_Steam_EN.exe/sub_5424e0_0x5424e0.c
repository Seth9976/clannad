// 函数: sub_5424e0
// 地址: 0x5424e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af4e84
data_1b8a734 = 0
data_1b8a748 = 0
data_1b8a75c = 0
data_1b8a770 = 0
data_1b8a784 = 0

if (eax u<= 5)
    char const* const var_24_1
    
    switch (eax)
        case 0
            int32_t* var_20_1 = &data_1b8a720
            var_24_1 = &data_61e914
        case 1
            int32_t* var_20_2 = &data_1b8a720
            var_24_1 = &data_61e930
        case 2
            int32_t* var_20_3 = &data_1b8a720
            var_24_1 = &data_61e934
        case 3
            int32_t* var_20_4 = &data_1b8a720
            var_24_1 = "$$$$"
        case 4
            int32_t* var_20_5 = &data_1b8a720
            var_24_1 = "$$$$$"
        case 5
            int32_t* var_20_6 = &data_1b8a720
            var_24_1 = "$$$$$$"
    
    sub_4ef190(eax, arg1 + 0x20, *(arg1 + 0x20), var_24_1, &data_1b8a720)

HMODULE hModule = data_1b8a720

if (hModule u<= 0xf)
    hModule = *((hModule << 2) + &data_1cd4550)
    
    if (hModule != 0)
        int32_t eax_4 = GetProcAddress(hModule, "reallive_dll_func_call")(data_1b8a734, 
            data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784)
        data_715e98 = eax_4
        return eax_4

data_715e98 = 0
return hModule
