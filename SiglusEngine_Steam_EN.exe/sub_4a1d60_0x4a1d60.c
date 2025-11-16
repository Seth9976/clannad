// 函数: sub_4a1d60
// 地址: 0x4a1d60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

for (void* i = &data_1087460; i s< 0x108eb60; i += 0x3b8)
    sub_4d6c40(i, i + 4)
    sub_4d6c40(i + 0x14, i + 0x18)
    sub_4d6c40(i + 0x50, i + 0x54)
    BOOL hObject = *(i + 0x1c)
    
    if (hObject != 0xffffffff)
        hObject = CloseHandle(hObject)
    
    if (*(i + 0x58) != 0)
        WaitForSingleObject(data_1c04208, 0xffffffff)
        sub_401000(i + 0x60)
        hObject = ReleaseSemaphore(data_1c04208, 1, nullptr)
    
    result = sub_4d1ba0(hObject, 0x3b8, i - 8, 0)
    *(i - 8) = 0
    *(i - 4) = 0
    *i = 0
    *(i + 4) = 0
    *(i + 8) = 0
    *(i + 0x14) = 0
    *(i + 0x18) = 0
    *(i + 0x50) = 0
    *(i + 0x54) = 0
    *(i + 0x1c) = 0xffffffff
    *(i + 0x58) = 0

return result
