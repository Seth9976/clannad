// 函数: sub_4a0c60
// 地址: 0x4a0c60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_641b34, 0xffffffff)
bool cond:0 = data_1bfe268 == 0xffffffff
data_1bfffc8 = 0

if (not(cond:0))
    sub_4bef40()

ReleaseSemaphore(data_641b34, 1, nullptr)
WaitForSingleObject(data_641b54, 0xffffffff)
sub_4c29d0(0)
ReleaseSemaphore(data_641b54, 1, nullptr)
WaitForSingleObject(data_702788, 0xffffffff)
sub_4cb390(&data_20af850)
ReleaseSemaphore(data_702788, 1, nullptr)
WaitForSingleObject(data_641b54, 0xffffffff)
sub_4c29d0(1)
ReleaseSemaphore(data_641b54, 1, nullptr)
WaitForSingleObject(data_702788, 0xffffffff)
sub_4cb390(&data_20afc10)
return ReleaseSemaphore(data_702788, 1, nullptr)
