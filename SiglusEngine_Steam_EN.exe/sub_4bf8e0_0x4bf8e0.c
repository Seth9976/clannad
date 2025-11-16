// 函数: sub_4bf8e0
// 地址: 0x4bf8e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum WAIT_EVENT eax = WaitForSingleObject(data_641b34, 0xffffffff)
bool cond:0 = data_1bfe268 == 0xffffffff
data_1bfffc8 = 0

if (not(cond:0))
    if (arg1 == 0 || data_208c70c == 0 || data_63e788 == 0)
        sub_4bef40()
    else if (data_208c704 != 2)
        sub_4c0650(eax, 0xffffffff, 5, 0, arg1)
        data_208c704 = 2

return ReleaseSemaphore(data_641b34, 1, nullptr)
