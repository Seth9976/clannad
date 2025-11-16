// 函数: sub_760caa
// 地址: 0x760caa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

SLIST_HEADER* ListHead = data_b95af0

if (ListHead != 0)
    goto label_760cc6

if (sub_760d83() != 0)
    ListHead = data_b95af0
label_760cc6:
    SLIST_ENTRY* eax_2
    
    if (ListHead != 1)
        eax_2 = InterlockedPopEntrySList(ListHead)
        
        if (eax_2 != 0)
            return eax_2
        
        SLIST_ENTRY* i = VirtualAlloc(nullptr, 0x1000, MEM_COMMIT, PAGE_EXECUTE_READWRITE)
        
        if (i != 0)
            i->Next
            SLIST_ENTRY* eax_5 = InterlockedPopEntrySList(data_b95af0)
            
            if (eax_5 != 0)
                VirtualFree(i, 0, MEM_RELEASE)
                return eax_5
            
            do
                InterlockedPushEntrySList(data_b95af0, i)
                i = &i[4]
            while (i u< &i[0x3fc])
            
            return i
    else
        eax_2 = HeapAlloc(GetProcessHeap(), HEAP_NONE, 0xd)
        
        if (eax_2 != 0)
            return eax_2

RaiseException(0xc0000017, 0, 0, nullptr)
noreturn
