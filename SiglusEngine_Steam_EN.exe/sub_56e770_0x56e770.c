// 函数: sub_56e770
// 地址: 0x56e770
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_4
int32_t eax_1 = __security_cookie ^ &i_4
void* i = nullptr
void var_570
void* i_6 = &var_570
void* i_3
FILETIME var_710
FILETIME fileTime
void var_700
FILETIME fileTime1
int32_t var_5ac
int32_t var_584[0x5]

do
    i_3 = i
    void var_420
    sub_4c84d0(&var_420, "save%03d.sav")
    i_3 = 1
    i_4 = SetErrorMode(i_3)
    int32_t ebx_1 = 0
    i_3 = &var_420
    int32_t var_728_1 = 0x1350bb0
    char* var_72c_2 = &data_1352000
    void fileName
    sub_4c84d0(&fileName, "%s\%s\%s")
    char var_6f0
    i_3 = &var_6f0
    HANDLE i_5 = FindFirstFileA(&fileName, i_3)
    
    if (i_5 != 0xffffffff)
        i_3 = i_5
        FindClose(i_3)
        ebx_1.b = (var_6f0 & 0x10) != 0
        ebx_1 += 1
    
    i_3 = i_4
    SetErrorMode(i_3)
    int32_t eax_4
    
    if (ebx_1 != 1)
        eax_4 = i << 2
        *(&var_584 + eax_4) = 0
    else
        i_3 = &var_710
        sub_4c3ba0(&var_700, ebx_1 + 3, &var_420, 0x1e, &var_700, &fileTime1, i_3)
        
        if (i_6 != 0)
            i_3 = &fileTime
            FileTimeToLocalFileTime(&var_710, i_3)
            i_3 = i_6
            FileTimeToSystemTime(&fileTime, i_3)
        
        eax_4 = i << 2
        *(&var_584 + eax_4) = 1
    
    *(&var_5ac + eax_4) = i
    i_6 += 0x10
    i += 1
while (i s< 5)

uint32_t i_1 = 0
int32_t* ebx_2 = &var_5ac
i_4 = 0

do
    uint32_t j = i_1
    
    if (i_1 s< 5)
        do
            int32_t edi = (&var_5ac)[j]
            int32_t eax_5 = *ebx_2
            fileTime.dwLowDateTime = eax_5
            
            if (var_584[edi] != 0)
                i_3 = &var_710
                SystemTimeToFileTime(&(&i_3)[eax_5 * 4 + 0x6d], i_3)
                i_3 = &fileTime1
                LocalFileTimeToFileTime(&var_710, i_3)
                i_3 = &var_710
                SystemTimeToFileTime(&(&i_3)[edi * 4 + 0x6d], i_3)
                i_3 = &var_700
                LocalFileTimeToFileTime(&var_710, i_3)
                i_3 = &var_700
                
                if (CompareFileTime(&fileTime1, i_3) s< 0)
                    uint32_t dwLowDateTime = fileTime.dwLowDateTime
                    *ebx_2 = edi
                    (&var_5ac)[j] = dwLowDateTime
            
            j += 1
        while (j s< 5)
        
        i_1 = i_4
    
    i_1 += 1
    ebx_2 = &ebx_2[1]
    i_4 = i_1
while (i_1 s< 5)

void var_568
void* esi = &var_568
void* i_2 = nullptr
int32_t var_598[0x5]
var_598[var_5ac] = 0
int32_t var_5a8
var_598[var_5a8] = 1
int32_t var_5a4
var_598[var_5a4] = 2
int32_t var_5a0
var_598[var_5a0] = 3
int32_t var_59c
var_598[var_59c] = 4
BOOL result

do
    bool cond:0_1 = *(&var_584 + i_2) == 0
    char var_520 = 0
    
    if (not(cond:0_1))
        int32_t eax_17 = *(&var_598 + i_2)
        char const* const var_72c_4
        
        if (eax_17 == 0)
            i_3 = zx.d(*(esi + 2))
            uint32_t var_728_12 = zx.d(*esi)
            var_72c_4 = &data_623f10
        else
            i_3 = zx.d(*(esi + 2))
            uint32_t var_728_11 = zx.d(*esi)
            
            if (eax_17 == 1)
                var_72c_4 = &data_623f20
            else
                var_72c_4 = "     %02d:%02d"
        
        sub_4c84d0(&var_520, var_72c_4)
    
    i_3 = &var_520
    result = SetDlgItemTextA(data_1af0a88, *(i_2 + 0x612fb0), i_3)
    i_2 += 4
    esi += 0x10
while (i_2 s< 0x14)

sub_5f02dd(eax_1 ^ &i_4)
return result
