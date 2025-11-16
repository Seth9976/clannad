// 函数: sub_699b50
// 地址: 0x699b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c92d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_444 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_444
int32_t var_434 = 0
int32_t var_8_1 = 0
int32_t ecx
int32_t var_42c = ecx
int32_t var_430 = 0
WCHAR* lpWideCharStr = nullptr
var_8_1.b = 1
HMODULE hFile = LoadLibraryExW(arg1, nullptr, 
    LOAD_LIBRARY_AS_IMAGE_RESOURCE | LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE)
HMODULE hFile_1 = hFile
HMODULE hFile_2 = hFile_1
enum WIN32_ERROR result

if (hFile_1 != 0)
label_699c09:
    HRSRC hResInfo = FindResourceW(hFile_1, arg2, arg3)
    
    if (hResInfo != 0)
        HGLOBAL lpMultiByteStr = LoadResource(hFile_1, hResInfo)
        HGLOBAL lpMultiByteStr_1 = lpMultiByteStr
        
        if (lpMultiByteStr != 0)
            int32_t eax_6 = SizeofResource(hFile_1, hResInfo)
            int32_t var_424_1 = eax_6
            
            if (eax_6 + 1 u>= eax_6)
                var_8_1.b = 2
                sub_69cc70(&lpWideCharStr, eax_6 + 1)
                int32_t var_8_2 = 1
                
                if (lpWideCharStr != 0)
                    int32_t eax_8 =
                        MultiByteToWideChar(3, 0, lpMultiByteStr, eax_6, lpWideCharStr, eax_6)
                    enum WIN32_ERROR result_1
                    
                    if (eax_8 != 0)
                        lpWideCharStr[eax_8] = 0
                        result_1 = sub_69a9b0(lpWideCharStr, arg4)
                    else
                        result_1 = sub_5c4a80()
                    
                    result = result_1
                else
                    result = 0x8007000e
            else
                result = 0x8007000e
        else
            result = sub_5c4a80()
    else
        result = sub_5c4a80()
    
    if (hFile_1 != 0)
        FreeLibrary(hFile_1)
else
    HMODULE hFile_3 = LoadLibraryExW(arg1, hFile, LOAD_LIBRARY_AS_DATAFILE)
    hFile_1 = hFile_3
    HMODULE hFile_4 = hFile_3
    
    if (hFile_1 != 0)
        goto label_699c09
    
    result = sub_5c4a80()

void var_418

if (lpWideCharStr != &var_418)
    std::_Timevec::~_Timevec(&lpWideCharStr)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
