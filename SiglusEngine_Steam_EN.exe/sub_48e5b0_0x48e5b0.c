// 函数: sub_48e5b0
// 地址: 0x48e5b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_35c
int32_t eax_1 = __security_cookie ^ &var_35c
void* i = nullptr
bool cond:0 = false

do
    if (cond:0)
        ___report_rangecheckfailure()
        noreturn
    
    *(i + 0x1af19e0) = 0
    i += 1
    cond:0 = i u>= 0x2710
while (i s< 0x2710)

WIN32_FIND_DATAA findFileData
void fileName
HANDLE (__stdcall* const ebx)(PSTR lpFileName, WIN32_FIND_DATAA* lpFindFileData)

if (data_108fab0 != 1)
    int32_t var_36c_1 = 0x134fd78
    char* var_370_1 = &data_1352208
    sub_4c84d0(&fileName, "%s\%s\Seen????.txt")
    HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        sub_48e530(&findFileData, 1)
        BOOL eax_2
        int16_t edx_1
        eax_2, edx_1 = FindNextFileA(hFindFile, &findFileData)
        
        if (eax_2 != 0)
            BOOL i_1
            
            do
                if ((findFileData.dwFileAttributes.b & 0x10) == 0)
                    char ecx_2 = findFileData.cFileName[4]
                    
                    if (ecx_2 - 0x30 u<= 9)
                        edx_1.b = findFileData.cFileName[5]
                        
                        if (edx_1.b - 0x30 u<= 9)
                            ebx.b = findFileData.cFileName[6]
                            
                            if ((FindFirstFileA).b - 0x30 u<= 9)
                                edx_1:1.b = findFileData.cFileName[7]
                                
                                if (edx_1:1.b - 0x30 u<= 9)
                                    uint32_t eax_10 = zx.d(FindFirstFileA)
                                        + (zx.d(edx_1.b) + zx.d(ecx_2) * 0xa) * 0xa
                                    
                                    if (zx.d(edx_1:1.b) + eax_10 * 0xa - 0xd050 u<= 0x270f)
                                        *(zx.d(edx_1:1.b) + eax_10 * 0xa + 0x1ae4990) = 1
                
                i_1, edx_1 = FindNextFileA(hFindFile, &findFileData)
            while (i_1 != 0)
        
        FindClose(hFindFile)

void* var_36c_6 = &data_13517e0
sub_4c84d0(&fileName, "%s\Seen????.txt")
HANDLE result
int16_t edx_2
result, edx_2 = FindFirstFileA(&fileName, &findFileData)
HANDLE hFindFile_1 = result

if (hFindFile_1 != 0xffffffff)
    if ((findFileData.dwFileAttributes.b & 0x10) == 0)
        result.b = findFileData.cFileName[4]
        
        if (result.b u>= 0x30 && result.b u<= 0x39)
            edx_2.b = findFileData.cFileName[5]
            
            if (edx_2.b u>= 0x30 && edx_2.b u<= 0x39)
                ebx.b = findFileData.cFileName[6]
                
                if (FindFirstFileA u>= 0x30 && FindFirstFileA u<= 0x39)
                    edx_2:1.b = findFileData.cFileName[7]
                    
                    if (edx_2:1.b u>= 0x30 && edx_2:1.b u<= 0x39)
                        uint32_t eax_18 =
                            zx.d(FindFirstFileA) + (zx.d(edx_2.b) + zx.d(result.b) * 0xa) * 0xa
                        
                        if (zx.d(edx_2:1.b) + eax_18 * 0xa - 0xd050 u<= 0x270f)
                            *(zx.d(edx_2:1.b) + eax_18 * 0xa + 0x1ae4990) = 2
    
    BOOL eax_22
    int16_t edx_3
    eax_22, edx_3 = FindNextFileA(hFindFile_1, &findFileData)
    
    if (eax_22 != 0)
        BOOL i_2
        
        do
            if ((findFileData.dwFileAttributes.b & 0x10) == 0)
                char ecx_9 = findFileData.cFileName[4]
                
                if (ecx_9 - 0x30 u<= 9)
                    edx_3.b = findFileData.cFileName[5]
                    
                    if (edx_3.b - 0x30 u<= 9)
                        ebx.b = findFileData.cFileName[6]
                        
                        if ((FindFirstFileA).b - 0x30 u<= 9)
                            edx_3:1.b = findFileData.cFileName[7]
                            
                            if (edx_3:1.b - 0x30 u<= 9)
                                uint32_t eax_30 =
                                    zx.d(FindFirstFileA) + (zx.d(edx_3.b) + zx.d(ecx_9) * 0xa) * 0xa
                                
                                if (zx.d(edx_3:1.b) + eax_30 * 0xa - 0xd050 u<= 0x270f)
                                    *(zx.d(edx_3:1.b) + eax_30 * 0xa + 0x1ae4990) = 2
            
            i_2, edx_3 = FindNextFileA(hFindFile_1, &findFileData)
        while (i_2 != 0)
    
    result = FindClose(hFindFile_1)

sub_5f02dd(eax_1 ^ &var_35c)
return result
