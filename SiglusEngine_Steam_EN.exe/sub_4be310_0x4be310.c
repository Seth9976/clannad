// 函数: sub_4be310
// 地址: 0x4be310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t mciId = data_139270c

if (mciId == 0xffffffff)
    return 

int32_t eax_1 = data_1bfffc0

if (eax_1 != 1)
    if (eax_1 == 2)
        sub_4dea40(1)
        data_1392708 = 0
        return 
    
    mciSendCommandA(mciId, 0x808, 2, 0)
    data_1392708 = 0
    return 

WaitForSingleObject(data_702788, 0xffffffff)
sub_4cb390(&data_20be490)
ReleaseSemaphore(data_702788, 1, nullptr)
data_1392708 = 0
