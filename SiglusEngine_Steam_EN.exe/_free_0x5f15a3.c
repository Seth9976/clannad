// 函数: _free
// 地址: 0x5f15a3
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0 && HeapFree(data_641100, HEAP_NONE, arg1) == 0)
    BOOL* esi_1 = __errno()
    *esi_1 = __get_errno_from_oserr(GetLastError())
