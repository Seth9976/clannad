// 函数: sub_603855
// 地址: 0x603855
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SLIST_HEADER* ListHead = data_641a9c

if (ListHead != 0)
    goto label_603871

if (sub_60392e() != 0)
    ListHead = data_641a9c
label_603871:
    SLIST_ENTRY* eax_2
    
    if (ListHead != 1)
        eax_2 = InterlockedPopEntrySList(ListHead)
        
        if (eax_2 != 0)
            return eax_2
        
        SLIST_ENTRY* i = VirtualAlloc(nullptr, 0x1000, MEM_COMMIT, PAGE_EXECUTE_READWRITE)
        
        if (i != 0)
            i->Next
            SLIST_ENTRY* eax_5 = InterlockedPopEntrySList(data_641a9c)
            
            if (eax_5 != 0)
                VirtualFree(i, 0, MEM_RELEASE)
                return eax_5
            
            do
                InterlockedPushEntrySList(data_641a9c, i)
                i = &i[4]
            while (i u< &i[0x3fc])
            
            return i
    else
        eax_2 = HeapAlloc(GetProcessHeap(), HEAP_NONE, 0xd)
        
        if (eax_2 != 0)
            return eax_2

RaiseException(0xc0000017, 0, 0, nullptr)
noreturn
