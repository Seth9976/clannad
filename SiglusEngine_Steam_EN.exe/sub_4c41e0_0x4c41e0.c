// 函数: sub_4c41e0
// 地址: 0x4c41e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char const* const var_574 = "*.sav"
int32_t ecx
int32_t var_578 = ecx
int32_t result = 0
void fileName_1
sub_4c84d0(&fileName_1, "%s\%s")
WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(&fileName_1, &findFileData)

if (hFindFile != 0xffffffff)
    var_534
    
    if ((findFileData.dwFileAttributes.b & 0x10) == 0)
        void* var_574_2 = &var_534
        int32_t var_578_2 = ecx
        
        if (sub_4c4170(sub_4c84d0(&fileName_1, "%s\%s"), 0xffffffff, &fileName_1, 0xffffffff) != 0)
            result = 1
    
    if (FindNextFileA(hFindFile, &findFileData) != 0)
        BOOL i
        
        do
            if ((findFileData.dwFileAttributes.b & 0x10) == 0)
                void* var_574_4 = &var_534
                int32_t var_578_4 = ecx
                sub_4c84d0(&fileName_1, "%s\%s")
                void fileName
                sub_4cfd70(&fileName, &fileName_1)
                uint32_t eax_5 = GetFileAttributesA(&fileName)
                
                if ((eax_5.b & 1) != 0)
                    SetFileAttributesA(&fileName, eax_5 & 0xfffffffe)
                    result += 1
            
            i = FindNextFileA(hFindFile, &findFileData)
        while (i != 0)
    
    FindClose(hFindFile)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
