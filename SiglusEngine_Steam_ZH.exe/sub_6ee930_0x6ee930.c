// 函数: sub_6ee930
// 地址: 0x6ee930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st1 = *(arg2 + arg3)
int32_t esi = arg3 * 3
int64_t st2 = *(arg2 + (arg3 << 1))
int64_t st3 = *(arg2 + esi)
*arg1 = *arg2
*(arg1 + arg3) = st1
void* edx_1 = arg2 + (arg3 << 2)
*(arg1 + (arg3 << 1)) = st2
*(arg1 + esi) = st3
void* result = arg1 + (arg3 << 2)
st1 = *(edx_1 + arg3)
st2 = *(edx_1 + (arg3 << 1))
st3 = *(edx_1 + esi)
*result = *edx_1
*(result + arg3) = st1
*(result + (arg3 << 1)) = st2
*(result + esi) = st3
return result
