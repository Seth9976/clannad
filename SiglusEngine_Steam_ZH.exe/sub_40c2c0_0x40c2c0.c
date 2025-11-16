// 函数: sub_40c2c0
// 地址: 0x40c2c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

do
    if (*(arg1 + (zx.d(result.w) << 1) + 8) != 0xffff)
        return zx.d(*(arg1 + (zx.d(result.w) << 1) + 8)) + zx.d(*(arg1 + 0x14))
    
    result += 1
while (result.w u< 4)

result.w = 0xffff
return result
