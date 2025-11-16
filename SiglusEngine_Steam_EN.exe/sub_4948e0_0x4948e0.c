// 函数: sub_4948e0
// 地址: 0x4948e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL hObject = 0xffffffff
void* esi = &data_1b8c8a4
void* ebx = nullptr

while (true)
    if (*esi == 0)
        BOOL hObject_1
        
        if (hObject == 0xffffffff)
            hObject_1 = sub_498df0()
            hObject = hObject_1
            
            if (hObject == 0xffffffff)
                break
        
        hObject_1 = sub_494470(hObject_1, esi, esi - 4, ebx, hObject)
    
    ebx += 1
    esi += 0x24
    
    if (ebx s>= 0x2710)
        if (hObject != 0xffffffff)
            CloseHandle(hObject)
        
        break
