// 函数: sub_760d83
// 地址: 0x760d83
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL eax = IsProcessorFeaturePresent(PF_NX_ENABLED)

if (eax == 0)
    data_b95af0 = eax + 1
    return eax + 1

TEB* fsbase
uint32_t* esi_1 = &fsbase->ProcessEnvironmentBlock->SpareUlong
uint32_t SpareUlong = (esi_1 - 0x34)->SpareUlong

if (SpareUlong == 0)
    SLIST_HEADER* result = HeapAlloc(GetProcessHeap(), SpareUlong, 8)
    
    if (result == 0)
        return result
    
    InitializeSListHead(result)
    uint32_t SpareUlong_1 = 0
    
    if (0 == (esi_1 - 0x34)->SpareUlong)
        (esi_1 - 0x34)->SpareUlong = result
    else
        SpareUlong_1 = (esi_1 - 0x34)->SpareUlong
    
    if (SpareUlong_1 != 0)
        HeapFree(GetProcessHeap(), HEAP_NONE, result)
    
    SpareUlong = (esi_1 - 0x34)->SpareUlong

data_b95af0 = SpareUlong
return 1
