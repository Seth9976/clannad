// 函数: ___crtGetEnvironmentStringsA
// 地址: 0x5f828d
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
PWSTR eax = GetEnvironmentStringsW()

if (eax == 0)
    return nullptr

PWSTR esi_1 = eax

if (*eax != 0)
    while (true)
        esi_1 = &esi_1[1]
        
        if (*esi_1 == 0)
            esi_1 = &esi_1[1]
            
            if (*esi_1 == 0)
                break

int32_t cbMultiByte =
    WideCharToMultiByte(0, 0, eax, ((esi_1 - eax) s>> 1) + 1, nullptr, 0, nullptr, nullptr)

if (cbMultiByte != 0)
    PSTR lpMultiByteStr = sub_5f6ab6(cbMultiByte)
    
    if (lpMultiByteStr != 0)
        if (WideCharToMultiByte(0, 0, eax, ((esi_1 - eax) s>> 1) + 1, lpMultiByteStr, cbMultiByte, 
                nullptr, nullptr) == 0)
            _free(lpMultiByteStr)
            lpMultiByteStr = nullptr
        
        FreeEnvironmentStringsW(eax)
        return lpMultiByteStr

FreeEnvironmentStringsW(eax)
return nullptr
