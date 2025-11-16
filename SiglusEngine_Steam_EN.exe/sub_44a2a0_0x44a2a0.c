// 函数: sub_44a2a0
// 地址: 0x44a2a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_5ec
int32_t eax_1 = __security_cookie ^ &var_5ec
data_1af4144 = data_1332b54
data_70300c = data_1332b60
void* i = nullptr
int32_t eax_4 = data_1332b64
data_1af4148 = 0
data_7030dc = eax_4
int32_t* ecx_1

do
    *(i + 0x1af41d0) = 0
    *(i + 0x1af4150) = 0
    char eax_5
    eax_5, ecx_1 = sub_4d18c0(2)
    
    if ((eax_5 & 1) == 0)
        int32_t* var_600_1 = ecx_1
        uint32_t eax_8 = (sub_4d18c0(2) & 0xf) + 3
        ecx_1 = sub_4d6960(eax_8, i + 0x1af4150, i + 0x1af41d0, eax_8, "HHX_TMPBUF")
    
    i += 4
while (i s< 0x80)

char* var_5fc = &data_1af4560
uint32_t* var_600_3 = &var_5ec
int32_t* var_604 = &data_1af4558
uint32_t uMode
HGLOBAL hMem_7
sub_446b30(&hMem_7, &data_1af454c, ecx_1, &data_1af4550, &data_1af4554, &data_1392cc0, 
    &data_1392cbc, &hMem_7, &uMode)
WIN32_FIND_DATAA findFileData
void var_420

if (data_1af4560 != 0)
    uint32_t uMode_1 = SetErrorMode(SEM_FAILCRITICALERRORS)
    uint32_t esi = 0
    sub_4cfd70(&var_420, &data_1af4560)
    HANDLE hFindFile = FindFirstFileA(&var_420, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        int32_t eax_10
        eax_10.b = (findFileData.dwFileAttributes.b & 0x10) != 0
        var_5ec = eax_10 + 1
        esi = eax_10 + 1
    
    SetErrorMode(uMode_1)
    
    if (esi == 2)
        sub_4cfd70(&data_1352000, &data_1af4560)
        sub_4cfd70(0x1352c30, &data_1af4560)

int32_t eax_12 = sub_41bf40("RLDEBUG.DLL")
data_1392cb8 = eax_12

if (eax_12 == 0)
    data_1392cb8 = sub_41bf40("RLDEBUGDB.DLL")

sub_432150()
int32_t eax_14
int32_t ecx_4
eax_14, ecx_4 = sub_444950()
int32_t var_5fc_4 = ecx_4
int128_t var_5e0
__builtin_memset(&var_5e0, 0, 0x14)
int32_t ecx_6 = sub_4c43b0(eax_14, nullptr, &var_5e0, 5, 0x18, "*.ttf")
int32_t i_8 = var_5e0:8.d

if (i_8 s> 0)
    int32_t* esi_2 = var_5e0:4.d + 4
    int32_t i_1
    
    do
        int32_t var_5fc_5 = *esi_2
        int32_t var_600_5 = 0x134ff80
        char* var_604_1 = &data_1352208
        sub_4c84d0(&var_420, "%s\%s\%s")
        ecx_6 = AddFontResourceExA(&var_420, FR_PRIVATE, nullptr)
        esi_2 = &esi_2[4]
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

HGLOBAL hMem = var_5e0.d
enum WAIT_EVENT (__stdcall* const eax_15)(HANDLE hHandle, uint32_t dwMilliseconds) =
    WaitForSingleObject

if (hMem != 0)
    int32_t ebx = data_1af413c
    char eax_16
    
    if (ebx != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_16, ecx_6 = sub_4d6b80(&var_5e0)
    
    if (ebx == 0 || eax_16 != 0)
        GlobalUnlock(hMem)
        ecx_6 = GlobalFree(hMem)
        var_5e0.d = 0
        var_5e0:4.d = 0
        
        if (ebx != 0)
            sub_4d6500()
            ecx_6 = ReleaseSemaphore(data_7027a8, 1, nullptr)
    
    eax_15 = WaitForSingleObject
else
    var_5e0:4.d = 0

HGLOBAL hMem_1 = var_5e0:0xc.d

if (hMem_1 != 0)
    int32_t ebx_1 = data_1af413c
    
    if (ebx_1 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_15, ecx_6 = sub_4d6b80(&var_5e0:0xc)
    
    if (ebx_1 == 0 || eax_15.b != 0)
        GlobalUnlock(hMem_1)
        eax_15, ecx_6 = GlobalFree(hMem_1)
        
        if (ebx_1 != 0)
            sub_4d6500()
            eax_15, ecx_6 = ReleaseSemaphore(data_7027a8, 1, nullptr)

int32_t var_5fc_10 = ecx_6
__builtin_memset(&var_5e0, 0, 0x14)
void* eax_17
int32_t ecx_10
eax_17, ecx_10 = sub_4c43b0(eax_15, nullptr, &var_5e0, 5, 0x18, "*.ttc")
int32_t i_9 = var_5e0:8.d

if (i_9 s> 0)
    int32_t* esi_4 = var_5e0:4.d + 4
    int32_t i_2
    
    do
        int32_t var_5fc_11 = *esi_4
        int32_t var_600_8 = 0x134ff80
        char* var_604_5 = &data_1352208
        sub_4c84d0(&var_420, "%s\%s\%s")
        eax_17, ecx_10 = AddFontResourceExA(&var_420, FR_PRIVATE, nullptr)
        esi_4 = &esi_4[4]
        i_2 = i_9
        i_9 -= 1
    while (i_2 != 1)

HGLOBAL hMem_2 = var_5e0.d

if (hMem_2 != 0)
    int32_t ebx_2 = data_1af413c
    
    if (ebx_2 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_17, ecx_10 = sub_4d6b80(&var_5e0)
    
    if (ebx_2 == 0 || eax_17.b != 0)
        GlobalUnlock(hMem_2)
        eax_17, ecx_10 = GlobalFree(hMem_2)
        var_5e0.d = 0
        var_5e0:4.d = 0
        
        if (ebx_2 != 0)
            sub_4d6500()
            eax_17, ecx_10 = ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    var_5e0:4.d = hMem_2

HGLOBAL hMem_3 = var_5e0:0xc.d

if (hMem_3 != 0)
    int32_t ebx_3 = data_1af413c
    
    if (ebx_3 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_17, ecx_10 = sub_4d6b80(&var_5e0:0xc)
    
    if (ebx_3 == 0 || eax_17.b != 0)
        GlobalUnlock(hMem_3)
        eax_17, ecx_10 = GlobalFree(hMem_3)
        
        if (ebx_3 != 0)
            sub_4d6500()
            eax_17, ecx_10 = ReleaseSemaphore(data_7027a8, 1, nullptr)

int32_t var_5fc_16 = ecx_10
__builtin_memset(&var_5e0, 0, 0x14)
sub_4c43b0(eax_17, nullptr, &var_5e0, 5, 0x18, "*.otf")
int32_t i_10 = var_5e0:8.d

if (i_10 s> 0)
    int32_t* esi_6 = var_5e0:4.d + 4
    int32_t i_3
    
    do
        int32_t var_5fc_17 = *esi_6
        int32_t var_600_11 = 0x134ff80
        char* var_604_9 = &data_1352208
        sub_4c84d0(&var_420, "%s\%s\%s")
        AddFontResourceExA(&var_420, FR_PRIVATE, nullptr)
        esi_6 = &esi_6[4]
        i_3 = i_10
        i_10 -= 1
    while (i_3 != 1)

HGLOBAL hMem_4 = var_5e0.d

if (hMem_4 != 0)
    int32_t edi_3 = data_1af413c
    char eax_41
    
    if (edi_3 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_41 = sub_4d6b80(&var_5e0)
    
    if (edi_3 == 0 || eax_41 != 0)
        GlobalUnlock(hMem_4)
        GlobalFree(hMem_4)
        var_5e0.d = 0
        var_5e0:4.d = 0
        
        if (edi_3 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)
else
    var_5e0:4.d = hMem_4

HGLOBAL hMem_5 = var_5e0:0xc.d

if (hMem_5 != 0)
    int32_t edi_2 = data_1af413c
    char eax_18
    
    if (edi_2 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_18 = sub_4d6b80(&var_5e0:0xc)
    
    if (edi_2 == 0 || eax_18 != 0)
        GlobalUnlock(hMem_5)
        GlobalFree(hMem_5)
        
        if (edi_2 != 0)
            sub_4d6500()
            ReleaseSemaphore(data_7027a8, 1, nullptr)

int32_t ecx_15 = data_702fc0
__builtin_memset(&data_134ce50, 0, 0x1c)
__builtin_memset(&data_134ce6c, 0xff, 0x50)

if (ecx_15 != 0)
    sub_41cac0()
    ecx_15 = data_702fc0

sub_410d80()

if (ecx_15 != 0)
    if (data_1392714 != 0)
        ecx_15 = 0
    
    data_702fc0 = ecx_15

void* i_4 = &data_108fa68
data_1af4140 = data_108f334 << 0x14
int32_t eax_21
eax_21.b = ecx_15 != 0
int32_t esi_7 = 0
data_1af413c = eax_21
int32_t ecx_16

do
    void* i_7 = i_4
    void var_218
    sub_4c84d0(&var_218, "%s.pak")
    var_5ec = SetErrorMode(SEM_FAILCRITICALERRORS)
    int32_t ebx_4 = 0
    void* var_5fc_20 = &var_218
    void* var_600_13 = &data_13517e0
    sub_4c84d0(&var_420, "%s\%s")
    HANDLE hFindFile_1 = FindFirstFileA(&var_420, &findFileData)
    
    if (hFindFile_1 != 0xffffffff)
        FindClose(hFindFile_1)
        ebx_4.b = (findFileData.dwFileAttributes.b & 0x10) != 0
        ebx_4 += 1
    
    ecx_16 = SetErrorMode(var_5ec)
    
    if (ebx_4 == 1)
        if (esi_7 s>= 0)
            ecx_16 = sub_4c50b0(esi_7, &var_218)
        
        *((esi_7 << 2) + &data_703180) = esi_7
    
    i_4 += 0x4c
    esi_7 += 1
while (i_4 s< &data_108fe90)

int32_t var_600_15 = ecx_16
data_1af4138 = 0
data_1af4134 = 0
data_1af4130 = 0
data_1af412c = 0
int32_t eax_23 = sub_4d18c0(2)
int32_t edx_3 = 0
int32_t var_600_17 = sub_4d6960(divu.dp.d(edx_3:eax_23, 0x36e), &data_1af4134, &data_1af4138, 
    modu.dp.d(edx_3:eax_23, 0x36e) + 0x74, "MEMX")
int32_t eax_25 = sub_4d18c0(2)
int32_t edx_6 = 0
sub_4d6960(divu.dp.d(edx_6:eax_25, 0x2ba), &data_1af412c, &data_1af4130, 
    modu.dp.d(edx_6:eax_25, 0x2ba) + 0x57, "HHX_SPEEDMODE")
sub_446e20()
sub_447ed0()
sub_447fd0()
int32_t var_600_19 = sub_448260()
data_1af4128 = 0
data_1af4124 = 0
data_1af4120 = 0
data_1af411c = 0
int32_t eax_27 = sub_4d18c0(2)
int32_t edx_9 = 0
int32_t var_600_21 = sub_4d6960(divu.dp.d(edx_9:eax_27, 0x7d), &data_1af4124, &data_1af4128, 
    modu.dp.d(edx_9:eax_27, 0x7d) + 0x61, "EXEVENT_COUNT_VAL")
int32_t eax_29 = sub_4d18c0(2)
int32_t edx_12 = 0
int32_t ecx_21 = sub_4d6960(divu.dp.d(edx_12:eax_29, 0x13c), &data_1af411c, &data_1af4120, 
    modu.dp.d(edx_12:eax_29, 0x13c) + 0x27, "EXEVENT_COUNT_CHECK")
data_1af4118 = 0
data_1af4114 = 0
data_1af4110 = 0
data_1af410c = 0
int32_t var_600_23 = ecx_21
uint32_t eax_33 = (sub_4d18c0(2) & 0x3f) + 0x22
int32_t var_600_25 = sub_4d6960(eax_33, &data_1af4114, &data_1af4118, eax_33, "EXEVENT_COUNT2_VAL")
int32_t eax_34 = sub_4d18c0(2)
int32_t edx_15 = 0
int32_t ecx_23 = sub_4d6960(divu.dp.d(edx_15:eax_34, 0x9b), &data_1af410c, &data_1af4110, 
    modu.dp.d(edx_15:eax_34, 0x9b) + 0x5a, "EXEVENT_COUNT2_CHECK")
data_1af4108 = 0
data_1af4104 = 0
data_1af4100 = 0
data_1af40fc = 0
int32_t var_600_27 = ecx_23
int32_t eax_36 = sub_4d18c0(2)
int32_t edx_18 = 0
int32_t var_600_29 = sub_4d6960(divu.dp.d(edx_18:eax_36, 0x319), &data_1af4104, &data_1af4108, 
    modu.dp.d(edx_18:eax_36, 0x319) + 0x4a, "EXEVENT_COUNT3_VAL")
int32_t eax_38 = sub_4d18c0(2)
int32_t edx_21 = 0
sub_4d6960(divu.dp.d(edx_21:eax_38, 0x1ce), &data_1af40fc, &data_1af4100, 
    modu.dp.d(edx_21:eax_38, 0x1ce) + 0x14, "EXEVENT_COUNT3_CHECK")
sub_448440()
sub_448560()
char eax_40 = data_13339d8

if (eax_40 == 0)
    char* edx_24 = &data_108f85c
    char* ecx_25 = &data_13339d8
    
    if (data_108f85c != eax_40)
        do
            eax_40 = *edx_24
            
            if (eax_40 u< 0x80)
            label_44abd1:
                *ecx_25 = eax_40
                ecx_25 = &ecx_25[1]
                edx_24 = &edx_24[1]
            else
                if (eax_40 u< 0xa0)
                    if (eax_40 u>= 0xfe)
                        goto label_44abd1
                else if (eax_40 u<= 0xdf || eax_40 u>= 0xfe)
                    goto label_44abd1
                
                *ecx_25 = eax_40
                ecx_25[1] = edx_24[1]
                ecx_25 = &ecx_25[2]
                edx_24 = &edx_24[2]
        while (*edx_24 != 0)
    
    *ecx_25 = 0
    eax_40 = data_13339d8

char* edx_25 = &data_13339d8
char* ecx_27 = &data_208c4a0

if (eax_40 != 0)
    do
        eax_40 = *edx_25
        
        if (eax_40 u< 0x80)
        label_44ac16:
            *ecx_27 = eax_40
            ecx_27 = &ecx_27[1]
            edx_25 = &edx_25[1]
        else
            if (eax_40 u< 0xa0)
                if (eax_40 u>= 0xfe)
                    goto label_44ac16
            else if (eax_40 u<= 0xdf || eax_40 u>= 0xfe)
                goto label_44ac16
            
            *ecx_27 = eax_40
            ecx_27[1] = edx_25[1]
            ecx_27 = &ecx_27[2]
            edx_25 = &edx_25[2]
    while (*edx_25 != 0)

data_641b3c = data_1af452c
bool cond:1 = data_1af4534 == 0
*ecx_27 = 0
int32_t eax_43
eax_43.b = cond:1
data_63e788 = eax_43
sub_4487e0()
int32_t ecx_28 = data_1af4510

if (ecx_28 u<= 0x19)
    if (data_1333e0c == 0)
        data_1352208 = ecx_28.b + 0x41
    
    if (data_1333e10 == 0)
        data_1352410 = ecx_28.b + 0x41
    
    if (data_1333e14 == 0)
        data_1352618 = ecx_28.b + 0x41
    
    if (data_1333e18 == 0)
        ecx_28.b += 0x41
        data_1352820 = ecx_28.b

data_1af40f8 = 0
sub_4489f0()
sub_448ab0()
sub_448c60()
int32_t var_600_32 = sub_448d00()
*data_1af4124 = 0
*data_1af411c = 0
int32_t eax_47 = sub_4d18c0(2)
int32_t edx_26 = 0
int32_t ecx_31 = sub_4d6960(divu.dp.d(edx_26:eax_47, 0x21b), data_1af411c, data_1af4124, 
    modu.dp.d(edx_26:eax_47, 0x21b) + 0x50, "RANDAM_TARGET")
*data_1af4114 = 0
int32_t var_600_34 = ecx_31
*data_1af410c = 0
int32_t eax_51 = sub_4d18c0(2)
int32_t edx_30 = 0
int32_t ecx_33 = sub_4d6960(divu.dp.d(edx_30:eax_51, 0x8b), data_1af410c, data_1af4114, 
    modu.dp.d(edx_30:eax_51, 0x8b) + 0x26a, "RANDAM_TARGET2")
*data_1af4104 = 0
int32_t var_600_36 = ecx_33
*data_1af40fc = 0
int32_t eax_55 = sub_4d18c0(2)
int32_t edx_34 = 0
sub_4d6960(divu.dp.d(edx_34:eax_55, 0x45), data_1af40fc, data_1af4104, 
    modu.dp.d(edx_34:eax_55, 0x45) + 0x215, "RANDAM_TARGET3")
sub_448e30()

if (data_702fc0 != 0 && data_1392cb0 != 0)
    *(data_1392718 - (data_139271c << 2)) = 0

int32_t var_600_38 = sub_4496a0()
*data_1af4134 = 0
*data_1af412c = 0
int32_t eax_61 = sub_4d18c0(2)
int32_t edx_38 = 0
sub_4d6960(divu.dp.d(edx_38:eax_61, 0x213), data_1af412c, data_1af4134, 
    modu.dp.d(edx_38:eax_61, 0x213) + 0x1d, "HIGHT_POINT")
sub_4497c0()
char const* const var_5fc_26 = "MoviePlayCheck.sav"
int32_t var_600_40 = 0x1350bb0
char* var_604_14 = &data_1352000
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
uint32_t buffer_1 = 0
sub_4c84d0(&var_420, "%s\%s\%s")
HANDLE hFindFile_2 = FindFirstFileA(&var_420, &findFileData)

if (hFindFile_2 != 0xffffffff)
    FindClose(hFindFile_2)
    int32_t eax_64
    eax_64.b = (findFileData.dwFileAttributes.b & 0x10) != 0
    var_5ec = eax_64 + 1
    buffer_1 = eax_64 + 1

SetErrorMode(uMode)

if (buffer_1 == 1)
    char const* const var_5fc_30 = "MoviePlayCheck.sav"
    int32_t var_600_42 = 0x1350bb0
    char* var_604_15 = &data_1352000
    uint32_t buffer = buffer_1
    sub_4c84d0(&var_420, "%s\%s\%s")
    HANDLE eax_66 = CreateFileA(&var_420, 0xc0000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
        CREATE_ALWAYS, 0x8000080, nullptr)
    
    if (eax_66 != 0xffffffff)
        WriteFile(eax_66, &buffer, 4, &var_5ec, nullptr)
        CloseHandle(eax_66)

sub_4498a0()

if (data_702fc0 != 0 && data_108f34c != 0)
    hMem_7 = data_7031b8
    void* var_5fc_32 = &data_108fa8c
    void* var_600_44 = &data_13517e0
    uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
    uint32_t esi_9 = 0
    sub_4c84d0(&var_420, "%s\%s")
    HANDLE hFindFile_3 = FindFirstFileA(&var_420, &findFileData)
    
    if (hFindFile_3 != 0xffffffff)
        FindClose(hFindFile_3)
        int32_t eax_69
        eax_69.b = (findFileData.dwFileAttributes.b & 0x10) != 0
        var_5ec = eax_69 + 1
        esi_9 = eax_69 + 1
    
    SetErrorMode(uMode)
    
    if (esi_9 != 1)
        HGLOBAL hMem_8 = hMem_7
        void* eax_71
        
        if (hMem_8 != 0xffffffff)
            eax_71 = sub_4c51f0(hMem_8, &data_108fa8c, hMem_8, nullptr)
        
        if (hMem_8 == 0xffffffff || eax_71 == 0)
            void* var_5fc_36 = &data_108fa8c
            void* var_600_46 = &data_13517e0
            sub_4c84d0(&data_7027c0, 0x617560)
            MessageBoxA(nullptr, &data_7027c0, 0x617078, MB_OK)

sub_48e5b0()
*(*data_1af412c + 0xa) = 0xf
sub_449c10()
int32_t* eax_74 = data_1af410c
hMem_7 = nullptr
uMode = 0
GetModuleFileNameA(data_134cebc, *eax_74, 0x208)
var_5ec = sub_4c4810(&uMode, &hMem_7, *data_1af410c, &uMode, "CODE_DATA", 0xffffffff, 0xffffffff)

if (hMem_7 != 0)
    char* ecx_43 = *data_1af40fc
    char* edx_44 = *data_1af410c
    
    if (ecx_43 != 0)
        *ecx_43 = 0
        
        if (edx_44 != 0 && *edx_44 != 0)
            int32_t edi_4 = 0xffffffff
            char* eax_77 = edx_44
            int32_t esi_10 = 0
            
            do
                char ebx_6 = *eax_77
                
                if (ebx_6 u< 0x80)
                label_44b097:
                    
                    if (ebx_6 == 0x5c)
                        edi_4 = esi_10
                    
                    eax_77 = &eax_77[1]
                    esi_10 += 1
                else if (ebx_6 u< 0xa0)
                    if (ebx_6 u>= 0xfe)
                        goto label_44b097
                    
                    eax_77 = &eax_77[2]
                    esi_10 += 2
                else
                    if (ebx_6 u<= 0xdf || ebx_6 u>= 0xfe)
                        goto label_44b097
                    
                    eax_77 = &eax_77[2]
                    esi_10 += 2
            while (*eax_77 != 0)
            
            if (edi_4 == 0xffffffff)
                do
                    eax_77.b = *edx_44
                    
                    if (eax_77.b u< 0x80)
                    label_44b102:
                        *ecx_43 = eax_77.b
                        ecx_43 = &ecx_43[1]
                        edx_44 = &edx_44[1]
                    else
                        if (eax_77.b u< 0xa0)
                            if (eax_77.b u>= 0xfe)
                                goto label_44b102
                        else if (eax_77.b u<= 0xdf || eax_77.b u>= 0xfe)
                            goto label_44b102
                        
                        *ecx_43 = eax_77.b
                        eax_77.b = edx_44[1]
                        ecx_43[1] = eax_77.b
                        ecx_43 = &ecx_43[2]
                        edx_44 = &edx_44[2]
                while (*edx_44 != 0)
                
                *ecx_43 = 0
            else
                void* edx_46 = &edx_44[1 + edi_4]
                
                if (*edx_46 != 0)
                    do
                        eax_77.b = *edx_46
                        
                        if (eax_77.b u< 0x80)
                        label_44b0d2:
                            *ecx_43 = eax_77.b
                            ecx_43 = &ecx_43[1]
                            edx_46 += 1
                        else
                            if (eax_77.b u< 0xa0)
                                if (eax_77.b u>= 0xfe)
                                    goto label_44b0d2
                            else if (eax_77.b u<= 0xdf || eax_77.b u>= 0xfe)
                                goto label_44b0d2
                            
                            *ecx_43 = eax_77.b
                            eax_77.b = *(edx_46 + 1)
                            ecx_43[1] = eax_77.b
                            ecx_43 = &ecx_43[2]
                            edx_46 += 2
                    while (*edx_46 != 0)
                    
                    *ecx_43 = 0
    
    char* ecx_44 = *data_1af40fc
    
    if (ecx_44 != 0)
        while (true)
            int32_t* eax_78
            eax_78.b = *ecx_44
            
            if (eax_78.b u>= 0x80 && (eax_78.b u< 0xa0 || eax_78.b u> 0xdf) && eax_78.b u< 0xfe)
                ecx_44 = &ecx_44[2]
                continue
            
            if (eax_78.b == 0)
                break
            
            if (eax_78.b u>= 0x61 && eax_78.b u<= 0x7a)
                eax_78.b -= 0x20
                *ecx_44 = eax_78.b
            
            ecx_44 = &ecx_44[1]
    
    int32_t edx_47 = 0
    void* esi_11 = *data_1af40fc
    char* ecx_45 = esi_11
    int32_t edi_6
    
    if (ecx_45 != 0)
        int32_t* eax_79
        eax_79.b = *ecx_45
        
        while (eax_79.b != 0)
            if (eax_79.b u< 0x80)
                edx_47 += 1
                ecx_45 = &ecx_45[1]
            else if (eax_79.b u< 0xa0)
                if (eax_79.b u>= 0xfe)
                    edx_47 += 1
                    ecx_45 = &ecx_45[1]
                else
                    edx_47 += 2
                    ecx_45 = &ecx_45[2]
            else if (eax_79.b u<= 0xdf || eax_79.b u>= 0xfe)
                edx_47 += 1
                ecx_45 = &ecx_45[1]
            else
                edx_47 += 2
                ecx_45 = &ecx_45[2]
            
            eax_79.b = *ecx_45
        
        edi_6 = edx_47 + 1
    else
        edi_6 = 0
    
    if (edi_6 - 1 s> 0)
        int32_t i_5 = 0
        
        do
            uint32_t eax_80 = zx.d(i_5.b)
            esi_11 += 1
            i_5 += 1
            eax_80.b = *(eax_80 + 0x610a70)
            *(esi_11 - 1) ^= eax_80.b
        while (i_5 s< edi_6 - 1)
    
    uint32_t ebx_7 = var_5ec
    int32_t esi_12 = 0
    uint32_t uMode_2 = uMode
    
    if (ebx_7 s> 0)
        do
            uMode_2 += 1
            int32_t eax_82
            int32_t edx_48
            edx_48:eax_82 = sx.q(esi_12)
            esi_12 += 1
            int32_t eax_84
            eax_84.b = *(mods.dp.d(edx_48:eax_82, edi_6 - 1) + *data_1af40fc)
            *(uMode_2 - 1) ^= eax_84.b
        while (esi_12 s< ebx_7)
    
    char var_5c8
    _memset(&var_5c8, 0, 0x49)
    var_5c8 = 0x80
    int32_t eax_86 = (ebx_7 + 1) & 0x3f
    int32_t ecx_46 = 0x41
    
    if (eax_86 s> 0x38)
        ecx_46 = 0x81
    
    uint32_t uMode_3 = uMode
    int32_t ecx_47 = ecx_46 - eax_86
    uint32_t eax_87 = ebx_7 << 3
    var_5ec = eax_87
    int32_t var_5d0
    *(&var_5d0 + ecx_47) = eax_87.b
    eax_87.b = var_5ec:2.b
    *(&var_5d0:2 + ecx_47) = eax_87.b
    eax_87.b = var_5ec:3.b
    *(&var_5d0:1 + ecx_47) = eax_87:1.b
    *(&var_5d0:3 + ecx_47) = eax_87.b
    uint32_t eax_89 = (ecx_47 + ebx_7) u>> 6
    int32_t var_57c_1 = 0x67452301
    int32_t var_578_1 = 0xefcdab89
    int32_t var_574_1 = 0x98badcfe
    int32_t var_570_1 = 0x10325476
    uint32_t var_56c_1 = eax_89
    uint32_t var_568_1 = ebx_7
    sub_4d2660(eax_89, uMode_3, &var_5c8, ebx_7)
    int32_t esi_13 = data_1af413c
    **data_1af411c = var_57c_1.o
    char eax_92
    
    if (esi_13 != 0)
        WaitForSingleObject(data_7027a8, 0xffffffff)
        eax_92 = sub_4d6b80(&hMem_7)
    
    if (esi_13 == 0 || eax_92 != 0)
        HGLOBAL hMem_6 = hMem_7
        GlobalUnlock(hMem_6)
        GlobalFree(hMem_6)
        
        if (esi_13 != 0)
            int32_t i_11 = data_20c0500
            int32_t ecx_50 = 0
            int32_t* eax_93 = data_20c04fc
            int32_t edx_50 = 0xc00000
            data_1c04c58 = 0
            data_1c04c60 = 0xc00000
            
            if (i_11 s> 0)
                int32_t i_6
                
                do
                    if (*eax_93 != 0)
                        ecx_50 += 1
                        edx_50 += eax_93[1]
                    
                    eax_93 = &eax_93[5]
                    i_6 = i_11
                    i_11 -= 1
                while (i_6 != 1)
                int32_t eax_94 = data_1c04c54
                data_1c04c58 = ecx_50
                
                if (eax_94 u< ecx_50)
                    eax_94 = ecx_50
                
                data_1c04c60 = edx_50
                data_1c04c54 = eax_94
            
            int32_t eax_95 = data_1c04c5c
            HANDLE hSemaphore = data_7027a8
            
            if (eax_95 u< edx_50)
                eax_95 = edx_50
            
            data_1c04c5c = eax_95
            ReleaseSemaphore(hSemaphore, 1, nullptr)

*(*data_1af412c + 6) = 0xa2
sub_449d40()
*(*data_1af412c + 0xc) = 2
*(*data_1af412c + 1) = 0xbb
*(*data_1af412c + 3) = 0xc4
*(*data_1af412c + 0xd) = 0xe9
*(*data_1af412c + 7) = 0xbb
sub_449ff0()
*(*data_1af412c + 0xf) = 0xd2
sub_44a130()
*(*data_1af412c + 8) = 0x23
*(*data_1af412c + 2) = 0xed
*(*data_1af412c + 5) = 0xaf
**data_1af412c = 0x2a
*(*data_1af412c + 0xe) = 0x74
*(*data_1af412c + 9) = 0x5f
*(*data_1af412c + 0xb) = 0x6d
*(*data_1af412c + 4) = 0x34
int32_t eax_126
eax_126.b = data_1374758 != 0xffffffff
data_1374758 = eax_126
sub_5f02dd(eax_1 ^ &var_5ec)
return 0
