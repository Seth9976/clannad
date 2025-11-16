// 函数: sub_460c06
// 地址: 0x460c06
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
HANDLE eax = CreateFileA(arg1, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
    SECURITY_ANONYMOUS, nullptr)

if (eax == 0xffffffff)
    return 0x88760389

int32_t edi
int32_t var_14_1 = edi
uint32_t eax_1 = GetFileSize(eax, nullptr)
HANDLE eax_2

if (eax_1 != 0xffffffff)
    eax_2 = CreateFileMappingA(eax, nullptr, PAGE_READONLY, 0, 0, nullptr)

int32_t result

if (eax_1 == 0xffffffff || eax_2 == 0xffffffff)
    CloseHandle(eax)
    result = 0x8876038f
else
    struct MEMORY_MAPPED_VIEW_ADDRESS lpBaseAddress = MapViewOfFile(eax_2, FILE_MAP_READ, 0, 0, 0)
    int32_t result_1
    
    if (lpBaseAddress != 0)
        void*** eax_3 = sub_745f3f(0x24)
        void*** edi_2
        
        if (eax_3 == 0)
            edi_2 = nullptr
        else
            edi_2 = sub_4837f5(eax_3, eax, eax_2, lpBaseAddress, eax_1)
        
        if (edi_2 == 0)
            UnmapViewOfFile(lpBaseAddress)
            result_1 = 0x8007000e
            goto label_460cb2
        
        void*** eax_5 = sub_745f3f(0x30)
        void*** eax_6
        
        if (eax_5 == 0)
            eax_6 = nullptr
        else
            eax_6 = sub_460951(eax_5, arg2, edi_2)
        
        *arg3 = eax_6
        
        if (eax_6 != 0)
            result = 0
        else
            (**edi_2)(1)
            result = 0x8007000e
    else
        result_1 = 0x8876038f
    label_460cb2:
        CloseHandle(eax_2)
        CloseHandle(eax)
        result = result_1

return result
