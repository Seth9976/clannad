// 函数: sub_55eec0
// 地址: 0x55eec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HANDLE hObject = data_1bfdd28

if (hObject != 0xffffffff)
    CloseHandle(hObject)
    data_1bfdd28 = 0xffffffff

HGLOBAL hMem_1

for (void* i = &data_20c71f4; i s< &data_20c91f4; i += 0x20)
    HGLOBAL hMem = *i
    
    if (hMem != 0)
        GlobalUnlock(hMem)
        GlobalFree(*i)
        *i = 0
        *(i + 4) = 0
    
    hMem_1 = *(i + 0xc)
    
    if (hMem_1 != 0)
        GlobalUnlock(hMem_1)
        hMem_1 = GlobalFree(*(i + 0xc))
        *(i + 0xc) = 0
        *(i + 0x10) = 0
    
    *(i + 8) = 0
    *(i + 0x14) = 0

data_20c71e0 = 0
data_20c71e4 = 0
data_20c71e8 = 0
return hMem_1
