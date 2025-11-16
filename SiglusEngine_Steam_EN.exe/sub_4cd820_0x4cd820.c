// 函数: sub_4cd820
// 地址: 0x4cd820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4d6c40(arg1 + 8, arg1 + 0xc)
sub_4d6c40(arg1 + 0x1c, arg1 + 0x20)
sub_4d6c40(arg1 + 0x58, arg1 + 0x5c)
HANDLE hObject = *(arg1 + 0x24)

if (hObject != 0xffffffff)
    CloseHandle(hObject)

if (*(arg1 + 0x60) != 0)
    WaitForSingleObject(data_1c04208, 0xffffffff)
    sub_401000(arg1 + 0x68)
    ReleaseSemaphore(data_1c04208, 1, nullptr)

return sub_4cd5a0(arg1) __tailcall
