// 函数: sub_669a10
// 地址: 0x669a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5c97d0()
int32_t result = 0xffffffff
HRSRC hResInfo = FindResourceW(arg3, 0xb0, 5)

if (hResInfo != 0)
    HRSRC hResInfo_1 = FindResourceW(arg3, 0xb0, 0xf0)
    
    if (hResInfo_1 != 0)
        LockResource(LoadResource(arg3, hResInfo_1))
    
    enum WIN32_ERROR dwErrCode = NO_ERROR
    HGLOBAL hResData = LoadResource(arg3, hResInfo)
    int32_t* eax_1
    
    if (hResData != 0)
        eax_1 = LockResource(hResData)
    
    if (hResData == 0 || eax_1 == 0)
        dwErrCode = GetLastError()
    else
        int32_t* eax_2 = sub_6641b0(eax_1)
        result = DialogBoxIndirectParamW(arg3, eax_2, arg4, sub_664aa0, 0)
        
        if (result == 0 || result == 0xffffffff)
            dwErrCode = GetLastError()
        
        if (eax_2 != eax_1 && eax_2 != 0)
            GlobalFree(GlobalHandle(eax_2))
    
    if (dwErrCode != NO_ERROR)
        SetLastError(dwErrCode)

return result
