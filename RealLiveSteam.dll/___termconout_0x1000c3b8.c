// 函数: ___termconout
// 地址: 0x1000c3b8
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

BOOL hObject = data_10017ed0

if (hObject != 0xffffffff && hObject != 0xfffffffe)
    return CloseHandle(hObject)

return hObject
