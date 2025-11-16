// 函数: sub_10004212
// 地址: 0x10004212
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t result

for (uint32_t i = 0; i != 0xffffffff; )
    result = __calloc_impl(arg1, arg2, nullptr)
    
    if (result != 0)
        break
    
    if (data_1001b098 u<= result)
        break
    
    Concurrency::details::platform::__Sleep(i)
    i += 0x3e8
    
    if (i u> data_1001b098)
        i = 0xffffffff

return result
