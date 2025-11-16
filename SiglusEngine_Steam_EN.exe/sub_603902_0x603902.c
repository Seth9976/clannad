// 函数: sub_603902
// 地址: 0x603902
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SLIST_HEADER* ListHead = data_641a9c

if (ListHead != 1)
    return InterlockedPushEntrySList(ListHead, arg1)

return HeapFree(GetProcessHeap(), HEAP_NONE, arg1)
