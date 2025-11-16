// 函数: __initterm_e
// 地址: 0x74cb27
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* i = arg1
int32_t result = 0

for (; i u< arg2; i = &i[1])
    if (result != 0)
        break
    
    int32_t ecx_1 = *i
    
    if (ecx_1 != 0)
        result = ecx_1()

return result
