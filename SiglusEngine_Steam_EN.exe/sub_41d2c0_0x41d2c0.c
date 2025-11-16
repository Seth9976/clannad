// 函数: sub_41d2c0
// 地址: 0x41d2c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result_2
int32_t eax_1 = __security_cookie ^ &result_2
void* result = &data_12a6e1c
int32_t i = 0
result_2 = &data_12a6e1c

do
    if (*result != 0)
        void* result_1 = result
        void* var_578_1 = &data_13517e0
        char libFileName
        sub_4c84d0(&libFileName, "%s\%s")
        char* esi_1 = &libFileName
        int32_t eax_2 = sub_4d1610(&libFileName, 0x5c)
        void var_41f
        
        if (eax_2 != 0xffffffff)
            esi_1 = &var_41f + eax_2
        int32_t eax_3 = sub_4d1610(esi_1, 0x2e)
        
        if (eax_3 == 0xffffffff)
            eax_3 = sub_4cfc80(esi_1)
            esi_1 -= 1
        
        void* const var_574_1 = &data_613c40
        sub_4c84d0(&esi_1[eax_3], ".%s")
        uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
        int32_t ebx_1 = 0
        void fileName
        sub_4cfd70(&fileName, &libFileName)
        WIN32_FIND_DATAA findFileData
        HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)
        
        if (hFindFile != 0xffffffff)
            FindClose(hFindFile)
            ebx_1.b = (findFileData.dwFileAttributes.b & 0x10) != 0
            ebx_1 += 1
        
        SetErrorMode(uMode)
        
        if (ebx_1 != 1)
            if (data_702fc0 == 0)
                void* result_3 = result_2
                int32_t i_1 = i
                sub_4c84d0(&data_7027c0, 0x613c48)
                
                if (data_702fc0 != 0 || data_641ad0 s< 6)
                    MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                    data_641ad0 += 1
        else if (i u<= 0xf)
            sub_41d5b0(i)
            HMODULE hModule = LoadLibraryA(&libFileName)
            *((i << 2) + &data_1cd4550) = hModule
            
            if (hModule != 0)
                GetProcAddress(hModule, "reallive_dll_func_load")(&data_1cd4590, 0x120)
        
        result = result_2
    
    i += 1
    result += 0x24
    result_2 = result
while (i s< 0x10)

sub_5f02dd(eax_1 ^ &result_2)
return result
