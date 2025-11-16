// 函数: sub_6b2030
// 地址: 0x6b2030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = arg2 u>> 0x10
int32_t esi = sx.d(result.w)
bool cond:0 = esi s>= 0

if (esi s> 0)
    result = (esi + 0x77) s/ 0x78
    *arg1 += result
    cond:0 = esi s>= 0

if (not(cond:0))
    result = (0x77 - esi) s/ 0x78
    arg1[1] += result

return result
