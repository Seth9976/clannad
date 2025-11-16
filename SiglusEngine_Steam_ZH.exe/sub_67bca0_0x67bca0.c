// 函数: sub_67bca0
// 地址: 0x67bca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2

if (esi u> 0xffffffff)
    sub_743191("vector<bool> too long")
    noreturn

int32_t* ecx = arg1[1]
int32_t edx = *arg1
uint32_t ebx_1 = (esi + 0x1f) u>> 5
int32_t* result = (ecx - edx) s>> 2

if (ebx_1 u< result)
    result = sub_67be10(arg1, &arg2, edx + (ebx_1 << 2), ecx)

arg1[3] = esi
int32_t esi_1 = esi & 0x1f

if (esi_1 u> 0)
    void* edx_1 = *arg1 + (ebx_1 << 2)
    result = (1 << esi_1.b) - 1
    *(edx_1 - 4) &= result

return result
