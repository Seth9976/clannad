// 函数: sub_4d7eb0
// 地址: 0x4d7eb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    *arg1 = 0
    BOOL eax_1 = SHGetSpecialFolderPathA(nullptr, arg1, 5, 0)
    
    if (eax_1 == 1 && sub_4c3da0(eax_1, 0xffffffff, arg1, 0xffffffff) == 2)
        return 1

return 0
