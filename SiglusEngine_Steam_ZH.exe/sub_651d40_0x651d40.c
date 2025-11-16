// 函数: sub_651d40
// 地址: 0x651d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t* result = arg4
int64_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        result[1].d = esi[1].d
        int32_t ecx_1
        ecx_1.w = *(esi + 0xc)
        *(result + 0xc) = ecx_1.w
    
    esi += 0xe
    result += 0xe

return result
