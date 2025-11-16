// 函数: sub_49c510
// 地址: 0x49c510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* eax_1 = &(&data_8d02b4)[arg1 * 0xb20]

do
    if (i u<= 7 && arg1 u<= 1)
        int32_t ecx = *eax_1
        
        if ((ecx == 1 || ecx == 3 || ecx == 5) && *(eax_1 + 4) == 0)
            return 1
    
    i += 1
    eax_1 += 0x5900
while (i s< 8)

return 0
