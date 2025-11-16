// 函数: sub_677b70
// 地址: 0x677b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = data_bac49c
int32_t result = edx[2]

if (arg1 s>= result)
    do
        result += 0x400
    while (arg1 s>= result)
    
    edx[2] = result
    result = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *edx, result << 2)
    *data_bac49c = result

return result
