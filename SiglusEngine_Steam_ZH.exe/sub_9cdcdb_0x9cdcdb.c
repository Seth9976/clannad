// 函数: sub_9cdcdb
// 地址: 0x9cdcdb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 - 0xb0) & 0x4000

if (result == 0)
    return result

*(arg1 - 0xb0) &= 0xffffbfff
return sub_54b010(arg1 - 0x80) __tailcall
