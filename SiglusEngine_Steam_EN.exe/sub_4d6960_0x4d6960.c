// 函数: sub_4d6960
// 地址: 0x4d6960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

if (data_1af413c != 0)
    WaitForSingleObject(data_7027a8, 0xffffffff)
    
    if (*arg3 == 0)
        ReleaseSemaphore(data_7027a8, 1, nullptr)
    else
        sub_4d6820(arg3, arg5)

int32_t esi = 0
BOOL hMem
char* esi_1

while (true)
    hMem = GlobalAlloc(GHND, arg4)
    *arg3 = hMem
    
    if (hMem != 0)
        hMem = GlobalLock(hMem)
        esi_1 = arg5
        *arg2 = hMem
        break
    
    esi += 1
    
    if (esi s>= 3)
        esi_1 = arg5
        
        if (data_1c04c64 == hMem)
            int32_t var_18_2 = data_20c0500
            uint32_t var_1c_2 = arg4
            
            if (esi_1 == 0)
                sub_4c84d0(0x1c04d68, 0x61cd64)
            else
                char* var_20_2 = esi_1
                sub_4c84d0(0x1c04d68, "%s\n\n")
            
            hMem = sub_4cfd70(&data_1c04c68, "MEM_ERR")
            data_1c04c64 = 1
        
        break

if (data_1af413c == 0)
    return hMem

return sub_4d6560(hMem, arg4, *arg3, esi_1)
