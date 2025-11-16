// 函数: sub_1a96f60
// 地址: 0x1a96f60
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

BOOL result = VirtualFree(arg1[4], 0, MEM_RELEASE)

if (data_1bfc0d0 == arg1)
    result = arg1[1]
    data_1bfc0d0 = result

if (arg1 == &data_1bfa0b0)
    data_1bfa0c0 = 0xffffffff
    return result

*arg1[1] = *arg1
*(*arg1 + 4) = arg1[1]
return HeapFree(data_1c09030, HEAP_NONE, arg1)
