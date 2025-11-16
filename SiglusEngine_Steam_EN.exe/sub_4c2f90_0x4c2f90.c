// 函数: sub_4c2f90
// 地址: 0x4c2f90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

enum WAIT_EVENT eax_1 = WaitForSingleObject(data_641b54, 0xffffffff)

if (arg2 == 0)
    sub_4c29d0(arg1)
else if (*(arg1 * 0x180 + 0x208cd90) != 2)
    sub_4c3500(eax_1, 5, arg1, 0xffffffff, 0, arg2)
    *(arg1 * 0x180 + 0x208cd90) = 2
    ReleaseSemaphore(data_641b54, 1, nullptr)
    return 

ReleaseSemaphore(data_641b54, 1, nullptr)
