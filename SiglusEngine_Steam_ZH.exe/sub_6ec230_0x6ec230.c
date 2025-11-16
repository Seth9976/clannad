// 函数: sub_6ec230
// 地址: 0x6ec230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t eax = arg1
int32_t i = 0
int32_t var_8_1 = eax
int32_t result = 0

do
    int32_t ecx_1 = zx.d(*(eax + (result << 1) + 1)) - arg2
    
    if (ecx_1 s>= 0x20)
        i += 1
        result += sub_6ec230()
    else
        i += 0x80000000 u>> ecx_1.b
        result += 1
    
    eax = var_8_1
while (i u< 0x80000000)

return result
