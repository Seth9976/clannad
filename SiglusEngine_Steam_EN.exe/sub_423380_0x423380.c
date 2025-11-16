// 函数: sub_423380
// 地址: 0x423380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1370331 != 0 || data_1370334 != 0 || data_1370108 != 0)
    if ((0x8000 & GetAsyncKeyState(0x11).w) == 0)
        int32_t ecx_3 = data_13126e8
        int32_t eax_10
        int32_t edx_5
        edx_5:eax_10 = sx.q(ecx_3)
        data_13126fc += neg.d(ecx_3) - ((eax_10 - edx_5) s>> 1)
    else
        int32_t edx_3 = data_13126e8
        int32_t ecx_2 = edx_3 + 2
        
        if (ecx_2 s> data_1299980:8)
            ecx_2 = data_1299980:8
        
        if (edx_3 != ecx_2)
            sub_422710(ecx_2, data_13126ec)
            data_1312720 = 1
else if (data_1370355 != 0 || data_1370358 != 0 || data_1370104 != 0)
    if ((0x8000 & GetAsyncKeyState(0x11)) != 0)
        return sub_422de0() __tailcall
    
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(data_13126e8)
    data_13126fc += ((eax_4 - edx_2) s>> 1) + data_13126e8
