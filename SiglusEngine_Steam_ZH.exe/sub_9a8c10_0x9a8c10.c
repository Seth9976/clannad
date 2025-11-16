// 函数: sub_9a8c10
// 地址: 0x9a8c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg4 << 2
int32_t result = *(esi + arg3)

if (result s< 0)
    return *(esi + arg2)

int32_t ecx = *(esi + arg2)

if (ecx s< 0)
    return result

return (result + ecx) s>> 1
