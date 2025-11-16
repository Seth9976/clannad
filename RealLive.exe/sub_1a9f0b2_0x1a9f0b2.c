// 函数: sub_1a9f0b2
// 地址: 0x1a9f0b2
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void* ecx
void* var_4 = ecx
int32_t* esi = data_1c076c8
wchar16* lpWideCharStr = *esi

while (lpWideCharStr != 0)
    int32_t cbMultiByte =
        WideCharToMultiByte(1, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
    
    if (cbMultiByte == 0)
        return 0xffffffff
    
    void* lpMultiByteStr = sub_1a91fb2(cbMultiByte)
    
    if (lpMultiByteStr == 0)
        return 0xffffffff
    
    if (WideCharToMultiByte(1, 0, *esi, 0xffffffff, lpMultiByteStr, cbMultiByte, nullptr, nullptr)
            == 0)
        return 0xffffffff
    
    sub_1a9fd25(lpMultiByteStr, 0)
    lpWideCharStr = esi[1]
    esi = &esi[1]

return 0
