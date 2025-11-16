// 函数: ___termconout
// 地址: 0x760893
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BOOL hObject = data_b4d37c

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
