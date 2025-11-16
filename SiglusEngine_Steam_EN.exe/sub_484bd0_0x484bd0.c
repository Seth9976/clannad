// 函数: sub_484bd0
// 地址: 0x484bd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1392710
int32_t result = ecx - data_107f100
int32_t edx_1 = data_107f108 + result
data_107f100 = ecx
bool cond:0 = data_1b8a6ec != 0
data_107f108 = edx_1

if (cond:0 || edx_1 u>= data_107f104)
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
