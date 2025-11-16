// 函数: sub_42929f
// 地址: 0x42929f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
PSTR lpMultiByteStr_3 = arg2
int32_t edi
int32_t var_b4 = edi
PSTR lpMultiByteStr_1 = nullptr
int32_t result

if (lpMultiByteStr_3 == 0)
    result = 0x8876086c
else
    HANDLE eax_1
    
    if (arg3 == 0)
    label_42938e:
        eax_1 = CreateFileA(lpMultiByteStr_3, 0x80000000, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 
            FILE_FLAG_RANDOM_ACCESS, nullptr)
    label_42939a:
        *arg1 = eax_1
        j__free(lpMultiByteStr_1)
        void* hFile = *arg1
        
        if (hFile == 0xffffffff)
            GetLastError()
            result = 0x88760b59
        else
            HANDLE eax_2 = CreateFileMappingA(hFile, nullptr, PAGE_READONLY, 0, 0, nullptr)
            arg1[1] = eax_2
            
            if (eax_2 == 0xffffffff)
                GetLastError()
                result = 0x88760b59
            else
                uint32_t eax_3 = GetFileSize(*arg1, nullptr)
                arg1[3] = eax_3
                
                if (eax_3 == 0xffffffff)
                    GetLastError()
                    result = 0x88760b59
                else if (eax_3 == 0)
                    arg1[2] = 0
                    result = 0
                else
                    struct MEMORY_MAPPED_VIEW_ADDRESS eax_4 =
                        MapViewOfFile(arg1[1], FILE_MAP_READ, 0, 0, 0)
                    arg1[2] = eax_4
                    
                    if (eax_4 != 0)
                        result = 0
                    else
                        GetLastError()
                        result = 0x88760b59
    else
        OSVERSIONINFOA versionInformation
        versionInformation.dwOSVersionInfoSize = 0x94
        GetVersionExA(&versionInformation)
        
        if (versionInformation.dwPlatformId == 2)
            goto label_42935f
        
        int32_t cbMultiByte = WideCharToMultiByte(0xfde9, 0, lpMultiByteStr_3, 0xffffffff, nullptr, 
            0, nullptr, nullptr)
        PSTR lpMultiByteStr = sub_745f3f(cbMultiByte)
        lpMultiByteStr_1 = lpMultiByteStr
        
        if (lpMultiByteStr != 0)
            WideCharToMultiByte(0xfde9, 0, lpMultiByteStr_3, 0xffffffff, lpMultiByteStr, 
                cbMultiByte, nullptr, nullptr)
            PSTR lpMultiByteStr_2 = lpMultiByteStr_1
            arg3 = 0
            lpMultiByteStr_3 = lpMultiByteStr_1
        label_42935f:
            
            if (arg3 == 0)
                goto label_42938e
            
            eax_1 = CreateFileW(lpMultiByteStr_3, 0x80000000, FILE_SHARE_READ, nullptr, 
                OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, nullptr)
            goto label_42939a
        
        result = 0x8007000e

sub_745f2b(__security_cookie_1)
return result
