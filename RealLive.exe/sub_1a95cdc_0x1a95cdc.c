// 函数: sub_1a95cdc
// 地址: 0x1a95cdc
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

enum HEAP_FLAGS flOptions
flOptions.b = arg1 == 0
HANDLE eax = HeapCreate(flOptions, 0x1000, 0)
data_1c09030 = eax

if (eax != 0)
    int32_t eax_1 = sub_1a95b94()
    data_1c09040 = eax_1
    void** eax_2
    
    if (eax_1 != 3)
        if (eax_1 != 2)
            return 1
        
        eax_2 = sub_1a96e1c()
    else
        eax_2 = sub_1a95eb3(0x3f8)
    
    if (eax_2 != 0)
        return 1
    
    HeapDestroy(data_1c09030)

return 0
