// 函数: sub_4d7020
// 地址: 0x4d7020
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HANDLE hThread = *arg1

if (hThread != 0)
    TerminateThread(hThread, 0)
    uint32_t exitCode
    
    if (GetExitCodeThread(*arg1, &exitCode) == 0)
    label_4d7070:
        CloseHandle(*arg1)
    else
        while (exitCode == 0x103)
            TerminateThread(*arg1, 0)
            
            if (GetExitCodeThread(*arg1, &exitCode) == 0)
                goto label_4d7070
    
    *arg1 = 0

if (arg2 != 0)
    *arg2 = 0

return arg2
