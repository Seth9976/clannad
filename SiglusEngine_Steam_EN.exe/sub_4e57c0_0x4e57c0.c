// 函数: sub_4e57c0
// 地址: 0x4e57c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

GetActiveWindow()
HWND result = sub_4a5d20()
int32_t x
int32_t y

if (result.b == 0)
    x = 0
    y = 0
else
    POINT point
    GetCursorPos(&point)
    result = ScreenToClient(data_7027bc, &point)
    y = point.y
    x = point.x

data_1c051a4 = x
int32_t esi_1 = x - data_1356ec4
HWND result_1 = y - data_1356ec8
bool cond:0 = data_1c0529c != 0
data_1c051a8 = y
data_131d2cc = esi_1
data_1320e58 = result_1

if (not(cond:0) && data_1356ed4 s> 0 && data_1356ec0 s> 0)
    esi_1 = divs.dp.d(sx.q(data_1332b60 * esi_1), data_1356ed4)
    int32_t eax_5 = data_1332b64 * result_1
    data_131d2cc = esi_1
    data_1356ec0
    result = divs.dp.d(sx.q(eax_5), data_1356ec0)
    result_1 = result
    data_1320e58 = result_1

int32_t edx_4 = data_1b1bce0

if (esi_1 != edx_4 || result_1 != data_1b8c470)
    int32_t eax_8 = edx_4 - esi_1
    data_1b1bd1c = eax_8
    bool cond:1_1 = edx_4 s<= esi_1
    
    if (edx_4 s>= esi_1)
        goto label_4e5894
    
    if (eax_8 s< 0)
        data_1b1bd1c = neg.d(eax_8)
    else
        cond:1_1 = edx_4 s<= esi_1
    label_4e5894:
        
        if (not(cond:1_1) && eax_8 s> 0)
            data_1b1bd1c = neg.d(eax_8)
    
    int32_t edx_5 = data_1b8c470
    result = edx_5 - result_1
    data_1b8a6e4 = result
    bool cond:2_1 = edx_5 s<= result_1
    
    if (edx_5 s>= result_1)
        goto label_4e58ba
    
    if (result s< 0)
        result = neg.d(result)
        data_1b8a6e4 = result
    else
        cond:2_1 = edx_5 s<= result_1
    label_4e58ba:
        
        if (not(cond:2_1) && result s> 0)
            result = neg.d(result)
            data_1b8a6e4 = result
    
    data_1b1bce0 = esi_1
    data_1b8c470 = result_1
    data_1b8add4 = 1
    data_1bfe034 = 1

int32_t edx_6 = data_1b8b068
int32_t ecx_1 = data_1bfdd74

if (x != edx_6 || y != ecx_1)
    int32_t eax_12 = edx_6 - x
    data_1be4b0c = eax_12
    bool cond:3_1 = edx_6 s<= x
    
    if (edx_6 s>= x)
        goto label_4e590e
    
    if (eax_12 s< 0)
        data_1be4b0c = neg.d(eax_12)
    else
        cond:3_1 = edx_6 s<= x
    label_4e590e:
        
        if (not(cond:3_1) && eax_12 s> 0)
            data_1be4b0c = neg.d(eax_12)
    
    result = ecx_1 - y
    data_1bfdd2c = result
    bool cond:4_1 = ecx_1 s<= y
    
    if (ecx_1 s>= y)
        goto label_4e592e
    
    if (result s< 0)
        result = neg.d(result)
        data_1bfdd2c = result
    else
        cond:4_1 = ecx_1 s<= y
    label_4e592e:
        
        if (not(cond:4_1) && result s> 0)
            result = neg.d(result)
            data_1bfdd2c = result
    
    data_1b8b068 = x
    data_1bfdd74 = y
    data_1b8add4 = 1
    data_1bfe034 = 1

return result
