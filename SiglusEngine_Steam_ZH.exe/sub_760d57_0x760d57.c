// 函数: sub_760d57
// 地址: 0x760d57
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

SLIST_HEADER* ListHead = data_b95af0

if (ListHead != 1)
    return InterlockedPushEntrySList(ListHead, arg1)

return HeapFree(GetProcessHeap(), HEAP_NONE, arg1)
