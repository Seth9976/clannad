// 函数: sub_1a9993b
// 地址: 0x1a9993b
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_4 = ecx
int32_t var_8 = ecx
int32_t eax = data_1c078ac
void* lpMultiByteStr_2 = nullptr
PWSTR esi = nullptr
PSTR penv = nullptr

if (eax == 0)
    esi = GetEnvironmentStringsW()
    
    if (esi == 0)
        penv = GetEnvironmentStrings()
        
        if (penv == 0)
            return nullptr
        
        data_1c078ac = 2
    label_1a99a1a:
        
        if (penv == 0)
            penv = GetEnvironmentStrings()
            
            if (penv == 0)
                return nullptr
        
        PSTR penv_1 = penv
        
        if (*penv != 0)
            while (true)
                penv_1 = &penv_1[1]
                
                if (*penv_1 == 0)
                    penv_1 = &penv_1[1]
                    
                    if (*penv_1 == 0)
                        break
        
        void* esi_1 = sub_1a91fb2(penv_1 - penv + 1)
        
        if (esi_1 != 0)
            sub_1a91aa0(esi_1, penv, penv_1 - penv + 1)
        else
            esi_1 = nullptr
        
        FreeEnvironmentStringsA(penv)
        return esi_1
    
    data_1c078ac = 1
else if (eax != 1)
    if (eax != 2)
        return nullptr
    
    goto label_1a99a1a

if (esi == 0)
    esi = GetEnvironmentStringsW()
    
    if (esi == 0)
        return nullptr

PWSTR eax_4 = esi

if (*esi != 0)
    while (true)
        eax_4 = &eax_4[1]
        
        if (*eax_4 == 0)
            eax_4 = &eax_4[1]
            
            if (*eax_4 == 0)
                break

int32_t cbMultiByte =
    WideCharToMultiByte(0, 0, esi, ((eax_4 - esi) s>> 1) + 1, nullptr, 0, nullptr, nullptr)

if (cbMultiByte != 0)
    void* lpMultiByteStr = sub_1a91fb2(cbMultiByte)
    void* lpMultiByteStr_1 = lpMultiByteStr
    
    if (lpMultiByteStr != 0)
        if (WideCharToMultiByte(0, 0, esi, ((eax_4 - esi) s>> 1) + 1, lpMultiByteStr, cbMultiByte, 
                nullptr, nullptr) == 0)
            sub_1a91ec9(lpMultiByteStr_1)
            lpMultiByteStr_1 = nullptr
        
        lpMultiByteStr_2 = lpMultiByteStr_1

FreeEnvironmentStringsW(esi)
return lpMultiByteStr_2
