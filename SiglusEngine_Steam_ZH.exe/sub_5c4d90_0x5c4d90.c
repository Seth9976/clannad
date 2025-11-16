// 函数: sub_5c4d90
// 地址: 0x5c4d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t eax = data_4ecd180
HINSTANCE hInstance = arg2
HINSTANCE hInstance_1 = hInstance

if (eax != 0)
    if (eax != 0x2c)
        return 0x80070057
    
    int32_t eax_2 = data_4ecd1a4
    int32_t esi_1 = 0
    
    if (eax_2 s> 0)
        while (true)
            if (esi_1 s< 0 || esi_1 s>= eax_2)
                RaiseException(0xc000008c, 1, 0, nullptr)
                noreturn
            
            UnregisterClassW(zx.d(*(data_4ecd1a0 + (esi_1 << 1))), hInstance)
            eax_2 = data_4ecd1a4
            esi_1 += 1
            hInstance = hInstance_1
            
            if (esi_1 s>= eax_2)
                break
            
            continue
    
    int32_t eax_5 = data_4ecd1a0
    
    if (eax_5 != 0)
        _free(eax_5)
        data_4ecd1a0 = 0
    
    data_4ecd1a4 = 0
    data_4ecd1a8 = 0
    DeleteCriticalSection(&data_4ecd184)
    data_4ecd180 = 0

return 0
