// 函数: sub_4d7090
// 地址: 0x4d7090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

do
    WaitForSingleObject(data_1bfffc4, 0xffffffff)
    sub_4cdaa0()
    sub_4c0730()
    sub_4c35d0()
    sub_4cbe60()
    ReleaseSemaphore(data_1bfffc4, 1, nullptr)
    uint32_t eax_1 = timeGetTime()
    data_20c0508 = eax_1
    data_1392ccc += eax_1 - data_20c0504
    data_20c0504 = eax_1
    Sleep(0x32)
while (data_70279c == 0)

ExitThread(1)
noreturn
