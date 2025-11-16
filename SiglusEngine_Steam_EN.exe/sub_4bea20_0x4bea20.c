// 函数: sub_4bea20
// 地址: 0x4bea20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = WaitForSingleObject(data_641b28, 0xffffffff)

if (data_139270c != 0xffffffff)
    int32_t eax = data_1bfffc0
    
    if (eax == 1)
        int32_t eax_6 = sub_4cbba0(0x3f)
        
        if (eax_6 != 0)
            sub_4bdf80(eax_6, arg2, arg3, arg4, arg5)
            MoveWindow(data_1bfe270, data_208046c, data_208c488, data_208c494, data_208c498, 1)
            sub_4cbc00(0x3f)
    else
        if (eax != 2)
            sub_4be1d0(arg4, arg5)
            return ReleaseSemaphore(data_641b28, 1, nullptr)
        
        int32_t eax_4 = sub_4dec10(ecx)
        
        if (eax_4 != 0)
            sub_4bdf80(eax_4, arg2, arg3, arg4, arg5)
            sub_4dec50()

return ReleaseSemaphore(data_641b28, 1, nullptr)
