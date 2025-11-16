// 函数: sub_47e11a
// 地址: 0x47e11a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

PSTR* result = *(arg1 + (sub_47e0d9(arg2) << 2))

while (true)
    if (result == 0)
        return nullptr
    
    if (lstrcmpiA(*result, arg2) == 0)
        break
    
    result = result[8]

return result
