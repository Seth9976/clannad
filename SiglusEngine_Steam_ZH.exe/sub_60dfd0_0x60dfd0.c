// 函数: sub_60dfd0
// 地址: 0x60dfd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL hLibModule = *arg1

if (hLibModule != 0)
    hLibModule = FreeLibrary(hLibModule)
    __builtin_memset(arg1, 0, 0x3c)

return hLibModule
