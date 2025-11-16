// 函数: sub_1a96558
// 地址: 0x1a96558
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax_3 = data_1c09024
int32_t ecx = data_1c09000

if (eax_3 != ecx)
    goto label_1a965b1

int32_t eax_2 = HeapReAlloc(data_1c09030, HEAP_NONE, data_1c09028, (ecx * 5 + 0x50) << 2)

if (eax_2 != 0)
    data_1c09000 += 0x10
    data_1c09028 = eax_2
    eax_3 = data_1c09024
label_1a965b1:
    int32_t* result = data_1c09028 + eax_3 * 0x14
    int32_t eax_5 = HeapAlloc(data_1c09030, HEAP_ZERO_MEMORY, 0x41c4)
    result[4] = eax_5
    
    if (eax_5 != 0)
        int32_t eax_6 = VirtualAlloc(nullptr, 0x100000, MEM_RESERVE, PAGE_READWRITE)
        result[3] = eax_6
        
        if (eax_6 != 0)
            result[2] = 0xffffffff
            *result = 0
            result[1] = 0
            data_1c09024 += 1
            *result[4] = 0xffffffff
            return result
        
        HeapFree(data_1c09030, HEAP_NONE, result[4])

return nullptr
