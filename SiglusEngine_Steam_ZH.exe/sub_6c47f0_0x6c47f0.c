// 函数: sub_6c47f0
// 地址: 0x6c47f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

LPARAM eax_3 = *(arg1 + 4)

if (eax_3 != 0)
    return SendMessageW(SendMessageW(eax_3, 0x101f, 0, 0), 0x1200, 0, 0)

return SendMessageW(eax_3, 0x1200, eax_3, eax_3)
