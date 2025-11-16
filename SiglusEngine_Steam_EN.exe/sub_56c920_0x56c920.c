// 函数: sub_56c920
// 地址: 0x56c920
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
LRESULT result = sub_4d1be0(eax, (data_1318c28 << 8) + &data_1318524, &data_20cf620, 0x100)

if (result != 0)
    sub_4d1c30(result, (data_1318c28 << 8) + &data_1318524, &data_20cf620, 0x100)
    LRESULT eax_1 = sub_56c1e0(result, &data_13156b8, data_1af0a6c, &data_1318a24)
    
    if (data_1af0a6c != 0)
        sub_56c5d0()
        eax_1 = sub_56c610()
        
        if (data_1af0a6c != 0)
            eax_1 = sub_56c440(sub_56c610(), &data_20d19d0, data_1af0a6c, &data_20d59d0, 
                data_20d19c8, data_20d19c4, data_20d19c0)
            data_20d19c4 = 0
    
    result = sub_56c1e0(eax_1, &data_1316f78, data_1af0ac4, &data_1318b24)
    
    if (data_1af0ac4 != 0)
        sub_56d330()
        sub_56d380()
        return sub_56d5a0(0) __tailcall

return result
