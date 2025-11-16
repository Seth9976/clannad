// 函数: sub_49e720
// 地址: 0x49e720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4c2f90(arg2, arg4)
WaitForSingleObject(data_702788, 0xffffffff)
BOOL result

if (arg2 s< 0)
    result = ReleaseSemaphore(data_702788, 1, nullptr)
else
    result = sub_4cb9c0(arg2, arg4)

if (arg3 != 0)
    result = sub_4d1ba0(sub_4d1ba0(result, 0x24, arg3, 0), 0x24, arg3 + 0x28, 0)
    *(arg3 + 0x24) = 0xffffffff

return result
