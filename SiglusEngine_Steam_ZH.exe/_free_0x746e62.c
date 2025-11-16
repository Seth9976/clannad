// 函数: _free
// 地址: 0x746e62
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0 && HeapFree(data_b955a4, HEAP_NONE, arg1) == 0)
    BOOL* esi_1 = __errno()
    *esi_1 = __get_errno_from_oserr(GetLastError())
