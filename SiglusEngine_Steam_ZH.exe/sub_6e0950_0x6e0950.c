// 函数: sub_6e0950
// 地址: 0x6e0950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMMIO hmmio = *(arg1 + 0x14)

if (hmmio != 0)
    mmioClose(hmmio, 0)
    *(arg1 + 0x14) = 0

return sub_6dfff0(arg1) __tailcall
