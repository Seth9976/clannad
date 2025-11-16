// 函数: _wcscmp
// 地址: 0x753cdc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* edx = arg2
uint32_t edi = zx.d(*edx)
uint32_t ecx = zx.d(*arg1)
uint32_t result = ecx - edi

if (ecx == edi)
    void* esi_1 = arg1 - edx
    
    while (edi.w != 0)
        edx = &edx[1]
        edi = zx.d(*edx)
        uint32_t ecx_1 = zx.d(*(esi_1 + edx))
        result = ecx_1 - edi
        
        if (ecx_1 != edi)
            break

if (result s< 0)
    return 0xffffffff

if (result s<= 0)
    return result

return 1
