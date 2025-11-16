// 函数: ___termconout
// 地址: 0x603265
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL hObject = data_63c920

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
