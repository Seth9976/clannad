// 函数: sub_698c70
// 地址: 0x698c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct INITCOMMONCONTROLSEX picce
int32_t eax_1 = __security_cookie ^ &picce
__wsetlocale(0, u"chinese")
data_4ebe3a8 = arg1
int32_t var_450
sub_52e820(&var_450, arg2)
sub_52e3c0(&data_4ebe3b0, &var_450, 0, 0xffffffff)
int32_t var_43c

if (var_43c u>= 8)
    j__free(var_450)

int16_t filename
GetModuleFileNameW(nullptr, &filename, 0x104)
int32_t var_46c = 7
int32_t var_470 = 0
int16_t var_480 = 0
int32_t ecx_1

if (filename != 0)
    int16_t* ecx_2 = &filename
    int16_t i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    void var_41e
    ecx_1 = (ecx_2 - &var_41e) s>> 1
else
    ecx_1 = 0

sub_52e720(&var_480, &filename, ecx_1)
int32_t* lpText_1
int16_t* eax_2 = sub_6b3e90(&lpText_1, &var_480)
int32_t* lpPathName = &data_4ebe3c8

if (eax_2 != &data_4ebe3c8)
    sub_52e3c0(&data_4ebe3c8, eax_2, 0, 0xffffffff)

int32_t var_484

if (var_484 u>= 8)
    j__free(lpText_1)

int32_t var_438
int32_t* eax_4 = sub_6b4150(&lpText_1, sub_6b3e20(&var_438, &var_480))

if (eax_4 != &data_4ebe3e0)
    sub_52e3c0(&data_4ebe3e0, eax_4, 0, 0xffffffff)

if (var_484 u>= 8)
    j__free(lpText_1)

int32_t var_484_1 = 7
int32_t var_488 = 0
lpText_1.w = 0
int32_t var_424

if (var_424 u>= 8)
    j__free(var_438)

if (data_4ebe3dc u>= 8)
    lpPathName = data_4ebe3c8

SetCurrentDirectoryW(lpPathName)
int16_t pszPath
SHGetSpecialFolderPathW(nullptr, &pszPath, 5, 0)
int32_t var_454 = 7
int32_t var_458 = 0
int16_t var_468 = 0
int32_t ecx_8

if (pszPath != 0)
    int16_t* ecx_9 = &pszPath
    int16_t i_1
    
    do
        i_1 = *ecx_9
        ecx_9 = &ecx_9[1]
    while (i_1 != 0)
    void var_216
    ecx_8 = (ecx_9 - &var_216) s>> 1
else
    ecx_8 = 0

sub_52e720(&var_468, &pszPath, ecx_8)
sub_52e3c0(&data_4ebe410, &var_468, 0, 0xffffffff)

if (var_454 u>= 8)
    j__free(var_468.d)

CoInitialize(nullptr)
picce.dwSize = 8
picce.dwICC = 0x809
InitCommonControlsEx(&picce)
HMODULE hLibModule = LoadLibraryW(u"riched32.dll")

if (hLibModule != 0)
    sub_69b8e0()
    FreeLibrary(hLibModule)
    CoUninitialize()
else
    int32_t var_484_2 = 7
    HMODULE hLibModule_1 = hLibModule
    lpText_1.w = hLibModule.w
    sub_52e720(&lpText_1, u"riched32.dll", 0x29)
    int32_t* lpText = &lpText_1
    
    if (var_484_2 u>= 8)
        lpText = lpText_1
    
    MessageBoxW(data_4ebe3ac, lpText, 0xaef64c, MB_ICONEXCLAMATION)
    
    if (var_484_2 u>= 8)
        j__free(lpText_1)

if (var_46c u>= 8)
    j__free(var_480.d)

sub_745f2b(eax_1 ^ &picce)
return 0
