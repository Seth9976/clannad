// 函数: sub_1000425a
// 地址: 0x1000425a
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t edi = data_1001b098
int32_t result

for (uint32_t i = 0; i != 0xffffffff; )
    result = _malloc(arg1)
    
    if (result != 0)
        break
    
    if (edi == 0)
        break
    
    Concurrency::details::platform::__Sleep(i)
    edi = data_1001b098
    i += 0x3e8
    
    if (i u> edi)
        i = 0xffffffff

return result
