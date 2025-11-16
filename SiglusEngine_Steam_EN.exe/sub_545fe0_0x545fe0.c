// 函数: sub_545fe0
// 地址: 0x545fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND dwInitParam = data_1c054ec

if (dwInitParam != 0)
    HWND dwInitParam_1 = dwInitParam
    return sub_4d5720(dwInitParam)

HWND hWndParent = data_7027bc
data_1b8be8e = dwInitParam.b
HWND result = CreateDialogParamA(data_134cebc, 0x16a, hWndParent, sub_545510, dwInitParam)
data_1c054ec = result
return result
