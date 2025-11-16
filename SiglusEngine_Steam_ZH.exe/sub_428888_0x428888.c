// 函数: sub_428888
// 地址: 0x428888
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *arg1
bool cond:0 = *eax == 0
*arg1 = &eax[1]

if (cond:0)
    int32_t edx_1 = eax[1]
    *arg1 = &eax[3]
    
    if (edx_1 == 7 || edx_1 == 4 || edx_1 == 5 || edx_1 == 6)
        return 0

return 0x80004005
