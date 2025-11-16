// 函数: sub_4a0e40
// 地址: 0x4a0e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax = data_92b938

if (eax != 1)
    if (eax != 0)
        return eax
    
    return sub_49e9f0(&data_92b1b0, data_107f0f0)

if (sub_4bf530(eax, &data_92b968, &data_92b964, &data_92b96c, &data_92b970) != 0)
    sub_4cfd70(&data_92b93c, &data_92b1b0)
    data_92b960 = data_92b3e8

WaitForSingleObject(data_641b34, 0xffffffff)
bool cond:0 = data_1bfe268 == 0xffffffff
data_1bfffc8 = 0

if (not(cond:0))
    sub_4bef40()

int32_t eax_5 = sub_4d1ba0(
    sub_4d1ba0(ReleaseSemaphore(data_641b34, 1, nullptr), 0x24, &data_92b1b0, 0), 0x24, 
    &data_92b1d8, 0)
data_92b1d4 = 0xffffffff
return eax_5
