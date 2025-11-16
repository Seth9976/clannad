// 函数: sub_4be9a0
// 地址: 0x4be9a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
HWND edi = data_7027bc
WaitForSingleObject(data_641b28, 0xffffffff)
sub_4be310()
sub_4be270()
data_1bfe240 = arg7
data_2080468 = 0

if (arg8 == 1)
    sub_4be620(arg8 - 1, arg2, edi, arg3, arg4, arg5, arg6)
else if (arg8 == 2)
    sub_4be780(arg8 - 2, arg2, edi, arg3, arg4, arg5)
else
    sub_4be830(arg8 - 2, arg2, edi, arg3, arg4, arg5, arg6)

return ReleaseSemaphore(data_641b28, 1, nullptr)
