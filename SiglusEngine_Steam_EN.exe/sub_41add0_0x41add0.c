// 函数: sub_41add0
// 地址: 0x41add0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

PAINTSTRUCT paint
char* result = __security_cookie ^ &paint
char* result_1 = result

if (data_1332b80 != 0)
    BeginPaint(data_7027bc, &paint)
    EndPaint(data_7027bc, &paint)
    result = data_1332b70()
    
    if (result == 2 && data_702fc0 != 0)
        result = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                result = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                result = nullptr
            
            if (data_1af174c == 0 && result != 0)
                result = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(result, data_72d6ac, data_719b6c, 0x613944, &data_6138e3), 
                        data_72d6ac, data_719b6c, 0x613944, &data_6138e3), 
                    data_72d6ac, data_719b6c, 0x613944, &data_6138e3)

sub_5f02dd(result_1 ^ &paint)
return result
