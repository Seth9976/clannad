// 函数: sub_4d9a60
// 地址: 0x4d9a60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0
EnterCriticalSection(&data_20f3494)
int32_t* esi = data_20f34ac

if (esi != 0)
    uint32_t i = GetCurrentThreadId()
    int32_t* ecx_1 = nullptr
    
    while (esi[1] != i)
        ecx_1 = esi
        esi = esi[2]
        
        if (esi == 0)
            LeaveCriticalSection(&data_20f3494)
            return 0
    
    int32_t eax_2 = esi[2]
    
    if (ecx_1 == 0)
        data_20f34ac = eax_2
        int32_t edi_1 = *esi
        LeaveCriticalSection(&data_20f3494)
        return edi_1
    
    ecx_1[2] = eax_2
    edi = *esi

LeaveCriticalSection(&data_20f3494)
return edi
