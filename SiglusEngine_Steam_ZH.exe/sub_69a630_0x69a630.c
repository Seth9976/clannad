// 函数: sub_69a630
// 地址: 0x69a630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t lpcSubKeys = arg1
lpcSubKeys = 0

if (RegQueryInfoKeyW(arg2, nullptr, nullptr, nullptr, &lpcSubKeys, nullptr, nullptr, nullptr, 
        nullptr, nullptr, nullptr, nullptr) == NO_ERROR)
    return neg.d(sbb.d(0, 0, 0 u< lpcSubKeys))

return 0
