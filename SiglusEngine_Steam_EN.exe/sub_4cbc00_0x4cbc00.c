// 函数: sub_4cbc00
// 地址: 0x4cbc00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0x40)
    return 

WaitForSingleObject(data_702788, 0xffffffff)

if (*(arg1 * 0x3c0 + &data_20af854) != 0 && *(arg1 * 0x3c0 + &data_20af850) != 1
        && *(arg1 * 0x3c0 + 0x20af9f4) != 0 && *(arg1 * 0x3c0 + 0x20af858) != 0)
    *(arg1 * 0x3c0 + 0x20af9f8) = 0xffffffff
    *(arg1 * 0x3c0 + 0x20af9fc) = 0xffffffff
    *(arg1 * 0x3c0 + 0x20afa00) = 0xffffffff
    *(arg1 * 0x3c0 + 0x20afa04) = 0xffffffff
    sub_4cb0b0(arg1 * 0x3c0 + &data_20af850)

ReleaseSemaphore(data_702788, 1, nullptr)
