// 函数: sub_4cbba0
// 地址: 0x4cbba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg1 s>= 0x40)
    return 0

WaitForSingleObject(data_702788, 0xffffffff)

if (*(arg1 * 0x3c0 + &data_20af854) != 0 && *(arg1 * 0x3c0 + &data_20af850) != 1
        && *(arg1 * 0x3c0 + 0x20af9f4) != 0 && *(arg1 * 0x3c0 + 0x20af858) != 0)
    result = 1

ReleaseSemaphore(data_702788, 1, nullptr)
return result
