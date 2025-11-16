// 函数: sub_6b3d90
// 地址: 0x6b3d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL hSemaphore = *arg1

if (hSemaphore == 0)
    return hSemaphore

return ReleaseSemaphore(hSemaphore, 1, nullptr)
