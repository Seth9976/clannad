// 函数: _free
// 地址: 0x100044e4
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 != 0 && HeapFree(data_1001b094, HEAP_NONE, arg1) == 0)
    BOOL* esi_1 = __errno()
    *esi_1 = __get_errno_from_oserr(GetLastError())
