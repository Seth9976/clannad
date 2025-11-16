// 函数: sub_699400
// 地址: 0x699400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HKEY phkResult = arg1
phkResult = nullptr
int32_t* ecx = arg1
enum WIN32_ERROR result

if (ecx == 0)
    result = RegOpenKeyExW(arg2, arg3, 0, arg4, &phkResult)
else
    result = sub_698f60(ecx, arg2, arg3, ecx, arg4)

if (result == NO_ERROR)
    HKEY unused = arg1->unused
    enum WIN32_ERROR result_1 = NO_ERROR
    
    if (unused != 0)
        result_1 = RegCloseKey(unused)
        arg1->unused = 0
    
    arg1->unused = phkResult
    result = result_1

return result
