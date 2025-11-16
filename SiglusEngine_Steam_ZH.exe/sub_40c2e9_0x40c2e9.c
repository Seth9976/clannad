// 函数: sub_40c2e9
// 地址: 0x40c2e9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t* eax = arg1 + 8

do
    if (*eax != 0xffffffff)
        return *(arg1 + (i << 2) + 8) + *(arg1 + 0x1c)
    
    i += 1
    eax = &eax[1]
while (i u< 4)

return 0xffffffff
