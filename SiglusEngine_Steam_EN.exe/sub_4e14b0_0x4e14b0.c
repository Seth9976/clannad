// 函数: sub_4e14b0
// 地址: 0x4e14b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6059c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_440 = ebx
int32_t var_44c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_44c
int32_t* i = nullptr
wchar16* lpWideCharStr = arg1
int32_t var_42c = 0
int32_t var_8_1 = 0
int32_t ecx
int32_t var_430 = ecx
int32_t var_434 = 0
CHAR* var_41c = nullptr
var_8_1.b = 1
enum WIN32_ERROR result
void var_418

if (arg1 == 0)
label_4e1752:
    
    if (var_41c != &var_418)
        std::_Timevec::~_Timevec(&var_41c)
    
    while (i != 0)
        int32_t* i_2 = i
        i = *i
        _free(i_2)
    
    result = 0x8007000e
else
    int16_t* ecx_1 = arg1
    int16_t* eax_3
    
    do
        eax_3.w = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.w != 0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(((ecx_1 - &ecx_1[1]) s>> 1) + 1)
    int32_t cbMultiByte = eax_5 * 2
    int32_t edx_5 = adc.d(edx_3 << 1 | eax_5 u>> 0xffffffe1, 0, cbMultiByte u>= 0x80000000)
    int32_t var_438_1 = edx_5
    int32_t* ebx_2
    
    if (edx_5 != 0 || cbMultiByte - 0x80000000 u> 0xffffffff)
        ebx_2 = nullptr
    else
        char eax_8
        
        if (cbMultiByte s<= 0x400)
            eax_8 = sub_4d9150(cbMultiByte)
        
        if (cbMultiByte s> 0x400 || eax_8 == 0)
            if (0xffffffff - cbMultiByte u< 8)
                sub_4d9320(0x80070216)
                noreturn
            
            int32_t* i_4 = _malloc(cbMultiByte + 8)
            
            if (i_4 != 0)
                i = i_4
                *i_4 = 0
                int32_t* i_3 = i
                ebx_2 = &i_4[2]
                goto label_4e15b2
            
            ebx_2 = nullptr
        else
            __alloca_probe_16(cbMultiByte)
            int32_t* var_14_1 = &var_44c
            ebx_2 = &var_44c
        label_4e15b2:
            
            if (ebx_2 == 0)
                ebx_2 = nullptr
            else
                *ebx_2 = 0
                
                if (WideCharToMultiByte(3, 0, lpWideCharStr, 0xffffffff, ebx_2, cbMultiByte, 
                        nullptr, nullptr) == 0)
                    ebx_2 = nullptr
    
    if (ebx_2 == 0)
        goto label_4e1752
    
    HMODULE hFile = LoadLibraryExA(ebx_2, nullptr, 
        LOAD_LIBRARY_AS_IMAGE_RESOURCE | LOAD_LIBRARY_AS_DATAFILE_EXCLUSIVE)
    HMODULE hFile_1 = hFile
    HMODULE hFile_2 = hFile_1
    enum WIN32_ERROR result_1
    
    if (hFile_1 != 0)
    label_4e1634:
        HRSRC hResInfo = FindResourceA(hFile_1, arg2, arg3)
        
        if (hResInfo != 0)
            HGLOBAL eax_15 = LoadResource(hFile_1, hResInfo)
            
            if (eax_15 != 0)
                void* ebx_4 = SizeofResource(hFile_1, hResInfo)
                void* var_424_1 = ebx_4
                
                if (ebx_4 + 1 u>= ebx_4)
                    var_8_1.b = 2
                    sub_4e71f0(&var_41c, ebx_4 + 1)
                    int32_t var_8_2 = 1
                    
                    if (var_41c != 0)
                        sub_4d9360(_memcpy_s(var_41c, ebx_4, eax_15, ebx_4))
                        *(var_41c + ebx_4) = 0
                        result_1 = sub_4e27f0(var_41c, arg4)
                    else
                        result_1 = 0x8007000e
                else
                    result_1 = 0x8007000e
            else
                result_1 = sub_4d9430()
        else
            result_1 = sub_4d9430()
        
        if (hFile_1 != 0)
            FreeLibrary(hFile_1)
    else
        HMODULE hFile_3 = LoadLibraryExA(ebx_2, hFile, LOAD_LIBRARY_AS_DATAFILE)
        hFile_1 = hFile_3
        HMODULE hFile_4 = hFile_3
        
        if (hFile_1 != 0)
            goto label_4e1634
        
        result_1 = sub_4d9430()
    
    if (var_41c != &var_418)
        std::_Timevec::~_Timevec(&var_41c)
    
    while (i != 0)
        int32_t* i_1 = i
        i = *i
        _free(i_1)
    
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
