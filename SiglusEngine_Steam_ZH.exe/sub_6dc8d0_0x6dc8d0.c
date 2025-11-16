// 函数: sub_6dc8d0
// 地址: 0x6dc8d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*(arg1 + 0x78) & 8) == 0)
    int32_t eax
    sub_6dc630(eax, 0, arg1, nullptr)
    eax = *(arg1 + 0x78)
    *(arg1 + 0x90) = 0
    
    if ((eax.b & 8) == 0)
        *(arg1 + 0x74) |= 8
        *(arg1 + 0x78) = eax | 8

if (*(arg1 + 0x80) != 0x49444154)
    return 

int32_t edx = *(arg1 + 0x134)
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x80) = 0
return sub_6d8610(arg1, edx) __tailcall
