// 函数: sub_4d6c40
// 地址: 0x4d6c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 == 0)
    *arg2 = 0
    return 

int32_t ebx = data_1af413c

if (ebx == 0)
label_4d6c7d:
    BOOL hMem = *arg1
    
    if (hMem != 0)
        GlobalUnlock(hMem)
        GlobalFree(*arg1)
        *arg1 = 0
    
    goto label_4d6c98

WaitForSingleObject(data_7027a8, 0xffffffff)

if (*arg1 == 0)
label_4d6c98:
    *arg2 = 0
    
    if (ebx != 0)
        sub_4d6500()
        ReleaseSemaphore(data_7027a8, 1, nullptr)
else if (sub_4d6b80(arg1).b != 0)
    goto label_4d6c7d
