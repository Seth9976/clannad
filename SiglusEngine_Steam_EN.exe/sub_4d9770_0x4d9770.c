// 函数: sub_4d9770
// 地址: 0x4d9770
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t eax = data_20f3490
HINSTANCE hInstance = arg2
HINSTANCE hInstance_1 = hInstance

if (eax != 0)
    if (eax != 0x2c)
        return 0x80070057
    
    int32_t eax_2 = data_20f34b4
    int32_t esi_1 = 0
    
    if (eax_2 s> 0)
        while (true)
            if (esi_1 s< 0 || esi_1 s>= eax_2)
                RaiseException(0xc000008c, 1, 0, nullptr)
                noreturn
            
            UnregisterClassA(zx.d(*(data_20f34b0 + (esi_1 << 1))), hInstance)
            eax_2 = data_20f34b4
            esi_1 += 1
            hInstance = hInstance_1
            
            if (esi_1 s>= eax_2)
                break
            
            continue
    
    int32_t eax_5 = data_20f34b0
    
    if (eax_5 != 0)
        _free(eax_5)
        data_20f34b0 = 0
    
    data_20f34b4 = 0
    data_20f34b8 = 0
    DeleteCriticalSection(&data_20f3494)
    data_20f3490 = 0

return 0
