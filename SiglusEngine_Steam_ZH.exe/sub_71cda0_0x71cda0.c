// 函数: sub_71cda0
// 地址: 0x71cda0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t result = 0

if (edi s> 0)
    do
        uint32_t esi_1 = zx.d(result.b)
        arg1 += 1
        result += 1
        arg2.b = *(esi_1 + 0xadc4b0)
        *(arg1 - 1) ^= arg2.b
    while (result s< edi)

return result
