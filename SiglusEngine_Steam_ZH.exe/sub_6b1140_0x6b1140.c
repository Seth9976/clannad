// 函数: sub_6b1140
// 地址: 0x6b1140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg3
int32_t result = arg4

while (eax != arg2)
    int32_t esi_1 = eax
    int32_t result_1 = result
    eax += 0x11c
    result += 0x11c
    __builtin_memcpy(result_1, esi_1, 0x11c)

return result
