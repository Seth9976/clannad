// 函数: sub_4be270
// 地址: 0x4be270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t mciId = data_139270c

if (mciId != 0xffffffff)
    int32_t eax_1 = data_1bfffc0
    
    if (eax_1 == 1)
        WaitForSingleObject(data_702788, 0xffffffff)
        sub_4cb390(&data_20be490)
        ReleaseSemaphore(data_702788, 1, nullptr)
    else if (eax_1 == 2)
        sub_4dea40(1)
    else
        mciSendCommandA(mciId, 0x804, 2, 0)
    
    data_139270c = 0xffffffff

BOOL hWnd = data_1bfe270

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    data_1bfe270 = 0

data_1bfffc0 = 0
data_641b24 = 0
return hWnd
