// 函数: sub_6ec620
// 地址: 0x6ec620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg2
char ecx = (*(arg1 + (arg2 << 1))).b
int32_t eax = 1 << ecx
int32_t esi = 0
int32_t result = eax + 1

do
    int32_t edx = sx.d(*(arg1 + ((esi + arg2) << 1) + 2))
    
    if (edx s> 0)
        result += sub_6ec620()
        esi += 1
    else
        esi += 1 << (ecx - (neg.d(edx) s>> 8).b)
    
    arg2 = var_c
    ecx = (*(arg1 + (arg2 << 1))).b
while (esi s< eax)

return result
