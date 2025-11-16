// 函数: sub_676200
// 地址: 0x676200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = data_bac484
int32_t ecx = *(result + 0x124)

if (ecx s>= 0 && *(result + 0x118) s> ecx)
    void* ecx_2 = ecx * 0x2e60 + *(result + 0x10c)
    *(ecx_2 + 0x2e50) = arg1
    *(ecx_2 + 0x2e58) = arg2
    result = arg3
    *(ecx_2 + 0x2e5c) = result.w

return result
