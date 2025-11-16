// 函数: sub_651a10
// 地址: 0x651a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx
int32_t* result = sub_5d53a0(ecx)
void* esi = &result[4]
result[3].w = 0

if (esi != 0)
    int64_t* ecx_2 = *arg1
    *esi = *ecx_2
    *(esi + 8) = ecx_2[1].d
    int32_t eax
    eax.w = *(ecx_2 + 0xc)
    *(esi + 0xc) = eax.w
    *(esi + 0x10) = 0
    *(esi + 0x14) = 0

return result
